//
// Created by zhang on 2020/8/15.
//

#include "Book.h"

// 当有静态成员时，应该在cpp中进行声明
int Book::num = 0;

Book::Book(double p) : price(p) {
    num++;
}

Book::~Book() = default;

double Book::getPrice() const {
    return price;
}

void Book::setPrice(double p) {
    price = p;
}
