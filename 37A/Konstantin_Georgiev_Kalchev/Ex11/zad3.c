#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char carBrand[50];
    char carModel[6];
    int motorPower;
    double price;
    char registration;
} Car;

void AddCar()
{
    Car car;

    scanf("%s", &car.carBrand);
    scanf("%5s", &car.carModel);
    scanf("%d", &car.motorPower);
    scanf("%lf", &car.price);
    scanf("%s", &car.registration);

    FILE *binaryFile = fopen("myfile.txt", "wb");
    if (binaryFile == NULL)
    {
        printf("Unable to open file!\n");
        exit(1);
    }

    fwrite(&car, sizeof(Car), 1, binaryFile);
    fclose(binaryFile);

    FILE *textFile = fopen("textfile.txt", "w");
    if (textFile == NULL)
    {
        printf("Unable to open file!\n");
        exit(1);
    }
    fprintf(textFile, "%s %s %.2f %.2f %s\n", car.carBrand, car.carModel, car.motorPower, car.price, car.registration);
    fclose(textFile);
}
void ReadAndCompare()
{
    Car car;

    FILE *binaryFile = fopen("myfile.txt", "rb");
    if (binaryFile == NULL)
    {
        printf("Unable to open file!\n");
        exit(1);
    }
    while (fread(&car, sizeof(Car), 1, binaryFile) == 1)
    {
        printf("Brand: %s, Model: %s, Engine Volume: %.2f, Price: %.2f, Registered: %s\n",
               car.carBrand, car.carModel, car.motorPower, car.price, car.registration);
    }
    fclose(binaryFile);

    FILE *textFile = fopen("textfile.txt", "r");
    if (textFile == NULL)
    {
        printf("Unable to open file!\n");
        exit(1);
    }
    char line[256];
    while (fgets(line, sizeof(line), textFile))
    {
        printf("%s", line);
    }
    fclose(textFile);
}
int main()
{
    AddCar();
    ReadAndCompare();
    return 0;
}