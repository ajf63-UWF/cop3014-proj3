#ifndef PATIENTS_HPP
#define PATIENTS_HPP

#include <vector>
#include "patient.hpp" // Include Patient class

class Patients {
private:
    std::vector<Patient> patientList;

public:
    Patients(Patient* initPatients, int count); // Declare constructor

    void addPatient(const std::string &name, int age, const std::string &gender);
    void removePatient(int index);
    int searchByName(const std::string &name) const;
    void print() const;
    void printAllNames() const;
    int getCount() const;
};

#endif // PATIENTS_HPP