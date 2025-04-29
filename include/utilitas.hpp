#ifndef UTILITAS_HPP
#define UTILITAS_HPP

#include <vector>
#include <string>
#include "buku.hpp"

void urutkanBukuBerdasarkanJudul(std::vector<Buku> &daftarBuku);
Buku *cariBukuBerdasarkanJudul(std::vector<Buku> &daftarBuku, const std::string &judulDicari);

#endif
