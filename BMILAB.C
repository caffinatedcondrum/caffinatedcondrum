#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
 
void calculateBMI(void);

FILE*fp;
int main(void)
{
int i;
fp = fopen ("csis.txt","w");
for (i=0; i<4; i++)
calculateBMI;
fpclose(fp);
return0;
} 

void calculateBMI (void);
{ 
double weight, height;
double bmi;
printf( "enter weight in lbs:");
scanf( "%lf", &weight);
fprintf( fp, "Weight:%lf\n", weight);
printf( "enter height in inches:");
scanf( "%lf", &height);
fprintf( fp, "Height:%lf\n", height);

bmi = 703 * weight /pow ( height , 2 );

printf ( "BMI:%lf\n", bmi);
fprintf(fp, "BMI:%lf\n", bmi);

if (bmi<18.5)
{
    printf("Underweight")
    fprintf(fp, "Underweight")
else if (bmi<25.0)
{
    printf("Healthy")
    fprintf(fp, "Healthy")
else if (bmi<30.0)
{ 
    printf("Overweight")
    fprintf(fp, "Overweight")
else if (bmi>30.0)
{ 
    printf ("Obese")
    fprintf(fp, "Obese");
return;
