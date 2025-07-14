#include<iostream>
#include "Fraction.cpp"
using namespace std;

int main()
{
    Fraction *f1 = new Fraction(10,7);
    Fraction *f2 = new Fraction(9,4);

    f1->print();
    f2->print();

    f1->add(*f2);
    f1->print();

    const Fraction f3(5,8);
    f3.setNum(10);
}