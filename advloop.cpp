#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 2; j++) {
            cout << "i=" << i << ", j=" << j << endl;
        }
    }

    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    string name = "Sarmi";
    for(int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}