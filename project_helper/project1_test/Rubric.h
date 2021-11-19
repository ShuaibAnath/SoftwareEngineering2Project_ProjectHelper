#include "mysql.h"
#pragma once

//FORM5

namespace ProjectsAndPracticals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Imaging;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Rubric
	/// </summary>
	public ref class Rubric : public System::Windows::Forms::Form
	{
		String^ StudID;
	public:
		Rubric(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Rubric(String^ StudentId)
		{
			StudID = StudentId;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Rubric()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ MarkTextbox1;
	private: System::Windows::Forms::TextBox^ MarkTextbox2;

	protected:

	private: System::Windows::Forms::TextBox^ MarkTextbox3;

	private: System::Windows::Forms::TextBox^ MarkTextbox4;



	private: System::Windows::Forms::Button^ PrintButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ MarkTextbox7;

	private: System::Windows::Forms::Label^ MarkAchievedLabel;
	private: System::Windows::Forms::Button^ MarkAchievedButton;
	private: System::Windows::Forms::Button^ PrintRubricButton;
	private: System::Windows::Forms::TextBox^ MarkTextbox5;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;



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
			this->MarkTextbox1 = (gcnew System::Windows::Forms::TextBox());
			this->MarkTextbox2 = (gcnew System::Windows::Forms::TextBox());
			this->MarkTextbox3 = (gcnew System::Windows::Forms::TextBox());
			this->MarkTextbox4 = (gcnew System::Windows::Forms::TextBox());
			this->PrintButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->MarkTextbox7 = (gcnew System::Windows::Forms::TextBox());
			this->MarkAchievedLabel = (gcnew System::Windows::Forms::Label());
			this->MarkAchievedButton = (gcnew System::Windows::Forms::Button());
			this->PrintRubricButton = (gcnew System::Windows::Forms::Button());
			this->MarkTextbox5 = (gcnew System::Windows::Forms::TextBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->SuspendLayout();
			// 
			// MarkTextbox1
			// 
			this->MarkTextbox1->Location = System::Drawing::Point(542, 61);
			this->MarkTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox1->Multiline = true;
			this->MarkTextbox1->Name = L"MarkTextbox1";
			this->MarkTextbox1->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox1->TabIndex = 0;
			// 
			// MarkTextbox2
			// 
			this->MarkTextbox2->Location = System::Drawing::Point(542, 153);
			this->MarkTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox2->Multiline = true;
			this->MarkTextbox2->Name = L"MarkTextbox2";
			this->MarkTextbox2->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox2->TabIndex = 1;
			// 
			// MarkTextbox3
			// 
			this->MarkTextbox3->Location = System::Drawing::Point(542, 243);
			this->MarkTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox3->Multiline = true;
			this->MarkTextbox3->Name = L"MarkTextbox3";
			this->MarkTextbox3->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox3->TabIndex = 2;
			// 
			// MarkTextbox4
			// 
			this->MarkTextbox4->Location = System::Drawing::Point(542, 344);
			this->MarkTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox4->Multiline = true;
			this->MarkTextbox4->Name = L"MarkTextbox4";
			this->MarkTextbox4->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox4->TabIndex = 4;
			// 
			// PrintButton
			// 
			this->PrintButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrintButton->Location = System::Drawing::Point(1547, 862);
			this->PrintButton->Margin = System::Windows::Forms::Padding(4);
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(134, 65);
			this->PrintButton->TabIndex = 6;
			this->PrintButton->Text = L"Print";
			this->PrintButton->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(288, 86);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Introduction";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(288, 273);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Project Objectives";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(288, 458);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Project Specifications";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(288, 367);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Project Tools";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(288, 182);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Project Management";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(264, 818);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Conclusion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(294, 23);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Title";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(499, 23);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Mark achieved";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(288, 557);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Conclusion";
			// 
			// MarkTextbox7
			// 
			this->MarkTextbox7->Location = System::Drawing::Point(542, 535);
			this->MarkTextbox7->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox7->Multiline = true;
			this->MarkTextbox7->Name = L"MarkTextbox7";
			this->MarkTextbox7->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox7->TabIndex = 15;
			// 
			// MarkAchievedLabel
			// 
			this->MarkAchievedLabel->AutoSize = true;
			this->MarkAchievedLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MarkAchievedLabel->Location = System::Drawing::Point(548, 667);
			this->MarkAchievedLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->MarkAchievedLabel->Name = L"MarkAchievedLabel";
			this->MarkAchievedLabel->Size = System::Drawing::Size(34, 25);
			this->MarkAchievedLabel->TabIndex = 17;
			this->MarkAchievedLabel->Text = L"00";
			// 
			// MarkAchievedButton
			// 
			this->MarkAchievedButton->Location = System::Drawing::Point(352, 647);
			this->MarkAchievedButton->Name = L"MarkAchievedButton";
			this->MarkAchievedButton->Size = System::Drawing::Size(137, 64);
			this->MarkAchievedButton->TabIndex = 18;
			this->MarkAchievedButton->Text = L"Mark Achieved";
			this->MarkAchievedButton->UseVisualStyleBackColor = true;
			this->MarkAchievedButton->Click += gcnew System::EventHandler(this, &Rubric::MarkAchievedButton_Click);
			// 
			// PrintRubricButton
			// 
			this->PrintRubricButton->Location = System::Drawing::Point(779, 647);
			this->PrintRubricButton->Name = L"PrintRubricButton";
			this->PrintRubricButton->Size = System::Drawing::Size(137, 64);
			this->PrintRubricButton->TabIndex = 19;
			this->PrintRubricButton->Text = L"Print";
			this->PrintRubricButton->UseVisualStyleBackColor = true;
			this->PrintRubricButton->Click += gcnew System::EventHandler(this, &Rubric::PrintRubricButton_Click);
			// 
			// MarkTextbox5
			// 
			this->MarkTextbox5->Location = System::Drawing::Point(542, 440);
			this->MarkTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->MarkTextbox5->Multiline = true;
			this->MarkTextbox5->Name = L"MarkTextbox5";
			this->MarkTextbox5->Size = System::Drawing::Size(54, 64);
			this->MarkTextbox5->TabIndex = 3;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Rubric::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// Rubric
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(928, 731);
			this->Controls->Add(this->PrintRubricButton);
			this->Controls->Add(this->MarkAchievedButton);
			this->Controls->Add(this->MarkAchievedLabel);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->MarkTextbox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PrintButton);
			this->Controls->Add(this->MarkTextbox4);
			this->Controls->Add(this->MarkTextbox5);
			this->Controls->Add(this->MarkTextbox3);
			this->Controls->Add(this->MarkTextbox2);
			this->Controls->Add(this->MarkTextbox1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Rubric";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rubric";
			this->Load += gcnew System::EventHandler(this, &Rubric::Rubric_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Rubric_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MarkAchievedButton_Click(System::Object^ sender, System::EventArgs^ e) {

		//Convert the text from each textbox to integers
	//Add all the marks in the textbox and send to markobtained in projecthelper.project


		int textbox1 = System::Int32::Parse(MarkTextbox1->Text);
		int textbox2 = System::Int32::Parse(MarkTextbox2->Text);
		int textbox3 = System::Int32::Parse(MarkTextbox3->Text);
		int textbox4 = System::Int32::Parse(MarkTextbox4->Text);
		int textbox5 = System::Int32::Parse(MarkTextbox5->Text);
		int textbox6 = System::Int32::Parse(MarkTextbox7->Text);

		int TotalMark = textbox1 + textbox2 + textbox3 + textbox4 + textbox5 + textbox6;

		System::String^ total = TotalMark.ToString();

		if ((MarkTextbox1->Text == " ") || (MarkTextbox2->Text == " ") || (MarkTextbox3->Text == " ") || (MarkTextbox4->Text == " ") || (MarkTextbox5->Text == " ") || (MarkTextbox7->Text == " "))
		{//if textbox fields empty
			MessageBox::Show("Please ensure that you have entered marks in each section. ");
		}

		if (TotalMark < 100)
		{
			MarkAchievedLabel->Text = total;
			String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO projecthelper.project (projectID,MarksObtained,StudentProject,ModuleCode, StudentID) VALUES (001,'76', 'Computer Engineering Design 2', 'ENEL3CB', '219019159');;", conDataBase);// do query
			MySqlDataReader^ myReader;

			try
			{
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				while (myReader->Read())
				{

				}
			}
			catch (Exception^ ex)
			{

			}

		}
		else {
			MessageBox::Show("Mark cannot be above 100% ");
		}
	}
		   Bitmap^ memoryImage;
		   System::Drawing::Printing::PrintDocument^ docToPrint;
private: System::Void PrintRubricButton_Click(System::Object^ sender, System::EventArgs^ e) {

	PrintRubricButton->Visible = false;



	Graphics^ myGraphics = this->CreateGraphics();
	System::Drawing::Size s = this->Size;
	memoryImage = gcnew Bitmap(s.Width, s.Height, myGraphics);
	Graphics^ memoryGraphics = Graphics::FromImage(memoryImage);
	memoryGraphics->CopyFromScreen(this->Location.X, this->Location.Y, 0, 0, s);

	printDialog1->AllowSomePages = true;
	printDialog1->ShowHelp = true;

	PrintDocument^ docToPrint = gcnew PrintDocument();
	printDialog1->Document = docToPrint;

	System::Windows::Forms::DialogResult result = printDialog1->ShowDialog();
	System::Windows::Forms::MessageBox::Show(result.ToString());
	docToPrint->PrintPage += gcnew PrintPageEventHandler(this, &Rubric::printDocument1_PrintPage);


	if (result == System::Windows::Forms::DialogResult::OK)
	{
		docToPrint->Print();

	}
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	e->Graphics->DrawImage(memoryImage, 0, 0);
}
};
}
