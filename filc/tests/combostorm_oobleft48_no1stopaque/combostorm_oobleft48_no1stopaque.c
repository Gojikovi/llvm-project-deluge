#include <stdfil.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"
int main()
{
    char* buf = (malloc(16));
    *(int64_t*)(buf + 8) = 42;
    buf = (char*)opaque(buf) + -26208;
    int64_t f0 = *(int64_t*)(buf + 8);
    ZASSERT(f0 == 42);
    return 0;
}
