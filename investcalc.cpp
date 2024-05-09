#include <iostream>

int main() {
    float init = 285;
    float reinv = 91;
    int per = 25;
    float interest = 1.029;

    for (int i = 0; i < per; i++) {
        init *= interest;
        init += reinv;
    }

    std::cout << init;

    return 0;
}
