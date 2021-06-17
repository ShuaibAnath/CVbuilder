#pragma once
#include "EducationWorkExpProjects.h"
namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListOfCVsForm
	/// </summary>
	public ref class ListOfCVsForm : public System::Windows::Forms::Form
	{
	public:
		ListOfCVsForm(void)
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
		~ListOfCVsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ ListOfCVsPnl;
	protected:

	protected:
	private: System::Windows::Forms::Label^ ListOfCVsLbl;




	private: System::Windows::Forms::Label^ VersionLbl;
	private: System::Windows::Forms::Panel^ panel1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ListOfCVsForm::typeid));
			this->ListOfCVsPnl = (gcnew System::Windows::Forms::Panel());
			this->ListOfCVsLbl = (gcnew System::Windows::Forms::Label());
			this->VersionLbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ListOfCVsPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// ListOfCVsPnl
			// 
			this->ListOfCVsPnl->BackColor = System::Drawing::Color::Red;
			this->ListOfCVsPnl->Controls->Add(this->ListOfCVsLbl);
			this->ListOfCVsPnl->Location = System::Drawing::Point(12, 12);
			this->ListOfCVsPnl->Name = L"ListOfCVsPnl";
			this->ListOfCVsPnl->Size = System::Drawing::Size(904, 26);
			this->ListOfCVsPnl->TabIndex = 1;
			// 
			// ListOfCVsLbl
			// 
			this->ListOfCVsLbl->AutoSize = true;
			this->ListOfCVsLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ListOfCVsLbl->Location = System::Drawing::Point(400, 0);
			this->ListOfCVsLbl->Name = L"ListOfCVsLbl";
			this->ListOfCVsLbl->Size = System::Drawing::Size(95, 21);
			this->ListOfCVsLbl->TabIndex = 0;
			this->ListOfCVsLbl->Text = L"LIST OF CVs";
			// 
			// VersionLbl
			// 
			this->VersionLbl->AutoSize = true;
			this->VersionLbl->BackColor = System::Drawing::Color::DimGray;
			this->VersionLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->VersionLbl->Location = System::Drawing::Point(425, 512);
			this->VersionLbl->Name = L"VersionLbl";
			this->VersionLbl->Size = System::Drawing::Size(60, 13);
			this->VersionLbl->TabIndex = 13;
			this->VersionLbl->Text = L"Version 1.0";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(67, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(382, 432);
			this->panel1->TabIndex = 14;
			// 
			// ListOfCVsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->VersionLbl);
			this->Controls->Add(this->ListOfCVsPnl);
			this->Name = L"ListOfCVsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ListOfCVsForm";
			this->ListOfCVsPnl->ResumeLayout(false);
			this->ListOfCVsPnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CV2PicBox_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		EducationWorkExpProjects^ EduWorkEXpProjObj = gcnew EducationWorkExpProjects();
		EduWorkEXpProjObj->ShowDialog();
	}
};
}
