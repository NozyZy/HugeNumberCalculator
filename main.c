#include "..\IHMHugeNumber\ShowHugeNumber.h"

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
 
 hugeNumber = createHugeFloatFromString
("123456789012345678901234567890.00123450000");
 printHugeFloat (hugeNumber);
 hugeNumber = createHugeFloatFromString
("0000000123456789012345678901234567890.00123450000");
 printHugeFloat (hugeNumber);
 
 hugeNumber = createHugeFloatFromString
("-123456789012345678901234567890.00123450000");
 printHugeFloat (hugeNumber);
 hugeNumber = createHugeFloatFromString
("-0000000123456789012345678901234567890.00123450000");
 printHugeFloat (hugeNumber);
} 
