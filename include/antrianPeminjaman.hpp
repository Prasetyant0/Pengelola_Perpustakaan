#ifndef ANTRIANPEMINJAMAN_HPP
#define ANTRIANPEMINJAMAN_HPP

#include <queue>

class AntrianPeminjaman
{
private:
    std::queue<int> antrian;

public:
    void tambahPeminjam(int idAnggota);
    void layaniPeminjam();
    bool kosong() const;
    int lihatPeminjamDepan() const;
};

#endif
