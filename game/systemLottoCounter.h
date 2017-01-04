//---------------------------------------------------------------------------
#include "systemGame.h"
#ifndef systemLottoCounterH
#define systemLottoCounterH
//---------------------------------------------------------------------------
class systemLottoCounter : public systemGame
{


public:
        virtual void createFrame(TCanvas*, TForm*) const;
        void lottoCount(Word, Word) const;
        virtual void createLabel(TForm* formForUse) const;
};
#endif
