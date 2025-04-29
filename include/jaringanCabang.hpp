#ifndef JARINGANCABANG_HPP
#define JARINGANCABANG_HPP

#include <string>
#include <vector>

struct Cabang
{
    std::string nama;
};

class JaringanCabang
{
private:
    std::vector<Cabang> daftarCabang;
    std::vector<std::vector<int>> matriksJarak;

public:
    void tambahCabang(const std::string &namaCabang);
    void hubungkanCabang(int indeks1, int indeks2, int jarak);
    void tampilkanJaringan() const;
};

#endif
