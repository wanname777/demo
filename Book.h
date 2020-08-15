//
// Created by zhang on 2020/8/15.
//

#ifndef DEMO_BOOK_H
#define DEMO_BOOK_H


class Book {
private:
    double price;
public:
    static int num;

    explicit Book(double p);

    ~Book();

    double getPrice() const;

};


#endif //DEMO_BOOK_H
