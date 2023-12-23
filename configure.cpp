#include "configure.h"

driveMods configureK::getirmod() 
{
    return kumandaMod;
}

void configureK::degistirMod()
{
    switch (kumandaMod) {

    case normal:
        kumandaMod = oto;
    case oto:
        kumandaMod = normal;

    }
}

void configureK::degistirMod(driveMods x)
{
    kumandaMod = x;
}

configureK::configureK()
{
    kumandaMod = normal;
}

configureK::configureK(driveMods a)
{
    kumandaMod = a;
}



