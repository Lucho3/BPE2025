#include <stdio.h>
#include <stdlib.h>
void CreateFile(char *filename)
{
    FILE *fp;
    fp = fopen(filename, "wb");

    if (!fp)
    {
        printf("Error occured!");
        return 1;
    }

    int N;
    scanf("%d", &N);

    fwrite(&N, sizeof(int), 1, fp);

    int *numbers = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }

    fwrite(numbers, sizeof(int), N, fp);
    free(numbers);
    fclose(fp);
}
void CountEvenOdd(const char *filename)
{
    File *fp;
    fp = fopen(filename, "rb");
    if (!fp)
    {
        printf("Error occured!");
        return 1;
    }

    int N;
    fread(&N, sizeof(int), 1, fp);

    int *numbers = (int *)malloc(sizeof(int) * N);
    fread(numbers, sizeof(int), N, fp);

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < N; i++)
    {
        int currNum = numbers[i];
        while (num != 0)
        {
            int digit = num % 10;
            if (digit % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
            num /= 10;
        }
    }

    printf("Even count: %d", evenCount);
    printf("Odd count: %d", oddCount);

    free(numbers);
    fclose(fp);
}
void UpperNumbers(const char *inputFile, const char *outputFile)
{
    FILE *fp;
    fp = fopen(inputFile, "rb");

    if (!fp)
    {
        printf("Error occured!");
        return 1;
    }

    int N;
    fread(&N, sizeof(int), 1, fp);

    int *numbers = (int *)malloc(sizeof(int) * N);
    fread(numbers, sizeof(int), N, fp);
    fclose(fp);

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    FILE *file = fopen(outputFile, "w");
    if (!file)
    {
        printf("Error occured!");
        free(numbers);
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        fprintf(file, "%d\n", numbers[i]);
    }

    free(numbers);
    fclose(file);
}
int main()
{
    CreateFile("myfile.txt");
    CountEvenOdd("myfile.txt");
    UpperNumbers("myfile.txt", "outputFile.txt");
    return 0;
}