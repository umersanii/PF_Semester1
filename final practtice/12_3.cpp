#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a sentence:" << endl;
    cin.getline(str, 100);
    int length = strlen(str); //* computing the total characters of the string
    cout << length << endl;
    int count, m;
    int i = length - 1; //^ since indexes are from 0 to n-1 so -1
    while (i >= 0)      //* treaverses the whole string till null character
    {
        count = 0;
        while (str[i] != ' ' && i != -1) //* //^ checks whether space or -1 occurs
        {
            count++;
            i--;
        }
        for (int j = 1; j <= count; j++) //* printing the last word from end
        {
            cout << str[i + j];
        }
        if (str[i] == ' ') //* printing the space
        {
            cout << " ";
        }
        if (i > 0) //* decrementing i only if -1 does not happen
        {
            i--;
        }
    }

    return 0;
}
