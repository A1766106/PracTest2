#include "function-4-1.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void ModCounter::decrement()
{
    current_val = get_val() - 1;
    return;
}
int ModCounter::get_val()
{
    return current_val;
}
void ModCounter::increment()
{
    current_val = get_val() + 1;
    return;
}
ModCounter::ModCounter(int init,int bound)
{
    current_val = init;
    boundary = bound;
}