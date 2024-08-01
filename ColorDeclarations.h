#ifndef COLORDECLARATIONS_H
#define COLORDECLARATIONS_H

#include "ColorPair.h"

namespace TelCoColorCoder
{
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    std::string PrintColorCodingtest();
    void PrintColorCoding();
}

#endif
