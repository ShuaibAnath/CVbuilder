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
	/// Summary for CreateCv
	/// </summary>
	public ref class CreateCv : public System::Windows::Forms::Form
	{
	public:
		CreateCv(void)
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
		~CreateCv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ ExistingCVButton;
	private: System::Windows::Forms::Button^ CreateCVButton;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateCv::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ExistingCVButton = (gcnew System::Windows::Forms::Button());
			this->CreateCVButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Red;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(904, 29);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"CV BUILDER";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(391, 509);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(152, 15);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Version 1.0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ExistingCVButton
			// 
			this->ExistingCVButton->BackColor = System::Drawing::Color::Red;
			this->ExistingCVButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExistingCVButton->Location = System::Drawing::Point(391, 279);
			this->ExistingCVButton->Name = L"ExistingCVButton";
			this->ExistingCVButton->Size = System::Drawing::Size(152, 65);
			this->ExistingCVButton->TabIndex = 6;
			this->ExistingCVButton->Text = L"SELECT EXISTING CV";
			this->ExistingCVButton->UseVisualStyleBackColor = false;
			this->ExistingCVButton->Click += gcnew System::EventHandler(this, &CreateCv::ExistingCVButton_Click);
			// 
			// CreateCVButton
			// 
			this->CreateCVButton->BackColor = System::Drawing::Color::Red;
			this->CreateCVButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateCVButton->Location = System::Drawing::Point(391, 167);
			this->CreateCVButton->Name = L"CreateCVButton";
			this->CreateCVButton->Size = System::Drawing::Size(152, 65);
			this->CreateCVButton->TabIndex = 5;
			this->CreateCVButton->Text = L"CREATE CV";
			this->CreateCVButton->UseVisualStyleBackColor = false;
			this->CreateCVButton->Click += gcnew System::EventHandler(this, &CreateCv::CreateCVButton_Click);
			// 
			// CreateCv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ExistingCVButton);
			this->Controls->Add(this->CreateCVButton);
			this->Controls->Add(this->textBox2);
			this->Name = L"CreateCv";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateCv";
			this->Load += gcnew System::EventHandler(this, &CreateCv::CreateCv_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateCv_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void CreateCVButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ExistingCVButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
