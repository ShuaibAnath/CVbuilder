#pragma once

#include <string>
#include <cstring>
#include <msclr\marshal_cppstd.h>
#include "GeneralPage.h"

namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for PersonalDetails
	/// </summary>
	public ref class PersonalDetails : public System::Windows::Forms::Form
	{
	public:
		PersonalDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		PersonalDetails(String^ emailInTxtbox)
		{
			InitializeComponent();
			PDEmailTxtBox->Text = emailInTxtbox;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PersonalDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ PDEmailTxtBox;
	private: System::Windows::Forms::TextBox^ AddressTxtBox;
	private: System::Windows::Forms::TextBox^ ProfesionTxtBox;
	private: System::Windows::Forms::RichTextBox^ AboutYourselfTxtBox;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ PhoneNumberTxtBox;
	private: System::Windows::Forms::Button^ AddToCVBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ FirstNameTxtBox;
	private: System::Windows::Forms::TextBox^ LastNameTxtBox;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		msclr::interop::marshal_context context;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonalDetails::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->PDEmailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->AddressTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfesionTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->AboutYourselfTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->PhoneNumberTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->AddToCVBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->FirstNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(904, 29);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"PERSONAL DETAILS";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &PersonalDetails::textBox1_TextChanged);
			// 
			// PDEmailTxtBox
			// 
			this->PDEmailTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PDEmailTxtBox->Enabled = false;
			this->PDEmailTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PDEmailTxtBox->ForeColor = System::Drawing::Color::Black;
			this->PDEmailTxtBox->Location = System::Drawing::Point(293, 190);
			this->PDEmailTxtBox->Name = L"PDEmailTxtBox";
			this->PDEmailTxtBox->Size = System::Drawing::Size(344, 23);
			this->PDEmailTxtBox->TabIndex = 7;
			this->PDEmailTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddressTxtBox
			// 
			this->AddressTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AddressTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddressTxtBox->Location = System::Drawing::Point(293, 241);
			this->AddressTxtBox->Name = L"AddressTxtBox";
			this->AddressTxtBox->Size = System::Drawing::Size(344, 23);
			this->AddressTxtBox->TabIndex = 8;
			this->AddressTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ProfesionTxtBox
			// 
			this->ProfesionTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ProfesionTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfesionTxtBox->Location = System::Drawing::Point(293, 305);
			this->ProfesionTxtBox->Name = L"ProfesionTxtBox";
			this->ProfesionTxtBox->Size = System::Drawing::Size(344, 23);
			this->ProfesionTxtBox->TabIndex = 9;
			this->ProfesionTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AboutYourselfTxtBox
			// 
			this->AboutYourselfTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AboutYourselfTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AboutYourselfTxtBox->Location = System::Drawing::Point(290, 371);
			this->AboutYourselfTxtBox->Name = L"AboutYourselfTxtBox";
			this->AboutYourselfTxtBox->Size = System::Drawing::Size(344, 96);
			this->AboutYourselfTxtBox->TabIndex = 10;
			this->AboutYourselfTxtBox->Text = L"";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(764, 507);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(152, 15);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"Version 1.0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PhoneNumberTxtBox
			// 
			this->PhoneNumberTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PhoneNumberTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhoneNumberTxtBox->Location = System::Drawing::Point(293, 128);
			this->PhoneNumberTxtBox->Name = L"PhoneNumberTxtBox";
			this->PhoneNumberTxtBox->Size = System::Drawing::Size(344, 23);
			this->PhoneNumberTxtBox->TabIndex = 12;
			this->PhoneNumberTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddToCVBtn
			// 
			this->AddToCVBtn->BackColor = System::Drawing::Color::Red;
			this->AddToCVBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddToCVBtn->Location = System::Drawing::Point(391, 487);
			this->AddToCVBtn->Name = L"AddToCVBtn";
			this->AddToCVBtn->Size = System::Drawing::Size(116, 35);
			this->AddToCVBtn->TabIndex = 13;
			this->AddToCVBtn->Text = L"ADD TO CV";
			this->AddToCVBtn->UseVisualStyleBackColor = false;
			this->AddToCVBtn->Click += gcnew System::EventHandler(this, &PersonalDetails::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(290, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"FIRST NAME:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(491, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"LAST NAME:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(290, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"PHONE NUMBER:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(293, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"EMAIL:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(293, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"ADDRESS:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(293, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 19;
			this->label6->Text = L"PROFESSION:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(293, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"ABOUT YOURSELF:";
			// 
			// FirstNameTxtBox
			// 
			this->FirstNameTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->FirstNameTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameTxtBox->Location = System::Drawing::Point(290, 67);
			this->FirstNameTxtBox->Name = L"FirstNameTxtBox";
			this->FirstNameTxtBox->Size = System::Drawing::Size(146, 23);
			this->FirstNameTxtBox->TabIndex = 21;
			this->FirstNameTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// LastNameTxtBox
			// 
			this->LastNameTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->LastNameTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameTxtBox->Location = System::Drawing::Point(488, 67);
			this->LastNameTxtBox->Name = L"LastNameTxtBox";
			this->LastNameTxtBox->Size = System::Drawing::Size(146, 23);
			this->LastNameTxtBox->TabIndex = 22;
			this->LastNameTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PersonalDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->LastNameTxtBox);
			this->Controls->Add(this->FirstNameTxtBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AddToCVBtn);
			this->Controls->Add(this->PhoneNumberTxtBox);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->AboutYourselfTxtBox);
			this->Controls->Add(this->ProfesionTxtBox);
			this->Controls->Add(this->AddressTxtBox);
			this->Controls->Add(this->PDEmailTxtBox);
			this->Controls->Add(this->textBox1);
			this->Name = L"PersonalDetails";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PersonalDetails";
			this->Load += gcnew System::EventHandler(this, &PersonalDetails::PersonalDetails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);//add to cv button

	private: System::Void PersonalDetails_Load(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { }
};
}
