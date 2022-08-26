#include "function-4-1.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void decrement();
int get_val();
void increment();
ModCounter(int init,int bound);

void decrement()
{
    current_val = current_val - 1;
    return;
}
int get_val()
{
    return current_val;
}
void increment()
{
    current_val = current_val + 1;
    return;
}
ModCounter(int init,int bound)
{
    current_val = init;
    boundary = bound;
}