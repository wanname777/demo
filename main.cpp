#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Book book(12.5);
    cout << book.getPrice() << endl;
    book.setPrice(35);
    cout << book.getPrice() << endl;
    cout << Book::num << endl;
    return 0;
}
