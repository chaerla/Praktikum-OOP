#include "bits/stdc++.h"
#include "RestoranRamen.hpp"

using namespace std;

void RestoranRamen::tambahOrder(int n, int p)
{
    auto it = daftarMeja.find(n);
    if (it != daftarMeja.end())
    {
        it->second += p;
    }
    else
    {
        daftarMeja[n] = p;
    }
}

int RestoranRamen::tutupOrder(int n)
{
    int temp = cekTotal(n);
    auto it = daftarMeja.find(n);
    if (it != daftarMeja.end())
    {
        daftarMeja.erase(it);
    }
    return temp;
}

int RestoranRamen::cekTotal(int n)
{
    auto it = daftarMeja.find(n);
    if (it != daftarMeja.end())
    {
        return daftarMeja[n];
    }
    return 0;
}

int RestoranRamen::totalMeja()
{
    return daftarMeja.size();
}

void RestoranRamen::cetakMeja()
{
    if (daftarMeja.empty())
    {
        cout << "Restoran kosong" << endl;
    }
    else
    {
        for (auto const &pair : daftarMeja)
        {
            cout << "Meja " << pair.first << " = " << pair.second << endl;
        }
    }
}
