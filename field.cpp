#include "field.h"

// Default constructor
Field::Field() : value{0.0, 0.0, 0.0} {}

// Parameterized constructor
Field::Field(double x, double y, double z) : value{x, y, z} {}

// Print magnitude of the field
void Field::printMagnitude() const {
    double magnitude = std::sqrt(value[0] * value[0] + value[1] * value[1] + value[2] * value[2]);
    std::cout << "Field Magnitude: " << magnitude << std::endl;
}

// Overload '<<' operator for output
std::ostream& operator<<(std::ostream &out, const Field &field) {
    out << "Field Components: (" << field.value[0] << ", " << field.value[1] << ", " << field.value[2] << ")";
    return out;
}

