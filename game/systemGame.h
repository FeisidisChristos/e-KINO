//---------------------------------------------------------------------------
#include <vcl.h>
#ifndef systemGameH
#define systemGameH
//---------------------------------------------------------------------------

class systemGame
{
public:
        virtual void createFrame(TCanvas* ,TForm* ) const = 0;
        virtual void createLabel(TForm*) const = 0;

 
};
#endif
