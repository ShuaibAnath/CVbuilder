#pragma once
#include "ListOfCVsForm.h"
namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SelectTemplateForm
	/// </summary>
	public ref class SelectTemplateForm : public System::Windows::Forms::Form
	{
	public:
		SelectTemplateForm(void)
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
		~SelectTemplateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ SelectATemplatePnl;
	protected:
	private: System::Windows::Forms::Label^ SelectATemplateLbl;
	private: System::Windows::Forms::Button^ MarsTemplateBtn;
	private: System::Windows::Forms::Button^ JupiterTemplateBrn;
	private: System::Windows::Forms::Button^ SaturnTemplateBtn;
	private: System::Windows::Forms::Button^ NeptuneTemplateBtn;
	private: System::Windows::Forms::Label^ VersionLbl;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectTemplateForm::typeid));
			this->SelectATemplatePnl = (gcnew System::Windows::Forms::Panel());
			this->SelectATemplateLbl = (gcnew System::Windows::Forms::Label());
			this->MarsTemplateBtn = (gcnew System::Windows::Forms::Button());
			this->JupiterTemplateBrn = (gcnew System::Windows::Forms::Button());
			this->SaturnTemplateBtn = (gcnew System::Windows::Forms::Button());
			this->NeptuneTemplateBtn = (gcnew System::Windows::Forms::Button());
			this->VersionLbl = (gcnew System::Windows::Forms::Label());
			this->SelectATemplatePnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// SelectATemplatePnl
			// 
			this->SelectATemplatePnl->BackColor = System::Drawing::Color::Red;
			this->SelectATemplatePnl->Controls->Add(this->SelectATemplateLbl);
			this->SelectATemplatePnl->Location = System::Drawing::Point(1, 12);
			this->SelectATemplatePnl->Name = L"SelectATemplatePnl";
			this->SelectATemplatePnl->Size = System::Drawing::Size(925, 26);
			this->SelectATemplatePnl->TabIndex = 0;
			// 
			// SelectATemplateLbl
			// 
			this->SelectATemplateLbl->AutoSize = true;
			this->SelectATemplateLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SelectATemplateLbl->Location = System::Drawing::Point(379, 0);
			this->SelectATemplateLbl->Name = L"SelectATemplateLbl";
			this->SelectATemplateLbl->Size = System::Drawing::Size(157, 21);
			this->SelectATemplateLbl->TabIndex = 0;
			this->SelectATemplateLbl->Text = L"SELECT A TEMPLATE";
			// 
			// MarsTemplateBtn
			// 
			this->MarsTemplateBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MarsTemplateBtn->Location = System::Drawing::Point(158, 60);
			this->MarsTemplateBtn->Name = L"MarsTemplateBtn";
			this->MarsTemplateBtn->Size = System::Drawing::Size(197, 203);
			this->MarsTemplateBtn->TabIndex = 1;
			this->MarsTemplateBtn->Text = L"MARS";
			this->MarsTemplateBtn->UseVisualStyleBackColor = true;
			// 
			// JupiterTemplateBrn
			// 
			this->JupiterTemplateBrn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->JupiterTemplateBrn->Location = System::Drawing::Point(518, 306);
			this->JupiterTemplateBrn->Name = L"JupiterTemplateBrn";
			this->JupiterTemplateBrn->Size = System::Drawing::Size(199, 203);
			this->JupiterTemplateBrn->TabIndex = 2;
			this->JupiterTemplateBrn->Text = L"JUPITER";
			this->JupiterTemplateBrn->UseVisualStyleBackColor = true;
			// 
			// SaturnTemplateBtn
			// 
			this->SaturnTemplateBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SaturnTemplateBtn->Location = System::Drawing::Point(158, 306);
			this->SaturnTemplateBtn->Name = L"SaturnTemplateBtn";
			this->SaturnTemplateBtn->Size = System::Drawing::Size(197, 203);
			this->SaturnTemplateBtn->TabIndex = 3;
			this->SaturnTemplateBtn->Text = L"SATURN";
			this->SaturnTemplateBtn->UseVisualStyleBackColor = true;
			// 
			// NeptuneTemplateBtn
			// 
			this->NeptuneTemplateBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->NeptuneTemplateBtn->Location = System::Drawing::Point(518, 60);
			this->NeptuneTemplateBtn->Name = L"NeptuneTemplateBtn";
			this->NeptuneTemplateBtn->Size = System::Drawing::Size(199, 203);
			this->NeptuneTemplateBtn->TabIndex = 4;
			this->NeptuneTemplateBtn->Text = L"NEPTUNE";
			this->NeptuneTemplateBtn->UseVisualStyleBackColor = true;
			this->NeptuneTemplateBtn->Click += gcnew System::EventHandler(this, &SelectTemplateForm::NeptuneTemplateBtn_Click);
			// 
			// VersionLbl
			// 
			this->VersionLbl->AutoSize = true;
			this->VersionLbl->BackColor = System::Drawing::Color::DimGray;
			this->VersionLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->VersionLbl->Location = System::Drawing::Point(399, 512);
			this->VersionLbl->Name = L"VersionLbl";
			this->VersionLbl->Size = System::Drawing::Size(60, 13);
			this->VersionLbl->TabIndex = 12;
			this->VersionLbl->Text = L"Version 1.0";
			// 
			// SelectTemplateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->VersionLbl);
			this->Controls->Add(this->NeptuneTemplateBtn);
			this->Controls->Add(this->SaturnTemplateBtn);
			this->Controls->Add(this->JupiterTemplateBrn);
			this->Controls->Add(this->MarsTemplateBtn);
			this->Controls->Add(this->SelectATemplatePnl);
			this->Name = L"SelectTemplateForm";
			this->Text = L"SelectTemplateForm";
			this->SelectATemplatePnl->ResumeLayout(false);
			this->SelectATemplatePnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void NeptuneTemplateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ListOfCVsForm^ CVsFormObj = gcnew  ListOfCVsForm();
	CVsFormObj->ShowDialog();
}
};
}
