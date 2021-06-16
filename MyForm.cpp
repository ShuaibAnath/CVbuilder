#include "MyForm.h"

System::Void CVBuilder::MyForm::RegisterScreenRegBtn_Click(System::Object^ sender, System::EventArgs^ e)
{//RegisterScreen Register button clicked

	//TODO: Add the SQL to check if the user exists on database before registering if the user exists, 
	// tell user that the account they are trying to register already exists 
	try
	{
		String^ email = RegisterScreenEmailTxtBox->Text;
		String^ password = RegisterScreenPasswordTxtBox->Text;
		String^ confirmPassword = RegisterScreenConfirmPasswordTxtBox->Text;

		std::string strEmail = context.marshal_as<std::string>(email);
		std::string strPassword = context.marshal_as<std::string>(password);
		std::string strConfirmPassword = context.marshal_as<std::string>(confirmPassword);

		String^ constring = L"datasource=localhost;port=3306;username=root;password=cvbuilder;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO cvbuilderdatabase.usertbl(Email,Password) VALUES('" + email + "','" + password + "')", conDataBase);
		MySqlDataReader^ myReader;

		if ((email == "") || (password == "") || (confirmPassword == ""))
		{//if textbox fields empty
			MessageBox::Show("Please ensure that you have entered valid credentials. ");
		}
		else
		{//else fields are not empty
			if ((strPassword.find_first_not_of(" ") == strPassword.npos) || (strEmail.find_first_not_of(" ") == strEmail.npos) || (strConfirmPassword.find_first_not_of(" ") == strConfirmPassword.npos))
			{//Check if any textbox fields are empty or do not contain at least on character that is not a space
				MessageBox::Show("Sorry, your credentials must contain at least one character that is not a space. ");
			}
			else
			{//else password, email and confirm password is not only a string of space(s)
				if (confirmPassword == password)
				{//does password match confirmed Password
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Registration successful");
					this->Hide();
					
					CreateCv^ Create = gcnew CreateCv();
					Create->ShowDialog();
					
					
					
				}// check if password is confirmed correctly 
				else
				{//else password and confirm password does not match
					MessageBox::Show("Please ensure the confirmed password matches your password.");
				}
			}
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}// end RegisterScreenRegBtn_Click function


System::Void  CVBuilder::MyForm::LoginScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{//LoginScreen Login Button pressed

	bool recordExists = false;

	String^ email = LoginScreenEmailTxtBox->Text;
	String^ password = LoginScreenPasswordtxtBox->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=cvbuilder;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM cvbuilderdatabase.usertbl WHERE Password = ('" + password + "') AND Email = ('" + email + "')", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read())
		{//while loop to check if user exists
			recordExists = true;
		}
		if (recordExists)
		{//Login Successful
			MessageBox::Show("Login SuccessFul!!!");
			this->Hide();
			
			CreateCv^ Create = gcnew CreateCv();
			Create->ShowDialog();
		}
		else
		{//else login failed
			MessageBox::Show("Login failed, please retry.");
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Login failed, please retry.");
	}

}// end LoginScreenLoginBtn_Click function

System::Void CVBuilder::MyForm::RegisterScreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e)
{//RegScreenBackButtonPressed
	RegisterPnl->Hide();
	WelcomePnl->Show();
	RegisterScreenEmailTxtBox->Text = "";
	RegisterScreenPasswordTxtBox->Text = "";
	RegisterScreenConfirmPasswordTxtBox->Text = "";
}

System::Void CVBuilder::MyForm::WelcomeScreenRegBtn_Click(System::Object^ sender, System::EventArgs^ e)
{//WelcomeScreen RegisterButton
	RegisterPnl->Show();
	WelcomePnl->Hide();
}

 System::Void CVBuilder::MyForm::WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{//WelcomeScreen LoginButton pressed
	LoginPnl->Show();
	WelcomePnl->Hide();
}

System::Void CVBuilder::MyForm::LoginscreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{//LoginScreen BackButton pressed
	LoginPnl->Hide();
	WelcomePnl->Show();
}

System::Void CVBuilder::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{//About button pressed
	MyForm1^ about = gcnew MyForm1();
	about->ShowDialog();
}