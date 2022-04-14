#pragma once
#include <cstdlib>
#include <string>
#include "stdafx.h"
using namespace System;
using namespace Windows::Forms;
using namespace System::Windows::Forms;
using namespace Microsoft::VisualBasic;
public ref class Perekrestok
{
public:
	int g, g2, g3, g4;
	int tmp1, tmp2, tmp3, tmp4, tmpS;
	int Moving_Cars;    // Количество движущихся машин
	int Stopped_Cars;   // Количество остановившихся машин
	int Traffic_Jams;   // Количество пробок на перекрёстке
	int Napravlenie;    // Направление движения по перекрёстку

	delegate void Stop1_Car_Handler(PictureBox^Car2, Timer^TM1, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g);
	delegate void Move1_Cars_Handler(PictureBox^Car1, PictureBox^Car2);
	delegate void Stop2_Car_Handler(PictureBox^Car2, Timer^TM3, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g2);
	delegate void Move2_Cars_Handler(PictureBox^Car1, PictureBox^Car2);
	delegate void Stop3_Car_Handler(PictureBox^Car2, Timer^TM4, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g3);
	delegate void Move3_Cars_Handler(PictureBox^Car1, PictureBox^Car2);
	delegate void Stop4_Car_Handler(PictureBox^Car2, Timer^TM6, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g4);
	delegate void Move4_Cars_Handler(PictureBox^Car1, PictureBox^Car2);

	event Stop1_Car_Handler^Sc1;
	event Move1_Cars_Handler^Mc1;
	event Stop2_Car_Handler^Sc2;
	event Move2_Cars_Handler^Mc2;
	event Stop3_Car_Handler^Sc3;
	event Move3_Cars_Handler^Mc3;
	event Stop4_Car_Handler^Sc4;
	event Move4_Cars_Handler^Mc4;

	property int Moving {       //Определение свойства
		int get() {
			return Moving_Cars;    //Возвращение значения поля
		}
		void set(int value) {
			if (value >= 0 && value <= 8) {
				Moving_Cars = value;    //Сохранение значения в поле
			}
		}
	}

	property int Stopped {   //Определение свойства
		int get() {
			return Stopped_Cars;   //Возвращение значения поля
		}
		void set(int value) {
			if (value >= 0 && value <= 8) {
				Stopped_Cars = value;   //Сохранение значения в поле
			}
		}
	}

	property int Probki {   //Определение свойства
		int get() {
			return Traffic_Jams;   //Возвращение значения поля
		}
		void set(int value) {
			if (value >= 0 && value <= 4) {
				Traffic_Jams = value;    //Сохранение значения в поле
			}
		}
	}

	property int Direction {   //Определение свойства
		int get() {
			return Napravlenie;    //Возвращение значения поля
		}
		void set(int value) {
			if (value == 0 || value == 1) {
				Napravlenie = value;    //Сохранение значения в поле
			}
		}
	}

	Perekrestok(int Moving, int Stopped, int Probki, int Direction) {   //Конструктор с параметрами 
		this->Moving_Cars = Moving;
		this->Stopped_Cars = Stopped;
		this->Traffic_Jams = Probki;
		this->Napravlenie = Direction;
	}

	void Vniz(PictureBox^Car1, PictureBox^Car2, TextBox^TextNapr, TextBox^Text_Stopped, TextBox^Text_Moving, TextBox^Text_Probka, Timer^TM1, Timer^TM5, int &Moving_Cars, int &Stopped_Cars, int &Traffic_Jams, int &Napravlenie, int &tmp1, int &g) {
		if (g == 0) {
			tmp1 += 1;
			Car1->Visible = true;
			Car1->Top = Car1->Top + 10;
			if (TextNapr->Text == "по горизонтали"&& tmp1 == 21) {
				Moving_Cars--;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
				Stopped_Cars++;
				Text_Stopped->Text = Convert::ToString(Stopped_Cars);
				g = 3;
				TM1->Enabled = false;
				TM5->Enabled = true;
				TM5->Interval = 1000;
				//g = 3;
			}
		}
		else if (g == 1) {
			Sc1(Car2, TM1, Text_Stopped, Stopped_Cars, Text_Probka, Traffic_Jams, g);         //Порождение события Пробка
		}
		else if (g == 2) {
			tmp1 += 1;
			Mc1(Car1, Car2);     //Порождение события Выход из пробки
			if (tmp1 == 67) {
				TM1->Enabled = false;
				g = 0;
				Moving_Cars=Moving_Cars-2;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
		}
		}
		else if (g == 3) {
			tmp1 += 1;
			Car1->Top = Car1->Top + 10;
			//if (tmp1 == 40) {
			//	TM1->Enabled = false;
			//	g == 0;
			//}
		}
		else if (g == 4) {
			Car1->Top = Car1->Top + 10;
			Car2->Visible = true;
			Car2->Top = Car2->Top + 10;
		}
		
	}

	void Vpravo(PictureBox^Car1, PictureBox^Car2, TextBox^TextNapr, TextBox^Text_Stopped, TextBox^Text_Moving, TextBox^Text_Probka, Timer^TM3, Timer^TM7, int &Moving_Cars, int &Stopped_Cars, int &Traffic_Jams, int &Napravlenie, int &tmp2, int &g2) {
		if (g2 == 0) {
			tmp2 += 1;
			Car1->Visible = true;
			Car1->Left = Car1->Left + 10;
			if (TextNapr->Text == "по вертикали"&& tmp2 == 22) {
				Moving_Cars--;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
				Stopped_Cars++;
				Text_Stopped->Text = Convert::ToString(Stopped_Cars);
				TM3->Enabled = false;
				TM7->Enabled = true;
				TM7->Interval = 1000;
				g2=3;
			}
		}
		else if (g2 == 1) {
			Sc2(Car2,TM3, Text_Stopped, Stopped_Cars, Text_Probka, Traffic_Jams, g2);          //Порождение события Пробка
		}
		else if (g2 == 2) {
			tmp2 += 1;
			Mc2(Car1, Car2);                         //Порождение события Выход из пробки
			if (tmp2 == 98) {
				TM3->Enabled = false;
				g2 = 0;
				Moving_Cars = Moving_Cars - 2;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
			}
			else if (g2 == 3) {
				tmp2 += 1;
				Car1->Left = Car1->Left + 10;
				//if (tmp2 == 80) {
				//	TM3->Enabled = false;
				//	g2 == 0;
				//}
			}
		}
	}
	void Vlevo(PictureBox^Car1, PictureBox^Car2, TextBox^TextNapr, TextBox^Text_Stopped, TextBox^Text_Moving, TextBox^Text_Probka, Timer^TM4, Timer^TM7, int &Moving_Cars, int &Stopped_Cars, int &Traffic_Jams, int &Napravlenie, int &tmp3, int &g3) {
		if (g3 == 0) {
			tmp3 += 1;
			Car1->Visible = true;
			Car1->Left = Car1->Left - 10;
			if (TextNapr->Text == "по вертикали"&& tmp3 == 20) {
				Moving_Cars--;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
				Stopped_Cars++;
				Text_Stopped->Text = Convert::ToString(Stopped_Cars);
				TM4->Enabled = false;
				TM7->Enabled = true;
				TM7->Interval = 1000;
				g3=3;
			}
		}
		else if (g3 == 1) {
			Sc3(Car2, TM4, Text_Stopped, Stopped_Cars, Text_Probka, Traffic_Jams, g3);          //Порождение события Пробка
		}
		else if (g3 == 2) {
			tmp3 += 1;
			Mc3(Car1, Car2);                                 //Порождение события Выход из пробки
			if (tmp3 == 97) {
				TM4->Enabled = false;
				g3 = 0;
				Moving_Cars = Moving_Cars - 2;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
			}
		}
		else if (g3 == 3) {
			tmp3 += 1;
			Car1->Left = Car1->Left - 10;
			if (tmp3 == 70) {
				TM4->Enabled = false;
				g3 = 0;
			}
		}
	}
	void Vverh(PictureBox^Car1, PictureBox^Car2, TextBox^TextNapr, TextBox^Text_Stopped, TextBox^Text_Moving, TextBox^Text_Probka, Timer^TM6, Timer^TM5, int &Moving_Cars, int &Stopped_Cars, int &Traffic_Jams, int &Napravlenie, int &tmp4, int &g4) {
		if (g4 == 0) {
			tmp4 += 1;
			Car1->Visible = true;
			Car1->Top = Car1->Top - 10;
			if (TextNapr->Text == "по горизонтали"&& tmp4 == 8) {
				Moving_Cars--;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
				Stopped_Cars++;
				Text_Stopped->Text = Convert::ToString(Stopped_Cars);
				TM6->Enabled = false;
				TM5->Enabled = true;
				TM5->Interval = 1000;
				g4 = 3;
			}
		}
		else if (g4 == 1) {
			Sc4(Car2, TM6, Text_Stopped, Stopped_Cars, Text_Probka, Traffic_Jams, g4);          //Порождение события Пробка
		}
		else if (g4 == 2) {
			tmp4 += 1;
			Mc4(Car1, Car2);                                 //Порождение события Выход из пробки
			if (tmp4 == 65) {
				TM6->Enabled = false;
				g4 = 0;
				Moving_Cars = Moving_Cars - 2;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
			}
		}
		else if (g4 == 3) {
			tmp4 += 1;
			Car1->Top = Car1->Top - 10;
			if (tmp4 == 70) {
				TM6->Enabled = false;
				g4 = 0;
			}
		}
	}
};

