#include <iostream>
using namespace std;

main()
{
    int hours;
    cout << "Enter the hours needed:";
    cin >> hours;
    int days;
    cout << "Enter the number of days that firm ha:";
    cin >> days;
    int workers;
    cout << "Enter the number of workers:";
    cin >> workers;

    int calculate;
    calculate = days * 10;
    float percent, percent2;
    percent = calculate / 10;
    percent2 = calculate - percent;
    int workers1Hours;
    workers1Hours = workers * percent2;
    int hours2;
    hours2 = workers1Hours - hours;

    if (workers1Hours > hours)
    {
        cout << "Yes!"
             << " " << hours2 << " "
             << "hours left";
    }

    if (workers1Hours < hours)
    {
        int totall;
        totall = hours - workers1Hours;
        cout << "Not enough time!" << totall << " "
             << "hours needed.";
    }
}