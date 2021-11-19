#include "HomePage.h"

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
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ VersionLbl;
	protected:
	private: System::Windows::Forms::TextBox^ LoginScreenPasswordtxtBox;
	private: System::Windows::Forms::Label^ LoginScreenUsernameLbl;
	private: System::Windows::Forms::TextBox^ LoginScreenUsernameTxtBox;

	private: System::Windows::Forms::Button^ LoginscreenBackBtn;
	private: System::Windows::Forms::Button^ LoginScreenLoginBtn;
	private: System::Windows::Forms::Label^ LoginScreenPasswordLbl;
	private: System::Windows::Forms::Panel^ LoginPnl;
	private: System::Windows::Forms::Label^ LogInLbl;

	private: System::Windows::Forms::Button^ WelcomeScreenLoginBtn;

	private: System::Windows::Forms::Label^ WelcomeLbl;
	private: System::Windows::Forms::Panel^ WelcomePnl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->VersionLbl = (gcnew System::Windows::Forms::Label());
			this->LoginScreenPasswordtxtBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginScreenUsernameLbl = (gcnew System::Windows::Forms::Label());
			this->LoginScreenUsernameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginscreenBackBtn = (gcnew System::Windows::Forms::Button());
			this->LoginScreenLoginBtn = (gcnew System::Windows::Forms::Button());
			this->LoginScreenPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->LoginPnl = (gcnew System::Windows::Forms::Panel());
			this->LogInLbl = (gcnew System::Windows::Forms::Label());
			this->WelcomeScreenLoginBtn = (gcnew System::Windows::Forms::Button());
			this->WelcomeLbl = (gcnew System::Windows::Forms::Label());
			this->WelcomePnl = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LoginPnl->SuspendLayout();
			this->WelcomePnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// VersionLbl
			// 
			this->VersionLbl->AutoSize = true;
			this->VersionLbl->Location = System::Drawing::Point(428, 494);
			this->VersionLbl->Name = L"VersionLbl";
			this->VersionLbl->Size = System::Drawing::Size(60, 13);
			this->VersionLbl->TabIndex = 15;
			this->VersionLbl->Text = L"Version 1.0";
			// 
			// LoginScreenPasswordtxtBox
			// 
			this->LoginScreenPasswordtxtBox->Location = System::Drawing::Point(28, 219);
			this->LoginScreenPasswordtxtBox->Name = L"LoginScreenPasswordtxtBox";
			this->LoginScreenPasswordtxtBox->Size = System::Drawing::Size(216, 20);
			this->LoginScreenPasswordtxtBox->TabIndex = 8;
			this->LoginScreenPasswordtxtBox->UseSystemPasswordChar = true;
			// 
			// LoginScreenUsernameLbl
			// 
			this->LoginScreenUsernameLbl->AutoSize = true;
			this->LoginScreenUsernameLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenUsernameLbl->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenUsernameLbl->Location = System::Drawing::Point(25, 128);
			this->LoginScreenUsernameLbl->Name = L"LoginScreenUsernameLbl";
			this->LoginScreenUsernameLbl->Size = System::Drawing::Size(69, 17);
			this->LoginScreenUsernameLbl->TabIndex = 7;
			this->LoginScreenUsernameLbl->Text = L"Username";
			// 
			// LoginScreenUsernameTxtBox
			// 
			this->LoginScreenUsernameTxtBox->Location = System::Drawing::Point(28, 148);
			this->LoginScreenUsernameTxtBox->Name = L"LoginScreenUsernameTxtBox";
			this->LoginScreenUsernameTxtBox->Size = System::Drawing::Size(216, 20);
			this->LoginScreenUsernameTxtBox->TabIndex = 6;
			// 
			// LoginscreenBackBtn
			// 
			this->LoginscreenBackBtn->BackColor = System::Drawing::Color::PowderBlue;
			this->LoginscreenBackBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->LoginscreenBackBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginscreenBackBtn->ForeColor = System::Drawing::Color::Black;
			this->LoginscreenBackBtn->Location = System::Drawing::Point(158, 312);
			this->LoginscreenBackBtn->Name = L"LoginscreenBackBtn";
			this->LoginscreenBackBtn->Size = System::Drawing::Size(119, 38);
			this->LoginscreenBackBtn->TabIndex = 5;
			this->LoginscreenBackBtn->Text = L"BACK";
			this->LoginscreenBackBtn->UseVisualStyleBackColor = false;
			this->LoginscreenBackBtn->Click += gcnew System::EventHandler(this, &LoginPage::LoginscreenBackBtn_Click);
			// 
			// LoginScreenLoginBtn
			// 
			this->LoginScreenLoginBtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->LoginScreenLoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->LoginScreenLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenLoginBtn->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenLoginBtn->Location = System::Drawing::Point(3, 312);
			this->LoginScreenLoginBtn->Name = L"LoginScreenLoginBtn";
			this->LoginScreenLoginBtn->Size = System::Drawing::Size(111, 38);
			this->LoginScreenLoginBtn->TabIndex = 4;
			this->LoginScreenLoginBtn->Text = L"LOG IN";
			this->LoginScreenLoginBtn->UseVisualStyleBackColor = false;
			this->LoginScreenLoginBtn->Click += gcnew System::EventHandler(this, &LoginPage::LoginScreenLoginBtn_Click);
			// 
			// LoginScreenPasswordLbl
			// 
			this->LoginScreenPasswordLbl->AutoSize = true;
			this->LoginScreenPasswordLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginScreenPasswordLbl->ForeColor = System::Drawing::Color::Black;
			this->LoginScreenPasswordLbl->Location = System::Drawing::Point(28, 199);
			this->LoginScreenPasswordLbl->Name = L"LoginScreenPasswordLbl";
			this->LoginScreenPasswordLbl->Size = System::Drawing::Size(66, 17);
			this->LoginScreenPasswordLbl->TabIndex = 9;
			this->LoginScreenPasswordLbl->Text = L"Password";
			// 
			// LoginPnl
			// 
			this->LoginPnl->BackColor = System::Drawing::Color::Transparent;
			this->LoginPnl->Controls->Add(this->LoginScreenPasswordLbl);
			this->LoginPnl->Controls->Add(this->LoginScreenPasswordtxtBox);
			this->LoginPnl->Controls->Add(this->LoginScreenUsernameLbl);
			this->LoginPnl->Controls->Add(this->LoginScreenUsernameTxtBox);
			this->LoginPnl->Controls->Add(this->LoginscreenBackBtn);
			this->LoginPnl->Controls->Add(this->LoginScreenLoginBtn);
			this->LoginPnl->Controls->Add(this->LogInLbl);
			this->LoginPnl->Location = System::Drawing::Point(315, 56);
			this->LoginPnl->Name = L"LoginPnl";
			this->LoginPnl->Size = System::Drawing::Size(280, 428);
			this->LoginPnl->TabIndex = 13;
			// 
			// LogInLbl
			// 
			this->LogInLbl->AutoSize = true;
			this->LogInLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LogInLbl->ForeColor = System::Drawing::Color::Black;
			this->LogInLbl->Location = System::Drawing::Point(89, 24);
			this->LogInLbl->Name = L"LogInLbl";
			this->LogInLbl->Size = System::Drawing::Size(99, 37);
			this->LogInLbl->TabIndex = 1;
			this->LogInLbl->Text = L"LOGIN";
			// 
			// WelcomeScreenLoginBtn
			// 
			this->WelcomeScreenLoginBtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->WelcomeScreenLoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WelcomeScreenLoginBtn->ForeColor = System::Drawing::Color::Black;
			this->WelcomeScreenLoginBtn->Location = System::Drawing::Point(94, 276);
			this->WelcomeScreenLoginBtn->Name = L"WelcomeScreenLoginBtn";
			this->WelcomeScreenLoginBtn->Size = System::Drawing::Size(138, 38);
			this->WelcomeScreenLoginBtn->TabIndex = 1;
			this->WelcomeScreenLoginBtn->Text = L"LOG IN";
			this->WelcomeScreenLoginBtn->UseVisualStyleBackColor = false;
			this->WelcomeScreenLoginBtn->Click += gcnew System::EventHandler(this, &LoginPage::WelcomeScreenLoginBtn_Click);
			// 
			// WelcomeLbl
			// 
			this->WelcomeLbl->AutoSize = true;
			this->WelcomeLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WelcomeLbl->ForeColor = System::Drawing::Color::Black;
			this->WelcomeLbl->Location = System::Drawing::Point(87, 37);
			this->WelcomeLbl->Name = L"WelcomeLbl";
			this->WelcomeLbl->Size = System::Drawing::Size(148, 37);
			this->WelcomeLbl->TabIndex = 0;
			this->WelcomeLbl->Text = L"WELCOME";
			// 
			// WelcomePnl
			// 
			this->WelcomePnl->BackColor = System::Drawing::Color::Transparent;
			this->WelcomePnl->Controls->Add(this->label2);
			this->WelcomePnl->Controls->Add(this->label1);
			this->WelcomePnl->Controls->Add(this->WelcomeScreenLoginBtn);
			this->WelcomePnl->Controls->Add(this->WelcomeLbl);
			this->WelcomePnl->Location = System::Drawing::Point(299, 56);
			this->WelcomePnl->Name = L"WelcomePnl";
			this->WelcomePnl->Size = System::Drawing::Size(331, 355);
			this->WelcomePnl->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(57, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PROJECT HELPER";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(138, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"TO";
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->ClientSize = System::Drawing::Size(928, 534);
			this->Controls->Add(this->WelcomePnl);
			this->Controls->Add(this->VersionLbl);
			this->Controls->Add(this->LoginPnl);
			this->Name = L"LoginPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome Page";
			this->LoginPnl->ResumeLayout(false);
			this->LoginPnl->PerformLayout();
			this->WelcomePnl->ResumeLayout(false);
			this->WelcomePnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void WelcomeScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void LoginscreenBackBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void LoginScreenLoginBtn_Click(System::Object^ sender, System::EventArgs^ e);

};
}
