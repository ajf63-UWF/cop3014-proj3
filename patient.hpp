#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <string>
#include <iostream>

class Patient {
private:
    std::string name;
    int age;
    std::string gender;

public:
    // Default constructor
    Patient();

    // Parameterized constructor
    Patient(const std::string &name, int age, const std::string &gender);

    // Getter for name
    std::string getName() const;

    // Method to print patient information
    void printInfo() const;
};

#endif // PATIENT_HPP