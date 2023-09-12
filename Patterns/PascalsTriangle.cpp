#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a No: ";
    cin >> n;

    int arr[n+1][n+1];

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {

            if(j == 1 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// HW

// n = 5

// * * * * *
// *       *
// *       *
// *       *
// * * * * *
