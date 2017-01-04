//---------------------------------------------------------------------------


#pragma hdrstop

#include "systemMain.h"


//---------------------------------------------------------------------------

#pragma package(smart_init)

TLabel* lblForShow3[80];

void systemMain::createFrame(TCanvas* canvasFrame, TForm* formForUse) const
{
   TColor colorFrame = clBlue;
   TRect mainFrameOut((((formForUse->Width)/2)+40),100,1330,600);
   canvasFrame->Brush->Color = colorFrame;
   canvasFrame->Rectangle(mainFrameOut);

   colorFrame = cl3DDkShadow;
   TRect mainFrameIn((((formForUse->Width)/2)+50),110,1320,590);
   canvasFrame->Brush->Color = colorFrame;
   canvasFrame->Rectangle(mainFrameIn);


}

void systemMain::createLabel(TForm* formForUse) const
{
 int labelColumnCount1 = 10;
 int labelRowCount = 0;
 const char* lbNamePrefix = "Lab";
 int i=0,j=0,top=120;

 for (j;j<labelColumnCount1;j++)
 {
  int leftPoint = 740+(j*60);
  labelRowCount =labelRowCount +8;
  int t=0;
  for (i;i<labelRowCount;i++)
  {
   lblForShow3[i] = new TLabel(formForUse);
   lblForShow3[i]->Name = lbNamePrefix + IntToStr(i+1);
   lblForShow3[i]->Left = leftPoint;
   lblForShow3[i]->Top =top+(t*60);
   t++;
   lblForShow3[i]->Parent = formForUse;
  }
 }
}