#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter a number between 0 to 100:";
    cin >> number;

    int d1, d2;
    d1 = number / 10;
    d2 = d1 % 10;

    if (d1 == 2)
    {
        cout << "Twenty"<<" ";
    }
    if (d1 == 3)
    {
        cout << "Thirty"<<" ";
    }
    if (d1 == 4)
    {
        cout << "Forty"<<" ";
    }
    if (d1 == 5)
    {
        cout << "Fifty"<<" ";
    }
    if (d1 == 6)
    {
        cout << "Sixty"<<" ";
    }
    if (d1 == 7)
    {
        cout << "Seventy"<<" ";
    }
    if (d1 == 8)
    {
        cout << "Eighty"<<" ";
    }
    if (d1 == 9)
    {
        cout << "Ninety"<<" ";
    }

    if (d2 == 1)
    {
        cout << "One";
    }
    if (d2 == 2)
    {
        cout << "Two";
    }
    if (d2 == 3)
    {
        cout << "Three";
    }
    if (d2 == 4)
    {
        cout << "Four";
    }
    if (d2 == 5)
    {
        cout << "Five";
    }
    if (d2 == 6)
    {
        cout << "Six";
    }
    if (d2 == 7)
    {
        cout << "Seven";
    }
    if (d2 == 8)
    {
        cout << "Eight";
    }
    if (d2 == 9)
    {
        cout << "Nine";
    }
}