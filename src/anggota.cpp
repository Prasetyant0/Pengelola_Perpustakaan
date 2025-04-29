#include "anggota.hpp"
#include <iostream>

void tampilkanAnggota(const Anggota &anggota)
{
    std::cout << "ID Anggota: " << anggota.id << "\n"
              << "Nama Lengkap: " << anggota.namaLengkap << "\n"
              << "Jumlah Pinjaman: " << anggota.daftarPinjaman.size() << "\n\n";
}
