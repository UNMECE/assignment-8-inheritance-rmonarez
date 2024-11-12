lude "magnetic_field.h"
#include <iostream>
#include <cmath>

const double mu_0 = 4 * M_PI * 1e-7; // Permeability of free space

// Default constructor
Magnetic_Field::Magnetic_Field() : Field(), calculatedMagneticField(0.0) {}

// Parameterized constructor
Magnetic_Field::Magnetic_Field(double Bx, double By, double Bz) : Field(Bx, By, Bz), calculatedMagneticField(0.0) {}

// Calculate magnetic field based on given I and r
void Magnetic_Field::calculateMagneticField(double I, double r) {
    if (r == 0) {
        std::cerr << "Error: Distance r cannot be zero." << std::endl;
        return;
    }
    calculatedMagneticField = (mu_0 * I) / (2 * M_PI * r);
}

// Getter for calculated magnetic field
double Magnetic_Field::getCalculatedMagneticField() const {
    return calculatedMagneticField;
}

// Overload '+' operator for Magnetic Field
Magnetic_Field Magnetic_Field::operator+(const Magnetic_Field &other) const {
    return Magnetic_Field(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}

// Overload '<<' operator
std::ostream& operator<<(std::ostream &out, const Magnetic_Field &field) {
    out << "Magnetic Field Components: (" << field.value[0] << ", " << field.value[1] << ", " << field.value[2] << ")";
    return out;
}

