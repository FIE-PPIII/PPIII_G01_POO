//
// Created by Usuario on 5/31/2022.
//

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Telephone tel;
    tel.personal = 4425678;
    tel.work = 1242689;
    Person people[5] = {Person("Harper", 58), Person("Trump", 79), Person("Biden", 88),Person("Merkle", 29), Person("Elizabeth", tel, 90)};
    for (int i = 0; i < 5; i++) {
        if (people[i].getAge() > 30)
            cout<<people[i].getName()<<endl;
    }
    return 0;
}