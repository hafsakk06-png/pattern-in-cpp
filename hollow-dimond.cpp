#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (half diamond): ";
    cin >> n;

    // upper half
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) cout << " ";
        for(int k = 1; k <= (2*i-1); k++) {
            if(k == 1 || k == (2*i-1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // lower half
    for(int i = n-1; i >= 1; i--) {
        for(int j = n; j > i; j--) cout << " ";
        for(int k = 1; k <= (2*i-1); k++) {
            if(k == 1 || k == (2*i-1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}