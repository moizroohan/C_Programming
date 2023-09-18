#include <stdio.h>
void main (void){
///////////////////////
int i=1;
while(i<11){
printf("%d\n",i);
i=i+1;
}
///////////////////////
printf("\n");
///////////////////////
int j=131;
while(j<=146){
printf("%d\n",j);
j=j+5;
}
/////////////////////////////
printf("\n");
///////////////////////
int a=1;
for(;a<=5;){
printf("%d\n",a);
a=a+1;
}
////////////////////
printf("\n");
//////////////////
int b=10;
for(;b>=1;){
printf("%d\n",b);
b=b-1;
}
//////////////////
printf("\n");
//////////////////
int d=1;
printf("Enter Number For Table = ");
scanf("%d",&d);
for(int c=1;c<=10;c=c+1){
printf("%d x %d = %d\n",d,c,c*d);
}
}
