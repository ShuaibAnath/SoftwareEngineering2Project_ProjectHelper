#include "LoginPage.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjectsAndPracticals::LoginPage frm;
	Application::Run(% frm);
	return 0;
}
