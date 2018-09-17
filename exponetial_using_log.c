#include<stdio.h> 
#include<math.h> 
int main() 
{ 
float y,x,e; 
int z; 
//x=100.0; 
scanf("%f",&x);
scanf("%f",&e);
y=log(x); 
printf("log(%f)=%f\n",x,y); 
z=(int)(exp(y*e)) % 10 ; 
//z=exp(y*5);
printf("antilog(%f)=%d\n",y,z); 
return 0; 
} 