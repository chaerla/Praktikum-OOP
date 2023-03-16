#include <iostream>
#include "Pecahan.hpp"

using namespace std;

pecahan::pecahan()
{
    n = 0;
    d = 1;
}

pecahan::pecahan(int _n, int _d)
{
    n = _n;
    d = _d;
}

pecahan::pecahan(const pecahan &P)
{
    n = P.n;
    d = P.d;
}

pecahan::~pecahan() {}

int pecahan::getPemb()
{
    return n;
}

int pecahan::getPeny()
{
    return d;
}

void pecahan::setPemb(int n)
{
    this->n = n;
}

void pecahan::setPeny(int d)
{
    this->d = d;
}

pecahan pecahan::operator+(const pecahan &P)
{
    pecahan ret;
    ret.n = (this->n * P.d + this->d * P.n);
    ret.d = this->d * P.d;
    return ret;
}

pecahan pecahan::operator-(const pecahan &P)
{
    pecahan ret;
    ret.n = (this->n * P.d - this->d * P.n);
    ret.d = this->d * P.d;
    return ret;
}

pecahan pecahan::operator*(int x)
{
    pecahan ret;
    ret.n = this->n * x;
    ret.d = this->d * x;
    return ret;
}

bool pecahan::operator==(const pecahan &P)
{
    return this->n * P.d == this->d * P.n;
}

float pecahan::RealP()
{
    return (float)n / (float)d;
}

void pecahan::Print()
{
    cout << n << "/" << d;
}