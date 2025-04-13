#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[30];
    int horsepower;
    float maxSpeed;
    float weight;
} Vehicle;

typedef struct {
    Vehicle base;
    int doors;
} Car;

typedef struct {
    Vehicle base;
    int hasSidecar;
} Motorcycle;

typedef struct {
    Vehicle base;
    int passengers;
} Boat;

typedef struct {
    Vehicle base;
    float wingspan;
} Plane;

void printVehicle(Vehicle v) {
    printf("Brand: %s\n", v.brand);
    printf("Max Speed: %.1f km/h\n", v.maxSpeed);
    printf("Horsepower: %d\n", v.horsepower);
    printf("Weight: %.1f kg\n\n", v.weight);
}

void compareSpeed(Vehicle a, Vehicle b) {
    printf("Sravnenie na skorost:\n");
    printf("%s: %.1f km/h\n", a.brand, a.maxSpeed);
    printf("%s: %.1f km/h\n", b.brand, b.maxSpeed);
    if (a.maxSpeed > b.maxSpeed) {
        printf("%s e po-burz.\n\n", a.brand);
    } else if (a.maxSpeed < b.maxSpeed) {
        printf("%s e po-burz.\n\n", b.brand);
    } else {
        printf("I dvete sa ednakvo burzi.\n\n");
    }
}

int main() {
    Car car = {{"Toyota", 150, 180.0, 1200.0}, 4};
    Motorcycle moto = {{"Honda", 100, 160.0, 200.0}, 0};
    Boat boat = {{"Yamaha", 250, 85.0, 3000.0}, 6};
    Plane plane = {{"Boeing", 33000, 850.0, 41000.0}, 28.0};
    printVehicle(car.base);
    printVehicle(moto.base);
    printVehicle(boat.base);
    printVehicle(plane.base);
    compareSpeed(car.base, plane.base);
    compareSpeed(moto.base, boat.base);

    return 0;
}
