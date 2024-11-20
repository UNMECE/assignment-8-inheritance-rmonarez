#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include <array>
#include <cmath>

class Field {
protected:
    std::array<double, 3> value;

public:
    Field();
    Field(double x, double y, double z);
    virtual ~Field() = default;

    virtual void printMagnitude() const;

    friend std::ostream& operator<<(std::ostream &out, const Field &field);
};

#endif

