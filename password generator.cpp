#include <iostream>
#include <random>

int main() {
    int length;
    std::cout << "What length? " << std::endl;
    std::cin >> length;
    std::string all = "1234567890abcdefghigklmnopqrstuvyxwzABCDEFGHIGKLMNOPQRSTUVYXWZ!#@$%";

    int size = all.size();
    std::string pass = "";

    std::random_device rd;
    std::mt19937 generator(rd());

    std::uniform_int_distribution<int> distribution(0, size - 1);

    for (int i = 0; i < length; i++) {
        int x = distribution(generator);
        char symb = all.at(x);
        pass += symb;
    }

    std::cout << "You random password: " << pass << std::endl;

    return 0;
}
