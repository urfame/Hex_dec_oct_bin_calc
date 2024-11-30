#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array < String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    CalculatorforCTF::MyForm form;
    Application::Run(% form);
}

