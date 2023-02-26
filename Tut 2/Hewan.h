#ifndef _HEWAN_HPP_
#define _HEWAN_HPP_

#include <iostream>

using namespace std;

class Hewan
{
protected:
    string name;

public:
    Hewan(){};
    Hewan(string n)
    {
        name = n;
    }
    ~Hewan()
    {
        cout << "Hewan mati " << name << endl;
    }
    virtual void print()
    {
        cout << "Hewan ini namanya " << name << endl;
    }
};

class Kucing : public Hewan
{
public:
    Kucing(){};
    Kucing(string n)
    {
        name = n;
    }

    virtual ~Kucing()
    {
        cout << "Kucing mati " << name << endl;
    }

    // void print()
    // {
    //     cout << "Kucing ini namanya " << name << endl;
    // }
};

class Anjing : public Hewan
{
public:
    Anjing(){};
    Anjing(string n)
    {
        name = n;
    }

    ~Anjing()
    {
        cout << "Anjing mati " << name << endl;
    }

    virtual void print()
    {
        cout << "Anjing ini namanya " << name << endl;
    }
};

class KucingAnggora : public Kucing
{
private:
    string pemilik;

public:
    KucingAnggora(){};
    KucingAnggora(string n, string p)
    {
        name = n;
        pemilik = p;
    }

    ~KucingAnggora()
    {
        cout << "Kucing anggora mati " << name << endl;
    }

    virtual void print()
    {
        cout << "Kucing anggora ini namanya " << name << ". Pemiliknya adalah " << pemilik << endl;
        ;
    }
};

class AnjingBulldog : public Anjing
{
private:
    string pemilik;

public:
    AnjingBulldog(){};
    AnjingBulldog(string n, string p)
    {
        name = n;
        pemilik = p;
    }

    ~AnjingBulldog()
    {
        cout << "Anjing bulldog mati " << name << endl;
    }

    virtual void print()
    {
        cout << "Anjing bulldog ini namanya " << name << ". Pemiliknya adalah " << pemilik << endl;
        ;
    }
};

#endif