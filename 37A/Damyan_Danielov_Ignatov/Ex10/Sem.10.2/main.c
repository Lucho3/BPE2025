#include <stdio.h>
#include <stdlib.h>
typedef struct vehicleStats {
    int weight;
    int horsepower;
    int topSpeed;
} vehicle;

typedef struct vehicleType {
    char type[64];
    vehicle stats;
} vehicleType;


void printVehicle(vehicleType vehicle) {
    printf("The vehicle is a %s, weighs %d kg, has %d horsepower and accelerates to a top speed of %d km/h \n",vehicle.type, vehicle.stats.weight, vehicle.stats.horsepower, vehicle.stats.topSpeed);
}
int main()
{
    vehicleType v1;
    strcpy(v1.type,"muscle car");
    v1.stats.horsepower = 400;
    v1.stats.weight = 1800;
    v1.stats.topSpeed = 210;
    printVehicle(v1);

    vehicleType v2;
    strcpy(v2.type,"speedboat");
    v2.stats.horsepower = 250;
    v2.stats.weight = 600;
    v2.stats.topSpeed = 50;
    printVehicle(v2);

    vehicleType v3;
    strcpy(v3.type,"jet airliner");
    v3.stats.horsepower = 33000;
    v3.stats.weight = 150000;
    v3.stats.topSpeed = 750;
    printVehicle(v3);
    return 0;
}
