#pragma once
#include "GeneralPage.h"

namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Skills
	/// </summary>
	public ref class Skills : public System::Windows::Forms::Form
	{
	public:
		Skills(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Skills()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ SkillDesciptionrichTxtBox;
	private: System::Windows::Forms::ComboBox^ skillscmbBox;


	private: System::Windows::Forms::TextBox^ skillNameTxtBox;
	private: System::Windows::Forms::Button^ addSkillBtn;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ ListOfCVsPnl;
	private: System::Windows::Forms::Label^ SkillsLbl;
	private: System::Windows::Forms::Label^ numberofRecordsLbl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Skills::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SkillDesciptionrichTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->skillscmbBox = (gcnew System::Windows::Forms::ComboBox());
			this->skillNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->addSkillBtn = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->ListOfCVsPnl = (gcnew System::Windows::Forms::Panel());
			this->SkillsLbl = (gcnew System::Windows::Forms::Label());
			this->numberofRecordsLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->ListOfCVsPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->SkillDesciptionrichTxtBox);
			this->panel1->Controls->Add(this->skillscmbBox);
			this->panel1->Controls->Add(this->skillNameTxtBox);
			this->panel1->Location = System::Drawing::Point(289, 113);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(346, 268);
			this->panel1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"SKILL DESCRIPTION :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SKILL NAME :";
			// 
			// SkillDesciptionrichTxtBox
			// 
			this->SkillDesciptionrichTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->SkillDesciptionrichTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SkillDesciptionrichTxtBox->Location = System::Drawing::Point(17, 160);
			this->SkillDesciptionrichTxtBox->Name = L"SkillDesciptionrichTxtBox";
			this->SkillDesciptionrichTxtBox->Size = System::Drawing::Size(309, 92);
			this->SkillDesciptionrichTxtBox->TabIndex = 2;
			this->SkillDesciptionrichTxtBox->Text = L"";
			// 
			// skillscmbBox
			// 
			this->skillscmbBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->skillscmbBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillscmbBox->FormattingEnabled = true;
			this->skillscmbBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->skillscmbBox->Location = System::Drawing::Point(113, 79);
			this->skillscmbBox->Name = L"skillscmbBox";
			this->skillscmbBox->Size = System::Drawing::Size(121, 23);
			this->skillscmbBox->TabIndex = 1;
			this->skillscmbBox->Text = L"SKILL RATING";
			// 
			// skillNameTxtBox
			// 
			this->skillNameTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->skillNameTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillNameTxtBox->Location = System::Drawing::Point(17, 29);
			this->skillNameTxtBox->Name = L"skillNameTxtBox";
			this->skillNameTxtBox->Size = System::Drawing::Size(309, 23);
			this->skillNameTxtBox->TabIndex = 0;
			this->skillNameTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// addSkillBtn
			// 
			this->addSkillBtn->BackColor = System::Drawing::Color::Red;
			this->addSkillBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addSkillBtn->Location = System::Drawing::Point(364, 408);
			this->addSkillBtn->Name = L"addSkillBtn";
			this->addSkillBtn->Size = System::Drawing::Size(197, 53);
			this->addSkillBtn->TabIndex = 5;
			this->addSkillBtn->Text = L"ADD SKILL TO CV";
			this->addSkillBtn->UseVisualStyleBackColor = false;
			this->addSkillBtn->Click += gcnew System::EventHandler(this, &Skills::addSkillBtn_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(764, 507);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(152, 15);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Version 1.0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ListOfCVsPnl
			// 
			this->ListOfCVsPnl->BackColor = System::Drawing::Color::Red;
			this->ListOfCVsPnl->Controls->Add(this->SkillsLbl);
			this->ListOfCVsPnl->Location = System::Drawing::Point(2, 12);
			this->ListOfCVsPnl->Name = L"ListOfCVsPnl";
			this->ListOfCVsPnl->Size = System::Drawing::Size(925, 27);
			this->ListOfCVsPnl->TabIndex = 8;
			// 
			// SkillsLbl
			// 
			this->SkillsLbl->AutoSize = true;
			this->SkillsLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SkillsLbl->Location = System::Drawing::Point(430, 0);
			this->SkillsLbl->Name = L"SkillsLbl";
			this->SkillsLbl->Size = System::Drawing::Size(57, 21);
			this->SkillsLbl->TabIndex = 0;
			this->SkillsLbl->Text = L"SKILLS";
			// 
			// numberofRecordsLbl
			// 
			this->numberofRecordsLbl->AutoSize = true;
			this->numberofRecordsLbl->BackColor = System::Drawing::Color::White;
			this->numberofRecordsLbl->ForeColor = System::Drawing::Color::Red;
			this->numberofRecordsLbl->Location = System::Drawing::Point(282, 489);
			this->numberofRecordsLbl->Name = L"numberofRecordsLbl";
			this->numberofRecordsLbl->Size = System::Drawing::Size(145, 13);
			this->numberofRecordsLbl->TabIndex = 17;
			this->numberofRecordsLbl->Text = L"Number of records added = 0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(433, 489);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Max amount of records that can be added = 2";
			// 
			// Skills
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->numberofRecordsLbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ListOfCVsPnl);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->addSkillBtn);
			this->Controls->Add(this->panel1);
			this->Name = L"Skills";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Skills";
			this->Load += gcnew System::EventHandler(this, &Skills::Skills_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ListOfCVsPnl->ResumeLayout(false);
			this->ListOfCVsPnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Skills_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addSkillBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
