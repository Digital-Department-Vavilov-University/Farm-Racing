#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // main запускается в отдельном потоке данных

int main(array<String^>^ args) // Добавление ^>^ автоматическая очистка памяти
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FarmRacingProject::FormMain formmain;
	Application::Run(% formmain); // из-за класса по ссылке ref указан % перед form

}
