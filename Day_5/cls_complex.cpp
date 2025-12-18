#include <iostream>

using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void add(Complex c1, Complex c2);
    void mul(Complex c1, Complex c2);
    void sub(Complex c1, Complex c2);
};
void Complex::add(Complex c1, Complex c2)
{
    cout << "Addition=" << c1.real + c2.real << "+" << c1.img + c2.img << "i" << endl;
}

void Complex::sub(Complex c1, Complex c2)
{
    int r = c1.real - c2.real;
    int i = c1.img - c2.img;

    cout << "Subtraction=" << r;

    if (i >= 0)
        cout << "+" << i << "i" << endl;
    else
        cout << i << "i" << endl;
}

void Complex::mul(Complex c1, Complex c2)
{
    int r = (c1.real * c2.real) - (c1.img * c2.img);
    int i = (c1.real * c2.img) + (c1.img * c2.real);

    cout << "Multiplication=" << r
         << (i >= 0 ? "+" : "") << i << "i" << endl;
}
int main()
{
    int r1, i1, r2, i2;
    cout << "enter 1st real part of the number: ";
    cin >> r1;
    cout << "enter 1st imaginary part of the number: ";
    cin >> i1;
    cout << "enter 2nd real part of the number: ";
    cin >> r2;
    cout << "enter 2nd imaginary part of the number: ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex res(0, 0);

    res.add(c1, c2);
    res.sub(c1, c2);
    res.mul(c1, c2);
}