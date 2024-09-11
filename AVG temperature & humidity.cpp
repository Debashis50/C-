#include <iostream>
using namespace std;

int main() {
    int days = 5;
    float temp, humidity, temp_sum = 0, humidity_sum = 0;

    for (int i = 1; i <= days; i++)
        {
        cout << "enter the temperature for day " << i << ": ";
        cin >> temp;

        cout<<"   enter the humidity for day " << i << ": ";
        cin>>humidity;

        temp_sum += temp;
        humidity_sum += humidity;
    }

    double avg_temp = temp_sum / days;
    double avg_humidity = humidity_sum / days;

    cout << "Average temperature in " << days << " days : " << avg_temp << endl;
    cout << "   Average humidity in " << days << " days : " << avg_humidity << endl;

       return 0;
}
