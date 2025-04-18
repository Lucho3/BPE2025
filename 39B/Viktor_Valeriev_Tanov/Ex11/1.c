#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0;i<n;i++) {
        scanf("%d", nums + i);
    }

    FILE *fp;

    if((fp = fopen("1", "wb")) == NULL) {
        printf("File cannot be opened");
    }

    if(fwrite(&n, sizeof(int), 1, fp) != 1) {
        printf("writing error 1");
    }

    for(int i=0;i<n;i++) {
        if(fwrite(nums + i, sizeof(nums), 1, fp) != 1) {
            printf("writing error");
        }
    }

    fclose(fp);

    if((fp = fopen("1", "rb")) == NULL) {
        printf("File cannot be opened");
    }
    int n1;
    if(fread(&n1, sizeof(int), 1, fp) != 1) {
        printf("Reading error");
    }
    int nums1[n1];

    for(int i=0;i<n1;i++) {
        if(fread(nums1 + i, sizeof(nums1), 1, fp) != 1) {
            printf("Reading error");
        }
    }
    fclose(fp);
    int b, even = 0, odd = 0;
    for(int i=0;i<n1;i++) {
        for(int j=i+1;j<n1;j++) {
            if(nums1[i] > nums1[j]) {
                b = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = b;
            }
        }
    }

    if((fp = fopen("1.txt", "w")) == NULL) {
        printf("Cannot open file");
    }

    for(int i=0;i<n1;i++) {
        if(nums1[i]%2 == 0) {even += 1;}else{odd += 1;}
        fprintf(fp, "%d ", *(nums1 + i));
    }

    printf("Even: %d; Odd: %d", even, odd);
    fclose(fp);

    return 0;
}