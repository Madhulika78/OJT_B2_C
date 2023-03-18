#include<stdio.h>
int main()
{
    int  amount, hunn, fifn, twen, tenn, fiven, twon, onen;
    int hunnm, fifnm, twenm, tennm, fivenm, twonm;
    printf("Input the amount: ");
    scanf("%d", &amount);
    hunn = amount / 100;
    hunnm = amount % 100;
    fifn = hunnm / 50;
    fifnm = hunnm % 50;
    twen = fifnm / 20;
    twenm = fifnm % 20;
    tenn = twenm / 10;
    tennm = twenm % 10;
    fiven = tennm / 5;
    fivenm = tennm % 5;
    twon = fivenm / 2;
    twonm = fivenm % 2;
    onen = twonm / 1;
    printf("hundred notes = %d\n", hunn);
    printf("fifty notes = %d\n", fifn);
    printf("twenty notes = %d\n", twen);
    printf("ten notes = %d\n", tenn);
    printf("five notes = %d\n", fiven);
    printf("two notes = %d\n", twon);
    printf("one notes = %d", onen);
    return 0; 
}
