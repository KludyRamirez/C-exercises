#include<stdio.h>
#include<math.h>
int main(void)
{
    float r, n, A1, An, Gn, Hn;
    void CV (void);
    CV();

    printf("\n\n\t\t Enter the Desired First Term (A1):   ");
    scanf("%f", &A1);
    printf("\n\n\t\t Enter the Desired Common Difference or ratio (r):   ");
    scanf("%f", &r);
    printf("\n\n\t\t Enter the Desired Number of Terms (n):   ");
    scanf("%f", &n);
    printf("\n\n\t\t AP \t GP \t     HP");

    for (int i = 0; i < n; i++)
    {
        An = A1+r*(i);
        Gn = A1* pow(r, i);
        Hn = A1+r*(i);
        printf("\n\n\t\t %0.0f \t %0.0f \t 1/%0.0f or %0.2f", An, Gn, Hn, 1/Hn);
    }

    return 0; }
void CV (void)
{
    printf("\n\t\t Program 1");
    printf("\n\t\t Comparative Values: Arithmetic, Geometric, and Harmonic Progression Program");
}