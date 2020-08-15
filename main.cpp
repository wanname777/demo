#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Book give_me_a_name(12.5);
    cout << give_me_a_name.getprice();
    return 0;
}
