#pragma once


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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ ListOfCVsPnl;
	private: System::Windows::Forms::Label^ SkillsLbl;


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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->ListOfCVsPnl = (gcnew System::Windows::Forms::Panel());
			this->SkillsLbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->ListOfCVsPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(289, 113);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(346, 268);
			this->panel1->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(17, 113);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(309, 125);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"SKILL DESCRIPTION";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(115, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"SKILL RATING";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(17, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 23);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"SKILL NAME";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(361, 402);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 53);
			this->button2->TabIndex = 5;
			this->button2->Text = L"ADD SKILL TO CV";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Skills::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(386, 507);
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
			// Skills
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->ListOfCVsPnl);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
