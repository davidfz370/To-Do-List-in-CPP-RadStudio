//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::AddButtonClick(TObject *Sender)
{

	//TaskEdit text inside new string variable
	String taskText = TaskEdit->Text;

	//if add null item then return. Else add it to list
	if (taskText=="") {
		return;
	} else{

	TaskListBox->Items->Add(taskText);

	}


	TaskEdit->Text="";



}
//---------------------------------------------------------------------------
void __fastcall TForm2::TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	  int index = Item->Index;
	  TaskListBox->Items->Delete(index);

}
//---------------------------------------------------------------------------
