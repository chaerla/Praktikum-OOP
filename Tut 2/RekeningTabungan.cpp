#include "RekeningTabungan.h"

RekeningTabungan::RekeningTabungan(double saldo, double transaksi) : Rekening(saldo)
{
    biayaTransaksi = transaksi;
}

void RekeningTabungan::setBiayaTransaksi(double biayaTransaksi)
{
    this->biayaTransaksi = biayaTransaksi;
}

double RekeningTabungan::getBiayaTransaksi() const
{
    return this->biayaTransaksi;
}

void RekeningTabungan::simpanUang(double uang)
{
    if (this->getSaldo() >= biayaTransaksi)
    {
        Rekening::simpanUang(uang);
        this->setSaldo(this->getSaldo() - biayaTransaksi);
    }
}

bool RekeningTabungan::tarikUang(double uang)
{
    if (Rekening::tarikUang(uang))
    {
        this->setSaldo(this->getSaldo() - biayaTransaksi);
        return true;
    }
    return false;
}