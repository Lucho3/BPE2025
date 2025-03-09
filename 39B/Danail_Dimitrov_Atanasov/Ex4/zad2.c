// #include <stdio.h>
// int Switch(int a, int b);
// int main(){
//     int a;
//     int b;
//     printf("Enter two numbers to be switched: ");
//     scanf("%d %d", &a, &b);
//     a,b = Switch(a,b);
//     printf("The numbers now are a: %d and b: %d", a, b);
// }

// int Switch(int a, int b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     return a,b

// }

#include <stdio.h>
void Switch(int arr[2]);
int main() {
    int arr[2];
    printf("Enter two numbers to be switched: ");
    scanf("%d %d", &arr[0], &arr[1]);
    
    Switch(arr);
    printf("The numbers now are a: %d and b: %d\n", arr[0], arr[1]);
}

void Switch(int arr[2]) {
    arr[0] = arr[0] + arr[1];
    arr[1] = arr[0] - arr[1];
    arr[0] = arr[0] - arr[1];
}

