#ifndef TEXT_MENU_APP_HPP
#define TEXT_MENU_APP_HPP

#include "patients.hpp"

class TextMenuApp {
private:
    Patients &patients;

public:
    TextMenuApp(Patients &patients) : patients(patients) {}

    void run() {
        // Placeholder for menu logic
        patients.print();
    }
};

#endif // TEXT_MENU_APP_HPP