#include "electric_field.h"
#include <iostream>
#include <cmath>

const double epsilon_0 = 8.854e-12; // Permittivity of free space

// Default constructor
Electric_Field::Electric_Field() : Field(), calculatedElectricField(0.0) {}

// Parameterized constructor
Electric_Field::Electric_Field(double Ex, double Ey, double Ez) : Field(Ex, Ey, Ez), calculatedElectricField(0.0) {}

// Calculate electric field based on given Q and r
void Electric_Field::calculateElectricField(double Q, double r) {
    if (r == 0) {
        std::cerr << "Error: Distance r cannot be zero." << std::endl;
        return;
    }
    calculatedElectricField = Q / (4 * M_PI * r * r * epsilon_0);
}

// Getter for calculated electric field
double Electric_Field::getCalculatedElectricField() const {
    return calculatedElectricField;
}

// Overload '+' operator for Electric Field
Electric_Field Electric_Field::operator+(const Electric_Field &other) const {
    return Electric_Field(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}

// Overload '<<' operator
std::ostream& operator<<(std::ostream &out, const Electric_Field &field) {
    out << "Electric Field Components: (" << field.value[0] << ", " << field.value[1] << ", " << field.value[2] << ")";
    return out;
}

