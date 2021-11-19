#include "ModulePage.h"

System::Void ProjectsAndPracticals::ModulePage::setPracDateBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ dateChosen = PracticalsDTP->Text;
	int datelabelNum = 0;
	String^ pracChosen = pracsListBox->Text;
	String^ dateColumn;
	String^ dateSetToDB;

	if (Date1rbtn->Checked) 
	{
		dateColumn = L"AvailableDate1";
		datelabelNum = 1;
	}//avail1 col
	else 
	{
		if (Date2rbtn->Checked)
		{
			dateColumn = L"AvailableDate2";
			datelabelNum = 2;
		}//avail2 col
		else 
		{
			if (Date3rbtn->Checked)
			{
				dateColumn = L"AvailableDate3";
				datelabelNum = 3;
			}//avail2 col
			else
			{
				MessageBox::Show("Please select which date you want to set");
			}//nothing selected

		}//avail3 col
	}

	if (pracsListBox->SelectedIndex < 0)
	{
		MessageBox::Show("Please ensure that you select a practical to set a date");
    }//if no entry selected
	else {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE projecthelper.practicaltable SET " + dateColumn + " = ('" + dateChosen + "') WHERE PracticalTitle = ('" + pracChosen + "');", conDataBase);// do query
		MySqlDataReader^ myReader;
	
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Date is Set, CLICK ON PRACTICAL TO SEE NEW DATE!");
			while (myReader->Read())
			{
				
			}
			
		}//try
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not update");
		}//catch
	}// entry selected
}//set date button


System::Void ProjectsAndPracticals::ModulePage::pracsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	    String^ selectedPrac = pracsListBox->Text;
		Date1Lbl->Text = date1Label;
		Date2Lbl->Text = date2Label;
		Date3Lbl->Text = date3Label;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=M@ndible1!;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM projecthelper.practicaltable WHERE PracticalTitle = ('" +selectedPrac + "');", conDataBase);// do query
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			myReader->Read();
			Date1Lbl->Text = myReader->GetString("AvailableDate1");
			Date2Lbl->Text = myReader->GetString("AvailableDate2");
			Date3Lbl->Text = myReader->GetString("AvailableDate3");

			while (myReader->Read())
			{

			}

		}
		catch (Exception^ ex)
		{

		}
	

	
}

