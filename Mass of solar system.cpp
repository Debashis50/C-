#include <iostream>
using namespace std;

int main() {
    double mercury, venus, earth, mars, jupiter, saturn, uranus, neptune, total_mass;

    // Get the mass of each planets
    cout << "enter the mass of Mercury in kilograms: ";
    cin>>mercury;

    cout << "enter the mass of Venus in kilograms: ";
    cin >> venus;

    cout << "enter the mass of Earth in kilograms: ";
    cin >> earth;

    cout << "enter the mass of Mars in kilograms: ";
    cin >> mars;

    cout << "enter the mass of Jupiter in kilograms: ";
    cin >> jupiter;

    cout << "enter the mass of Saturn in kilograms: ";
    cin >> saturn;

    cout << "enter the mass of Uranus in kilograms: ";
    cin >> uranus;

    cout << "enter the mass of Neptune in kilograms: ";
    cin >> neptune;

    // Calculate the total mass of the solar system

    total_mass = mercury + venus + earth + mars + jupiter + saturn + uranus + neptune;

    //total mass of the solar system
    cout <<" total mass of the solar system is = " << total_mass << " kilograms." << endl;
    return 0;
}
