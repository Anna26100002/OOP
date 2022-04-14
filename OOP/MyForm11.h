#pragma once

namespace OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"MyForm1";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
		/*if (textBox6->Text == "по горизонтали"&&g3 == 1) {
			timer4->Enabled = true;
			timer4->Interval = 200;
		}
		if (textBox6->Text == "по горизонтали"&&g3 == 2) {
			Moving = Moving + 2;
			textBox1->Text = Convert::ToString(Moving);
			Stopped = Stopped - 2;
			textBox2->Text = Convert::ToString(Stopped);
			Probki--;
			textBox5->Text = Convert::ToString(Probki);
			timer4->Enabled = true;
			timer4->Interval = 200;
			timer5->Enabled = false;
		}
		if (textBox6->Text == "по горизонтали"&&g3 == 3) {
			Moving = Moving + 1;
			textBox1->Text = Convert::ToString(Moving);
			timer4->Enabled = true;
			timer4->Interval = 200;
			timer5->Enabled = false;
		}

		if (textBox6->Text == "по горизонтали") {
			if (g3 == 2||g3==3) {
				if (g3 == 2) {
					Moving = Moving + 2;
					Stopped = Stopped - 2;
					textBox2->Text = Convert::ToString(Stopped);
					Probki--;
					textBox5->Text = Convert::ToString(Probki);
				}
				else if (g3 == 3||g3==4) {
					Moving = Moving + 1;
				}
				textBox1->Text = Convert::ToString(Moving);
				timer4->Enabled = true;
				timer4->Interval = 200;
				timer5->Enabled = false;
			}
		}

		if (textBox6->Text == "по горизонтали") {
			if (g4 == 2 || g4 == 3) {
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
*/
	};
}
