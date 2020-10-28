#ifndef HUGE_INT
#define HUGE_INT

#include "HugeUnsignedInt.h"

typedef enum Sign {
    PLUS, MINUS
}Sign;

typedef struct HugeInt {
    HugeUnsignedInt* absoluteValue;
    Sign sign;
}HugeInt;

extern HugeInt* createHugeInt            (void);
extern HugeInt* createHugeIntFromString  (const char* digitString);
extern HugeInt* createHugeIntFromHugeInt (const HugeInt* hugeInt, const unsigned int size);
extern void     deleteHugeInt            (const HugeInt* hugeInt);
extern int      getHugeIntLength         (const HugeInt* hugeInt);
extern HugeInt* simplifyHugeInt          (const HugeInt* hugeInt);

#endif // !HUGE_INT

