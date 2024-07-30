#ifndef COLORUTILS_H
#define COLORUTILS_H

#include "ColorPair.h"

namespace TelCoColorCoder
{
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCoding();
}

#endif // COLORUTILS_H
