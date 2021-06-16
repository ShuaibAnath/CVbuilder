#include "CreateCv.h"

System::Void CVBuilder::CreateCv::CreateCVButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	GeneralPage^ General = gcnew GeneralPage();
	General->ShowDialog();
}

System::Void CVBuilder::CreateCv::CreateCv_Load(System::Object^ sender, System::EventArgs^ e) {
	
}

System::Void CVBuilder::CreateCv::ExistingCVButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
}