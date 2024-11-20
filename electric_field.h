#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

#include "field.h"

class Electric_Field : public Field {
private:
    double calculatedElectricField;

public:
    Electric_Field();
    Electric_Field(double Ex, double Ey, double Ez);

    void calculateElectricField(double Q, double r);
    double getCalculatedElectricField() const;

    Electric_Field operator+(const Electric_Field &other) const;

    friend std::ostream& operator<<(std::ostream &out, const Electric_Field &field);
};

#endif

