//---------------------------------------------------------------------------


#pragma hdrstop

#include "systemLottoCounter.h"


//---------------------------------------------------------------------------

#pragma package(smart_init)

TLabel* lblForShow1[1];

void systemLottoCounter::createFrame(TCanvas* canvasFrame, TForm* formForUse) const
{
        TColor colorFrame = clBlue;
        TRect lottoCounterFrameOut(1100,0,1340,50);

        canvasFrame->Brush->Color = colorFrame;
        canvasFrame->Rectangle(lottoCounterFrameOut);

        colorFrame = cl3DDkShadow;
        TRect lottoCounterFrameIn(1110,10,1330,40);

        canvasFrame->Brush->Color = colorFrame;
        canvasFrame->Rectangle(lottoCounterFrameIn);

}

void systemLottoCounter::lottoCount(Word mimuteOfDecoding, Word secondOfDecoding) const
{
        static unsigned long int counterOfLotto=0;
       if(0==(mimuteOfDecoding%5))
        {
         if(0==secondOfDecoding)
         {
          counterOfLotto++;
          lblForShow1[0]->Caption=counterOfLotto;
          }
        }
}

void systemLottoCounter::createLabel(TForm* formForUse) const
{
 int labelColumnCount = 1;
 int labelRowCount = 0;
 const char* lbNamePrefix = "Labee";
 int i=0,j=0,top=20;

 for (j;j<labelColumnCount;j++)
 {
  int leftPoint = 1150+(j*40);
  labelRowCount =labelRowCount +1;
  int t=0;
  for (i;i<labelRowCount;i++)
  {
   lblForShow1[i] = new TLabel(formForUse);
   lblForShow1[i]->Name = lbNamePrefix + IntToStr(i+1);
   lblForShow1[i]->Left = leftPoint;
   lblForShow1[i]->Top =top+(t*40);
   t++;
   lblForShow1[i]->Parent = formForUse;
  }
 }
}