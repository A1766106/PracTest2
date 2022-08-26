#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

bool is_more_positive(int vals[], int length);

int main()
{
    int vals[] = {-1, 1, -2, 2, -3, 3, 0, 0, -5};
    int length = 8;

    bool res=is_more_positive(vals, length);

    return 0;
}