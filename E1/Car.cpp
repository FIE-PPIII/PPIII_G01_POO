//
// Created by Usuario on 5/31/2022.
//

#include "Car.h"

Brand Car::getBrand() {
    return this->brand;
}

int Car::getModel() {
    return this->model;
}

std::string Car::getOwnerName() {
    return this->ownerName;
}

Car::Car(Brand brand, int model, std::string owner) {
    this->brand = brand;
    this->model = model;
    this->ownerName = owner;
}