#include "ColorUtils.h"
#include <iostream>

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorCoding() {
        for (int major = 0; major < numberOfMajorColors; ++major) {
            for (int minor = 0; minor < numberOfMinorColors; ++minor) {
                int pairNumber = GetPairNumberFromColor((MajorColor)major, (MinorColor)minor);
                std::cout << "Pair Number: " << pairNumber
                          << " -> " << MajorColorNames[major] << " " << MinorColorNames[minor]
                          << std::endl;
            }
        }
    }
}
