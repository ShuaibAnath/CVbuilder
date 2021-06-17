#pragma once
#include "PersonalDetails.h"
#include "Skills.h"
#include "EducationWorkExpProjects.h"
#include "CategoryBox.h"

namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GeneralPage
	/// </summary>
	public ref class GeneralPage : public System::Windows::Forms::Form
	{
	public:
		GeneralPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ NextBtn;
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GeneralPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ ListOfCVsPnl;
	private: System::Windows::Forms::Label^ ListOfCVsLbl;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		//arrays of objects to store user CV information

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GeneralPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->ListOfCVsPnl = (gcnew System::Windows::Forms::Panel());
			this->ListOfCVsLbl = (gcnew System::Windows::Forms::Label());
			this->NextBtn = (gcnew System::Windows::Forms::Button());
			this->ListOfCVsPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(246, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 88);
			this->button1->TabIndex = 1;
			this->button1->Text = L"PERSONAL DETAILS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GeneralPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(543, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 88);
			this->button2->TabIndex = 2;
			this->button2->Text = L"EDUCATION";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GeneralPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(246, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 86);
			this->button3->TabIndex = 3;
			this->button3->Text = L"WORK EXPERIENCE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GeneralPage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(543, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 86);
			this->button4->TabIndex = 4;
			this->button4->Text = L"PROJECTS";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GeneralPage::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(394, 355);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 86);
			this->button5->TabIndex = 5;
			this->button5->Text = L"SKILLS";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GeneralPage::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(394, 507);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(152, 15);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Version 1.0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ListOfCVsPnl
			// 
			this->ListOfCVsPnl->BackColor = System::Drawing::Color::Red;
			this->ListOfCVsPnl->Controls->Add(this->ListOfCVsLbl);
			this->ListOfCVsPnl->Location = System::Drawing::Point(1, 12);
			this->ListOfCVsPnl->Name = L"ListOfCVsPnl";
			this->ListOfCVsPnl->Size = System::Drawing::Size(925, 26);
			this->ListOfCVsPnl->TabIndex = 7;
			// 
			// ListOfCVsLbl
			// 
			this->ListOfCVsLbl->AutoSize = true;
			this->ListOfCVsLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ListOfCVsLbl->Location = System::Drawing::Point(399, 0);
			this->ListOfCVsLbl->Name = L"ListOfCVsLbl";
			this->ListOfCVsLbl->Size = System::Drawing::Size(136, 21);
			this->ListOfCVsLbl->TabIndex = 0;
			this->ListOfCVsLbl->Text = L"CV INORMATION";
			// 
			// NextBtn
			// 
			this->NextBtn->BackColor = System::Drawing::Color::IndianRed;
			this->NextBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->NextBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NextBtn->ForeColor = System::Drawing::Color::Black;
			this->NextBtn->Location = System::Drawing::Point(797, 484);
			this->NextBtn->Name = L"NextBtn";
			this->NextBtn->Size = System::Drawing::Size(119, 38);
			this->NextBtn->TabIndex = 8;
			this->NextBtn->Text = L"NEXT";
			this->NextBtn->UseVisualStyleBackColor = false;
			// 
			// GeneralPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->NextBtn);
			this->Controls->Add(this->ListOfCVsPnl);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"GeneralPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GeneralPage";
			this->Load += gcnew System::EventHandler(this, &GeneralPage::GeneralPage_Load);
			this->ListOfCVsPnl->ResumeLayout(false);
			this->ListOfCVsPnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GeneralPage_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
};
}