private ref class Skoraya : public Perekrestok //Наследование класса
{

public:
	delegate void Skoraya_Pomosh_Handler(PictureBox^Skoraya, Timer^TM3, TextBox^ Text_Stopped, int& Stopped_Cars, TextBox^ Text_Probka, int &Traffic_Jams, int& g);//Создание делегата для события связанного с проездом скорой помощи
	event Skoraya_Pomosh_Handler^Skoraya_;
	Skoraya(int Moving, double Stopped, double Probki, int Direction):Perekrestok(Moving_Cars, Stopped_Cars, Traffic_Jams, Napravlenie) {
	}
	
	void Vpravo2(PictureBox^ Car1, PictureBox^ Car2, TextBox^ TextNapr, TextBox^ Text_Stopped, TextBox^ Text_Moving, TextBox^ Text_Probka, Timer^ TM3, Timer^ TM7, int& Moving_Cars, int& Stopped_Cars, int& Traffic_Jams, int& Napravlenie, int& tmpS, int& s, int &g) {
		//if (s == 0) {
			tmpS += 1;
			Car1->Visible = true;
			TM3->Enabled = false;
			Car1->Left = Car1->Left + 20;
			//g == 0;
			if (tmpS > 40) {
				/*Moving_Cars--;
				Text_Moving->Text = Convert::ToString(Moving_Cars);	
				Stopped_Cars++;
				Text_Stopped->Text = Convert::ToString(Stopped_Cars);*/
				//Car2->Top = Car2->Top + 10
				TM3->Enabled = true;
				TM3->Interval = 400;
				TM7->Enabled = false;
				//g2 = 3;
			//}
		}
		else if (s == 1) {
			Sc2(Car2, TM3, Text_Stopped, Stopped_Cars, Text_Probka, Traffic_Jams, s);          //Порождение события Пробка
		}
		else if (s == 2) {
			tmp2 += 1;
			Mc2(Car1, Car2);                         //Порождение события Выход из пробки
			if (tmp2 == 98) {
				TM3->Enabled = false;
				s = 0;
				Moving_Cars = Moving_Cars - 2;
				Text_Moving->Text = Convert::ToString(Moving_Cars);
			}
			else if (s == 3) {
				tmp2 += 1;
				Car1->Left = Car1->Left + 10;
				//if (tmp2 == 80) {
				//	TM3->Enabled = false;
				//	g2 == 0;
				//}
			}
		}
	}
	void Dobavlenie_Po_Verticali(TextBox^TextNapr, TextBox^Text_Number, PictureBox^Car1, PictureBox^Skoraya, Timer^TM1, Timer^TM3, int &Napravlenie, int &Number_Cars) {
		if ((Napravlenie == 0) && (Number_Cars == 0)) {
			Car1->Visible = true;
			Number_Cars = Number_Cars + 1;
			Text_Number->Text = Convert::ToString(Number_Cars);
			TM1->Enabled = true;
			TM1->Interval = 400;
		}
		else if ((Napravlenie == 1) && (Number_Cars == 0)) {
			Car1->Visible = true;
			Number_Cars = Number_Cars + 1;
			Text_Number->Text = Convert::ToString(Number_Cars);
			//Car1->Location = Drawing::Point(Car1->Location.X, Car1->Location.Y);
			Car1->Location = Drawing::Point(Car1->Location.X, Car1->Location.Y + 150);
		}
		//else if ((Napravlenie == 1) && (Number_Cars == 1)) {
		//	Sc1(Car2, Text_Number, Number_Cars);                 //Порождение события Пробка
		//}
		else if ((Skoraya->Visible) && (Napravlenie == 0)) {
			//Skoraya_(Skoraya, Car1, Text_Number, TM3, Number_Cars, Napravlenie, v1, v2, skorost1, skorost2);    //Порождение события Уступить дорогу скорой помощи
		}
	}
};

