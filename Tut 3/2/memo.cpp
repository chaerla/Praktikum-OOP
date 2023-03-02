#include "memo.h"
#include "bits/stdc++.h"

using namespace std;

Memo::Memo()
{
    pesan = "";
    untuk = "";
}

Memo::Memo(string pesan, string untuk)
{
    if (pesan.size() > PESAN_MAX)
    {
        throw PesanKepanjanganException();
    }
    this->pesan = pesan;
    this->untuk = untuk;
}

Memo &Memo::operator=(Memo &obj)
{
    this->pesan = obj.pesan;
    this->untuk = obj.untuk;
    return *this;
}

string Memo::getPesan()
{
    return pesan;
}

string Memo::getUntuk()
{
    return untuk;
}