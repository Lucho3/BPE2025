#include <stdio.h>
#include <stdlib.h>
/*Primer 1*/
/*
int main()
{
    char str[80] = "This is a file system test. \n"; FILE *fp;
    char *p;
    int i;

    // отваря myfile за изход //
    if((fp = fopen("my1.txt", "w"))==NULL)
    {
         printf("Cannot open file. \n"); exit(1);
    }


    // записва str на диска // p = str;
    while(*p)
    {
        if(fputc(*p, fp)==EOF)
        {
            printf("Error writing file. \n"); exit(1);
        }
        p++;
    }
    fclose(fp);

    // отваря myfile за вход //
    if((fp = fopen("my1.txt", "r"))==NULL)
    {
        printf("Cannot open file. \n"); exit(1);
    }

    // чете отново файла //
    for(;;)
    {
        i = fgetc(fp);
        if(i == EOF) break;
        putchar(i);
    }
    fclose(fp);
    return 0;
}
*/
/*Zad.1*/
/*
int compareInts(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void sortAndSaveToTextFile(const char* binaryFilename, const char* textFilename) {
    FILE* binaryFile = fopen(binaryFilename, "rb");
    if (binaryFile == NULL) {
        perror("Error opening binary file for reading");
        exit(1);
    }

    int N;
    fread(&N, sizeof(int), 1, binaryFile);

    int* numbers = (int*)malloc(N * sizeof(int));
    if (numbers == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fread(&numbers[i], sizeof(int), 1, binaryFile);
    }
    fclose(binaryFile);

    qsort(numbers, N, sizeof(int), compareInts);

    FILE* textFile = fopen(textFilename, "w");
    if (textFile == NULL) {
        perror("Error opening text file for writing");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fprintf(textFile, "%d\n", numbers[i]);
    }
    fclose(textFile);

    free(numbers);
    printf("Sorted array has been written to %s\n", textFilename);
}

int main() {
    sortAndSaveToTextFile("numbers.bin", "sorted_numbers.txt");
    return 0;
}
*/
/*Zad.2*/
/*
void create_binary_file(char* filename) {
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    int num;
    printf("Enter numbers:\n");
    while (scanf("%d", &num) == 1) {
        fwrite(&num, sizeof(int), 1, file);
    }

    fclose(file);
}
void count_even_odd_digits(char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    int even_digits = 0, odd_digits = 0;
    int num;

    while (fread(&num, sizeof(int), 1, file) == 1) {
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                even_digits++;
            } else {
                odd_digits++;
            }
            temp /= 10;
        }
    }

    fclose(file);

    printf("Четни: %d\n", even_digits);
    printf("Нечетни: %d\n", odd_digits);
}
int compare_ints(void* a,void* b) {
    return (*(int*)a - *(int*)b);
}
void sort_and_save_to_text(char* binary_filename,char* text_filename) {
    FILE* binary_file = fopen(binary_filename, "rb");
    if (binary_file == NULL) {
        perror("Failed to open binary file");
        exit(EXIT_FAILURE);
    }
    fseek(binary_file, 0, SEEK_END);
    long file_size = ftell(binary_file);
    rewind(binary_file);

    int num_elements = file_size / sizeof(int);
    int* numbers = (int*)malloc(file_size);
    if (numbers == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    fread(numbers, sizeof(int), num_elements, binary_file);
    fclose(binary_file);
    qsort(numbers, num_elements, sizeof(int), compare_ints);
    FILE* text_file = fopen(text_filename, "w");
    if (text_file == NULL) {
        perror("Failed to open text file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < num_elements; i++) {
        fprintf(text_file, "%d\n", numbers[i]);
    }

    fclose(text_file);
    free(numbers);
}

int main() {
    char* binary_filename = "numbers.bin";
    char* text_filename = "sorted_numbers.txt";
    printf("New binary file\n");
    create_binary_file(binary_filename);
    printf("Binary file '%s': \n", binary_filename);
    printf("Четните и нечетните числа са:\n");
    count_even_odd_digits(binary_filename);
    printf("\n");
    printf("Сортирани и записани числа\n");
    sort_and_save_to_text(binary_filename, text_filename);
    printf("Успешно записване '%s'\n", text_filename);

    return 0;
}
*/
/*Zad.3*/

struct Car {
    char brand[10];
    char model[6];
    double volume;
    double price;
    char registered;
};

FILE *fpb, *fpt;

void add_car(struct Car car) {
    fwrite(&car, sizeof(struct Car), 1, fpb);
    fprintf(fpt, "%s %s %lf %lf %c\n", car.brand, car.model, car.volume, car.price, car.registered);
}

void print_binary() {
    struct Car car;
    for (;;) {
        if (fread(&car, sizeof(struct Car), 1, fpb) == 0) break;
        printf("%s %s %lf %lf %c\n", car.brand, car.model, car.volume, car.price, car.registered);
    }
}

void print_text() {
    struct Car car;
    for (;;) {
        if (fscanf(fpt, "%s %s %lf %lf %c", car.brand, car.model, &car.volume, &car.price, &car.registered) == EOF) break;
        printf("%s %s %lf %lf %c\n", car.brand, car.model, car.volume, car.price, car.registered);
    }
}

int main() {
    struct Car car1 = { "BMW", "M3", 2.997, 15600, 'Y' };
    struct Car car2 = { "Audi", "A3", 1.997, 13600, 'Y' };

    if ((fpb = fopen("car_binary", "wb")) == NULL) {
        printf("Error opening binary file. \n");
        exit(1);
    }

    if ((fpt = fopen("car_text.txt", "w")) == NULL) {
        printf("Error opening text file. \n");
        exit(1);
    }

    add_car(car1);
    add_car(car2);

    fclose(fpb);
    fclose(fpt);


    if ((fpb = fopen("car_binary", "rb")) == NULL) {
        printf("Error opening binary file. \n");
        exit(1);
    }

    if ((fpt = fopen("car_text.txt", "r")) == NULL) {
        printf("Error opening text file. \n");
        exit(1);
    }

    print_binary();
    print_text();

    fclose(fpb);
    fclose(fpt);
}

