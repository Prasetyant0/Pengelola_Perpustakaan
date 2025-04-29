#include "antrianPeminjaman.hpp"
#include <iostream>

void AntrianPeminjaman::tambahPeminjam(int idAnggota)
{
    antrian.push(idAnggota);
}

void AntrianPeminjaman::layaniPeminjam()
{
    if (!antrian.empty())
    {
        std::cout << "Melayani anggota ID: " << antrian.front() << "\n";
        antrian.pop();
    }
    else
    {
        std::cout << "Antrian kosong.\n";
    }
}

bool AntrianPeminjaman::kosong() const
{
    return antrian.empty();
}

int AntrianPeminjaman::lihatPeminjamDepan() const
{
    return antrian.empty() ? -1 : antrian.front();
}
