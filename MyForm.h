#pragma once

#include "CreateCv.h"

#include "MyForm1.h"


//
//TODO: import cv information
//
#include <string>
#include <cstring>
#include <msclr\marshal_cppstd.h>
using namespace System;


namespace CVBuilder {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			LoginPnl->Hide();
			RegisterPnl->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ WelcomePnl;
	protected:
	private: System::Windows::Forms::Label^ WelcomeLbl;
	private: System::Windows::Forms::Button^ WelcomeScreenRegBtn;
	private: System::Windows::Forms::Button^ WelcomeScreenLoginBtn;
	private: System::Windows::Forms::Panel^ LogoImgPnl;
	private: System::Windows::Forms::Panel^ LoginPnl;

	private: System::Windows::Forms::Label^ LogInLbl;
	private: System::Windows::Forms::Label^ LoginScreenPasswordLbl;
	private: System::Windows::Forms::TextBox^ LoginScreenPasswordtxtBox;

	private: System::Windows::Forms::Label^ LoginScreenUsernameLbl;
	private: System::Windows::Forms::TextBox^ LoginScreenEmailTxtBox;

	private: System::Windows::Forms::Button^ LoginscreenBackBtn;
	private: System::Windows::Forms::Button^ LoginScreenLoginBtn;
	private: System::Windows::Forms::Panel^ RegisterPnl;

	private: System::Windows::Forms::Label^ ConfirmPasswordLbl;
	private: System::Windows::Forms::TextBox^ RegisterScreenConfirmPasswordTxtBox;
	private: System::Windows::Forms::Label^ RegisterScreenPasswordLbl;
	private: System::Windows::Forms::TextBox^ RegisterScreenPasswordTxtBox;
	private: System::Windows::Forms::Label^ RegisterScreenUsernameLbl;
	private: System::Windows::Forms::TextBox^ RegisterScreenEmailTxtBox;

