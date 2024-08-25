# prand

Pseudo-random number generator for C89, based off [raylib](https://www.raylib.com/)'s [rprand.h](https://github.com/raysan5/raylib/blob/master/src/external/rprand.h).

## API

``` c
void prand_init(prand_t* prand, uint64_t seed);
uint32_t prand_rand(prand_t* prand);
int prand_int(prand_t* prand, int min, int max);
uint32_t prand_uint32(prand_t* prand, uint32_t min, uint32_t max);
unsigned int prand_uint(prand_t* prand, unsigned int min, unsigned int max);
float prand_float(prand_t* prand, float min, float max);
```

## Example

``` c
#define PRAND_IMPLEMENTATION
#include "../prand.h"

#include <stdio.h>

int main() {
    prand_t prand;
    prand_init(&prand, 0);

    int result = prand_int(&prand, -100, 200);
    printf("Random: %d\n", result);

    return 0;
}
```

## License

[zlib](LICENSE)
