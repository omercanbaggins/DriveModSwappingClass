#ifndef Configure_h
#define Configure_h

#include "Arduino.h"

#pragma once

enum driveMods {
	normal = 1,
	oto,

};

class configureK
{
public:
	driveMods kumandaMod;
	driveMods getirmod();

	void degistirMod();
	void degistirMod(driveMods x);

	configureK();
	configureK(driveMods a);
};



#endif






