#include "jaringanCabang.hpp"
#include <iostream>

void JaringanCabang::tambahCabang(const std::string &namaCabang)
{
    daftarCabang.push_back({namaCabang});
    for (auto &baris : matriksJarak)
    {
        baris.push_back(0);
    }
    matriksJarak.push_back(std::vector<int>(daftarCabang.size(), 0));
}

void JaringanCabang::hubungkanCabang(int indeks1, int indeks2, int jarak)
{
    if (indeks1 < daftarCabang.size() && indeks2 < daftarCabang.size())
    {
        matriksJarak[indeks1][indeks2] = jarak;
        matriksJarak[indeks2][indeks1] = jarak;
    }
}

void JaringanCabang::tampilkanJaringan() const
{
    std::cout << "Jaringan Cabang Perpustakaan:\n";
    for (size_t i = 0; i < daftarCabang.size(); ++i)
    {
        std::cout << daftarCabang[i].nama << ":\n";
        for (size_t j = 0; j < daftarCabang.size(); ++j)
        {
            if (matriksJarak[i][j] > 0)
            {
                std::cout << "  - ke " << daftarCabang[j].nama << ": " << matriksJarak[i][j] << " km\n";
            }
        }
    }
}
