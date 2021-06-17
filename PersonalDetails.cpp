#include "PersonalDetails.h"
#include "User.h"

System::Void CVBuilder::PersonalDetails::button1_Click(System::Object^ sender, System::EventArgs^ e) 
{

		String^ FirstName = FirstNameTxtBox->Text;
		String^ LastName = LastNameTxtBox->Text;
		String^ PhoneNumber = PhoneNumberTxtBox->Text;
		String^ Address = AddressTxtBox->Text;
		String^ Profession = ProfesionTxtBox->Text;
		String^ AboutYou = AboutYourselfTxtBox->Text;

		std::string strFirstName = context.marshal_as<std::string>(FirstName);
		std::string strLastName = context.marshal_as<std::string>(LastName);
		std::string strPhoneNumber = context.marshal_as<std::string>(PhoneNumber);
		std::string strAddress = context.marshal_as<std::string>(Address);
		std::string strProfession = context.marshal_as<std::string>(Profession);
		std::string strAboutYou = context.marshal_as<std::string>(AboutYou);

		String^ constring = L"datasource=localhost;port=3306;username=root;password=cvbuilder;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE cvbuilderdatabase.usertbl SET FirstName = '" + FirstName + "', LastName = '" + LastName + "', Address = '"+ Address +"',  Profession = '" + Profession + "',  Contact = '" + PhoneNumber + "',  About = '" + AboutYou + "'   WHERE Email = '"+ User::UserEmail +"' ", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			if ( (FirstName == "") || (LastName == "") || (PhoneNumber == "") || (Address == "") || (Profession == "") || (AboutYou == ""))
			{// if any field empty
				MessageBox::Show("Please ensure that you have filled out all details.");
			}
			else 
			{//else all fields have values

				if ((strFirstName.find_first_not_of(" ") == strFirstName.npos) || (strLastName.find_first_not_of(" ") == strLastName.npos) || (strPhoneNumber.find_first_not_of(" ") == strPhoneNumber.npos) || (strAddress.find_first_not_of(" ") == strAddress.npos) || (strProfession.find_first_not_of(" ") == strProfession.npos) || (strAboutYou.find_first_not_of(" ") == strAboutYou.npos))
				{//Check if any textbox fields are empty or do not contain at least on character that is not a space
						MessageBox::Show("Sorry, each of your details must contain at least one character that is not a space. ");
				}
				else 
				{//else each field contains at least one nonspace character
					
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Details successfully added to CV!");
					this->Hide();
					GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
					BackToGeneralForm->Show();
				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Sorry, could not add record, please retry.");
		}

}
