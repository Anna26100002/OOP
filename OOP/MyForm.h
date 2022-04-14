#pragma once
#include <string>
#include "stdafx.h"
#include "Header.h"
extern int g, g2, g3, g4;
extern int tmp1, tmp2, tmp3, tmp4, tmpS;
extern int Moving;
extern int Stopped;
extern int Probki;
extern int Direction;
namespace OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  Перекрёсток;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Timer^  timer1;



	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox12;

	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::PictureBox^  pictureBox15;

	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;

	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::Timer^  timer7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Timer^ timer8;
private: System::Windows::Forms::Timer^ timer9;
private: System::Windows::Forms::Timer^ timer10;









	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Перекрёсток = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Перекрёсток->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// Перекрёсток
			// 
			this->Перекрёсток->Controls->Add(this->tabPage1);
			this->Перекрёсток->Controls->Add(this->tabPage2);
			this->Перекрёсток->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Перекрёсток->Location = System::Drawing::Point(155, 29);
			this->Перекрёсток->Name = L"Перекрёсток";
			this->Перекрёсток->SelectedIndex = 0;
			this->Перекрёсток->Size = System::Drawing::Size(1129, 708);
			this->Перекрёсток->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->pictureBox21);
			this->tabPage1->Controls->Add(this->pictureBox20);
			this->tabPage1->Controls->Add(this->pictureBox19);
			this->tabPage1->Controls->Add(this->pictureBox18);
			this->tabPage1->Controls->Add(this->pictureBox17);
			this->tabPage1->Controls->Add(this->pictureBox16);
			this->tabPage1->Controls->Add(this->pictureBox10);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox7);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->ImageKey = L"(отсутствует)";
			this->tabPage1->Location = System::Drawing::Point(4, 35);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1121, 669);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Перекрёсток";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(612, 647);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(38, 85);
			this->pictureBox21->TabIndex = 32;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(612, 602);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(38, 85);
			this->pictureBox20->TabIndex = 31;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(991, 341);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(88, 38);
			this->pictureBox19->TabIndex = 30;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(1006, 341);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(88, 38);
			this->pictureBox18->TabIndex = 29;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(-4, 436);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(85, 38);
			this->pictureBox17->TabIndex = 28;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(6, 436);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(85, 38);
			this->pictureBox16->TabIndex = 27;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(300, 138);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(54, 122);
			this->pictureBox10->TabIndex = 21;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(460, -57);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 85);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(460, -35);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(38, 85);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(253, 587);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(129, 47);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(717, 189);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(129, 47);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(744, 545);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 122);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1112, 657);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(277, 143);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(54, 122);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox15);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->pictureBox14);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->pictureBox13);
			this->tabPage2->Controls->Add(this->pictureBox8);
			this->tabPage2->Controls->Add(this->pictureBox12);
			this->tabPage2->Controls->Add(this->pictureBox9);
			this->tabPage2->Controls->Add(this->pictureBox11);
			this->tabPage2->Location = System::Drawing::Point(4, 35);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1121, 669);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Скорая помощь";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(461, -51);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(38, 85);
			this->pictureBox15->TabIndex = 29;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1353, 308);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Количество полос:";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(1167, 478);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 104);
			this->button9->TabIndex = 28;
			this->button9->Text = L"Добавить скорую помощь";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox14->Enabled = false;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(67, 393);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(150, 45);
			this->pictureBox14->TabIndex = 27;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1166, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 104);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Добавить машину по горизонтали";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1167, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 79);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Создать";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(1167, 131);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(180, 80);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Переключить светофор";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(1167, 232);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(180, 102);
			this->button8->TabIndex = 25;
			this->button8->Text = L"Добавить машину по вертикали";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(744, 540);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(54, 122);
			this->pictureBox13->TabIndex = 21;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(715, 188);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(129, 47);
			this->pictureBox8->TabIndex = 22;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(254, 584);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(129, 47);
			this->pictureBox12->TabIndex = 21;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(297, 133);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(54, 122);
			this->pictureBox9->TabIndex = 20;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(6, 6);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(1088, 670);
			this->pictureBox11->TabIndex = 20;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1285, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 29);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Количество полос:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(-4, 350);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(153, 73);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Добавить машину";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(889, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Создать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(697, -8);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 72);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Добавить машину";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1288, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 29);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Количество движущихся машин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1288, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(444, 29);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Количество остановившихся машин:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1288, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Количество дорог:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1734, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(98, 30);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(1734, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(98, 30);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1734, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 30);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"2";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(1734, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(98, 30);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1734, 109);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(98, 30);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1288, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 29);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Количество пробок:";
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1288, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(324, 29);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Движение по перекрёстку:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1673, 162);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(159, 30);
			this->textBox6->TabIndex = 19;
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(704, 739);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 73);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Добавить машину";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(1286, 350);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(153, 73);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Добавить машину";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(920, -11);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(174, 54);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Создать";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(35, 197);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"-20";
			// 
			// timer5
			// 
			this->timer5->Interval = 1000;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Tick += gcnew System::EventHandler(this, &MyForm::timer7_Tick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(741, -15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 73);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Добавить машину";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(-4, 311);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(153, 73);
			this->button13->TabIndex = 28;
			this->button13->Text = L"Добавить машину";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(1286, 350);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(153, 73);
			this->button14->TabIndex = 29;
			this->button14->Text = L"Добавить машину";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(704, 740);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 73);
			this->button15->TabIndex = 30;
			this->button15->Text = L"Добавить машину";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(522, -8);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(153, 73);
			this->button16->TabIndex = 31;
			this->button16->Text = L"Добавить скорую помощь";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(-4, 429);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(153, 73);
			this->button17->TabIndex = 32;
			this->button17->Text = L"Добавить скорую помощь";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(1283, 429);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(153, 73);
			this->button18->TabIndex = 33;
			this->button18->Text = L"Добавить скорую помощь";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(522, 736);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(153, 73);
			this->button19->TabIndex = 34;
			this->button19->Text = L"Добавить скорую помощь";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			// 
			// timer8
			// 
			this->timer8->Tick += gcnew System::EventHandler(this, &MyForm::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Tick += gcnew System::EventHandler(this, &MyForm::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Tick += gcnew System::EventHandler(this, &MyForm::timer10_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1853, 806);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Перекрёсток);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Перекрёсток->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		int k = -1;
		int n = 0;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	Perekrestok Svoistva(Moving, Stopped, Probki, Direction);
	Svoistva.Sc1 += gcnew Perekrestok::Stop1_Car_Handler(Probka1);
	Svoistva.Mc1 += gcnew Perekrestok::Move1_Cars_Handler(Vihod_Is_Probki1);
	Svoistva.Vniz(pictureBox5,pictureBox7, textBox6, textBox2,textBox1, textBox5, timer1,timer5, Moving, Stopped, Probki, Direction, tmp1, g);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!(pictureBox15->Visible)) {
		Moving++;
		textBox1->Text = Convert::ToString(Moving);
	}
	if (pictureBox15->Visible) {
		g = 1;
	}
	if (g == 3) {
		g = 4;
	}
	timer8->Enabled = true;
	timer8->Interval = 400;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Visible = true;
	textBox6->Text = "по вертикали";
	button4->Visible = false;
	//button3->Visible = false;
	button12->Visible = true;
	timer2->Enabled = true;
	timer2->Interval = 1000;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!(pictureBox5->Visible)) {
		Moving++;
		textBox1->Text = Convert::ToString(Moving);
	}
	if (pictureBox5->Visible) {
		g = 1;
	}
	if (g == 3) {
		g = 4;
	}
	timer1->Enabled = true;
	timer1->Interval = 400;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!(pictureBox16->Visible)) {
		Moving++;
		textBox1->Text = Convert::ToString(Moving);
	}
	if (pictureBox16->Visible) {
		g2 = 1;
	}
	timer3->Enabled = true;
	timer3->Interval = 400;
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		int svet = -20;
		svet = Convert::ToInt32(textBox8->Text);
		svet += 1;
		this->textBox8->Text = svet.ToString();
		if (svet == k*10) {
			pictureBox2->Visible = true;
			pictureBox3->Visible = true;
			pictureBox4->Visible = true;
			pictureBox10->Visible = true;
			pictureBox8->Visible = true;
			pictureBox9->Visible = true;
			pictureBox12->Visible = true;
			pictureBox13->Visible = true;
			textBox6->Text = "по горизонтали";
			k = k + 2;
		}
		else if (svet == n*10) {
			pictureBox2->Visible = false;
			pictureBox3->Visible = false;
			pictureBox4->Visible = false;
			pictureBox10->Visible = false;
			pictureBox8->Visible = false;
			pictureBox9->Visible = false;
			pictureBox12->Visible = false;
			pictureBox13->Visible = false;
			textBox6->Text = "по вертикали";
			n = n+2;
		}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox14->Visible = true;
	timer3->Enabled = true;
}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	Perekrestok Svoistva(Moving, Stopped, Probki, Direction);
	Svoistva.Sc2 += gcnew Perekrestok::Stop2_Car_Handler(Probka2);
	Svoistva.Mc2 += gcnew Perekrestok::Move2_Cars_Handler(Vihod_Is_Probki2);
	Svoistva.Vpravo(pictureBox16, pictureBox17, textBox6, textBox2, textBox1, textBox5, timer3,timer7, Moving, Stopped, Probki, Direction, tmp2, g2);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	timer3->Enabled = false;
	timer4->Enabled = true;
	pictureBox14->Visible = false;
	textBox2->Text = "0";
	textBox5->Text = "50";
}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
	Perekrestok Svoistva(Moving, Stopped, Probki, Direction);
	Svoistva.Sc3 += gcnew Perekrestok::Stop3_Car_Handler(Probka3);
	Svoistva.Mc3 += gcnew Perekrestok::Move3_Cars_Handler(Vihod_Is_Probki3);
	Svoistva.Vlevo(pictureBox18, pictureBox19, textBox6, textBox2, textBox1, textBox5, timer4, timer7, Moving, Stopped, Probki, Direction, tmp3, g3);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox11->Visible = true;
	textBox6->Text = "по вертикали";
	button5->Visible = false;
	button6->Visible = false;
	button10->Visible = false;
	button11->Visible = false;
	button3->Visible = true;
	button16->Visible = true;
	button13->Visible = true;
	button17->Visible = true;
	button14->Visible = true;
	button18->Visible = true;
	button15->Visible = true;
	button19->Visible = true;
	g = 0;
	tmp1 = 0;
}
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text == "по вертикали") {
		if (g == 1||g==2) {
			if (g == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
			else if (g == 3 || g == 4) {
				Moving = Moving + 1;
			}
			textBox1->Text = Convert::ToString(Moving);
			timer1->Enabled = true;
			timer1->Interval = 200;
			timer5->Enabled = false;
		}
	}
	
	if (textBox6->Text == "по вертикали") {
		if (g4 == 1 || g4 == 2) {
			if (g4 == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
			else if (g4 == 3 || g4 == 4) {
				Moving = Moving + 1;
			}
			textBox1->Text = Convert::ToString(Moving);
			timer6->Enabled = true;
			timer6->Interval = 200;
			timer5->Enabled = false;
		}
	}
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!(pictureBox18->Visible)) {
		Moving++;
		textBox1->Text = Convert::ToString(Moving);
	}
	if (pictureBox18->Visible) {
		g3 = 1;
	}
	timer4->Enabled = true;
	timer4->Interval = 400;
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (!(pictureBox20->Visible)) {
		Moving++;
		textBox1->Text = Convert::ToString(Moving);
	}
	if (pictureBox20->Visible) {
		g4 = 1;
	}
	timer6->Enabled = true;
	timer6->Interval = 400;
}
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
	Perekrestok Svoistva(Moving, Stopped, Probki, Direction);
	Svoistva.Sc4 += gcnew Perekrestok::Stop4_Car_Handler(Probka4);
	Svoistva.Mc4 += gcnew Perekrestok::Move4_Cars_Handler(Vihod_Is_Probki4);
	Svoistva.Vverh(pictureBox20, pictureBox21, textBox6, textBox2, textBox1, textBox5, timer6, timer5, Moving, Stopped, Probki, Direction, tmp4, g4);
}
private: System::Void timer7_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text == "по горизонтали") {
		if (g2 == 1 || g2 == 2) {
			if (g2 == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
			else if (g2 == 3 || g2 == 4) {
				Moving = Moving + 1;
			}
			textBox1->Text = Convert::ToString(Moving);
			timer3->Enabled = true;
			timer3->Interval = 200;
			timer7->Enabled = false;
		}
	}

	if (textBox6->Text == "по горизонтали") {
		if (g3 == 1 || g3 == 2) {
			if (g3 == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
			else if (g3 == 3 || g3 == 4) {
				Moving = Moving + 1;
			}
			textBox1->Text = Convert::ToString(Moving);
			timer4->Enabled = true;
			timer4->Interval = 200;
			timer7->Enabled = false;
		}
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox14->Visible = true;
	timer9->Enabled = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
	Perekrestok Svoistva(Moving, Stopped, Probki, Direction);
	Svoistva.Sc1 += gcnew Perekrestok::Stop1_Car_Handler(Probka1);
	Svoistva.Mc1 += gcnew Perekrestok::Move1_Cars_Handler(Vihod_Is_Probki1);
	Svoistva.Vniz(pictureBox15, pictureBox7, textBox6, textBox2, textBox1, textBox5, timer8, timer10, Moving, Stopped, Probki, Direction, tmp1, g);
}
private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
	Skoraya Svoistva(Moving, Stopped, Probki, Direction);
	pictureBox14->Visible = true;
	//Car1->Location = Drawing::Point(Car1->Location.X, Car1->Location.Y);
	//pictureBox14->Location = Drawing::Point(pictureBox14->Location.X+24, pictureBox14->Location.Y);
	Svoistva.Skoraya_ += gcnew Skoraya::Skoraya_Pomosh_Handler(Probka4);
	Svoistva.Mc2 += gcnew Skoraya::Move2_Cars_Handler(Vihod_Is_Probki4);
	//timer8 -> Enabled = false;
	Svoistva.Vpravo2(pictureBox14, pictureBox15, textBox6, textBox2, textBox1, textBox5, timer8, timer9, Moving, Stopped, Probki, Direction, tmpS, g2, g);
}
private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "по вертикали") {
		if (g == 1 || g == 2) {
			if (g == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
		}
			else if (g == 3 || g == 4 || g == 0) {
				Stopped = Stopped - 1;
				Moving = Moving + 1;
			}
			textBox2->Text = Convert::ToString(Stopped);
			textBox1->Text = Convert::ToString(Moving);
			timer8->Enabled = true;
			timer8->Interval = 200;
			timer10->Enabled = false;

	}

	if (textBox6->Text == "по вертикали") {
		if (g4 == 1 || g4 == 2) {
			if (g4 == 2) {
				Moving = Moving + 2;
				Stopped = Stopped - 2;
				textBox2->Text = Convert::ToString(Stopped);
				Probki--;
				textBox5->Text = Convert::ToString(Probki);
			}
			else if (g4 == 3 || g4 == 4) {
				Moving = Moving + 1;
			}
			textBox1->Text = Convert::ToString(Moving);
			//timer6->Enabled = true;
			//timer6->Interval = 200;
			timer10->Enabled = false;
		}
	}
}
};
}