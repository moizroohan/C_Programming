#include <stdio.h>
void main (void){
int a,a1;
float b,b1;
char d,d1;
char e[10],s[10];

///////////////////////////////////////
printf("Enter Characters (A,B): ");
scanf("%c,%c",&d,&d1);
printf("%c  %c",d,d1);
//////////////////////////////////////////
printf("\nEnter Integer Numbers (1,2): ");
scanf("%d,%d",&a,&a1);
printf("%d  %d",a,a1);
//////////////////////////////////////////
printf("\nEnter Float Numbers (1.0,2.0): ");
scanf("%f,%f",&b,&b1);
printf("%f  %f",b,b1);
//////////////////////////////////////////
printf("\nEnter String (Moiz,Moham):  ");
scanf("%s %s",e,s);
printf("%s %s",e,s);
/////////////////////////////////////////
}
