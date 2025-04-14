#include <stdio.h>
#include <string.h>

typedef struct
{
    char brand[50];
    char model[50];
    int year;
    float max_speed;
} Vehicle;

typedef struct
{
    Vehicle vehicle;
    char type[20];
} Transport;

int main()
{
    Transport transports[3] = {
        {{"Toyota", "Corolla", 2020, 180.0}, "Car"},
        {{"Yamaha", "YZF-R1", 2021, 200.0}, "Motor"},
        {{"Bayliner", "Element E16", 2019, 50.0}, "Boat"},
    };

    float max_speed = transports[0].vehicle.max_speed;
    char fastest_vehicle[100];
    strcpy(fastest_vehicle, transports[0].vehicle.brand);
    strcat(fastest_vehicle, " ");
    strcat(fastest_vehicle, transports[0].vehicle.model);

    for (int i = 1; i < 3; i++)
    {
        if (transports[i].vehicle.max_speed > max_speed)
        {
            max_speed = transports[i].vehicle.max_speed;
            strcpy(fastest_vehicle, transports[i].vehicle.brand);
            strcat(fastest_vehicle, " ");
            strcat(fastest_vehicle, transports[i].vehicle.model);
        }
    }

    printf("The fastest vehicle: %s with max speed %.2f km/h\n", fastest_vehicle, max_speed);

    return 0;
}
