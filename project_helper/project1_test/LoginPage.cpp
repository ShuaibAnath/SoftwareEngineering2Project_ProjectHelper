#include "LoginPage.h"
#include"ModulePage.h"
#include "AdminPage.h"

System::Void ProjectsAndPracticals::LoginPage::WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^){
WelcomePnl->Hide();
LoginPnl->Show();
}

System::Void ProjectsAndPracticals::LoginPage::LoginscreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginPnl->Hide();
	WelcomePnl->Show();
}

System::Void ProjectsAndPracticals::LoginPage::LoginScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ StudID=L"";
	String^ ModCode;
	String^ LecID;
	String^ AdminID;
	bool recordExists = false;
	bool isLecturer = false;
	bool isStudent = false;
	int LecUser = 0;
	int AdminUser = 0;
	String^ username = LoginScreenUsernameTxtBox->Text;
	String^ password = LoginScreenPasswordtxtBox->Text;
	String^ lecturerCheckString = L"Lec";
	String^ adminCheckString = L"Admin";
	
	for (int i = 0; i < 3; i++)
	{
		if (username[i] == lecturerCheckString[i]) ++LecUser;
	}

	for (int i = 0; i < 4; i++)
	{
		if (username[i] == adminCheckString[i]) ++AdminUser;
	}


	String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase;

	if (AdminUser == 4) {
		 cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.admintable WHERE AdminPassword = ('" + password + "') AND AdminID = ('" + username + "')", conDataBase);
	}
	else {
		if (LecUser == 3) {
			cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.lecturertable WHERE LecturerPassword = ('" + password + "') AND LecturerID = ('" + username + "')", conDataBase);
		}
		else {
		     cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.studentdetails WHERE StudentPassword = ('" + password + "') AND StudentID = ('" + username + "')", conDataBase);
		}// else niether admin nor Lecturer
	}// else not Admin user
	

	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{//while loop to check if user exists
			recordExists = true;
		}
		if (recordExists)
		{//Login Successful
			MessageBox::Show("Login SuccessFul!!!");
			if (AdminUser == 4) {
				this->Hide();
				AdminPage^ AdminPageForm = gcnew AdminPage();
				AdminPageForm->ShowDialog();// goto AdminPage if login clicked
			}
			else {
				if (LecUser == 3) {
					LecID = myReader->GetString("LecturerID");
					ModCode = myReader->GetString("ModuleCode");
					this->Hide();
					HomePage^ HomePageForm = gcnew HomePage(ModCode, LecID);
					HomePageForm->ShowDialog();// goto homepage if login clicked
				}
				else {
					
					StudID = myReader->GetString("StudentID");
					LogInLbl->Text = StudID;
					this->Hide();
					HomePage^ StudHomePageForm = gcnew HomePage(StudID);
					StudHomePageForm->ShowDialog();// goto homepage if login clicked
					}// else niether admin nor Lecturer
			}// else not Admin user
		}//if record exists
		else{
		MessageBox::Show("Login failed, please retry.");
		}//no record

	}
	catch (Exception^ ex)
	{
		//MessageBox::Show("Login failed, please retry.");
	}

	
}