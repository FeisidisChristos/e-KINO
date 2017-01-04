//---------------------------------------------------------------------------
#include "systemGame.h"
#ifndef systemPlayerH
#define systemPlayerH
//---------------------------------------------------------------------------
class systemPlayer : public systemGame
{
public:
        virtual void createFrame(TCanvas* ,TForm*) const;
        virtual void createLabel(TForm* formForUse) const;
};
#endif
