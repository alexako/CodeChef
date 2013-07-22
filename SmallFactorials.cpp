#include <iostream>


int main() {

    unsigned long long num;
    unsigned long count;

    std::cin >> count;

    unsigned long long factorial[count];


    for (int i=0; i < count; i++) {
        factorial[i] = 1;
        std::cin >> num;

        while (num > 1) {
            factorial[i] *= num;
            num--;
        }
    }

    std::cout << std::endl;

    for (int i=0; i < count; i++)
        std::cout << factorial[i] << std::endl;

    return 0;
}
