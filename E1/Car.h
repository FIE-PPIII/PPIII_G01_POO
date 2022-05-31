//
// Created by Usuario on 5/31/2022.
//

#ifndef BASE_CPP_CAR_H
#define BASE_CPP_CAR_H
#include <string>

enum Brand
{
    Toyota,
    Honda,
    Nissan,
    BMW_Group,
    Volkswagen,
    Daimler,
    FCA,
    Tesla
};

class Car {
private:
    Brand brand;
    int model;
    std::string ownerName;
public:
    Car(Brand brand, int model, std::string owner);
    Brand getBrand();
    int getModel();
    std::string getOwnerName();
};


#endif //BASE_CPP_CAR_H
