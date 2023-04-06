#include <iostream>
using namespace std;

void volume1(float volume, float Pipe1, float Pipe2, float hour);
main()
{
    float volume;
    cout << "Enter the Volume of water in pipe:";
    cin >> volume;
    float Pipe1, Pipe2;
    cout << "Enter the flow rate of water through first pipe:";
    cin >> Pipe1;
    cout << "Enter the flow rate of water through second pipe:";
    cin >> Pipe2;
    float hour;
    cout << "Enter the time in hour after worker return:";
    cin >> hour;
    volume1(volume, Pipe1, Pipe2, hour);
}

void volume1(float volume, float Pipe1, float Pipe2, float hour)
{
    // Calculations
    float volume2, volume3, total1;
    volume2 = Pipe1 * hour;
    volume3 = Pipe2 * hour;

    total1 = volume2 + volume3;

    float percentage, percentage1;
    percentage = total1 / volume;
    percentage1 = percentage * 100.0;

    if (percentage1 >= 100)
    {
        float result;
        result = total1 - volume;
        cout << "For"
             << " " << hour << " "
             << "the pool overflows with"
             << " " << result << " "
             << "liters";
    }

    if (percentage1 <= 100)
    {
        float percen, percen2, percen3, percen4;
        percen = volume2 / total1;
        percen2 = percen * 100.0;
        percen3 = volume3 / total1;
        percen4 = percen3 * 100.0;

        cout << "The Pool is " << percentage1 << "%"
             << " "
             << "full" << endl;
        cout << "Pipe 1 is"
             << " " << percen2 << "%" << endl;
        cout << "Pipe 2 is"
             << " " << percen4 << "%" << endl;
    }
}