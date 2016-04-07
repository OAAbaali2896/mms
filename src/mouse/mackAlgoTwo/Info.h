#pragma once

#include "Direction.h"

namespace mackAlgoTwo {

class Cell;

// TODO: MACK - kill direction typedef

struct Info {
    unsigned char sequenceNumber;
    unsigned char parentPosition; // TODO: MACK - write this as a position for one byte
    float         distance;
    Cell*         parent; // TODO: MACK - write this as a position for one byte
    unsigned char sourceDirection; // 2 bits // TODO: MACK - don't need
    unsigned char straightAwayLength; // 4 bits
    unsigned char heapIndex;
};

} // namespace mackAlgoTwo