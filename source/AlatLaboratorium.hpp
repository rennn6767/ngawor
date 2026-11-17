#ifndef ALAT_LABORATORIUM_HPP
#define ALAT_LABORATORIUM_HPP

#include <string>

class AlatLaboratorium {
private:
    std::string nama;
    std::string kategori;
    int jumlah;

public:
    AlatLaboratorium(std::string nama, std::string kategori, int jumlah);

    std::string getNama() const;
    std::string getKategori() const;
    int getJumlah() const;

    void tampilkanInfo() const;
    void tambahJumlah(int n);
    void kurangiJumlah(int n);
};

#endif 
