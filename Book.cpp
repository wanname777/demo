//
// Created by zhang on 2020/8/15.
//

#include "Book.h"

Book::Book(double p) : price(p) {

}

Book::~Book() = default;

double Book::getPrice() const {
    return price;
}
