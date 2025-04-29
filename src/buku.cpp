#include "buku.hpp"
#include <iostream>

void tampilkanBuku(const Buku &buku)
{
    std::cout << "ID Buku: " << buku.id << "\n"
              << "Judul: " << buku.judul << "\n"
              << "Penulis: " << buku.penulis << "\n"
              << "Tahun Terbit: " << buku.tahunTerbit << "\n"
              << "Status: " << (buku.sedangDipinjam ? "Dipinjam" : "Tersedia") << "\n\n";
}
