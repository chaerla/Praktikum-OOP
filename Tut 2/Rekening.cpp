#include "Rekening.h"
// // Rekening.h
// #ifndef REKENING_H
// #define REKENING_H

// class Rekening
// {
// public:
//     // Konstruktor untuk menginisialisasi saldo
//     // Set saldo 0.0 apabila saldo bernilai negatif
//     Rekening(double);

//     // Getter, Setter
//     void setSaldo(double);
//     double getSaldo() const;

//     // Member Function
//     // Tambahkan sejumlah nominal uang ke saldo
//     void simpanUang(double);

//     // Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
//     // Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
//     bool tarikUang(double);

// private:
//     double saldo;
// };

Rekening::Rekening(double s)
{
    if (s < 0)
    {
        saldo = 0.0;
    }
    else
    {
        saldo = s;
    }
}

void Rekening::setSaldo(double s)
{
    saldo = s;
}

double Rekening::getSaldo() const
{
    return saldo;
}

void Rekening::simpanUang(double u)
{
    saldo += u;
}

bool Rekening::tarikUang(double u)
{
    if (u > saldo)
    {
        return false;
    }
    saldo -= u;
    return true;
}

