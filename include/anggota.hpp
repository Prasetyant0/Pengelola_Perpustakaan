#ifndef ANGGOTA_HPP
#define ANGGOTA_HPP

#include <string>
#include <vector>

struct Anggota {
    int id;
    std::string namaLengkap;
    std::vector<int> daftarPinjaman;
};

void tampilkanAnggota(const Anggota& anggota);

#endif
