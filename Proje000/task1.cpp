#include <iostream>
#include <string>
using namespace std;

int toInt(string s)
{
    int number = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            throw "Wrong number";

        number = number * 10 + (s[i] - '0');

        if (number < 0)
            throw "Number is too big";
    }
    return number;
}

int main()
{
    string s;
    cout << "Enter number: ";
    cin >> s;

    try
    {
        cout << "Result: " << toInt(s) << endl;
    }
    catch (const char* error)
    {
        cout << error << endl;
    }
}