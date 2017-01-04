//---------------------------------------------------------------------------
#include "systemGame.h"
#ifndef systemMainH
#define systemMainH
//---------------------------------------------------------------------------
class systemMain : public systemGame
{
public:
        virtual void createFrame(TCanvas*, TForm*) const;
        virtual void createLabel(TForm* formForUse) const;
};
#endif
