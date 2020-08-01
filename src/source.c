#include <stdlib.h>
#include <time.h>
#include "source.h"

int genRandNum(int minLimit, int maxLimit)
{
    srand(time(NULL));

    return (rand() % maxLimit) + minLimit;
}
