#include "..\IHMHugeNumber\ShowHugeNumber.h"

int main (void) {
    HugeFloat* hugeNumber = createHugeFloatFromString
            ("00000000123456789012345678901234567890", "000012340000");
    printHugeFloat (hugeNumber);
    hugeNumber = createHugeFloatFromString
            ("0000000123456789012345678901234567890", "-000012340000");
    printHugeFloat (hugeNumber);

    hugeNumber = createHugeFloatFromString
            ("-00000000123456789012345678901234567890", "000012340000");
    printHugeFloat (hugeNumber);
    hugeNumber = createHugeFloatFromString
            ("-0000000123456789012345678901234567890", "-000012340000");
    printHugeFloat (hugeNumber);
}