	private: System::Windows::Forms::Button^ RegisterScreenBackBtn;
	private: System::Windows::Forms::Button^ RegisterScreenRegBtn;
	private: System::Windows::Forms::Label^ RegisterLbl;
	private: System::Windows::Forms::Label^ VersionLbl;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button1;
		   msclr::interop::marshal_context context;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->WelcomePnl = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LogoImgPnl = (gcnew System::Windows::Forms::Panel());
			this->WelcomeScreenLoginBtn = (gcnew System::Windows::Forms::Button());
			this->WelcomeScreenRegBtn = (gcnew System::Windows::Forms::Button());
			this->WelcomeLbl = (gcnew System::Windows::Forms::Label());
			this->RegisterPnl = (gcnew System::Windows::Forms::Panel());
			this->ConfirmPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->RegisterScreenConfirmPasswordTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterScreenPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->RegisterScreenPasswordTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterScreenUsernameLbl = (gcnew System::Windows::Forms::Label());
			this->RegisterScreenEmailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterScreenBackBtn = (gcnew System::Windows::Forms::Button());
			this->RegisterScreenRegBtn = (gcnew System::Windows::Forms::Button());
			this->RegisterLbl = (gcnew System::Windows::Forms::Label());
			this->LoginPnl = (gcnew System::Windows::Forms::Panel());
			this->LoginScreenPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->LoginScreenPasswordtxtBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginScreenUsernameLbl = (gcnew System::Windows::Forms::Label());
			this->LoginScreenEmailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginscreenBackBtn = (gcnew System::Windows::Forms::Button());
			this->LoginScreenLoginBtn = (gcnew System::Windows::Forms::Button());
			this->LogInLbl = (gcnew System::Windows::Forms::Label());
			this->VersionLbl = (gcnew System::Windows::Forms::Label());
			this->WelcomePnl->SuspendLayout();
			this->RegisterPnl->SuspendLayout();
			this->LoginPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// WelcomePnl
			// 
			this->WelcomePnl->BackColor = System::Drawing::Color::Transparent;
			this->WelcomePnl->Controls->Add(this->button1);
			this->WelcomePnl->Controls->Add(this->LogoImgPnl);
			this->WelcomePnl->Controls->Add(this->WelcomeScreenLoginBtn);
			this->WelcomePnl->Controls->Add(this->WelcomeScreenRegBtn);
			this->WelcomePnl->Controls->Add(this->WelcomeLbl);
			this->WelcomePnl->Location = System::Drawing::Point(295, 74);
			this->WelcomePnl->Name = L"WelcomePnl";
			this->WelcomePnl->Size = System::Drawing::Size(331, 355);
			this->WelcomePnl->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(94, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 12;
			this->button1->Text = L"ABOUT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LogoImgPnl
			// 
			this->LogoImgPnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoImgPnl.BackgroundImage")));
			this->LogoImgPnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LogoImgPnl->Location = System::Drawing::Point(94, 88);
			this->LogoImgPnl->Name = L"LogoImgPnl";
			this->LogoImgPnl->Size = System::Drawing::Size(136, 82);
			this->LogoImgPnl->TabIndex = 3;
			// 
			// WelcomeScreenLoginBtn
			// 
			this->WelcomeScreenLoginBtn->BackColor = System::Drawing::Color::Red;
			this->WelcomeScreenLoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WelcomeScreenLoginBtn->ForeColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Location = System::Drawing::Point(94, 200);
			this->WelcomeScreenLoginBtn->Name = L"WelcomeScreenLoginBtn";
			this->WelcomeScreenLoginBtn->Size = System::Drawing::Size(138, 38);
			this->WelcomeScreenLoginBtn->TabIndex = 1;
			this->WelcomeScreenLoginBtn->Text = L"LOG IN";
			this->WelcomeScreenLoginBtn->UseVisualStyleBackColor = false;
			this->WelcomeScreenLoginBtn->Click += gcnew System::EventHandler(this, &MyForm::WelcomeScreenLoginBtn_Click);
			// 
			// WelcomeScreenRegBtn
			// 
			this->WelcomeScreenRegBtn->BackColor = System::Drawing::Color::Red;
			this->WelcomeScreenRegBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeScreenRegBtn->ForeColor = System::Drawing::Color::Black;
			this->WelcomeScreenRegBtn->Location = System::Drawing::Point(94, 255);
			this->WelcomeScreenRegBtn->Name = L"WelcomeScreenRegBtn";
			this->WelcomeScreenRegBtn->Size = System::Drawing::Size(138, 38);
			this->WelcomeScreenRegBtn->TabIndex = 2;
			this->WelcomeScreenRegBtn->Text = L"REGISTER";
			this->WelcomeScreenRegBtn->UseVisualStyleBackColor = false;
			this->WelcomeScreenRegBtn->Click += gcnew System::EventHandler(this, &MyForm::WelcomeScreenRegBtn_Click);
			// 
			// WelcomeLbl
			// 
			this->WelcomeLbl->AutoSize = true;
			this->WelcomeLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeLbl->ForeColor = System::Drawing::Color::Black;
			this->WelcomeLbl->Location = System::Drawing::Point(89, 23);
			this->WelcomeLbl->Name = L"WelcomeLbl";
			this->WelcomeLbl->Size = System::Drawing::Size(145, 37);
			this->WelcomeLbl->TabIndex = 0;
			this->WelcomeLbl->Text = L"WELCOME";
			// 
			// RegisterPnl
			// 
			this->RegisterPnl->BackColor = System::Drawing::Color::Transparent;
			this->RegisterPnl->Controls->Add(this->ConfirmPasswordLbl);
			this->RegisterPnl->Controls->Add(this->RegisterScreenConfirmPasswordTxtBox);
			this->RegisterPnl->Controls->Add(this->RegisterScreenPasswordLbl);
			this->RegisterPnl->Controls->Add(this->RegisterScreenPasswordTxtBox);
			this->RegisterPnl->Controls->Add(this->RegisterScreenUsernameLbl);
			this->RegisterPnl->Controls->Add(this->RegisterScreenEmailTxtBox);
			this->RegisterPnl->Controls->Add(this->RegisterScreenBackBtn);
			this->RegisterPnl->Controls->Add(this->RegisterScreenRegBtn);
			this->RegisterPnl->Controls->Add(this->RegisterLbl);
			this->RegisterPnl->Location = System::Drawing::Point(295, 45);
			this->RegisterPnl->Name = L"RegisterPnl";
			this->RegisterPnl->Size = System::Drawing::Size(306, 464);
			this->RegisterPnl->TabIndex = 10;
			// 
			// ConfirmPasswordLbl
			// 
			this->ConfirmPasswordLbl->AutoSize = true;
			this->ConfirmPasswordLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmPasswordLbl->ForeColor = System::Drawing::Color::Black;
			this->ConfirmPasswordLbl->Location = System::Drawing::Point(41, 278);
			this->ConfirmPasswordLbl->Name = L"ConfirmPasswordLbl";
			this->ConfirmPasswordLbl->Size = System::Drawing::Size(120, 17);
			this->ConfirmPasswordLbl->TabIndex = 11;
			this->ConfirmPasswordLbl->Text = L"Confirm Password";
			// 
			// RegisterScreenConfirmPasswordTxtBox
			// 
			this->RegisterScreenConfirmPasswordTxtBox->Location = System::Drawing::Point(41, 298);
			this->RegisterScreenConfirmPasswordTxtBox->Name = L"RegisterScreenConfirmPasswordTxtBox";
			this->RegisterScreenConfirmPasswordTxtBox->Size = System::Drawing::Size(216, 20);
			this->RegisterScreenConfirmPasswordTxtBox->TabIndex = 10;
			this->RegisterScreenConfirmPasswordTxtBox->UseSystemPasswordChar = true;
			// 
			// RegisterScreenPasswordLbl
			// 
			this->RegisterScreenPasswordLbl->AutoSize = true;
			this->RegisterScreenPasswordLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterScreenPasswordLbl->ForeColor = System::Drawing::Color::Black;
			this->RegisterScreenPasswordLbl->Location = System::Drawing::Point(41, 205);
			this->RegisterScreenPasswordLbl->Name = L"RegisterScreenPasswordLbl";
			this->RegisterScreenPasswordLbl->Size = System::Drawing::Size(66, 17);
			this->RegisterScreenPasswordLbl->TabIndex = 9;
			this->RegisterScreenPasswordLbl->Text = L"Password";
			// 
			// RegisterScreenPasswordTxtBox
			// 
			this->RegisterScreenPasswordTxtBox->Location = System::Drawing::Point(41, 225);
			this->RegisterScreenPasswordTxtBox->Name = L"RegisterScreenPasswordTxtBox";
			this->RegisterScreenPasswordTxtBox->Size = System::Drawing::Size(216, 20);
			this->RegisterScreenPasswordTxtBox->TabIndex = 8;
			this->RegisterScreenPasswordTxtBox->UseSystemPasswordChar = true;
			// 
			// RegisterScreenUsernameLbl
			// 
			this->RegisterScreenUsernameLbl->AutoSize = true;
			this->RegisterScreenUsernameLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterScreenUsernameLbl->ForeColor = System::Drawing::Color::Black;
			this->RegisterScreenUsernameLbl->Location = System::Drawing::Point(38, 134);
			this->RegisterScreenUsernameLbl->Name = L"RegisterScreenUsernameLbl";
			this->RegisterScreenUsernameLbl->Size = System::Drawing::Size(42, 17);
			this->RegisterScreenUsernameLbl->TabIndex = 7;
			this->RegisterScreenUsernameLbl->Text = L"Email";
			// 
			// RegisterScreenEmailTxtBox
			// 
			this->RegisterScreenEmailTxtBox->Location = System::Drawing::Point(41, 154);
			this->RegisterScreenEmailTxtBox->Name = L"RegisterScreenEmailTxtBox";
			this->RegisterScreenEmailTxtBox->Size = System::Drawing::Size(216, 20);
			this->RegisterScreenEmailTxtBox->TabIndex = 6;
			// 
			// RegisterScreenBackBtn
			// 
			this->RegisterScreenBackBtn->BackColor = System::Drawing::Color::IndianRed;
			this->RegisterScreenBackBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->RegisterScreenBackBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterScreenBackBtn->ForeColor = System::Drawing::Color::Black;
			this->RegisterScreenBackBtn->Location = System::Drawing::Point(169, 352);
			this->RegisterScreenBackBtn->Name = L"RegisterScreenBackBtn";
			this->RegisterScreenBackBtn->Size = System::Drawing::Size(119, 38);
			this->RegisterScreenBackBtn->TabIndex = 5;
			this->RegisterScreenBackBtn->Text = L"BACK";
			this->RegisterScreenBackBtn->UseVisualStyleBackColor = false;
			this->RegisterScreenBackBtn->Click += gcnew System::EventHandler(this, &MyForm::RegisterScreenBackBtn_Click);
			// 
			// RegisterScreenRegBtn
			// 
			this->RegisterScreenRegBtn->BackColor = System::Drawing::Color::Red;
			this->RegisterScreenRegBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->RegisterScreenRegBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterScreenRegBtn->ForeColor = System::Drawing::Color::Black;
			this->RegisterScreenRegBtn->Location = System::Drawing::Point(14, 352);
			this->RegisterScreenRegBtn->Name = L"RegisterScreenRegBtn";
			this->RegisterScreenRegBtn->Size = System::Drawing::Size(123, 38);
			this->RegisterScreenRegBtn->TabIndex = 4;
			this->RegisterScreenRegBtn->Text = L"REGISTER";
			this->RegisterScreenRegBtn->UseVisualStyleBackColor = false;
			this->RegisterScreenRegBtn->Click += gcnew System::EventHandler(this, &MyForm::RegisterScreenRegBtn_Click);
			// 
			// RegisterLbl
			// 
			this->RegisterLbl->AutoSize = true;
			this->RegisterLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterLbl->ForeColor = System::Drawing::Color::Black;
			this->RegisterLbl->Location = System::Drawing::Point(89, 64);
			this->RegisterLbl->Name = L"RegisterLbl";
			this->RegisterLbl->Size = System::Drawing::Size(136, 37);
			this->RegisterLbl->TabIndex = 1;
			this->RegisterLbl->Text = L"REGISTER";
			// 
			// LoginPnl
			// 
			this->LoginPnl->BackColor = System::Drawing::Color::Transparent;
			this->LoginPnl->Controls->Add(this->LoginScreenPasswordLbl);
			this->LoginPnl->Controls->Add(this->LoginScreenPasswordtxtBox);
			this->LoginPnl->Controls->Add(this->LoginScreenUsernameLbl);
			this->LoginPnl->Controls->Add(this->LoginScreenEmailTxtBox);
			this->LoginPnl->Controls->Add(this->LoginscreenBackBtn);
			this->LoginPnl->Controls->Add(this->LoginScreenLoginBtn);
			this->LoginPnl->Controls->Add(this->LogInLbl);
			this->LoginPnl->Location = System::Drawing::Point(311, 73);
			this->LoginPnl->Name = L"LoginPnl";
			this->LoginPnl->Size = System::Drawing::Size(280, 428);
			this->LoginPnl->TabIndex = 1;
			this->LoginPnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::LoginPnl_Paint);
			// 
			// LoginScreenPasswordLbl
			// 
			this->LoginScreenPasswordLbl->AutoSize = true;
			this->LoginScreenPasswordLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenPasswordLbl->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenPasswordLbl->Location = System::Drawing::Point(28, 199);
			this->LoginScreenPasswordLbl->Name = L"LoginScreenPasswordLbl";
			this->LoginScreenPasswordLbl->Size = System::Drawing::Size(66, 17);
			this->LoginScreenPasswordLbl->TabIndex = 9;
			this->LoginScreenPasswordLbl->Text = L"Password";
			// 
			// LoginScreenPasswordtxtBox
			// 
			this->LoginScreenPasswordtxtBox->Location = System::Drawing::Point(28, 219);
			this->LoginScreenPasswordtxtBox->Name = L"LoginScreenPasswordtxtBox";
			this->LoginScreenPasswordtxtBox->Size = System::Drawing::Size(216, 20);
			this->LoginScreenPasswordtxtBox->TabIndex = 8;
			this->LoginScreenPasswordtxtBox->UseSystemPasswordChar = true;
			// 
			// LoginScreenUsernameLbl
			// 
			this->LoginScreenUsernameLbl->AutoSize = true;
			this->LoginScreenUsernameLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenUsernameLbl->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenUsernameLbl->Location = System::Drawing::Point(25, 128);
			this->LoginScreenUsernameLbl->Name = L"LoginScreenUsernameLbl";
			this->LoginScreenUsernameLbl->Size = System::Drawing::Size(42, 17);
			this->LoginScreenUsernameLbl->TabIndex = 7;
			this->LoginScreenUsernameLbl->Text = L"Email";
			// 
			// LoginScreenEmailTxtBox
			// 
			this->LoginScreenEmailTxtBox->Location = System::Drawing::Point(28, 148);
			this->LoginScreenEmailTxtBox->Name = L"LoginScreenEmailTxtBox";
			this->LoginScreenEmailTxtBox->Size = System::Drawing::Size(216, 20);
			this->LoginScreenEmailTxtBox->TabIndex = 6;
			// 
			// LoginscreenBackBtn
			// 
			this->LoginscreenBackBtn->BackColor = System::Drawing::Color::IndianRed;
			this->LoginscreenBackBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->LoginscreenBackBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginscreenBackBtn->ForeColor = System::Drawing::Color::Black;
			this->LoginscreenBackBtn->Location = System::Drawing::Point(158, 312);
			this->LoginscreenBackBtn->Name = L"LoginscreenBackBtn";
			this->LoginscreenBackBtn->Size = System::Drawing::Size(119, 38);
			this->LoginscreenBackBtn->TabIndex = 5;
			this->LoginscreenBackBtn->Text = L"BACK";
			this->LoginscreenBackBtn->UseVisualStyleBackColor = false;
			this->LoginscreenBackBtn->Click += gcnew System::EventHandler(this, &MyForm::LoginscreenBackBtn_Click);
			// 
			// LoginScreenLoginBtn
			// 
			this->LoginScreenLoginBtn->BackColor = System::Drawing::Color::Red;
			this->LoginScreenLoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->LoginScreenLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenLoginBtn->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenLoginBtn->Location = System::Drawing::Point(3, 312);
			this->LoginScreenLoginBtn->Name = L"LoginScreenLoginBtn";
			this->LoginScreenLoginBtn->Size = System::Drawing::Size(111, 38);
			this->LoginScreenLoginBtn->TabIndex = 4;
			this->LoginScreenLoginBtn->Text = L"LOG IN";
			this->LoginScreenLoginBtn->UseVisualStyleBackColor = false;
			this->LoginScreenLoginBtn->Click += gcnew System::EventHandler(this, &MyForm::LoginScreenLoginBtn_Click);
			// 
			// LogInLbl
			// 
			this->LogInLbl->AutoSize = true;
			this->LogInLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogInLbl->ForeColor = System::Drawing::Color::Black;
			this->LogInLbl->Location = System::Drawing::Point(89, 24);
			this->LogInLbl->Name = L"LogInLbl";
			this->LogInLbl->Size = System::Drawing::Size(97, 37);
			this->LogInLbl->TabIndex = 1;
			this->LogInLbl->Text = L"LOGIN";
			// 
			// VersionLbl
			// 
			this->VersionLbl->AutoSize = true;
			this->VersionLbl->Location = System::Drawing::Point(424, 512);
			this->VersionLbl->Name = L"VersionLbl";
			this->VersionLbl->Size = System::Drawing::Size(60, 13);
			this->VersionLbl->TabIndex = 11;
			this->VersionLbl->Text = L"Version 1.0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->VersionLbl);
			this->Controls->Add(this->WelcomePnl);
			this->Controls->Add(this->RegisterPnl);
			this->Controls->Add(this->LoginPnl);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->WelcomePnl->ResumeLayout(false);
			this->WelcomePnl->PerformLayout();
			this->RegisterPnl->ResumeLayout(false);
			this->RegisterPnl->PerformLayout();
			this->LoginPnl->ResumeLayout(false);
			this->LoginPnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void LoginscreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void LoginScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RegisterScreenRegBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RegisterScreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void WelcomeScreenRegBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginPnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
};
}
