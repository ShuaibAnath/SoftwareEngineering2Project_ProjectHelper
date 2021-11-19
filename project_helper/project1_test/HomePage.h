#include "ModulePage.h"
#include "ViewStudentProject.h"
#include <mysql.h>
#pragma once

namespace ProjectsAndPracticals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
		bool isStudent = false;
		bool isLecturer = false;
		String^ LecID;
		String^ moduleCode;
		String^ StudID;
		bool hasProjects = false;

	public:
		HomePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		HomePage(String^ moduleCode, String^ LecturerID)
		{
			LecID = LecturerID;
			this->moduleCode = moduleCode;
			isLecturer = true;
			InitializeComponent();
			PopulateListBoxLecturer();
			//
			//TODO: Add the constructor code here
			//
		}

		HomePage(String^ StudentID)
		{
			StudID = StudentID;
			isStudent = true;
			InitializeComponent();
			PopulateListBoxStudent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ LoginPnl;
	protected:



	private: System::Windows::Forms::Label^ LogInLbl;
	private: System::Windows::Forms::ListBox^ ModuleListBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ WelcomeScreenLoginBtn;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LoginPnl = (gcnew System::Windows::Forms::Panel());
			this->WelcomeScreenLoginBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ModuleListBox = (gcnew System::Windows::Forms::ListBox());
			this->LogInLbl = (gcnew System::Windows::Forms::Label());
			this->LoginPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginPnl
			// 
			this->LoginPnl->BackColor = System::Drawing::Color::Transparent;
			this->LoginPnl->Controls->Add(this->WelcomeScreenLoginBtn);
			this->LoginPnl->Controls->Add(this->label1);
			this->LoginPnl->Controls->Add(this->ModuleListBox);
			this->LoginPnl->Controls->Add(this->LogInLbl);
			this->LoginPnl->Location = System::Drawing::Point(226, 14);
			this->LoginPnl->Margin = System::Windows::Forms::Padding(5);
			this->LoginPnl->Name = L"LoginPnl";
			this->LoginPnl->Size = System::Drawing::Size(466, 496);
			this->LoginPnl->TabIndex = 14;
			// 
			// WelcomeScreenLoginBtn
			// 
			this->WelcomeScreenLoginBtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->WelcomeScreenLoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WelcomeScreenLoginBtn->ForeColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Location = System::Drawing::Point(71, 407);
			this->WelcomeScreenLoginBtn->Margin = System::Windows::Forms::Padding(5);
			this->WelcomeScreenLoginBtn->Name = L"WelcomeScreenLoginBtn";
			this->WelcomeScreenLoginBtn->Size = System::Drawing::Size(307, 61);
			this->WelcomeScreenLoginBtn->TabIndex = 15;
			this->WelcomeScreenLoginBtn->Text = L"GO TO MODULE";
			this->WelcomeScreenLoginBtn->UseVisualStyleBackColor = false;
			this->WelcomeScreenLoginBtn->Click += gcnew System::EventHandler(this, &HomePage::WelcomeScreenLoginBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(130, 90);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select a module below:";
			// 
			// ModuleListBox
			// 
			this->ModuleListBox->BackColor = System::Drawing::Color::Aquamarine;
			this->ModuleListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModuleListBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModuleListBox->FormattingEnabled = true;
			this->ModuleListBox->ItemHeight = 30;
			//this->ModuleListBox->Items->Add(this->moduleCode);
			this->ModuleListBox->Location = System::Drawing::Point(51, 133);
			this->ModuleListBox->Margin = System::Windows::Forms::Padding(5);
			this->ModuleListBox->Name = L"ModuleListBox";
			this->ModuleListBox->Size = System::Drawing::Size(369, 244);
			this->ModuleListBox->TabIndex = 2;
			// 
			// LogInLbl
			// 
			this->LogInLbl->AutoSize = true;
			this->LogInLbl->BackColor = System::Drawing::Color::Transparent;
			this->LogInLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LogInLbl->ForeColor = System::Drawing::Color::Black;
			this->LogInLbl->Location = System::Drawing::Point(157, 28);
			this->LogInLbl->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->LogInLbl->Name = L"LogInLbl";
			this->LogInLbl->Size = System::Drawing::Size(128, 37);
			this->LogInLbl->TabIndex = 1;
			this->LogInLbl->Text = L"Modules";
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->LoginPnl);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Location = System::Drawing::Point(60, 146);
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"HomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HomePage";
			this->LoginPnl->ResumeLayout(false);
			this->LoginPnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e);
	

	private: System::Void PopulateListBoxStudent(void) {

		INT32 checkProject = 0;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.moduletable WHERE StudentID = ('" + StudID + "');", conDataBase);// do query
		MySqlDataReader^ myReader;

		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				String^ StuModule;
				checkProject = myReader->GetInt32("hasProject");
				if (checkProject == 1)
				{ 
					hasProjects = true; 
				}
				StuModule = myReader->GetString("ModuleCode");
				ModuleListBox->Items->Add(StuModule);
			}

		}
		catch (Exception^ ex)
		{

		}
	}



	private: System::Void PopulateListBoxLecturer(void) {
		INT32 checkProject = 0;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.lecturertable WHERE LecturerID = ('" + LecID + "');", conDataBase);// do query
		MySqlDataReader^ myReader;

		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				String^ lecModuleCode;
				lecModuleCode = myReader->GetString("ModuleCode");
				ModuleListBox->Items->Add(lecModuleCode);
			}

		}
		catch (Exception^ ex)
		{

		}
	}

};
}//
