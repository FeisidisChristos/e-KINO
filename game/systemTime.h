//---------------------------------------------------------------------------
#include "systemGame.h"
#ifndef systemTimeH
#define systemTimeH
//---------------------------------------------------------------------------
class systemTime : public systemGame
{
 private: Word hourOfDecoding, minuteOfDecoding, secondOfDecoding, msecondOfDecoding;
          TDateTime dtOfGame;


 public:
        virtual void createFrame(TCanvas*, TForm*) const;
        void showTime() const;
        systemTime();
        Word getMinute(void) const;
        Word getSecond(void) const;
        void decodeTime(void);
        virtual void createLabel(TForm* formForUse) const;
};
#endif
