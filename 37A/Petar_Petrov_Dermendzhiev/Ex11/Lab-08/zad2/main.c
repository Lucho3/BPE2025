#include <stdio.h>
#include <stdlib.h>

void CreateFile(const char* filename)
{
    FILE* file = fopen(filename, "wb");
    if(file == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    int number;
    while(1)
    {
        scanf("%d", &number);
        if(number == -1)
        {
            break;
        }
        fwrite(&number, sizeof(int), 1, file);
    }
    fclose(file);
}
void CountEvenAndOdd(const char* filename)
{
    FILE* file = fopen(filename, "rb");
    if(file == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }
     int evenCount = 0;
     int oddCount = 0;
     int number;

    while(fread(&number, sizeof(int), 1, file) == 1)
    {
        int num = number;
        while(num != 0)
        {
            int digit = num % 10;
            if(digit % 2 == 0)
            {
                evenCount++;
            }else{
                oddCount++;
            }
            num /= 10;
        }
    }

    printf("Even count: %d", evenCount);
    printf("Odd count: %d", oddCount);

    fclose(file);

}
void SortedArray(const char* inputfile, const char* outputfile)
{
    FILE* input = fopen(inputfile, "rb");
    if(input == NULL)
    {
        printf("Cannot read file!\n");
        return -1;
    }

    int *numbers = NULL;
    int count = 0;
    int number;

    while(fread(&number, sizeof(int), 1, input) == 1)
    {
        numbers = (int*)realloc(numbers, (count + 1) * sizeof(int));
        if(!numbers)
        {
            fclose(input);
            exit(1);
        }
        numbers[count] = number;
        count++;
    }
    fclose(input);

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    FILE* output = fopen(outputfile, "w");
    if(output == NULL)
    {
        printf("Unable to open file!\n");
        free(numbers);
        exit(1);
    }

    for(int i = 0; i < count; i++)
    {
        fprintf(output,"%d\n", numbers[i]);
    }
    free(numbers);
    fclose(output);
}
int main()
{
    CreateFile("myfile.txt");
//    int isEvenOrOdd = CountEvenAndOdd("myfile.txt");
//    int isSorted = SortedArray("myfile.txt", "output.txt");
    return 0;
}
