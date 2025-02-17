#include "Rubric.h"
#include "mysql.h"
#include "ModulePage.h"
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
	/// Summary for ViewStudentProject
	/// </summary>
	public ref class ViewStudentProject : public System::Windows::Forms::Form
	{
		String^ moduleCode;
	public:
		ViewStudentProject(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ViewStudentProject(String^ selectedMod)
		{
			moduleCode = selectedMod;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewStudentProject()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ CheckStudentProjbtn;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->CheckStudentProjbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(347, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Unmarked projects";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Aquamarine;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"218258369", L"219019159" });
			this->listBox1->Location = System::Drawing::Point(327, 144);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(279, 154);
			this->listBox1->TabIndex = 1;
			// 
			// CheckStudentProjbtn
			// 
			this->CheckStudentProjbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->CheckStudentProjbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckStudentProjbtn->Location = System::Drawing::Point(364, 354);
			this->CheckStudentProjbtn->Name = L"CheckStudentProjbtn";
			this->CheckStudentProjbtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->CheckStudentProjbtn->Size = System::Drawing::Size(206, 77);
			this->CheckStudentProjbtn->TabIndex = 2;
			this->CheckStudentProjbtn->Text = L"Mark Selected Student project ";
			this->CheckStudentProjbtn->UseVisualStyleBackColor = false;
			this->CheckStudentProjbtn->Click += gcnew System::EventHandler(this, &ViewStudentProject::CheckStudentProjbtn_Click);
			// 
			// ViewStudentProject
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->CheckStudentProjbtn);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ViewStudentProject";
			this->Text = L"ViewStudentProject";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

     

	private: System::Void CheckStudentProjbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ studId = listBox1->Text;
		this->Hide();
		Rubric^ RubricForm = gcnew Rubric(studId);
		RubricForm->ShowDialog();
	}

	};
}
