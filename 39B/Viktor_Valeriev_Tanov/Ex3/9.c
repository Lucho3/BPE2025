#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int s = 0;
    for(int i=0;i<n;i++) {
        int a;
        scanf("%d", &a);
        if(a > k && a%3 == 0) {
            s++;
        }
    }
    printf("%d", s);
    return 0;
}