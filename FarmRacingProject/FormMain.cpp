#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // main ����������� � ��������� ������ ������

int main(array<String^>^ args) // ���������� ^>^ �������������� ������� ������
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FarmRacingProject::FormMain formmain;
	Application::Run(% formmain); // ��-�� ������ �� ������ ref ������ % ����� form

}
