#include "chapter6.h"

long int fact(int n)
{
    long val = 1;
    for(auto i = n; i != 1; --i)
    {
        val *= i;
    }
    
    return val;
}
