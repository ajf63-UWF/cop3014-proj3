#include "patient.hpp"

class Patient {
    private:
        std::string name; // Add private member for name
        int age;
        std::string gender;
    
    public:
        // Default constructor
        Patient() : name(""), age(0), gender("") {}
    
        // Parameterized constructor
        Patient(const std::string& name, int age, const std::string& gender)
            : name(name), age(age), gender(gender) {}
    
        // Getter for name
        std::string getName() const {
            return name; // Implement getter for name
        }
    
        // Method to print patient information
        void printInfo() const {
            std::cout << "Patient name: " << name << "\n"
                      << "Patient age: " << age << "\n"
                      << "Patient gender: " << gender << std::endl;
        }
    };


// Default constructor
Patient::Patient() : name(""), age(0), gender("") {}

// Parameterized constructor
Patient::Patient(const std::string &name, int age, const std::string &gender)
    : name(name), age(age), gender(gender) {}

// Getter for name
std::string Patient::getName() const {
    return name;
}

// Method to print patient information
void Patient::printInfo() const {
    std::cout << "Patient name: " << name << "\n"
              << "Patient age: " << age << "\n"
              << "Patient gender: " << gender << std::endl;
}