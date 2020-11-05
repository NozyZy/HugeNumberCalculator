#include "..\IHMHugeNumber\ShowHugeNumber.h"

#include "UseHugeNumber/Type/HugeUnsignedInt.h"

int main (void) {
 HugeInt* hugeNumber = createHugeIntFromString
("123456789012345678901234567890");
 printHugeInt (hugeNumber);
 hugeNumber = createHugeIntFromString
("0000000123456789012345678901234567890");
 printHugeInt (hugeNumber);
 
 hugeNumber = createHugeIntFromString
("-123456789012345678901234567890");
 printHugeInt (hugeNumber);
 hugeNumber = createHugeIntFromString
("-0000000123456789012345678901234567890");
 printHugeInt (hugeNumber);
} 
