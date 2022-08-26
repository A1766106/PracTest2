#include "function-4-1.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

ModCounter::ModCounter(int init,int bound)
{
    current_val = init;
    boundary = bound;
}

void ModCounter::decrement()
{
    if(current_val == 0)
    {
        current_val = boundary;
    }
    else if (current_val != 0)
    {
        current_val = current_val - 1;
    }
    return;
}
int ModCounter::get_val()
{
    return current_val;
}
void ModCounter::increment()
{
    if(current_val == boundary)
    {
        current_val = 0;
    }
    else if (current_val != boundary)
    {
        current_val = current_val + 1;
    }
    return;
}
