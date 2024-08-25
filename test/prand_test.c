#define PRAND_IMPLEMENTATION
#include "../prand.h"

#include <assert.h>
#include <stdio.h>

int main() {
    int i;
    prand_t prand;

    /* prand_int */
    for (i = 0; i < 10000; i++) {
        int result = prand_int(&prand, -100, 200);
        printf("Random: %d\n", result);
        assert(result >= -100);
        assert(result <= 200);
    }

    /* prand_uint */
    for (i = 0; i < 10000; i++) {
        unsigned int result = prand_uint(&prand, 100, 500);
        printf("Random: %u\n", result);
        assert(result >= 100);
        assert(result <= 500);
    }

    /* prand_float */
    for (i = 0; i < 10000; i++) {
        float result = prand_float(&prand, -0.5f, 0.5f);
        printf("Random: %f\n", result);
        assert(result >= -0.5f);
        assert(result <= 0.5f);
    }

    return 0;
}
