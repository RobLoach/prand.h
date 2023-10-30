# prand

Pseudo-random number generator.

## API

``` c
prand_t* prand_init(uint64_t seed);
void prand_set_seed(prand_t* prand, uint64_t seed);
void prand_free(prand_t* prand);
uint32_t prand_rand(prand_t* prand);
int prand_int(prand_t* prand, int min, int max);
uint32_t prand_uint32(prand_t* prand, uint32_t min, uint32_t max);
unsigned int prand_uint(prand_t* prand, unsigned int min, unsigned int max);
float prand_float(prand_t* prand, float min, float max);
```
