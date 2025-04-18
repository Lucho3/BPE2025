#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car {
    char brand[15];
    char model[6];
    int volume;
    double price;
    char registered;
};

typedef struct car Car;

void addCar() {
    Car newCar;
    printf("Car brand: ");
    scanf("%s", newCar.brand);
    printf("Car model: ");
    scanf(" %s", newCar.model);
    printf("Engine volume: ");
    scanf(" %d", &newCar.volume);
    printf("Car price: ");
    scanf(" %lf", &newCar.price);
    printf("Is it registered (Y/N): ");
    scanf(" %c", &newCar.registered);


    FILE *fp;

    if((fp = fopen("carDatabase", "ab")) == NULL) {
        printf("cannot open file");
    }
    if(fwrite(&newCar, sizeof(newCar), 1, fp) != 1) {
        printf("erorr");
    }

    fclose(fp);

    if((fp = fopen("carDatabase.txt", "a")) == NULL) {
        printf("cannot open file");
    }

    fprintf(fp, "%s %s %d %.2f %c\n", newCar.brand, newCar.model, newCar.volume, newCar.price, newCar.registered);

    fclose(fp);
}

void readCars() {
    FILE *fp;
    if((fp = fopen("carDatabase", "rb")) == NULL) {
        printf("error");
        return;
    }
    Car newCar;
    printf("===READING FROM BINARY FILE===\n");
    while(fread(&newCar, sizeof(newCar), 1, fp) == 1) {
        printf("%s %s %d %.2f %c\n", newCar.brand, newCar.model, newCar.volume, newCar.price, newCar.registered);
    }
    printf("===READING FROM BINARY FILE===\n\n\n");
    fclose(fp);



    if((fp=fopen("carDatabase.txt", "r")) == NULL) {
        printf("error");
        return;
    }

    printf("===READING FROM TEXT FILE===\n");
    while(!feof(fp)) {
        if(fscanf(fp, "%s %s %d %lf %c", newCar.brand, newCar.model, &newCar.volume, &newCar.price, &newCar.registered) != 0) {
            if(feof(fp)) {break;}
            printf("%s %s %d %lf %c\n", newCar.brand, newCar.model, newCar.volume, newCar.price, newCar.registered);
        }
    }
    printf("===READING FROM TEXT FILE===\n");

    fclose(fp);
}

int main() {
    printf("----------------------\nChoose your options:\n1. Add new car.\n2. Read all cars.\n3. to exit program.\n----------------------\n");
    int command;
    scanf("%d", &command);
    while(command != 3) {
        if(command == 1) {addCar();}else if(command == 2) {readCars();};
        printf("\n----------------------\nChoose your options:\n1. Add new car.\n2. Read all cars.\n3. to exit program.\n----------------------\n");
        scanf("%d", &command);
    }

    return 0;
}