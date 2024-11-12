nclude <iostream>
#include "electric_field.h"
#include "magnetic_field.h"

int main() {
    // Create Electric and Magnetic fields using constructors
    Electric_Field E1(1e5, 10.9, 1.7e2);
    Magnetic_Field B1(3.0, 4.0, 0.0);

    // Calculate specific fields
    E1.calculateElectricField(1e-6, 0.1); // Example values for Q and r
    B1.calculateMagneticField(10, 0.05);  // Example values for I and r

    // Print calculated fields
    std::cout << "Calculated Electric Field: " << E1.getCalculatedElectricField() << std::endl;
    std::cout << "Calculated Magnetic Field: " << B1.getCalculatedMagneticField() << std::endl;

    // Print magnitudes
    E1.printMagnitude();
    B1.printMagnitude();

    // Test '+' operator overload
    Electric_Field E2(1.0, 2.0, 3.0);
    Electric_Field E3 = E1 + E2;
    std::cout << E3 << std::endl;

    Magnetic_Field B2(0.1, 0.2, 0.3);
    Magnetic_Field B3 = B1 + B2;
    std::cout << B3 << std::endl;

    return 0;
}

