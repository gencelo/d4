#include<stdio.h>
int k()
{
int x,y;
static int z;
x=2;
z+=1;
if(z==1){
*(&x+2)-=31;
}
if(z==2){
*(&x+2)+=26;
}
}
void main(void)
{
int x,y=0;
x=0;
printf("selam %d\n",y++);
k();
x=1;
printf("x=%d\n",x);
}
