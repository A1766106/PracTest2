#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

bool is_more_positive(int vals[], int length)
{
    int count_pos = 0;
    int count_neg = 0;
    for(int i=0;i<length;i++)
    {
        if(vals[i] > 0)
        {
            count_pos = count_pos + 1;
        }
        else if(vals[i] < 0)
        {
            count_neg = count_neg +1;
        }
    }
    if(count_pos>count_neg)
    {
        return true;
    }
    return false;
}