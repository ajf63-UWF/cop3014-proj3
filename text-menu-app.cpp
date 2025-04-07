#include <iostream>
#include "patients.hpp"


class TextMenuApp {
    private:
        Patients &patients;
    
    public:
        // Constructor
        explicit TextMenuApp(Patients &patients) : patients(patients) {}
    
        // Run the menu
        void run() {
            int choice;
            do {
                std::cout << "1. Print all patients;\n"
                          << "2. Add a new patient;\n"
                          << "3. Remove a patient;\n"
                          << "4. Exit.\n"
                          << "Please choose an option(1-4): ";
                std::cin >> choice;
    
                switch (choice) {
                case 1: {
                    patients.print();
                    break;
                };
                case 2: {
                    std::string name, gender;
                    int age;
                    std::cout << "Please input patient's name: ";
                    std::cin.ignore();
                    std::getline(std::cin, name);
                    if (patients.searchByName(name) != -1) {
                        std::cout << "Existing patient, please input another name!\n";
                        break;
                    };
                    std::cout << "Please input patient's age: ";
                    std::cin >> age;
                    do {
                        std::cout << "Please input patient's gender (Male/Female): ";
                        std::cin.ignore();
                        std::getline(std::cin, gender);
                        // Convert gender to lowercase for case-insensitive comparison
                        for (char &c : gender) c = std::tolower(c);
                        if (gender == "male" || gender == "female") {
                            // Capitalize the first letter for consistent formatting
                            gender[0] = std::toupper(gender[0]);
                            break;
                        } else {
                            std::cout << "Invalid input, Male, or Female only!\n";
                        };
                    } while (true);
                    patients.addPatient(name, age, gender);
                    std::cout << "Patient added!\n";
                    break;
                };
                case 3: {
                    std::cout << "Patient list:\n";
                    patients.printAllNames();
                    int index;
                    std::cout << "Please input the index of the patient you want to remove: ";
                    std::cin >> index;
                    if (index >= 0 && index < patients.getCount()) {
                        patients.removePatient(index);
                        std::cout << "Patient removed!\n";
                    } else {
                        std::cout << "Invalid index.\n";
                    };
                    break;
                };
                case 4:
                    std::cout << "Thank you for using the app!\n";
                    break;
                default:
                    std::cout << "Invalid choice. Try again.\n";
                };
            } while (choice != 4);
        };
};