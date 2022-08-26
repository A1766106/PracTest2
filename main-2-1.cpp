#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

extern string get_temp_phase(int temp);

int main()
{
    int temp = 300;
    cout << "phase as " << temp << "K is: " << get_temp_phase(temp) << endl;

    return 0;
}
