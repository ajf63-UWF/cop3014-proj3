#include <iostream>
#include <vector>
#include "patients.hpp"  

    class Patients {
    private:
        std::vector<Patient> patientList; // Using vector to store patients
    
    public:
        // Default constructor
        Patients() {}
    
        // Parameterized constructor
        Patients(Patient* initPatients, int count) {
            for (int i = 0; i < count; ++i) {
                patientList.push_back(initPatients[i]);
            }
        }

        // Parameterized constructor with array
        Patients(Patient initPatients[], int initPatientCount) {
            for (int i = 0; i < initPatientCount; ++i) {
                patientList.push_back(initPatients[i]);
            }
        }
    
        // Add a new patient
        void addPatient(const std::string &name, int age, const std::string &gender) {
            patientList.push_back(Patient(name, age, gender));
        }
    
        // Remove a patient by index
        void removePatient(int index) {
            if (index < 0 || index >= patientList.size()) {
                std::cerr << "Invalid index" << std::endl;
                return;
            }
            patientList.erase(patientList.begin() + index);
        }
    
        // Search for a patient by name
        int searchByName(const std::string &name) const {
            for (int i = 0; i < patientList.size(); ++i) {
                if (patientList[i].getName() == name) {
                    return i;
                }
            }
            return -1; // Not found
        }
    
        // Get the number of patients
        int getCount() const {
            return patientList.size();
        }
    
        // Print all patient information
        void print() const {
            for (int i = 0; i < patientList.size(); ++i) {
                std::cout << "Patient " << i << ":\n";
                patientList[i].printInfo();
                std::cout << std::endl;
            }
            std::cout << patientList.size() << " patients in total.\n";
        }
    
        // Print all patient names
        void printAllNames() const {
            for (int i = 0; i < patientList.size(); ++i) {
                std::cout << patientList[i].getName() << std::endl;
            }
        }
    };

// Implement the Patients constructor
Patients::Patients(Patient* initPatients, int count) {
    for (int i = 0; i < count; ++i) {
        patientList.push_back(initPatients[i]);
    }
}

// Add a new patient
void Patients::addPatient(const std::string &name, int age, const std::string &gender) {
    patientList.push_back(Patient(name, age, gender));
}

// Remove a patient by index
void Patients::removePatient(int index) {
    if (index < 0 || index >= patientList.size()) {
        std::cerr << "Invalid index" << std::endl;
        return;
    }
    patientList.erase(patientList.begin() + index);
}

// Search for a patient by name
int Patients::searchByName(const std::string &name) const {
    for (int i = 0; i < patientList.size(); ++i) {
        if (patientList[i].getName() == name) {
            return i;
        }
    }
    return -1; // Not found
}

// Get the number of patients
int Patients::getCount() const {
    return patientList.size();
}

// Print all patient information
void Patients::print() const {
    for (int i = 0; i < patientList.size(); ++i) {
        std::cout << "Patient " << i << ":\n";
        patientList[i].printInfo();
        std::cout << std::endl;
    }
    std::cout << patientList.size() << " patients in total.\n";
}

// Print all patient names
void Patients::printAllNames() const {
    for (int i = 0; i < patientList.size(); ++i) {
        std::cout << patientList[i].getName() << std::endl;
    }
}