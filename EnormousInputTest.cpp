#include <iostream>


int main() {

    int count = 0;
    int num, lines, divisor;

    std::cin >> lines >> divisor;

    for (int i=0; i < lines; i++) {
        std::cin >> num;
        if (num % divisor == 0)
            count += 1;
    }

    std::cout << count << std::endl;

    return 0;
}
