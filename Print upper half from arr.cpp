#include <iostream>
using namespace std;

void Upper_half(int A[][10], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {
                cout << A[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int A[10][10], N;
    cout << "Enter the array size : ";
    cin >> N;

    cout << "Enter the array number: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cout << "The Matrix is: "<<endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "The upper half of the array is: " << endl;
    Upper_half(A, N);
    return 0;
}
