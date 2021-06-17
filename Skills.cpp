#include "Skills.h"


System::Void CVBuilder::Skills::Skills_Load(System::Object^ sender, System::EventArgs^ e) {

}

System::Void CVBuilder::Skills::addSkillBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	GeneralPage^ BackToGeneralForm = gcnew GeneralPage();
	BackToGeneralForm->Show();
}