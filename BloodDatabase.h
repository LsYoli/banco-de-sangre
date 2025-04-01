
#ifndef BLOODDATABASE_H
#define BLOODDATABASE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Donor.h"

using namespace std;

class BloodDatabase {
private:
    const string fileName = "data.txt";
    vector<Donor> donors;
    static void displayProvinces();

public:
    static void clearConsole();
    static void waitForKeyPress();
    static long long getValidatedInput(const string& prompt);

    void getDonorDetails();
    void writeDataToFile();
    void searchAndDisplay() const;
    void deleteDonor(const string& donorName);
    void displayAllDonations() const;
    void generateIndicators() const;
};


// ================= DECLARACIONES AÑADIDAS (Punto 5 y 6) =================

// Elimina espacios al inicio y final de un texto
std::string trim(const std::string& str);

// Solicita un número y valida que sea positivo
long long getValidatedInput(const std::string& prompt);

// Valida si un número de teléfono tiene 10 dígitos y solo números
bool isValidPhoneNumber(const std::string& number);

#endif // BLOODDATABASE_H
