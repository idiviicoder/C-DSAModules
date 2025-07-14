#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void getNum() const
    {
        cout<<this->numerator<<endl;
    }

    void getDen() const
    {
        cout<<this->denominator<<endl;
    }

    void setNum(int n)
    {
        this->numerator = n;
    }

    void setDen(int n)
    {
        this->denominator = n;
    }

    void print()
    {
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

    void simplify()
    {
        int gcd = 1;
        int mini = min(this->numerator, this->denominator);
        for(int i = 1; i<=mini; i++)
        {
            if(this->numerator/i==0 && this->denominator/i==0)
            {
                gcd = i;
            }
        }

        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }

    void add(Fraction const &f1) // is line pe humaara copy constructor call ho raha hai
    {
        int lcm = this->denominator*f1.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f1.denominator;

        this->numerator = x*this->numerator + y*f1.numerator;
        this->denominator = lcm;

        
        this->simplify();
    }

    void multiply(Fraction const &f)
    {
        this->numerator = this->numerator * f.numerator;
        this->denominator = this->denominator * f.denominator;
        this->simplify();
    }
};

