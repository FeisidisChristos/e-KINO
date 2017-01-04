//---------------------------------------------------------------------------


#pragma hdrstop

#include "systemPlayer.h"


//---------------------------------------------------------------------------

#pragma package(smart_init)

TLabel* lblForShow4[80];

void systemPlayer::createFrame(TCanvas* canvasFrame,TForm* formForUse) const
{
  TColor colorFrame = clBlue;
  TRect playerFrameOut(10,100,(formForUse->Width)/2,600);
  canvasFrame->Brush->Color = colorFrame;
  canvasFrame->Rectangle(playerFrameOut);

  colorFrame = cl3DDkShadow;
  TRect playerFrameIn(20,110,((formForUse->Width)/2)-10,590);
  canvasFrame->Brush->Color = colorFrame;
  canvasFrame->Rectangle(playerFrameIn);

}

void systemPlayer::createLabel(TForm* formForUse) const
{
 int labelColumnCount = 10;
 int labelRowCount = 0;
 const char* lbNamePrefix = "La";
 int i=0,j=0,top=200;

 for (j;j<labelColumnCount;j++)
 {
  int leftPoint = 150+(j*40);
  labelRowCount =labelRowCount +8;
  int t=0;
  for (i;i<labelRowCount;i++)
  {
   lblForShow4[i] = new TLabel(formForUse);
   lblForShow4[i]->Name = lbNamePrefix + IntToStr(i+1);
   lblForShow4[i]->Left = leftPoint;
   lblForShow4[i]->Top =top+(t*40);
   t++;
   lblForShow4[i]->Parent = formForUse;
  }
 }
}