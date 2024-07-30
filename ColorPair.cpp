#include "ColorPair.h"
#include "ColorUtils.h"

using namespace TelCoColorCoder;

ColorPair::ColorPair(MajorColor major, MinorColor minor)
    : majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() {
    return majorColor;
}

MinorColor ColorPair::getMinor() {
    return minorColor;
}

std::string ColorPair::ToString() {
    std::string colorPairStr = TelCoColorCoder::MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += TelCoColorCoder::MinorColorNames[minorColor];
    return colorPairStr;
}
