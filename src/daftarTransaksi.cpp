#include "daftarTransaksi.hpp"
#include <iostream>

DaftarTransaksi::DaftarTransaksi() : kepala(nullptr) {}

DaftarTransaksi::~DaftarTransaksi()
{
    while (kepala != nullptr)
    {
        Transaksi *hapus = kepala;
        kepala = kepala->berikutnya;
        delete hapus;
    }
}

void DaftarTransaksi::tambahTransaksi(int idBuku, int idAnggota, const std::string &tanggalPinjam)
{
    Transaksi *transaksiBaru = new Transaksi{idBuku, idAnggota, tanggalPinjam, "", kepala};
    kepala = transaksiBaru;
}

void DaftarTransaksi::tampilkanSemuaTransaksi() const
{
    Transaksi *sekarang = kepala;
    while (sekarang != nullptr)
    {
        std::cout << "ID Buku: " << sekarang->idBuku
                  << " | ID Anggota: " << sekarang->idAnggota
                  << " | Pinjam: " << sekarang->tanggalPinjam
                  << " | Kembali: " << (sekarang->tanggalKembali.empty() ? "-" : sekarang->tanggalKembali)
                  << "\n";
        sekarang = sekarang->berikutnya;
    }
}
