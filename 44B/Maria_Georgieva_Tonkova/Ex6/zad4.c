#include <stdio.h>
#include<math.h>
int main(){
    int numbers[7],i, sum=0, closestnum, place;
    float avg, dist, mindist;
    for (i=0;i<=6;i++){
        printf("Enter number(-5000;5000): ");
        scanf("%d",&numbers[i]);
        while (numbers[i]<-5000 || numbers[i]>5000){
            printf("Incorrect number. Enter the number again: ");
            scanf("%d", &numbers[i]);
        }
        sum+=numbers[i];
    }
    avg=sum/7.0;
    mindist=abs(avg-numbers[0]);
    closestnum=numbers[0];
    for(i=1;i<=6;i++){
        dist=abs(avg-numbers[i]);
        if(mindist>dist){
            mindist=dist;
            closestnum=numbers[i];
        }
    }
    place=closestnum;
    for (i=0;i<=6;i++){
        printf("%d  ", numbers[i]);
        if(numbers[i]==place){
            place=i+1;
        }
    }
    printf("\nAverage of the numbers: %.2f. The closest number: %d. This number is at %d position.",avg, closestnum, place);   

    return 0;
}