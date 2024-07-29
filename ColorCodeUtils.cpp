#include "ColorCodeUtils.h"
#include <iostream>

void PrintColorCodeReference() {
    std::cout << "Color Code Reference Manual:\n";
    int totalPairs = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
    for (int i = 1; i <= totalPairs; ++i) {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << i << ": " << colorPair.ToString() << "\n";
    }
}
