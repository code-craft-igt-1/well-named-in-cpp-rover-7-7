#include "ColorPair.h"
#include "ColorUtils.h"
#include <iostream>
#include <cassert>

using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    std::cout<<colorPair.getMajor()<<" "<<colorPair.getMinor();
    assert(colorPair.getMinor() == expectedMinor);
    
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    // Print all color codings
    PrintColorCoding();

    return 0;
}
