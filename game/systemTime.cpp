//---------------------------------------------------------------------------


#pragma hdrstop

#include "systemTime.h"


//---------------------------------------------------------------------------

#pragma package(smart_init)

TLabel* lblForShow2[1];

void systemTime::createFrame(TCanvas* canvasFrame, TForm* formForUse) const
{
        TColor colorFrame = clBlue;
        TRect timerFrameOut(0,0,200,50);

        canvasFrame->Brush->Color = colorFrame;
        canvasFrame->Rectangle(timerFrameOut);

        colorFrame = cl3DDkShadow;
        TRect timerFrameIn(10,10,190,40);

        canvasFrame->Brush->Color = colorFrame;
        canvasFrame->Rectangle(timerFrameIn);

}

void systemTime::showTime() const
{

        String strOfTime = TimeToStr(dtOfGame);
        lblForShow2[0]->Caption=strOfTime;
}

systemTime::systemTime()
{
        hourOfDecoding=0;
        minuteOfDecoding=0;
        secondOfDecoding=0;
        msecondOfDecoding=0;
        dtOfGame=Time();
}

Word systemTime::getMinute(void) const
{
       return this->minuteOfDecoding;
}

Word systemTime::getSecond(void) const
{
        return this->secondOfDecoding;
}

void systemTime::decodeTime(void)
{
        DecodeTime(dtOfGame, this->hourOfDecoding,this->minuteOfDecoding,this->secondOfDecoding,this->msecondOfDecoding);
}

void systemTime::createLabel(TForm* formForUse) const
{
 int labelColumnCount = 1;
 int labelRowCount = 0;
 const char* lbNamePrefix = "Labe";
 int i=0,j=0,top=20;

 for (j;j<labelColumnCount;j++)
 {
  int leftPoint = 50+(j*40);
  labelRowCount =labelRowCount +1;
  int t=0;
  for (i;i<labelRowCount;i++)
  {
   lblForShow2[i] = new TLabel(formForUse);
   lblForShow2[i]->Name = lbNamePrefix + IntToStr(i+1);
   lblForShow2[i]->Left = leftPoint;
   lblForShow2[i]->Top =top+(t*40);
   t++;
   lblForShow2[i]->Parent = formForUse;
  }
 }
}