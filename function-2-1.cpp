#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string get_temp_phase(int temp)
{
    if(temp <= 273)
    {
        return "ice";
    }
    else if(273 < temp && temp <= 373)
    {
        return "liquid";
    }
    else if(373 < temp  && temp <= 4700)
    {
        return "gas";
    }
    else if(temp > 4700)
    {
        return "decomposed";
    }
    return "Nothing";
}