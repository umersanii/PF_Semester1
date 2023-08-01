#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
    system("cls");
    char str[100];
    cout << "Enter a sentence:" << endl;
    cin.getline(str, 100);
    int count, m;
    int i = 0;
    while (str[i] != '\0') //* treaverses the whole string till null character
    {
        count = 0;                              //^ counter to count the words
        while (str[i] != ' ' && str[i] != '\0') //^ checks whether space or \0 occurs
        {
            count++;
            i++;
        }

        for (int j = 1; j <= count; j++) //* printing the word in reverse order
        {
            cout << str[i - j];
        }
        if (str[i] == ' ') //* printing the space
        {
            cout << " ";
        }
        if (str[i] != '\0') //* incrementing i only if \0 does not happen
        {
            i++;
        }
    }

    return 0;
}
