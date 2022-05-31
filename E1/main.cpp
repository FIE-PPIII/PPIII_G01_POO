#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Car cars[5] = {Car(Tesla, 2021, "Elon"), Car(BMW_Group, 2019, "Bill Gates"),
                  Car(Tesla, 2016, "Trump"), Car(Nissan, 2008, "Stephen Harper"),
                  Car(Honda, 2009, "Macron")};
    for (int i = sizeof(cars)/sizeof(Car); i >= 0; i--){
        if (cars[i].getModel() > 2010){
            Car car = cars[i];
            cout<<"This "<<car.getBrand()<<" "<<car.getModel()<<" belongs to "<<car.getOwnerName()<<endl;
        }
    }

    return 0;
}
