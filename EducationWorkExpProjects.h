#pragma once

namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EducationWorkExpProjects
	/// </summary>
	public ref class EducationWorkExpProjects : public System::Windows::Forms::Form
	{
	public:
		EducationWorkExpProjects(void)
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
		~EducationWorkExpProjects()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ SectionHeadingPnl;
	private: System::Windows::Forms::Label^ SectionHeadingLbl;
	private: System::Windows::Forms::Panel^ SectionInstancePnl;
	private: System::Windows::Forms::TextBox^ DegreeProfessionProjNameTxtBox;
	private: System::Windows::Forms::TextBox^ UniCompanyProjTxtBox;
	private: System::Windows::Forms::ComboBox^ EndYearCmbBox;
	private: System::Windows::Forms::ComboBox^ StartYearCmbBox;
	private: System::Windows::Forms::RichTextBox^ SummaryRichTxtBox;
	private: System::Windows::Forms::Button^ RemoveInstanceBtn;
	private: System::Windows::Forms::Button^ AddInstanceBtn;
	private: System::Windows::Forms::Label^ VersionLbl;

	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EducationWorkExpProjects::typeid));
			this->SectionHeadingPnl = (gcnew System::Windows::Forms::Panel());
			this->SectionHeadingLbl = (gcnew System::Windows::Forms::Label());
			this->SectionInstancePnl = (gcnew System::Windows::Forms::Panel());
			this->SummaryRichTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->EndYearCmbBox = (gcnew System::Windows::Forms::ComboBox());
			this->StartYearCmbBox = (gcnew System::Windows::Forms::ComboBox());
			this->DegreeProfessionProjNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->UniCompanyProjTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveInstanceBtn = (gcnew System::Windows::Forms::Button());
			this->AddInstanceBtn = (gcnew System::Windows::Forms::Button());
			this->VersionLbl = (gcnew System::Windows::Forms::Label());
			this->SectionHeadingPnl->SuspendLayout();
			this->SectionInstancePnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// SectionHeadingPnl
			// 
			this->SectionHeadingPnl->BackColor = System::Drawing::Color::Red;
			this->SectionHeadingPnl->Controls->Add(this->SectionHeadingLbl);
			this->SectionHeadingPnl->Location = System::Drawing::Point(0, 12);
			this->SectionHeadingPnl->Name = L"SectionHeadingPnl";
			this->SectionHeadingPnl->Size = System::Drawing::Size(925, 26);
			this->SectionHeadingPnl->TabIndex = 2;
			// 
			// SectionHeadingLbl
			// 
			this->SectionHeadingLbl->AutoSize = true;
			this->SectionHeadingLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SectionHeadingLbl->Location = System::Drawing::Point(383, 0);
			this->SectionHeadingLbl->Name = L"SectionHeadingLbl";
			this->SectionHeadingLbl->Size = System::Drawing::Size(149, 21);
			this->SectionHeadingLbl->TabIndex = 0;
			this->SectionHeadingLbl->Text = L"SECTION HEADING";
			// 
			// SectionInstancePnl
			// 
			this->SectionInstancePnl->BackColor = System::Drawing::Color::Red;
			this->SectionInstancePnl->Controls->Add(this->SummaryRichTxtBox);
			this->SectionInstancePnl->Controls->Add(this->EndYearCmbBox);
			this->SectionInstancePnl->Controls->Add(this->StartYearCmbBox);
			this->SectionInstancePnl->Controls->Add(this->DegreeProfessionProjNameTxtBox);
			this->SectionInstancePnl->Controls->Add(this->UniCompanyProjTxtBox);
			this->SectionInstancePnl->Location = System::Drawing::Point(308, 57);
			this->SectionInstancePnl->Name = L"SectionInstancePnl";
			this->SectionInstancePnl->Size = System::Drawing::Size(319, 332);
			this->SectionInstancePnl->TabIndex = 3;
			// 
			// SummaryRichTxtBox
			// 
			this->SummaryRichTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SummaryRichTxtBox->Location = System::Drawing::Point(20, 187);
			this->SummaryRichTxtBox->Name = L"SummaryRichTxtBox";
			this->SummaryRichTxtBox->Size = System::Drawing::Size(275, 116);
			this->SummaryRichTxtBox->TabIndex = 4;
			this->SummaryRichTxtBox->Text = L"SUMMARY";
			// 
			// EndYearCmbBox
			// 
			this->EndYearCmbBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndYearCmbBox->FormattingEnabled = true;
			this->EndYearCmbBox->Location = System::Drawing::Point(174, 139);
			this->EndYearCmbBox->Name = L"EndYearCmbBox";
			this->EndYearCmbBox->Size = System::Drawing::Size(121, 25);
			this->EndYearCmbBox->TabIndex = 3;
			this->EndYearCmbBox->Text = L"END YEAR";
			// 
			// StartYearCmbBox
			// 
			this->StartYearCmbBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartYearCmbBox->FormattingEnabled = true;
			this->StartYearCmbBox->Location = System::Drawing::Point(20, 139);
			this->StartYearCmbBox->Name = L"StartYearCmbBox";
			this->StartYearCmbBox->Size = System::Drawing::Size(121, 25);
			this->StartYearCmbBox->TabIndex = 2;
			this->StartYearCmbBox->Text = L"START YEAR";
			// 
			// DegreeProfessionProjNameTxtBox
			// 
			this->DegreeProfessionProjNameTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DegreeProfessionProjNameTxtBox->Location = System::Drawing::Point(20, 77);
			this->DegreeProfessionProjNameTxtBox->Name = L"DegreeProfessionProjNameTxtBox";
			this->DegreeProfessionProjNameTxtBox->Size = System::Drawing::Size(275, 25);
			this->DegreeProfessionProjNameTxtBox->TabIndex = 1;
			this->DegreeProfessionProjNameTxtBox->Text = L"Degree/Profession/Project Name";
			// 
			// UniCompanyProjTxtBox
			// 
			this->UniCompanyProjTxtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UniCompanyProjTxtBox->Location = System::Drawing::Point(20, 22);
			this->UniCompanyProjTxtBox->Name = L"UniCompanyProjTxtBox";
			this->UniCompanyProjTxtBox->Size = System::Drawing::Size(275, 25);
			this->UniCompanyProjTxtBox->TabIndex = 0;
			this->UniCompanyProjTxtBox->Text = L"University/Company/Project";
			// 
			// RemoveInstanceBtn
			// 
			this->RemoveInstanceBtn->BackColor = System::Drawing::Color::Red;
			this->RemoveInstanceBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->RemoveInstanceBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveInstanceBtn->ForeColor = System::Drawing::Color::Black;
			this->RemoveInstanceBtn->Location = System::Drawing::Point(12, 474);
			this->RemoveInstanceBtn->Name = L"RemoveInstanceBtn";
			this->RemoveInstanceBtn->Size = System::Drawing::Size(123, 38);
			this->RemoveInstanceBtn->TabIndex = 5;
			this->RemoveInstanceBtn->Text = L"REMOVE ";
			this->RemoveInstanceBtn->UseVisualStyleBackColor = false;
			// 
			// AddInstanceBtn
			// 
			this->AddInstanceBtn->BackColor = System::Drawing::Color::Red;
			this->AddInstanceBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->AddInstanceBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddInstanceBtn->ForeColor = System::Drawing::Color::Black;
			this->AddInstanceBtn->Location = System::Drawing::Point(772, 474);
			this->AddInstanceBtn->Name = L"AddInstanceBtn";
			this->AddInstanceBtn->Size = System::Drawing::Size(123, 38);
			this->AddInstanceBtn->TabIndex = 6;
			this->AddInstanceBtn->Text = L"ADD";
			this->AddInstanceBtn->UseVisualStyleBackColor = false;
			// 
			// VersionLbl
			// 
			this->VersionLbl->AutoSize = true;
			this->VersionLbl->BackColor = System::Drawing::Color::DimGray;
			this->VersionLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->VersionLbl->Location = System::Drawing::Point(423, 491);
			this->VersionLbl->Name = L"VersionLbl";
			this->VersionLbl->Size = System::Drawing::Size(60, 13);
			this->VersionLbl->TabIndex = 13;
			this->VersionLbl->Text = L"Version 1.0";
			// 
			// EducationWorkExpProjects
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->VersionLbl);
			this->Controls->Add(this->AddInstanceBtn);
			this->Controls->Add(this->RemoveInstanceBtn);
			this->Controls->Add(this->SectionInstancePnl);
			this->Controls->Add(this->SectionHeadingPnl);
			this->Name = L"EducationWorkExpProjects";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EducationWorkExpProjects";
			this->SectionHeadingPnl->ResumeLayout(false);
			this->SectionHeadingPnl->PerformLayout();
			this->SectionInstancePnl->ResumeLayout(false);
			this->SectionInstancePnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
