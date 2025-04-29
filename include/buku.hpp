#ifndef BUKU_HPP
#define BUKU_HPP

#include <string>

struct Buku
{
    int id;
    std::string judul;
    std::string penulis;
    int tahunTerbit;
    bool sedangDipinjam;
};

void tampilkanBuku(const Buku &buku);

#endif
