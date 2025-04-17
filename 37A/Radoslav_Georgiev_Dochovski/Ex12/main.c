#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//zad 1
/*
void createFile() {
    FILE *file = fopen("fixed_numbers.bin", "wb");
    if (!file) {
        printf("Error creating file!\n");
        return;
    }

    int N, num;
    printf("Enter number of elements (N): ");
    scanf("%d", &N);
    fwrite(&N, sizeof(int), 1, file);

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, file);
    }

    fclose(file);
    printf("File created successfully!\n");
}

void countEvenOdd() {
    FILE *file = fopen("fixed_numbers.bin", "rb");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    int N;
    fread(&N, sizeof(int), 1, file);

    int evenDigits = 0, oddDigits = 0, num;
    printf("\nNumbers in file:\n");
    for (int i = 0; i < N; i++) {
        fread(&num, sizeof(int), 1, file);
        printf("%d ", num);

        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) evenDigits++;
            else oddDigits++;
            temp /= 10;
        }
    }

    fclose(file);
    printf("\n\nEven digits: %d\nOdd digits: %d\n", evenDigits, oddDigits);
}

void sortAndSave() {
    FILE *binFile = fopen("fixed_numbers.bin", "rb");
    if (!binFile) {
        printf("Error opening binary file!\n");
        return;
    }

    int N;
    fread(&N, sizeof(int), 1, binFile);

    int *numbers = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        fread(&numbers[i], sizeof(int), 1, binFile);
    }
    fclose(binFile);

    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    FILE *txtFile = fopen("sorted_numbers.txt", "w");
    if (!txtFile) {
        printf("Error creating text file!\n");
        free(numbers);
        return;
    }

    fprintf(txtFile, "Sorted numbers (%d elements):\n", N);
    for (int i = 0; i < N; i++) {
        fprintf(txtFile, "%d\n", numbers[i]);
    }

    fclose(txtFile);
    free(numbers);
    printf("\nSorted numbers saved to sorted_numbers.txt\n");
}
*/
//zad2
/*
void createFile() {
    FILE *file = fopen("variable_numbers.bin", "wb");
    if (!file) {
        printf("Error creating file!\n");
        return;
    }

    int num;
    printf("Enter numbers (0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        fwrite(&num, sizeof(int), 1, file);
    }

    fclose(file);
    printf("File created successfully!\n");
}

void countEvenOdd() {
    FILE *file = fopen("variable_numbers.bin", "rb");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    int evenDigits = 0, oddDigits = 0, num;
    printf("\nNumbers in file:\n");
    while (fread(&num, sizeof(int), 1, file) == 1) {
        printf("%d ", num);

        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) evenDigits++;
            else oddDigits++;
            temp /= 10;
        }
    }

    fclose(file);
    printf("\n\nEven digits: %d\nOdd digits: %d\n", evenDigits, oddDigits);
}

void sortAndSave() {
    FILE *binFile = fopen("variable_numbers.bin", "rb");
    if (!binFile) {
        printf("Error opening binary file!\n");
        return;
    }

    fseek(binFile, 0, SEEK_END);
    long size = ftell(binFile);
    int N = size / sizeof(int);
    fseek(binFile, 0, SEEK_SET);

    int *numbers = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        fread(&numbers[i], sizeof(int), 1, binFile);
    }
    fclose(binFile);

    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    FILE *txtFile = fopen("sorted_variable.txt", "w");
    if (!txtFile) {
        printf("Error creating text file!\n");
        free(numbers);
        return;
    }

    fprintf(txtFile, "Sorted numbers (%d elements):\n", N);
    for (int i = 0; i < N; i++) {
        fprintf(txtFile, "%d\n", numbers[i]);
    }

    fclose(txtFile);
    free(numbers);
    printf("\nSorted numbers saved to sorted_variable.txt\n");
}
*/
//zad3

typedef struct {
    char brand[50];
    char model[6];
    float engineVolume;
    float price;
    char hasRegistration;
} Car;

