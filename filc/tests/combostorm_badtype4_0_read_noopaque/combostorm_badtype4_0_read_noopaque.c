#include <stdfil.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"
int main()
{
    char* buf = (malloc(30));
    *(int8_t*)(buf + 5) = 42;
    *(int8_t*)(buf + 11) = 42;
    *(int8_t*)(buf + 17) = 42;
    *(int8_t*)(buf + 23) = 42;
    *(int8_t*)(buf + 29) = 42;
    buf = (char*)(buf) + 0;
    char* f0 = *(char**)(buf + 0);
    int8_t f1 = *(int8_t*)(buf + 17);
    int8_t f2 = *(int8_t*)(buf + 23);
    int8_t f3 = *(int8_t*)(buf + 29);
    ZASSERT(!strcmp(f0, "hello"));
    ZASSERT(f1 == 42);
    ZASSERT(f2 == 42);
    ZASSERT(f3 == 42);
    return 0;
}
