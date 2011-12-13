#ifndef RANDOM_NUMBER_GENERATOR
#define RANDOM_NUMBER_GENERATOR

#include <time.h>

// used to generate random number from current seed and update seed
const unsigned long maxshort  = 65536L;
const unsigned long multiplier = 1194211693L;
const unsigned long adder = 12345L;

class RandomNumber                              
{
    private:
        // private member containing current seed
        unsigned long randSeed;
    public:
        // constructor. default 0 gives automatic seeding
        RandomNumber(unsigned long s = 0);
        
        // generate random integer 0 <= value <= n-1
        unsigned short Random(unsigned long n);
        
        // generate random real number 0 <= value < 1.0
        double fRandom(void);
};

#endif  // RANDOM_NUMBER_GENERATOR
