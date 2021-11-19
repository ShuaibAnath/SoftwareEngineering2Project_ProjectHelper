#include "HomePage.h"


System::Void ProjectsAndPracticals::HomePage::WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ SelectedModule = ModuleListBox->Text;


	INT32 checkProject = 0;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.moduletable WHERE hasProject = 1;", conDataBase);// do query
	MySqlDataReader^ myReader;

	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{
			if(SelectedModule == myReader->GetString("ModuleCode"))
			{
				hasProjects = true;
			}
		}

	}
	catch (Exception^ ex)
	{

	}

	//Lecturer
	this->Hide();
	if (isLecturer) 
	{
		if (hasProjects) 
		{
		ViewStudentProject^ ViewProjPageForm = gcnew ViewStudentProject(SelectedModule);
		ViewProjPageForm->ShowDialog();// goto homepage if login clicked
		}
		else 
		{
		 ModulePage^ ModulePageForm = gcnew ModulePage(SelectedModule);
		 ModulePageForm->ShowDialog();// goto homepage if login clicked
		}
	}
	else
	{
		//Student
		StudentModulePage^ StudentModuleForm = gcnew StudentModulePage(SelectedModule);
		StudentModuleForm->ShowDialog();// goto homepage if login clicked
	}


}
