fndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

#include "field.h"

class Magnetic_Field : public Field {
private:
    double calculatedMagneticField;

public:
    Magnetic_Field();
    Magnetic_Field(double Bx, double By, double Bz);

    void calculateMagneticField(double I, double r);
    double getCalculatedMagneticField() const;

    Magnetic_Field operator+(const Magnetic_Field &other) const;

    friend std::ostream& operator<<(std::ostream &out, const Magnetic_Field &field);
};

#endif

