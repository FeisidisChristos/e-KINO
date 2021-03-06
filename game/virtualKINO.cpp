//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "virtualKINO.h"
#include "systemGame.h"
#include "systemPlayer.h"
#include "systemMain.h"
#include "systemTime.h"
#include "systemLottoCounter.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  Form1->BorderStyle=bsSingle;
  Form1->ClientHeight=725;
  Form1->ClientWidth=1350;
  Form1->Position=poDesktopCenter;
  Form1->BorderIcons.operator >>(biMaximize);
  Form1->Caption="virtual_Kino";

  systemGame* ptrOfSystemGame1;

  systemPlayer sp;
  ptrOfSystemGame1=&sp;
  ptrOfSystemGame1->createLabel(this);

  systemMain sm;
  ptrOfSystemGame1=&sm;
  ptrOfSystemGame1->createLabel(this);

  systemTime st;
  ptrOfSystemGame1=&st;
  ptrOfSystemGame1->createLabel(this);

  systemLottoCounter slc;
  ptrOfSystemGame1=&slc;
  ptrOfSystemGame1->createLabel(this);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormPaint(TObject *Sender)
{
  TCanvas* canvas=Form1->Canvas;
  TForm* formForSend=Form1;
  systemGame* ptrOfSystemGame;

  systemPlayer sp;
  ptrOfSystemGame=&sp;
  ptrOfSystemGame->createFrame(canvas,formForSend);

  systemMain sm;
  ptrOfSystemGame=&sm;
  ptrOfSystemGame->createFrame(canvas,formForSend);

  systemTime st;
  ptrOfSystemGame=&st;
  ptrOfSystemGame->createFrame(canvas,formForSend);

  systemLottoCounter slc;
  ptrOfSystemGame=&slc;
  ptrOfSystemGame->createFrame(canvas,formForSend);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimerTimer(TObject *Sender)
{
  systemTime* ptrForTime=new systemTime();
  systemLottoCounter* ptrForLottoCounter;


  ptrForTime->showTime();
  ptrForTime->decodeTime();
  ptrForLottoCounter->lottoCount(ptrForTime->getMinute(),ptrForTime->getSecond());

}
//---------------------------------------------------------------------------

