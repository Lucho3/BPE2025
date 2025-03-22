#include<stdio.h>

int length(char string[]){
    int i,count=0;
    for(i=0; string[i]!='\0';i++){
        if(string[i]!=' ' && string[i]!='\n'){
        count++;}
    }
    return count;
}
int main()
{
//zad 1    
    // char string[30];
    // printf("Enter a string: ");
    // fgets(string,sizeof(string),stdin);
    // printf("The length of the string is %d",length(string));




//zad 4
    // char str1[20], str2[20];
    // int i,j=0,k=0;
    // printf("Enter a string: ");
    // fgets(str1, sizeof(str1), stdin);
    // printf("Enter second string: ");
    // fgets(str2, sizeof(str2), stdin);
    // for(i=0; str1[i]!='\0'; i++){
    //     j++;
    // }
    // for(i=0; str2[i]!='\0';i++){
    //     k++;
    // }
    // if (j<k){
    //     printf("The second string is larger.");
    // }
    // if(j==k){
    //     printf("Both strings have same length.");
    // }
    // if(k<j){
    //     printf("The first string is larger.");
    // }


//zad 6
    // char str3[20];
    // int i;
    // printf("Enter a string: ");
    // fgets(str3,sizeof(str3),stdin);
    // for (i=0; str3[i]!='\0'; i++){
    //     if(str3[i]>96 && str3[i]<123){
    //         str3[i]-=32;
    //     }
    // }
    // puts (str3);




//zad 3
    // char str4[20];
    // int i,a=0, b=0, c=0,d=0,e=0,f=0,g=0,h=0,ii=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    // printf("Enter string: ");
    // fgets(str4, sizeof(str4), stdin);
    // for (i=0; str4[i]!='\0'; i++){
    //     char ch=str4[i];

    //     switch (ch){
    //         case 'a':
    //         case 'A':
    //         a++;
    //         break;

    //         case 'b':
    //         case 'B':
    //         b++;
    //         break;
            
    //         case 'c':
    //         case 'C':
    //         c++;
    //         break;
            
    //         case 'd':
    //         case 'D':
    //         d++;
    //         break;
            
    //         case 'e':
    //         case 'E':
    //         e++;
    //         break;
            
    //         case 'f':
    //         case 'F':
    //         f++;
    //         break;
            
    //         case 'g':
    //         case 'G':
    //         g++;
    //         break;
            
    //         case 'h':
    //         case 'H':
    //         h++;
    //         break;
            
    //         case 'i':
    //         case 'I':
    //         ii++;;
    //         break;
            
    //         case 'j':
    //         case 'J':
    //         j++;
    //         break;
            
    //         case 'k':
    //         case 'K':
    //         k++;
    //         break;
            
    //         case 'l':
    //         case 'L':
    //         l++;
    //         break;
            
    //         case 'm':
    //         case 'M':
    //         m++;
    //         break;
            
    //         case 'n':
    //         case 'N':
    //         n++;
    //         break;
            
    //         case 'o':
    //         case 'O':
    //         o++;
    //         break;
            
    //         case 'p':
    //         case 'P':
    //         p++;
    //         break;
            
    //         case 'q':
    //         case 'Q':
    //         q++;
    //         break;
            
    //         case 'r':
    //         case 'R':
    //         r++;
    //         break;
            
    //         case 's':
    //         case 'S':
    //         s++;
    //         break;
            
    //         case 't':
    //         case 'T':
    //         t++;
    //         break;
            
    //         case 'u':
    //         case 'U':
    //         u++;
    //         break;
            
    //         case 'v':
    //         case 'V':
    //         v++;
    //         break;
            
    //         case 'w':
    //         case 'W':
    //         w++;
    //         break;
            
    //         case 'x':
    //         case 'X':
    //         x++;
    //         break;
            
    //         case 'y':
    //         case 'Y':
    //         y++;
    //         break;
            
    //         case 'z':
    //         case 'Z':
    //         z++;
    //         break;
    //     }
    // }
    // if (a>0){
    //     printf("A -> %d\n",a);
    // }
    // if (b>0){
    //     printf("B -> %d\n",b);
    // }
    // if (c>0){
    //     printf("C -> %d\n",c);
    // }
    // if (d>0){
    //     printf("D -> %d\n",d);
    // }
    // if (e>0){
    //     printf("E -> %d\n",e);
    // }
    // if (f>0){
    //     printf("F -> %d\n",f);
    // }
    // if (g>0){
    //     printf("G -> %d\n",g);
    // }
    // if (h>0){
    //     printf("H -> %d\n",h);
    // }
    // if (ii>0){
    //     printf("I -> %d\n",ii);
    // }
    // if (j>0){
    //     printf("J -> %d\n",j);
    // }
    // if (k>0){
    //     printf("K -> %d\n",k);
    // }
    // if (l>0){
    //     printf("L -> %d\n",l);
    // }
    // if (m>0){
    //     printf("M -> %d\n",m);
    // }
    // if (n>0){
    //     printf("N -> %d\n",n);
    // }
    // if (o>0){
    //     printf("O -> %d\n",o);
    // }
    // if (p>0){
    //     printf("P -> %d\n",p);
    // }
    // if (q>0){
    //     printf("Q -> %d\n",q);
    // }
    // if (r>0){
    //     printf("R -> %d\n",r);
    // }
    // if (s>0){
    //     printf("S -> %d\n",s);
    // }
    // if (t>0){
    //     printf("T -> %d\n",t);
    // }
    // if (u>0){
    //     printf("U -> %d\n",u);
    // }
    // if (v>0){
    //     printf("V -> %d\n",v);
    // }
    // if (w>0){
    //     printf("W -> %d\n",w);
    // }
    // if (x>0){
    //     printf("X -> %d\n",x);
    // }
    // if (y>0){
    //     printf("Y -> %d\n",y);
    // }
    // if (z>0){
    //     printf("Z -> %d\n",z);
    // }

    return 0;
}