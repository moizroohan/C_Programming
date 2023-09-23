#include <stdio.h>
void main (void){
int a[]={5,2,3,5,4};
int b=5;
printf("%d %d %d\n",a[0],a[1],a[2]);
printf("%d",a[0]+a[1]);

float c[]={5.5,2.2,3.3};
float d=50.5;
printf("\n %f %f %f\n",c[0],c[1],c[2]);
c[0]= d;
printf("%f %f %f\n",c[0],c[1],c[2]);



for(int i=0; i<=4; i=i+1){
printf("\n%d",a[i]);
}

printf("\n");
printf("\n");
printf("while Loop Array!");
printf("\n");


int ar[10];
int x=1;
while(x<=10){
ar[x]=x;
printf("\n%d",ar[x]);
x=x+1;
}

}


