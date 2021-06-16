#include "GeneralPage.h"

System::Void CVBuilder::GeneralPage::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PersonalDetails^ PD = gcnew PersonalDetails();
	PD->ShowDialog();
}

System::Void CVBuilder::GeneralPage::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Skills^ skill = gcnew Skills();
	skill->ShowDialog();
}

System::Void CVBuilder::GeneralPage::label1_Click(System::Object^ sender, System::EventArgs^ e) {

}

System::Void CVBuilder::GeneralPage::GeneralPage_Load(System::Object^ sender, System::EventArgs^ e) {

}

System::Void CVBuilder::GeneralPage::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

	  