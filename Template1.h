#pragma once

namespace CVBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Template1
	/// </summary>
	public ref class Template1 : public System::Windows::Forms::Form
	{
	public:
		Template1(void)
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
		~Template1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;












	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Template1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(226, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(556, 113);
			this->panel1->TabIndex = 0;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(198, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(133, 37);
			this->label12->TabIndex = 2;
			this->label12->Text = L"ANATH";
			this->label12->Click += gcnew System::EventHandler(this, &Template1::label12_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(67, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Programmer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(65, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SHUAIB";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Location = System::Drawing::Point(12, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(208, 692);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 469);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(247, 10);
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-5, 441);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Skills";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 356);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 31);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 403);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"071-234-5678";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(8, 396);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(23, 23);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 356);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 32);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Alameda Street\r\nLos Angeles, United States\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"anathshuaib@gmail.com";
			this->label4->Click += gcnew System::EventHandler(this, &Template1::label4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 24);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 310);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(247, 10);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-5, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Contact Me";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(43, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"About Me";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(37, 33);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(280, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Education";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(237, 148);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(37, 25);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 16;
			this->pictureBox8->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(280, 346);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 25);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Experience";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(237, 346);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(37, 25);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(291, 523);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Projects";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(248, 523);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(37, 25);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkGray;
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(285, 177);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(231, 122);
			this->panel3->TabIndex = 40;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(25, 17);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(90, 18);
			this->textBox2->TabIndex = 41;
			this->textBox2->Text = L"StartYear1";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::LightGray;
			this->textBox5->Location = System::Drawing::Point(133, 17);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(90, 18);
			this->textBox5->TabIndex = 42;
			this->textBox5->Text = L"EndYear1";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightGray;
			this->textBox6->Location = System::Drawing::Point(25, 45);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(90, 18);
			this->textBox6->TabIndex = 43;
			this->textBox6->Text = L"UNINAME";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::LightGray;
			this->textBox7->Location = System::Drawing::Point(133, 45);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(90, 18);
			this->textBox7->TabIndex = 44;
			this->textBox7->Text = L"DEGREE";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::LightGray;
			this->textBox8->Location = System::Drawing::Point(68, 69);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(114, 38);
			this->textBox8->TabIndex = 45;
			this->textBox8->Text = L"Description";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkGray;
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->textBox13);
			this->panel4->Location = System::Drawing::Point(536, 177);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(231, 122);
			this->panel4->TabIndex = 46;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::LightGray;
			this->textBox9->Location = System::Drawing::Point(69, 69);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(114, 38);
			this->textBox9->TabIndex = 45;
			this->textBox9->Text = L"Description";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightGray;
			this->textBox10->Location = System::Drawing::Point(133, 45);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(90, 18);
			this->textBox10->TabIndex = 44;
			this->textBox10->Text = L"DEGREE";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::LightGray;
			this->textBox11->Location = System::Drawing::Point(25, 45);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(90, 18);
			this->textBox11->TabIndex = 43;
			this->textBox11->Text = L"UNINAME";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightGray;
			this->textBox12->Location = System::Drawing::Point(133, 17);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(90, 18);
			this->textBox12->TabIndex = 42;
			this->textBox12->Text = L"EndYear1";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::LightGray;
			this->textBox13->Location = System::Drawing::Point(25, 17);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(90, 18);
			this->textBox13->TabIndex = 41;
			this->textBox13->Text = L"StartYear1";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkGray;
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox14);
			this->panel5->Controls->Add(this->textBox15);
			this->panel5->Controls->Add(this->textBox16);
			this->panel5->Controls->Add(this->textBox17);
			this->panel5->Location = System::Drawing::Point(284, 376);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(231, 122);
			this->panel5->TabIndex = 46;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->Location = System::Drawing::Point(69, 69);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(114, 38);
			this->textBox3->TabIndex = 45;
			this->textBox3->Text = L"Description";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::LightGray;
			this->textBox14->Location = System::Drawing::Point(133, 45);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(90, 18);
			this->textBox14->TabIndex = 44;
			this->textBox14->Text = L"DEGREE";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::LightGray;
			this->textBox15->Location = System::Drawing::Point(25, 45);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(90, 18);
			this->textBox15->TabIndex = 43;
			this->textBox15->Text = L"UNINAME";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::LightGray;
			this->textBox16->Location = System::Drawing::Point(133, 17);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(90, 18);
			this->textBox16->TabIndex = 42;
			this->textBox16->Text = L"EndYear1";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::LightGray;
			this->textBox17->Location = System::Drawing::Point(25, 17);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(90, 18);
			this->textBox17->TabIndex = 41;
			this->textBox17->Text = L"StartYear1";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkGray;
			this->panel6->Controls->Add(this->textBox18);
			this->panel6->Controls->Add(this->textBox19);
			this->panel6->Controls->Add(this->textBox20);
			this->panel6->Controls->Add(this->textBox21);
			this->panel6->Controls->Add(this->textBox22);
			this->panel6->Location = System::Drawing::Point(535, 376);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(231, 122);
			this->panel6->TabIndex = 46;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::LightGray;
			this->textBox18->Location = System::Drawing::Point(69, 69);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(114, 38);
			this->textBox18->TabIndex = 45;
			this->textBox18->Text = L"Description";
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::LightGray;
			this->textBox19->Location = System::Drawing::Point(133, 45);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(90, 18);
			this->textBox19->TabIndex = 44;
			this->textBox19->Text = L"DEGREE";
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::LightGray;
			this->textBox20->Location = System::Drawing::Point(25, 45);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(90, 18);
			this->textBox20->TabIndex = 43;
			this->textBox20->Text = L"UNINAME";
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::LightGray;
			this->textBox21->Location = System::Drawing::Point(133, 17);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(90, 18);
			this->textBox21->TabIndex = 42;
			this->textBox21->Text = L"EndYear1";
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::LightGray;
			this->textBox22->Location = System::Drawing::Point(25, 17);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(90, 18);
			this->textBox22->TabIndex = 41;
			this->textBox22->Text = L"StartYear1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 10);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::LightGray;
			this->textBox26->Location = System::Drawing::Point(26, 8);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(90, 18);
			this->textBox26->TabIndex = 41;
			this->textBox26->Text = L"StartYear1";
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::LightGray;
			this->textBox25->Location = System::Drawing::Point(134, 8);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(90, 18);
			this->textBox25->TabIndex = 42;
			this->textBox25->Text = L"EndYear1";
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::LightGray;
			this->textBox24->Location = System::Drawing::Point(26, 36);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(90, 18);
			this->textBox24->TabIndex = 43;
			this->textBox24->Text = L"UNINAME";
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::LightGray;
			this->textBox23->Location = System::Drawing::Point(134, 36);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(90, 18);
			this->textBox23->TabIndex = 44;
			this->textBox23->Text = L"DEGREE";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightGray;
			this->textBox4->Location = System::Drawing::Point(70, 60);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(114, 38);
			this->textBox4->TabIndex = 45;
			this->textBox4->Text = L"Description";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkGray;
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->textBox23);
			this->panel7->Controls->Add(this->textBox24);
			this->panel7->Controls->Add(this->textBox25);
			this->panel7->Controls->Add(this->textBox26);
			this->panel7->Location = System::Drawing::Point(296, 551);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(231, 102);
			this->panel7->TabIndex = 47;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkGray;
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Controls->Add(this->textBox27);
			this->panel8->Controls->Add(this->textBox28);
			this->panel8->Controls->Add(this->textBox29);
			this->panel8->Controls->Add(this->textBox30);
			this->panel8->Location = System::Drawing::Point(296, 664);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(231, 102);
			this->panel8->TabIndex = 48;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(70, 60);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(114, 38);
			this->textBox1->TabIndex = 45;
			this->textBox1->Text = L"Description";
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::LightGray;
			this->textBox27->Location = System::Drawing::Point(134, 36);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(90, 18);
			this->textBox27->TabIndex = 44;
			this->textBox27->Text = L"DEGREE";
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::LightGray;
			this->textBox28->Location = System::Drawing::Point(26, 36);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(90, 18);
			this->textBox28->TabIndex = 43;
			this->textBox28->Text = L"UNINAME";
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::LightGray;
			this->textBox29->Location = System::Drawing::Point(134, 8);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(90, 18);
			this->textBox29->TabIndex = 42;
			this->textBox29->Text = L"EndYear1";
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::LightGray;
			this->textBox30->Location = System::Drawing::Point(26, 8);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(90, 18);
			this->textBox30->TabIndex = 41;
			this->textBox30->Text = L"StartYear1";
			// 
			// Template1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(794, 788);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Template1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Template1";
			this->Load += gcnew System::EventHandler(this, &Template1::Template1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Template1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
