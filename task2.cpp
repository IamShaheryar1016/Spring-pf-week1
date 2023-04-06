#include <iostream>
using namespace std;

main()
{
    // Input
    int area;
    cout << "Enter the Area of Vineyard:";
    cin >> area;
    float GrapesProduction;
    cout << "Enter the kgs of grapes from 1 meter square vineyard:";
    cin >> GrapesProduction;
    float WineNeeded;
    cout << "Enter the litres of wine you want to produce :";
    cin >> WineNeeded;
    int workers;
    cout << "Enter the number of workers:";
    cin >> workers;

    // Calculations

    float quantity1;
    quantity1 = area * GrapesProduction;
    float quantity2;
    quantity2 = quantity1 / 2.5;
    float quantity3;
    quantity3 = (quantity2 * 40.0) / 100;
    float quantity4;
    quantity4 = quantity3 - WineNeeded;
    float quantity5;
    quantity5 = quantity4 / workers;

    // if statements

    if (quantity3 > WineNeeded)
    {
        cout << "Good Harvest this year!" << endl;
        cout << "Total wine:" << quantity3 << endl;
        cout << "Wine Left:" << quantity4 << endl;
        cout << "Wine Distributed per worker:" << quantity5;
    }

    if (quantity3 < WineNeeded)
    {
        float quantity6;
        quantity6 = WineNeeded - quantity3;
        cout << "It will be a tough winter!" << endl;
        cout << "Required Wine will be:" << quantity6;
    }
}