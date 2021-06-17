#include "GeneralPage.h" 
System::Void CVBuilder::GeneralPage::button1_Click(System::Object^ sender, System::EventArgs^ e) 
{// Personal details button pressed
	this->Hide();
	PersonalDetails^ PD = gcnew PersonalDetails();
	PD->ShowDialog();
}

System::Void CVBuilder::GeneralPage::button5_Click(System::Object^ sender, System::EventArgs^ e) 
{//Skills button pressed
	this->Hide();
	Skills^ skill = gcnew Skills();
	skill->ShowDialog();
}

System::Void CVBuilder::GeneralPage::label1_Click(System::Object^ sender, System::EventArgs^ e) {

}

System::Void CVBuilder::GeneralPage::GeneralPage_Load(System::Object^ sender, System::EventArgs^ e) {

}

System::Void CVBuilder::GeneralPage::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
System::Void CVBuilder::GeneralPage::button2_Click(System::Object^ sender, System::EventArgs^ e)
{//education button clicked 
	this->Hide();
	EducationWorkExpProjects^ EducationForm = gcnew EducationWorkExpProjects(L"ACADEMIC BACKGROUND",L"Enter university name: ",L"Enter Degree acheived at the university:",L"Duration of study:",L"Summarize your academic record below:");
	EducationForm->Show();
}

System::Void CVBuilder::GeneralPage::button4_Click(System::Object^ sender, System::EventArgs^ e)
{//Project Button pressed 
	this->Hide();
	EducationWorkExpProjects^ ProjectForm = gcnew EducationWorkExpProjects(L"PROJECTS", L"Company where project was completed: ", L"Project name:", L"Duration of project:", L"Summarize your project below:");
	ProjectForm->Show();
}

System::Void CVBuilder::GeneralPage::button3_Click(System::Object^ sender, System::EventArgs^ e) 
{//work button clicked
	this->Hide();
	EducationWorkExpProjects^ WorkForm = gcnew EducationWorkExpProjects(L"WORK EXPERIENCE", L"Company Name: ", L"Profession:", L"Duration of work:", L"Summarize your role at the company:");
	WorkForm->Show();
}
	  