void Skoraya_Move(PictureBox^Skoraya, PictureBox^Car1, TextBox^Text_Number, Timer^TM3, int &Moving) {  //Функция-обработчик события
		Car1->Visible = true;
		Moving = Moving + 1;
		Text_Number->Text = Convert::ToString(Moving);
		//Car1->Location = Drawing::Point(Car1->Location.X, Car1->Location.Y);
		Car1->Location = Drawing::Point(Car1->Location.X, Car1->Location.Y + 150);
		//TM3->Enabled = true;
		//TM3->Interval = 400;
		//Skoraya->Visible = false;
}
void Probka1(PictureBox^Car2, Timer^TM1, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g) {         //Функция-обработчик события
		Car2->Visible = true;
		Car2->Location = Drawing::Point(Car2->Location.X, Car2->Location.Y + 115);
		Stopped_Cars++;
		Traffic_Jams++;
		Text_Stopped->Text = Convert::ToString(Stopped_Cars);
		Text_Probka->Text = Convert::ToString(Traffic_Jams);
		TM1->Enabled = false;
		g = 2;
}
void Probka2(PictureBox^Car2, Timer^TM8, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g2) {      //Функция-обработчик события
	Car2->Visible = true;
	Car2->Location = Drawing::Point(Car2->Location.X + 90, Car2->Location.Y);
	TM8->Enabled = false;
	Stopped_Cars++;
	Traffic_Jams++;
	Text_Stopped->Text = Convert::ToString(Stopped_Cars);
	Text_Probka->Text = Convert::ToString(Traffic_Jams);
	g2 = 2;
}
void Probka3(PictureBox^Car2, Timer^TM4, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g3) {      //Функция-обработчик события
	Car2->Visible = true;
	Car2->Location = Drawing::Point(Car2->Location.X - 55, Car2->Location.Y);
	TM4->Enabled = false;
	Stopped_Cars++;
	Traffic_Jams++;
	Text_Stopped->Text = Convert::ToString(Stopped_Cars);
	Text_Probka->Text = Convert::ToString(Traffic_Jams);
	g3 = 2;
}
void Probka4(PictureBox^Car2, Timer^TM6, TextBox^Text_Stopped, int &Stopped_Cars, TextBox^Text_Probka, int &Traffic_Jams, int &g4) {      //Функция-обработчик события
	Car2->Visible = true;
	Car2->Location = Drawing::Point(Car2->Location.X, Car2->Location.Y - 47);
	TM6->Enabled = false;
	Stopped_Cars++;
	Traffic_Jams++;
	Text_Stopped->Text = Convert::ToString(Stopped_Cars);
	Text_Probka->Text = Convert::ToString(Traffic_Jams);
	g4 = 2;
}

void Vihod_Is_Probki1(PictureBox^Car1, PictureBox^Car2) {   //Функция-обработчик события
	Car1->Top = Car1->Top + 10;
	Car2->Top = Car2->Top + 10;
}
void Vihod_Is_Probki2(PictureBox^Car1, PictureBox^Car2) {   //Функция-обработчик события
	Car1->Left = Car1->Left + 10;
	Car2->Left = Car2->Left + 10;
}
void Vihod_Is_Probki3(PictureBox^Car1, PictureBox^Car2) {   //Функция-обработчик события
	Car1->Left = Car1->Left - 10;
	Car2->Left = Car2->Left - 10;
}
void Vihod_Is_Probki4(PictureBox^Car1, PictureBox^Car2) {   //Функция-обработчик события
	Car1->Top = Car1->Top- 10;
	Car2->Top = Car2->Top- 10;
}