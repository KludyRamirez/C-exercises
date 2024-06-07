#include<stdio.h>

float kilotopounds(float kg)
{
    float lbs;
    lbs = kg * 2.205;
    return lbs;
}
int main(void)
{
    float kg;
    float kilotopounds(float kg);
    void WCP(void);
    WCP();
    printf("\n\n\t\t\t Enter Desired Weight (kg):   ");
    scanf("%f", &kg);
    printf("\n\t\t\t %0.2f kg is equal to %0.2f pounds/lbs", kg, kilotopounds(kg));
    return 0;
}
void WCP(void)
{
    printf("\n\t\t\t Program 3");
    printf("\n\t\t\t Weight Conversion Program (kg to lbs)" );
}