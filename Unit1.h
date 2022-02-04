//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CyAPI.h"


//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TGroupBox *GroupBox1;
        TEdit *Edit2;
        TLabel *Label2;
        TButton *Button2;
        TLabel *Label1;
        TComboBox *ComboBox1;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TEdit *Edit1;
        TLabel *Label3;
        TButton *Button3;
        TLabel *Label4;
        TEdit *Edit3;
        TButton *Button4;
        TEdit *Edit4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Edit5;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TGroupBox *GroupBox4;
        TEdit *Edit6;
        TLabel *Label7;
        TButton *Button8;
        TEdit *Edit7;
        TLabel *Label8;
        TButton *Button9;
        TButton *Button10;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

        CCyUSBDevice *Act_Ctrl;


};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 