#include <bits/stl_algo.h>
#include <cstring>
#include <iostream>
using namespace std;

void strToBinary(string s)
{
    int n = s.length();

    for (int i = 0; i <= n; i++)
    {
        // convert each char to
        // ASCII value
        int val = int(s[i]);

        cout << "String to ASCII code in binary is: \n";
        // Convert ASCII value to binary
        string bin = "";
        while (val > 0)
        {
            (val % 2) ? bin.push_back('1') : bin.push_back('0');
            val /= 2;
        }
        reverse(bin.begin(), bin.end());

        cout << bin << "";
    }
}
