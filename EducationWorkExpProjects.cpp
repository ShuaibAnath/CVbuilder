#include "EducationWorkExpProjects.h"
#include "CategoryBox.h"
#include "GeneralPage.h"


System::Void CVBuilder::EducationWorkExpProjects::AddInstanceBtn_Click(System::Object^ sender, System::EventArgs^ e)
{// add instance of education, work experience or project event
	bool NoErrors = false;
	std::string strUniversity = context.marshal_as<std::string>(UniCompanyProjTxtBox->Text);
	std::string strDegree = context.marshal_as<std::string>(DegreeProfessionProjNameTxtBox->Text);
	std::string strSummary = context.marshal_as<std::string>(SummaryRichTxtBox->Text);
	
	//error checks 
	if ((SummaryRichTxtBox->Text == L"") || (UniCompanyProjTxtBox->Text == "") || (DegreeProfessionProjNameTxtBox->Text == ""))
	{// if any field empty
		MessageBox::Show("Please ensure that you have filled out all details.");
	}
	else 
	{// else check for only spaces

		if ((strUniversity.find_first_not_of(" ") == strUniversity.npos) || (strDegree.find_first_not_of(" ") == strDegree.npos) || (strSummary.find_first_not_of(" ") == strSummary.npos))
		{//Check if any textbox fields are empty or do not contain at least on character that is not a space
			MessageBox::Show("Sorry, each of your details must contain at least one character that is not a space. ");
		}
		else
		{//else each field contains at least one nonspace character
			NoErrors = true;
		}
	}//end error checks
	  
	String^ constring = L"datasource=localhost;port=3306;username=root;password=cvbuilder;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlDataReader^ myReader;
	if ( (ReusableCategoryBox::Heading == L"EDUCATION") && (NoErrors == true))
	{//if begin education
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO cvbuilderdatabase.educationtbl(University,Degree,StartYear,EndYear,Summary,usertbl_email) VALUES('"+ UniCompanyProjTxtBox->Text + "','" + DegreeProfessionProjNameTxtBox->Text + "',2000,2010,'" + SummaryRichTxtBox->Text + "','" + User::UserEmail + "')",conDataBase);
		try
		{
	    	conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Academic record successfully added to CV!");
			EducationCategory::educationObjectCount += 1;
			numberofRecordsLbl->Text = L"Number of records added = 1";
			if (EducationCategory::educationObjectCount == 2)
			{//if max count reached 
				numberofRecordsLbl->Text = L"Number of records added = 2";
				MessageBox::Show("Maximum number of records reached");
				this->Hide();
				GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
				BackToGeneralForm->Show();
			}
		}//try
		catch (Exception^ ex)
		{
			MessageBox::Show("Sorry, could not add this record to CV, please retry.");
		}//catch
	}//end if EDUCATION

	if ((ReusableCategoryBox::Heading == L"PROJECT") && (NoErrors == true))
	{//if begin Project
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO cvbuilderdatabase.projecttbl(ProjectCompany,StartYear,EndYear,Summary,ProjectName,usertbl_email) VALUES('" + UniCompanyProjTxtBox->Text + "',2000 , 2010,'" + SummaryRichTxtBox->Text + "','" + DegreeProfessionProjNameTxtBox->Text + "','" + User::UserEmail + "')", conDataBase);
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Project record successfully added to CV!");
			ProjectCategory::projectObjectCount += 1;
			numberofRecordsLbl->Text = L"Number of records added = 1";
			if (ProjectCategory::projectObjectCount == 2) 
			{//if max count reached 
				numberofRecordsLbl->Text = L"Number of records added = 2";
				MessageBox::Show("Maximum number of records reached");
				this->Hide();
				GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
				BackToGeneralForm->Show();
			}
			
		}//try
		catch (Exception^ ex)
		{
			MessageBox::Show("Sorry, could not add this record to CV, please retry.");
		}//catch
	}//end if Project

	if ((ReusableCategoryBox::Heading == L"WORK") && (NoErrors == true))
	{//if begin work
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO cvbuilderdatabase.worktbl(CompanyName, Profession,StartYear,EndYear,Summary,usertbl_email) VALUES('" + UniCompanyProjTxtBox->Text + "','" + DegreeProfessionProjNameTxtBox->Text + "',2000 , 2010,'" + SummaryRichTxtBox->Text + "','" + User::UserEmail + "')", conDataBase);
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Work record successfully added to CV!");
			WorkExperienceCategory::workObjectCount += 1;
			numberofRecordsLbl->Text = L"Number of records added = 1";
			if (WorkExperienceCategory::workObjectCount == 2)
			{//if max count reached 
				numberofRecordsLbl->Text = L"Number of records added = 2";
				MessageBox::Show("Maximum number of records reached");
				this->Hide();
				GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
				BackToGeneralForm->Show();
			}

		}//try
		catch (Exception^ ex)
		{
			MessageBox::Show("Sorry, could not add this record to CV, please retry.");
		}//catch
	}//end if work

}

System::Void CVBuilder::EducationWorkExpProjects::EduWorkExpProjBackBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{//back button pressed
	this->Hide();
	GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
	BackToGeneralForm->Show();
}

	
