#include "ColorPair.h"
#include "ColorDeclarations.h"
#include <iostream>
#include <cassert>

using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << " Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    std::cout<<colorPair.getMajor()<<" "<<colorPair.getMinor();
    assert(colorPair.getMinor() == expectedMinor);
    
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << " Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
void testprintcolor(){
    std::string expectedcolors="1WhiteBlue2WhiteOrange3WhiteGreen4WhiteBrown5WhiteSlate6RedBlue7RedOrange8RedGreen9RedBrown10RedSlate11BlackBlue12BlackOrange13BlackGreen14BlackBrown15BlackSlate16YellowBlue17YellowOrange18YellowGreen19YellowBrown20YellowSlate21VioletBlue22VioletOrange23VioletGreen24VioletBrown25VioletSlate";
    assert(PrintColorCodingtest() == expectedcolors);
    std::cout << " TEST CASES PASSED FOR COLOR PRINTING "<<std::endl<<" PRINTING ALL POSSIBLE COLOR PAIRS "<<std::endl;

    PrintColorCoding();
}
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    //Updated testing for color printing.
    testprintcolor();
    return 0;
}
