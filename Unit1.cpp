//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "ActCtrl.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
     CreateDevice(TForm1::Handle);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        DownLoadFW();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        AnsiString strTmp="";
        int I2CSel=0;
        int MoveVal=0;

        strTmp = ComboBox1->Items->Strings[ComboBox1->ItemIndex];
        I2CSel = StrToInt(strTmp);

        strTmp = Edit2->Text;
        MoveVal =  StrToInt(strTmp);

         unsigned char retVal[16]={0};
         int usbDirection = 0x00;
         int usbReqCode = 0xB1;
         int usbValue = MoveVal;
         int usbIndex = I2CSel;
         long usbLength = 0x00;

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);

}

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
        unsigned char retVal[16]={0};
        int usbDirection = 0x00;
        int usbReqCode=0x00;
        int usbValue = 0x00;
        int usbIndex = 0x00;
        long usbLength = 0x00;

        if(CheckBox1->Checked)
        {
          usbReqCode = 0xD0;  // On VRE1 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }
        else
        {
          usbReqCode = 0xD1;  // off VRE1 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
        unsigned char retVal[16]={0};
        int usbDirection = 0x00;
        int usbReqCode=0x00;
        int usbValue = 0x00;
        int usbIndex = 0x01;
        long usbLength = 0x00;

        if(CheckBox2->Checked)
        {
          usbReqCode = 0xD0;  // On VRE2 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }
        else
        {
          usbReqCode = 0xD1;  // off VRE2 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
        unsigned char retVal[16]={0};
        int usbDirection = 0x00;
        int usbReqCode=0x00;
        int usbValue = 0x00;
        int usbIndex = 0x02;
        long usbLength = 0x00;

        if(CheckBox3->Checked)
        {
          usbReqCode = 0xD0;  // On VRE3 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }
        else
        {
          usbReqCode = 0xD1;  // off VRE3 Relay
          VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        AnsiString strTmp="";

        unsigned char retVal[16]={0};
        int usbDirection = 0x00;
        int usbReqCode=0xB0;   // Set device ID command for Actuator
        int usbValue = 0x00;
        int usbIndex = 0x00;
        long usbLength = 0x00;

        strTmp = Edit1->Text;
        usbValue =  StrToInt(strTmp);

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        AnsiString strTmp="";
        unsigned char retVal[16]={0};
        int usbDirection = 0x00;
        int usbReqCode=0xC0;   // Set device ID command for ADC
        int usbValue = 0x00;
        int usbIndex = 0x00;
        long usbLength = 0x00;

        strTmp = Edit3->Text;
        usbValue =  StrToInt(strTmp);

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
        AnsiString strTmp="";
        unsigned  char retVal[16]={0};
        int usbDirection = 0x01; // Set 0x01 for Read
        int usbReqCode = 0xC1;   // Read command for ADC
        int usbValue = 0x00;
        int usbIndex = 0x00;
        long usbLength = 0x02; //Return 2 Byte

        strTmp = Edit4->Text;
        usbIndex =  StrToInt(strTmp);

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        strTmp.sprintf("0x%x%x",retVal[0],retVal[1]);
        Edit5->Text = strTmp;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button5Click(TObject *Sender)
{
        AnsiString strTmp="";
        unsigned  char retVal[16]={0};
        int usbDirection = 0x00; // Set 0x00 for Write
        int usbReqCode=0xC2;   // Write command for ADC
        int usbValue = 0x00;
        int usbIndex = 0x00;
        long usbLength = 0x00;

        strTmp = Edit4->Text;
        usbIndex =  StrToInt(strTmp);

        strTmp = Edit5->Text;
        usbValue =  StrToInt(strTmp);

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        AnsiString strTmp="";
        int I2CSel=0;
        int MoveVal=0x40;

        strTmp = ComboBox1->Items->Strings[ComboBox1->ItemIndex];
        I2CSel = StrToInt(strTmp);

         unsigned char retVal[16]={0};
         int usbDirection = 0x00;
         int usbReqCode = 0xB2;
         int usbValue = MoveVal;
         int usbIndex = I2CSel;
         long usbLength = 0x00;

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
        AnsiString strTmp="";
        //unsigned  char retVal[16]={0};
        unsigned char retVal[8]={0};
        int usbDirection = 0x01; // Set 0x01 for Read
        int usbReqCode=0xB5;   // Read command for ADC
        int usbValue = 0x00;
        int usbIndex = 0x00;
        //long usbLength = 0x02; //Return 2 Byte
        long usbLength = 0x01; //Return 1 Byte

        strTmp = Edit6->Text;
        usbIndex =  StrToInt(strTmp);

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
        //strTmp.sprintf("0x%x%x",retVal[0],retVal[1]);
        strTmp.sprintf("0x%x",retVal[0]);
        Edit7->Text = strTmp;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
        AnsiString strTmp="";
        int I2CSel=0;
        int MoveVal=0x00;

        strTmp = ComboBox1->Items->Strings[ComboBox1->ItemIndex];
        I2CSel = StrToInt(strTmp);

         unsigned char retVal[16]={0};
         int usbDirection = 0x00;
         int usbReqCode = 0xB3;
         int usbValue = MoveVal;
         int usbIndex = I2CSel;
         long usbLength = 0x00;

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
AnsiString strTmp="";
        int I2CSel=0;
        int MoveVal=0x20;

        strTmp = ComboBox1->Items->Strings[ComboBox1->ItemIndex];
        I2CSel = StrToInt(strTmp);

         unsigned char retVal[16]={0};
         int usbDirection = 0x00;
         int usbReqCode = 0xB4;
         int usbValue = MoveVal;
         int usbIndex = I2CSel;
         long usbLength = 0x00;

        VenderComm(usbDirection,usbReqCode,usbValue,usbIndex,usbLength,*retVal);
}
//---------------------------------------------------------------------------

