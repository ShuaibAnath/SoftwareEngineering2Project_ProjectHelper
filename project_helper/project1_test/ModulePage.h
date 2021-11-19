#include <mysql.h>
#include "StudentModulePage.h"

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
	/// Summary for ModulePage
	/// </summary>
	public ref class ModulePage : public System::Windows::Forms::Form
	{
		String^ ModuleCodeHeading = L"NAN";
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ Date3Lbl;

	private: System::Windows::Forms::Label^ Date2Lbl;

	private: System::Windows::Forms::Label^ Date1Lbl;
	private: System::Windows::Forms::GroupBox^ DatedGpBox;
	private: System::Windows::Forms::RadioButton^ Date3rbtn;


	private: System::Windows::Forms::RadioButton^ Date2rbtn;

	private: System::Windows::Forms::RadioButton^ Date1rbtn;




		   bool hasProject = false;
		   String^ date1Label = L"Date 1(NOT CHOSEN)";
		   String^ date2Label = L"Date 2(NOT CHOSEN)";





		   String^ date3Label = L"Date 3(NOT CHOSEN)";
		
	public:
		ModulePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		ModulePage(String^ Modulecode)
		{
			ModuleCodeHeading = Modulecode;
			InitializeComponent();
			PopulatePracList();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModulePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ moduleCodeLbl;
	private: System::Windows::Forms::Panel^ PracticalsPnl;

	private: System::Windows::Forms::Button^ setPracDateBtn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ pracsListBox;

	private: System::Windows::Forms::Label^ label2;









	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::DateTimePicker^ PracticalsDTP;










	protected:

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
			this->moduleCodeLbl = (gcnew System::Windows::Forms::Label());
			this->PracticalsPnl = (gcnew System::Windows::Forms::Panel());
			this->DatedGpBox = (gcnew System::Windows::Forms::GroupBox());
			this->Date3rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->Date2rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->Date1rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Date3Lbl = (gcnew System::Windows::Forms::Label());
			this->Date2Lbl = (gcnew System::Windows::Forms::Label());
			this->Date1Lbl = (gcnew System::Windows::Forms::Label());
			this->PracticalsDTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->setPracDateBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pracsListBox = (gcnew System::Windows::Forms::ListBox());
			this->PracticalsPnl->SuspendLayout();
			this->DatedGpBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// moduleCodeLbl
			// 
			this->moduleCodeLbl->AutoSize = true;
			this->moduleCodeLbl->BackColor = System::Drawing::Color::Transparent;
			this->moduleCodeLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->moduleCodeLbl->ForeColor = System::Drawing::Color::Black;
			this->moduleCodeLbl->Location = System::Drawing::Point(360, 9);
			this->moduleCodeLbl->Name = L"moduleCodeLbl";
			this->moduleCodeLbl->Size = System::Drawing::Size(189, 37);
			this->moduleCodeLbl->TabIndex = 2;
			this->moduleCodeLbl->Text = L"Module Code";
			// 
			// PracticalsPnl
			// 
			this->PracticalsPnl->BackColor = System::Drawing::Color::Transparent;
			this->PracticalsPnl->Controls->Add(this->DatedGpBox);
			this->PracticalsPnl->Controls->Add(this->label9);
			this->PracticalsPnl->Controls->Add(this->Date3Lbl);
			this->PracticalsPnl->Controls->Add(this->Date2Lbl);
			this->PracticalsPnl->Controls->Add(this->Date1Lbl);
			this->PracticalsPnl->Controls->Add(this->PracticalsDTP);
			this->PracticalsPnl->Controls->Add(this->label4);
			this->PracticalsPnl->Controls->Add(this->label2);
			this->PracticalsPnl->Controls->Add(this->setPracDateBtn);
			this->PracticalsPnl->Controls->Add(this->label1);
			this->PracticalsPnl->Controls->Add(this->pracsListBox);
			this->PracticalsPnl->Location = System::Drawing::Point(270, 51);
			this->PracticalsPnl->Name = L"PracticalsPnl";
			this->PracticalsPnl->Size = System::Drawing::Size(400, 474);
			this->PracticalsPnl->TabIndex = 15;
			// 
			// DatedGpBox
			// 
			this->DatedGpBox->Controls->Add(this->Date3rbtn);
			this->DatedGpBox->Controls->Add(this->Date2rbtn);
			this->DatedGpBox->Controls->Add(this->Date1rbtn);
			this->DatedGpBox->Location = System::Drawing::Point(205, 326);
			this->DatedGpBox->Name = L"DatedGpBox";
			this->DatedGpBox->Size = System::Drawing::Size(150, 132);
			this->DatedGpBox->TabIndex = 24;
			this->DatedGpBox->TabStop = false;
			this->DatedGpBox->Text = L"Select date to set";
			// 
			// Date3rbtn
			// 
			this->Date3rbtn->AutoSize = true;
			this->Date3rbtn->Location = System::Drawing::Point(13, 107);
			this->Date3rbtn->Name = L"Date3rbtn";
			this->Date3rbtn->Size = System::Drawing::Size(76, 17);
			this->Date3rbtn->TabIndex = 2;
			this->Date3rbtn->TabStop = true;
			this->Date3rbtn->Text = L"Set Date 3";
			this->Date3rbtn->UseVisualStyleBackColor = true;
			// 
			// Date2rbtn
			// 
			this->Date2rbtn->AutoSize = true;
			this->Date2rbtn->Location = System::Drawing::Point(13, 74);
			this->Date2rbtn->Name = L"Date2rbtn";
			this->Date2rbtn->Size = System::Drawing::Size(76, 17);
			this->Date2rbtn->TabIndex = 1;
			this->Date2rbtn->TabStop = true;
			this->Date2rbtn->Text = L"Set Date 2";
			this->Date2rbtn->UseVisualStyleBackColor = true;
			// 
			// Date1rbtn
			// 
			this->Date1rbtn->AutoSize = true;
			this->Date1rbtn->Location = System::Drawing::Point(13, 41);
			this->Date1rbtn->Name = L"Date1rbtn";
			this->Date1rbtn->Size = System::Drawing::Size(76, 17);
			this->Date1rbtn->TabIndex = 0;
			this->Date1rbtn->TabStop = true;
			this->Date1rbtn->Text = L"Set Date 1";
			this->Date1rbtn->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(39, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 21);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Chosen dates";
			// 
			// Date3Lbl
			// 
			this->Date3Lbl->AutoSize = true;
			this->Date3Lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date3Lbl->Location = System::Drawing::Point(27, 429);
			this->Date3Lbl->Name = L"Date3Lbl";
			this->Date3Lbl->Size = System::Drawing::Size(167, 21);
			this->Date3Lbl->TabIndex = 22;
			this->Date3Lbl->Text = L"Date 3(NOT CHOSEN";
			// 
			// Date2Lbl
			// 
			this->Date2Lbl->AutoSize = true;
			this->Date2Lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date2Lbl->Location = System::Drawing::Point(26, 396);
			this->Date2Lbl->Name = L"Date2Lbl";
			this->Date2Lbl->Size = System::Drawing::Size(173, 21);
			this->Date2Lbl->TabIndex = 21;
			this->Date2Lbl->Text = L"Date 2(NOT CHOSEN)";
			// 
			// Date1Lbl
			// 
			this->Date1Lbl->AutoSize = true;
			this->Date1Lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date1Lbl->Location = System::Drawing::Point(26, 363);
			this->Date1Lbl->Name = L"Date1Lbl";
			this->Date1Lbl->Size = System::Drawing::Size(177, 21);
			this->Date1Lbl->TabIndex = 17;
			this->Date1Lbl->Text = L"Date 1(NOT CHOSEN) ";
			// 
			// PracticalsDTP
			// 
			this->PracticalsDTP->CustomFormat = L"yyyy/MM/dd";
			this->PracticalsDTP->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->PracticalsDTP->Location = System::Drawing::Point(88, 232);
			this->PracticalsDTP->Name = L"PracticalsDTP";
			this->PracticalsDTP->Size = System::Drawing::Size(215, 20);
			this->PracticalsDTP->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(129, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 21);
			this->label4->TabIndex = 18;
			this->label4->Text = L"PRACTICALS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(99, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 21);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Choose a date below:";
			// 
			// setPracDateBtn
			// 
			this->setPracDateBtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->setPracDateBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->setPracDateBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->setPracDateBtn->ForeColor = System::Drawing::Color::Black;
			this->setPracDateBtn->Location = System::Drawing::Point(116, 254);
			this->setPracDateBtn->Name = L"setPracDateBtn";
			this->setPracDateBtn->Size = System::Drawing::Size(138, 38);
			this->setPracDateBtn->TabIndex = 15;
			this->setPracDateBtn->Text = L"SET DATE";
			this->setPracDateBtn->UseVisualStyleBackColor = false;
			this->setPracDateBtn->Click += gcnew System::EventHandler(this, &ModulePage::setPracDateBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(99, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select practical below:";
			// 
			// pracsListBox
			// 
			this->pracsListBox->BackColor = System::Drawing::Color::Aquamarine;
			this->pracsListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pracsListBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pracsListBox->FormattingEnabled = true;
			this->pracsListBox->ItemHeight = 30;
			this->pracsListBox->Location = System::Drawing::Point(75, 85);
			this->pracsListBox->Name = L"pracsListBox";
			this->pracsListBox->Size = System::Drawing::Size(223, 94);
			this->pracsListBox->TabIndex = 2;
			this->pracsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ModulePage::pracsListBox_SelectedIndexChanged);
			// 
			// ModulePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->moduleCodeLbl);
			this->Controls->Add(this->PracticalsPnl);
			this->Name = L"ModulePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModulePage";
			this->PracticalsPnl->ResumeLayout(false);
			this->PracticalsPnl->PerformLayout();
			this->DatedGpBox->ResumeLayout(false);
			this->DatedGpBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PopulatePracList(void) 
	{
		this->moduleCodeLbl->Text = ModuleCodeHeading;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.practicaltable WHERE ModuleCode = ('" + ModuleCodeHeading + "');", conDataBase);// do query
		MySqlDataReader^ myReader;

		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				String^ Practical;
				Practical = myReader->GetString("PracticalTitle");
				
				pracsListBox->Items->Add(Practical);
			}
		}
		catch (Exception^ ex)
		{

		}
	}

	private: System::Void setPracDateBtn_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void pracsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
