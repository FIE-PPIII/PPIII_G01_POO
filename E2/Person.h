//
// Created by Usuario on 5/31/2022.
//

#ifndef E2_PERSON_H
#define E2_PERSON_H
#include <string>

typedef struct telephone
{
    int work;
    int personal;
} Telephone;

class Person {
private:
    std::string name;
    Telephone telephone;
    int age;
public:
    Person(std::string name, int age);
    Person(std::string name, Telephone tel, int age);
    ~Person();
    std::string getName();
    int getAge();

};


#endif //E2_PERSON_H
