#include "Skills.h"


System::Void CVBuilder::Skills::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Add to database first
			// 
			//Then set whatever is already in the textbox to how it originally was
	textBox2->Text = "SKILL NAME";
	comboBox1->Text = "SKILL RATING";
	richTextBox1->Text = "SKILL DESCRIPTION";
}

System::Void CVBuilder::Skills::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

System::Void CVBuilder::Skills::Skills_Load(System::Object^ sender, System::EventArgs^ e) {

}

