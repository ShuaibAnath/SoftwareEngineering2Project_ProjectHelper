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
	/// Summary for StudentModulePage
	/// </summary>
	public ref class StudentModulePage : public System::Windows::Forms::Form
	{

		String^ StudentModuleCode;
	public:
		StudentModulePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		StudentModulePage(String^ ModuleCode)
		{
			StudentModuleCode = ModuleCode;
			InitializeComponent();
			getAvailableDates();
			PopulateListBoxStudentPracs();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentModulePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ PracticalsLabelD;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ ProjectsLabelD;
	private: System::Windows::Forms::Label^ ModuleCodeLabelD;
	private: System::Windows::Forms::Label^ selectpraclabel;

	private: System::Windows::Forms::Button^ submitproj;

	private: System::Windows::Forms::Label^ bookdatelabel;
	private: System::Windows::Forms::Button^ setdate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ StupracsListBox;
	private: System::Windows::Forms::ListBox^ StuProjList;
	private: System::Windows::Forms::GroupBox^ StuDateGpBox;
	private: System::Windows::Forms::RadioButton^ Date3rbtn;
	private: System::Windows::Forms::RadioButton^ Date2rbtn;
	private: System::Windows::Forms::RadioButton^ Date1rbtn;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->StuDateGpBox = (gcnew System::Windows::Forms::GroupBox());
			this->Date3rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->Date2rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->Date1rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->StupracsListBox = (gcnew System::Windows::Forms::ListBox());
			this->setdate = (gcnew System::Windows::Forms::Button());
			this->bookdatelabel = (gcnew System::Windows::Forms::Label());
			this->selectpraclabel = (gcnew System::Windows::Forms::Label());
			this->PracticalsLabelD = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->StuProjList = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->submitproj = (gcnew System::Windows::Forms::Button());
			this->ProjectsLabelD = (gcnew System::Windows::Forms::Label());
			this->ModuleCodeLabelD = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->StuDateGpBox->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->StuDateGpBox);
			this->panel1->Controls->Add(this->StupracsListBox);
			this->panel1->Controls->Add(this->setdate);
			this->panel1->Controls->Add(this->bookdatelabel);
			this->panel1->Controls->Add(this->selectpraclabel);
			this->panel1->Controls->Add(this->PracticalsLabelD);
			this->panel1->Location = System::Drawing::Point(334, 34);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 468);
			this->panel1->TabIndex = 0;
			// 
			// StuDateGpBox
			// 
			this->StuDateGpBox->Controls->Add(this->Date3rbtn);
			this->StuDateGpBox->Controls->Add(this->Date2rbtn);
			this->StuDateGpBox->Controls->Add(this->Date1rbtn);
			this->StuDateGpBox->Location = System::Drawing::Point(61, 243);
			this->StuDateGpBox->Name = L"StuDateGpBox";
			this->StuDateGpBox->Size = System::Drawing::Size(150, 132);
			this->StuDateGpBox->TabIndex = 25;
			this->StuDateGpBox->TabStop = false;
			this->StuDateGpBox->Text = L"Select date to set";
			// 
			// Date3rbtn
			// 
			this->Date3rbtn->AutoSize = true;
			this->Date3rbtn->Location = System::Drawing::Point(13, 109);
			this->Date3rbtn->Name = L"Date3rbtn";
			this->Date3rbtn->Size = System::Drawing::Size(60, 17);
			this->Date3rbtn->TabIndex = 2;
			this->Date3rbtn->TabStop = true;
			this->Date3rbtn->Text = L" Date 3";
			this->Date3rbtn->UseVisualStyleBackColor = true;
			// 
			// Date2rbtn
			// 
			this->Date2rbtn->AutoSize = true;
			this->Date2rbtn->Location = System::Drawing::Point(13, 71);
			this->Date2rbtn->Name = L"Date2rbtn";
			this->Date2rbtn->Size = System::Drawing::Size(57, 17);
			this->Date2rbtn->TabIndex = 1;
			this->Date2rbtn->TabStop = true;
			this->Date2rbtn->Text = L"Date 2";
			this->Date2rbtn->UseVisualStyleBackColor = true;
			// 
			// Date1rbtn
			// 
			this->Date1rbtn->AutoSize = true;
			this->Date1rbtn->Location = System::Drawing::Point(13, 33);
			this->Date1rbtn->Name = L"Date1rbtn";
			this->Date1rbtn->Size = System::Drawing::Size(57, 17);
			this->Date1rbtn->TabIndex = 0;
			this->Date1rbtn->TabStop = true;
			this->Date1rbtn->Text = L"Date 1";
			this->Date1rbtn->UseVisualStyleBackColor = true;
			// 
			// StupracsListBox
			// 
			this->StupracsListBox->BackColor = System::Drawing::Color::Aquamarine;
			this->StupracsListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StupracsListBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StupracsListBox->FormattingEnabled = true;
			this->StupracsListBox->ItemHeight = 30;
			this->StupracsListBox->Location = System::Drawing::Point(21, 91);
			this->StupracsListBox->Name = L"StupracsListBox";
			this->StupracsListBox->Size = System::Drawing::Size(223, 94);
			this->StupracsListBox->TabIndex = 5;
			this->StupracsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentModulePage::StupracsListBox_SelectedIndexChanged);
			// 
			// setdate
			// 
			this->setdate->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->setdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->setdate->Location = System::Drawing::Point(89, 401);
			this->setdate->Margin = System::Windows::Forms::Padding(2);
			this->setdate->Name = L"setdate";
			this->setdate->Size = System::Drawing::Size(89, 35);
			this->setdate->TabIndex = 3;
			this->setdate->Text = L"BOOK DATE";
			this->setdate->UseVisualStyleBackColor = false;
			this->setdate->Click += gcnew System::EventHandler(this, &StudentModulePage::setdate_Click);
			// 
			// bookdatelabel
			// 
			this->bookdatelabel->AutoSize = true;
			this->bookdatelabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookdatelabel->Location = System::Drawing::Point(17, 188);
			this->bookdatelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bookdatelabel->Name = L"bookdatelabel";
			this->bookdatelabel->Size = System::Drawing::Size(168, 21);
			this->bookdatelabel->TabIndex = 3;
			this->bookdatelabel->Text = L"Select practical date:";
			// 
			// selectpraclabel
			// 
			this->selectpraclabel->AutoSize = true;
			this->selectpraclabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectpraclabel->Location = System::Drawing::Point(17, 47);
			this->selectpraclabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->selectpraclabel->Name = L"selectpraclabel";
			this->selectpraclabel->Size = System::Drawing::Size(181, 21);
			this->selectpraclabel->TabIndex = 1;
			this->selectpraclabel->Text = L"Select practical below:";
			// 
			// PracticalsLabelD
			// 
			this->PracticalsLabelD->AutoSize = true;
			this->PracticalsLabelD->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PracticalsLabelD->Location = System::Drawing::Point(84, 15);
			this->PracticalsLabelD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PracticalsLabelD->Name = L"PracticalsLabelD";
			this->PracticalsLabelD->Size = System::Drawing::Size(95, 25);
			this->PracticalsLabelD->TabIndex = 0;
			this->PracticalsLabelD->Text = L"Practicals";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->StuProjList);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->submitproj);
			this->panel2->Controls->Add(this->ProjectsLabelD);
			this->panel2->Location = System::Drawing::Point(637, 34);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 468);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			// 
			// StuProjList
			// 
			this->StuProjList->BackColor = System::Drawing::Color::Aquamarine;
			this->StuProjList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StuProjList->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StuProjList->FormattingEnabled = true;
			this->StuProjList->ItemHeight = 30;
			this->StuProjList->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fan Control", L"Line following Robot", L"Alarm Clock " });
			this->StuProjList->Location = System::Drawing::Point(31, 91);
			this->StuProjList->Name = L"StuProjList";
			this->StuProjList->Size = System::Drawing::Size(223, 94);
			this->StuProjList->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 47);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 21);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Select project below:";
			// 
			// submitproj
			// 
			this->submitproj->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->submitproj->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitproj->Location = System::Drawing::Point(100, 401);
			this->submitproj->Margin = System::Windows::Forms::Padding(2);
			this->submitproj->Name = L"submitproj";
			this->submitproj->Size = System::Drawing::Size(96, 35);
			this->submitproj->TabIndex = 2;
			this->submitproj->Text = L"SUBMIT PROJECT";
			this->submitproj->UseVisualStyleBackColor = false;
			this->submitproj->Click += gcnew System::EventHandler(this, &StudentModulePage::submitproj_Click);
			// 
			// ProjectsLabelD
			// 
			this->ProjectsLabelD->AutoSize = true;
			this->ProjectsLabelD->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ProjectsLabelD->Location = System::Drawing::Point(96, 15);
			this->ProjectsLabelD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ProjectsLabelD->Name = L"ProjectsLabelD";
			this->ProjectsLabelD->Size = System::Drawing::Size(83, 25);
			this->ProjectsLabelD->TabIndex = 1;
			this->ProjectsLabelD->Text = L"Projects";
			// 
			// ModuleCodeLabelD
			// 
			this->ModuleCodeLabelD->AutoSize = true;
			this->ModuleCodeLabelD->BackColor = System::Drawing::Color::Transparent;
			this->ModuleCodeLabelD->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModuleCodeLabelD->ForeColor = System::Drawing::Color::Black;
			this->ModuleCodeLabelD->Location = System::Drawing::Point(415, 9);
			this->ModuleCodeLabelD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ModuleCodeLabelD->Name = L"ModuleCodeLabelD";
			this->ModuleCodeLabelD->Size = System::Drawing::Size(91, 25);
			this->ModuleCodeLabelD->TabIndex = 1;
			this->ModuleCodeLabelD->Text = L"ENEL2AE";
			this->ModuleCodeLabelD->Click += gcnew System::EventHandler(this, &StudentModulePage::ModuleCodeLabelD_Click);
			// 
			// StudentModulePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->ModuleCodeLabelD);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentModulePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentModulePage";
			this->Load += gcnew System::EventHandler(this, &StudentModulePage::StudentModulePage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->StuDateGpBox->ResumeLayout(false);
			this->StuDateGpBox->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PopulateListBoxStudentPracs(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.practicaltable WHERE ModuleCode = ('" + StudentModuleCode + "');", conDataBase);// do query
		MySqlDataReader^ myReader;

		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				String^ PracticalTitle;
				PracticalTitle = myReader->GetString("PracticalTitle");
				StupracsListBox->Items->Add(PracticalTitle);
			}

		}
		catch (Exception^ ex)
		{

		}
	}

	private: System::Void getAvailableDates(void)
	{
		 
	}

	private: System::Void ModuleCodeLabelD_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StudentModulePage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StupracsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedPrac = StupracsListBox->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.practicaltable WHERE PracticalTitle = ('" + selectedPrac + "');", conDataBase);// do query
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			myReader->Read();
			Date1rbtn->Text = myReader->GetString("AvailableDate1");
			Date2rbtn->Text = myReader->GetString("AvailableDate2");
			Date3rbtn->Text = myReader->GetString("AvailableDate3");
			while (myReader->Read())
			{

			}

		}
		catch (Exception^ ex)
		{

		}
	}
private: System::Void submitproj_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Project choice SAVED");
}
private: System::Void setdate_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO projecthelper.studentpracticals (StudentID,BookedDate,PracticalTitle) VALUES('217147258','2021-11-30', 'RC Transients');", conDataBase);// do query
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		myReader->Read();
		MessageBox::Show("Date Successfully booked!!");
		while (myReader->Read())
		{

		}

	}
	catch (Exception^ ex)
	{

	}
}
};
}
