#include "pohonKategori.hpp"
#include <iostream>

PohonKategori::PohonKategori() : akar(nullptr) {}

void PohonKategori::tambahKategori(const std::string &nama)
{
    tambahKategoriRekursif(akar, nama);
}

void PohonKategori::tambahKategoriRekursif(Kategori *&simpul, const std::string &nama)
{
    if (simpul == nullptr)
    {
        simpul = new Kategori{nama, nullptr, nullptr};
    }
    else if (nama < simpul->nama)
    {
        tambahKategoriRekursif(simpul->kiri, nama);
    }
    else
    {
        tambahKategoriRekursif(simpul->kanan, nama);
    }
}

void PohonKategori::tampilkanPreOrder() const
{
    tampilkanPreOrderRekursif(akar);
}

void PohonKategori::tampilkanPreOrderRekursif(Kategori *simpul) const
{
    if (simpul != nullptr)
    {
        std::cout << simpul->nama << " ";
        tampilkanPreOrderRekursif(simpul->kiri);
        tampilkanPreOrderRekursif(simpul->kanan);
    }
}
