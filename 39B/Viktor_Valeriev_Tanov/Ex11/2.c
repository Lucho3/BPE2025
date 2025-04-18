#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;

    if((fp = fopen("2", "wb")) == NULL) {
        printf("File cannot be opened");
    }
    for(int i=0;i<10;i++) {
        if(fwrite(&i, sizeof(int), 1, fp) != 1) {
            printf("writing error");
        }
    }

    fclose(fp);

    if((fp = fopen("2", "rb")) == NULL) {
        printf("File cannot be opened");
    }
    int size = 1;
    int *nums, index = 0;
    nums = (int*)calloc(size, sizeof(int));
    int even = 0, odd = 0;
    if(nums == NULL) {
        printf("Memory not allocated. \n");
    }
    int current_element;
    while(fread(&current_element, sizeof(int), 1, fp) == 1) {
        *(nums + (index++)) = current_element;
        nums = realloc(nums, (++size) * sizeof(int));
        // printf("size: %d index: %d\n", size, index);
    }
    nums = realloc(nums, (--size) * sizeof(int));
    fclose(fp);
    int b;
    for(int i=0;i<size;i++) {
        for(int j=i+1;j<size;j++) {
            if(*(nums + i) > *(nums + j)) {
                b = *(nums + i);
                *(nums + i) = *(nums + j);
                *(nums + j) = b;
            }
        }
    }


    if((fp = fopen("2.txt", "w")) == NULL) {
        printf("File cannot be opened");
    }

    for(int i=0;i<size;i++) {
        if(*(nums + i)%2 == 0) {even++;}else{odd++;}
        fprintf(fp, "%d ", *(nums + i));
    }
    printf("Even: %d; Odd: %d", even, odd);
    free(nums);

    return 0;
}