void addCar() {
    Car car;

    printf("\nEnter car details:\n");
    printf("Brand: ");
    scanf("%49s", car.brand);

    printf("Model (5 characters): ");
    scanf("%5s", car.model);

    printf("Engine volume: ");
    scanf("%f", &car.engineVolume);

    printf("Price: ");
    scanf("%f", &car.price);

    printf("Has registration? (Y/N): ");
    scanf(" %c", &car.hasRegistration);

    FILE *binFile = fopen("cars.bin", "ab");
    if (!binFile) {
        printf("Error opening binary file!\n");
        return;
    }
    fwrite(&car, sizeof(Car), 1, binFile);
    fclose(binFile);

    FILE *txtFile = fopen("cars.txt", "a");
    if (!txtFile) {
        printf("Error opening text file!\n");
        return;
    }
    fprintf(txtFile, "%s,%s,%.1f,%.2f,%c\n",
            car.brand, car.model, car.engineVolume, car.price, car.hasRegistration);
    fclose(txtFile);

    printf("Car added successfully!\n");
}

void displayCars() {
    printf("\nCars from binary file:\n");
    printf("Brand\t\tModel\tEngine\tPrice\tRegistered\n");
    printf("------------------------------------------------\n");

    FILE *binFile = fopen("cars.bin", "rb");
    if (!binFile) {
        printf("Error opening binary file!\n");
        return;
    }

    Car car;
    while (fread(&car, sizeof(Car), 1, binFile) == 1) {
        printf("%-10s\t%-5s\t%.1f\t%.2f\t%c\n",
               car.brand, car.model, car.engineVolume, car.price, car.hasRegistration);
    }
    fclose(binFile);

    printf("\nCars from text file:\n");
    printf("------------------------------------------------\n");

    FILE *txtFile = fopen("cars.txt", "r");
    if (!txtFile) {
        printf("Error opening text file!\n");
        return;
    }

    char line[200];
    while (fgets(line, sizeof(line), txtFile)) {
        printf("%s", line);
    }
    fclose(txtFile);
}

void searchByBrand() {
    char searchBrand[50];
    printf("\nEnter brand to search: ");
    scanf("%49s", searchBrand);

    FILE *binFile = fopen("cars.bin", "rb");
    if (!binFile) {
        printf("Error opening binary file!\n");
        return;
    }

    printf("\nSearch results:\n");
    printf("Brand\t\tModel\tEngine\tPrice\tRegistered\n");
    printf("------------------------------------------------\n");

    Car car;
    int found = 0;
    while (fread(&car, sizeof(Car), 1, binFile) == 1) {
        if (strcmp(car.brand, searchBrand) == 0) {
            printf("%-10s\t%-5s\t%.1f\t%.2f\t%c\n",
                   car.brand, car.model, car.engineVolume, car.price, car.hasRegistration);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found for brand '%s'\n", searchBrand);
    }

    fclose(binFile);
}

int main()
{
    //zad1
    /*
    int choice;

    do {
        printf("\nFixed Count Binary File Operations\n");
        printf("1. Create file with N numbers\n");
        printf("2. Count even and odd digits\n");
        printf("3. Sort and save to text file\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createFile(); break;
            case 2: countEvenOdd(); break;
            case 3: sortAndSave(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);
    */

    //zad2
    /*
     int choice;

    do {
        printf("\nVariable Count Binary File Operations\n");
        printf("1. Create file with numbers (0 to stop)\n");
        printf("2. Count even and odd digits\n");
        printf("3. Sort and save to text file\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createFile(); break;
            case 2: countEvenOdd(); break;
            case 3: sortAndSave(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);
    */
     int choice;

    do {
        printf("\nCar Dealership Database\n");
        printf("1. Add new car\n");
        printf("2. Display all cars\n");
        printf("3. Search by brand\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addCar(); break;
            case 2: displayCars(); break;
            case 3: searchByBrand(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}
