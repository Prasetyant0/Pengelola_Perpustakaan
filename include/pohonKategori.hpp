#ifndef POHONKATEGORI_HPP
#define POHONKATEGORI_HPP

#include <string>

struct Kategori
{
    std::string nama;
    Kategori *kiri;
    Kategori *kanan;
};

class PohonKategori
{
private:
    Kategori *akar;
    void tambahKategoriRekursif(Kategori *&simpul, const std::string &nama);
    void tampilkanPreOrderRekursif(Kategori *simpul) const;

public:
    PohonKategori();
    void tambahKategori(const std::string &nama);
    void tampilkanPreOrder() const;
};

#endif
