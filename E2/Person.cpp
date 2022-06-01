//
// Created by Usuario on 5/31/2022.
//

#include "Person.h"

Person::Person(std::string name, int age) {
    this->name = name;
    Telephone tel;
    tel.work = 0;
    tel.personal = 0;
    this->telephone = tel;
    this->age = age;
}

Person::Person(std::string name, Telephone tel, int age) {
    this->name = name;
    this->telephone = tel;
    this->age = age;
}

Person::~Person(){}

int Person::getAge() {
    return this->age;
}

std::string Person::getName() {
    return this->name;
}