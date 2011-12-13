#include "random.h"

// seed the generator
RandomNumber::RandomNumber (unsigned long s)
{
    if (s == 0)
        randSeed = time(0); // automatic seeding using system time
    else
        randSeed = s;       // user supplies the seed
}

// return random integer 0 <= value <= n-1 < 65536
unsigned short RandomNumber::Random (unsigned long n)
{
    randSeed = multiplier * randSeed + adder;
    return (unsigned short)((randSeed >> 16)  % n);
}

// return (value in range 0..65535) / 65536
double RandomNumber::fRandom (void)
{
    return Random(maxshort)/double(maxshort); 
}
        
