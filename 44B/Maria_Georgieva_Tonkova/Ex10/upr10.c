#include <stdio.h>
#include <string.h>
#include <math.h>

//zad3
struct students{
    float grade;
    char name [10];
};
struct vipusk{
    struct students st[2];
    int clas;
    int year;
};






//zad1
struct points{
    int x;
    int y;
    int z;
};

int main(){
    //zad3
    float sum_cl=0, sum_vp=0;
    struct vipusk c1[2], c2[2];
    c1[0].clas=1;
    c1[0].year=2025;
    strcpy(c1[0].st[0].name, "Ivan");
    c1[0].st[0].grade = 4.00;
    strcpy(c1[0].st[1].name, "Petar");
    c1[0].st[1].grade=5.00;

    c1[1].clas=2;
    c1[1].year=2025;
    strcpy(c1[1].st[0].name, "Ralica");
    c1[1].st[0].grade=3.00;
    strcpy(c1[1].st[1].name, "Miglena");
    c1[1].st[1].grade=4.50;

    c2[0].clas=3;
    c2[0].year = 2024;
    strcpy(c2[0].st[0].name, "Ava");
    c2[0].st[1].grade=6.00;
    strcpy(c2[0].st[1].name, "Pavel");
    c2[0].st[1].grade=4.00;

    c2[1].clas=4;
    c2[1].year=2024;
    strcpy(c2[1].st[0].name,"Hristo");
    c2[1].st[0].grade=3.00;
    strcpy(c2[1].st[1].name, "Pencho");
    c2[1].st[1].grade=6.00;


    for (int i =0; i<2; i++){
        if(c1[i].clas==1){
            for(int j=0;j<2;j++){
            sum_cl+=c1[i].st[j].grade;
            }
        }
    }
    printf("The average grade for the class %d is: %.2f\n", c1[0].clas, sum_cl/2);

    for (int i=0;i<2;i++){
        if(c1[i].year==2025){
            for(int j=0;j<2;j++){
                sum_vp+=c1[i].st[j].grade;
            }
        }
    }
    printf("The average grade for the vipusk %d is: %.2f", c1[0].year, sum_vp/4);





    //zad1
    struct points p[3];
    p[0].x=5;
    p[0].y=6;
    p[0].z=4;

    p[1].x=10;
    p[1].y=1;
    p[1].z=2;

    p[2].x=6;
    p[2].y=3;
    p[2].z=8;

    printf("The sides of the triangle that is formed from the points p1(%d, %d, %d), p2(%d, %d, %d) and p3(%d, %d, %D) are: \n",p[0].x, p[0].y, p[0].z, p[1].x, p[1].y, p[1].z, p[2].x, p[2].y, p[2].z);
    printf("SIDE p1p2 = %.2f\n",sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2) + pow(p[1].z - p[0].z, 2)));
    printf("SIDE p1p3 = %.2f\n",sqrt(pow(p[2].x - p[0].x, 2) + pow(p[2].y - p[0].y, 2) + pow(p[2].z - p[0].z, 2)));
    printf("SIDE p2p3 = %.2f\n",sqrt(pow(p[2].x - p[1].x, 2) + pow(p[2].y - p[1].y, 2) + pow(p[2].z - p[1].z, 2)));

    return 0;
}