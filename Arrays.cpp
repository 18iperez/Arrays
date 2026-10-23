#include <iostream>
using namespace std;

int main() {
    int numbers[2][3] = {
        {10, 20, 30}
        {40, 50, 60}
    };

    cout << "Displaying Array..:" << endl;

    for (int row = 0; row < 2; row++) {
        for (int c0l = 0; col < 3; col++) {
            cout << numbers[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
