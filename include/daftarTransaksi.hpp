#ifndef DAFTARTRANSAKSI_HPP
#define DAFTARTRANSAKSI_HPP

#include <string>

struct Transaksi
{
    int idBuku;
    int idAnggota;
    std::string tanggalPinjam;
    std::string tanggalKembali;
    Transaksi *berikutnya;
};

class DaftarTransaksi
{
private:
    Transaksi *kepala;

public:
    DaftarTransaksi();
    ~DaftarTransaksi();
    void tambahTransaksi(int idBuku, int idAnggota, const std::string &tanggalPinjam);
    void tampilkanSemuaTransaksi() const;
};

#endif
