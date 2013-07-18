#include <iostream>

using namespace std;


int main() {

    int number;

    while (cin >> number) {
        if (number != 42)
            cout << number << endl;
        else
            return 0;
    }

    return 0;
}

