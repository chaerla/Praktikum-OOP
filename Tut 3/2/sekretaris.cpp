#include "sekretaris.h"
#include <bits/stdc++.h>

using namespace std;

Sekretaris::Sekretaris()
{
    energi = ENERGI_MAX;
    kertas = KERTAS_DEFAULT;
    tinta = TINTA_DEFAULT;
    memoLength = 0;
    memo = new Memo[1000];
}

Sekretaris::Sekretaris(int kertas, int tinta)
{
    this->energi = ENERGI_MAX;
    this->kertas = kertas;
    this->tinta = tinta;
    this->memoLength = 0;
    this->memo = new Memo[1000];
}

Sekretaris::~Sekretaris()
{
    delete[] memo;
}

void Sekretaris::buatMemo(string pesan, string untuk)
{
    try
    {
        pakaiKertas();
        pakaiTinta(pesan.size());
        pakaiEnergi();
        Memo tempMemo(pesan, untuk);
        memo[memoLength] = tempMemo;
        memoLength++;
        cout << "Memo [" << memoLength << "] untuk " << untuk << " berhasil dibuat" << endl;
    }
    catch (KertasHabisException &e)
    {
        cout << e.what() << ", segera isi kertas" << endl;
    }
    catch (TintaKurangException &e)
    {
        batalPakaiKertas();
        cout << e.what() << ", segera isi tinta" << endl;
    }
    catch (EnergiHabisException &e)
    {
        batalPakaiKertas();
        batalPakaiTinta(pesan.size());
        cout << e.what() << ", segera istirahat" << endl;
    }
    catch (PesanKepanjanganException &e)
    {
        batalPakaiKertas();
        batalPakaiTinta(pesan.size());
        batalPakaiEnergi();
        cout << e.what() << ", perpendek pesannya" << endl;
    }
}

void Sekretaris::pakaiKertas()
{
    if (kertas == 0)
    {
        throw KertasHabisException();
    }
    kertas -= 1;
}

void Sekretaris::pakaiTinta(int num)
{
    if (num > tinta)
    {
        throw TintaKurangException();
    }
    tinta -= num;
}

void Sekretaris::pakaiEnergi()
{
    if (energi == 0)
    {
        throw EnergiHabisException();
    }
    energi -= 1;
}

void Sekretaris::batalPakaiKertas()
{
    kertas += 1;
}

void Sekretaris::batalPakaiEnergi()
{
    energi += 1;
}

void Sekretaris::batalPakaiTinta(int num)
{
    tinta += num;
}

void Sekretaris::isiKertas(int num)
{
    kertas += num;
}

void Sekretaris::isiTinta(int num)
{
    tinta += num;
}

void Sekretaris::istirahat()
{
    energi = ENERGI_MAX;
}

void Sekretaris::printStatus()
{
    cout << "Status" << endl;
    cout << "  Energi : " << energi << endl;
    cout << "  Tinta : " << tinta << endl;
    cout << "  Kertas : " << kertas << endl;
    cout << "  Memo : " << memoLength << endl;
    for (int i = 0; i < memoLength; i++)
    {
        cout << "    Memo [" << i + 1 << "]" << endl;
        cout << "      Pesan : " << memo[i].getPesan() << endl;
        cout << "      Untuk : " << memo[i].getUntuk() << endl;
    }
}
