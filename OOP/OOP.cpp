#include "stdafx.h"

using namespace System;

using namespace System::Windows::Forms;

void Main(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	OOP::MyForm nameObjectForm;

	Application::Run(%nameObjectForm);

}