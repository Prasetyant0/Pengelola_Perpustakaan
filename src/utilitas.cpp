#include "utilitas.hpp"
#include <algorithm>

void urutkanBukuBerdasarkanJudul(std::vector<Buku> &daftarBuku)
{
    std::sort(daftarBuku.begin(), daftarBuku.end(), [](const Buku &a, const Buku &b)
              { return a.judul < b.judul; });
}

Buku *cariBukuBerdasarkanJudul(std::vector<Buku> &daftarBuku, const std::string &judulDicari)
{
    for (auto &buku : daftarBuku)
    {
        if (buku.judul == judulDicari)
        {
            return &buku;
        }
    }
    return nullptr;
}
