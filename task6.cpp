#include <iostream>
using namespace std;

main()
{
    // Input Data
    int time1, time2, time3;
    cout << "Enter the time of first athlete:";
    cin >> time1;
    cout << "Enter the time of second athlete:";
    cin >> time2;
    cout << "Enter the time of third athlete:";
    cin >> time3;

    // Calculations

    int Totaltime;
    Totaltime = time1 + time2 + time3;

    if (Totaltime < 60)
    {
        cout<<"0"<<":"<<Totaltime;
    }

    if(Totaltime>=60)
    {
        float time;
        time=Totaltime/60;
        float time4;
        time4=Totaltime%60;
        cout<<time<<":"<<time4;
    }
}