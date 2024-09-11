#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    for(int i=0;i<8;i++)
    {
        cout << "Enter the value of the array " << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;
    for(int j=0;j<8;j++)
    {
        if(arr[j] % 2 != 0)
        {
            cout << "Only the odd index values are " << "arr[" << j << "]: " << arr[j] << endl;
        }
    }
    cout << endl;
    for(int k=0;k<8;k++)
    {
        if(arr[k] > 0)
        {
            cout << "The positive numbers are " << "arr[" << k << "]: " << arr[k] << endl;
        }
    }
    return 0;
}
