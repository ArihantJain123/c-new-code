#include<stdio.h>

int main()
{
float bs,hra,da,gs;

printf("enter the basic salary ");
scanf("%f",&bs);

if(bs<1500)
{
    hra = bs*10/100;
    da = bs*90/100;
}
else
 {

   hra = 1500;
    da = bs*98/100;

}

gs = bs + hra + da ;
printf("gross salary is=%f",gs);

 return 0;
}
