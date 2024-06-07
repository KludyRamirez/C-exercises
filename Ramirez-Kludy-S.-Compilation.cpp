#include <stdio.h>
#include<math.h>


int main(void)
{
    char prog;
    int choice, programs;
    do
    {
        printf(" \n\tCompilation of Different Kinds of Programs");
        printf(" \n\n\t1 - Conversion of Fahrenheit to Celsius	    \t5 - Factorial Program     \t9 - Exit");
        printf(" \n\t2 - Arithmetic Progression		     \t6 - Compound Interest");
        printf(" \n\t3 - Height Conversion		         \t7 - Geometric Progression");
        printf(" \n\t4 - Weight Conversion			       \t8 - Harmonic Progression");

        printf(" \n\n\tEnter the Desired Number of What Program You Wish to Run:   \t");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                float celsius, fahrenheit;
                printf("\n\t Fahrenheit to Celsius Conversion Program ");
                printf("\n\n\t Enter Desired Temperature in Fahrenheit:   \t");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;

                printf("\n\t = %0.2f degree celsius", celsius);

                break;
            case 2:
                int A1, An, d, n;

                printf("\n\t Arithmetic Progression Program");

                printf("\n\n\t Enter Desired First Term: \t");
                scanf("%d", &A1);
                printf("\n\t Enter Desired Common Difference: \t");
                scanf("%d", &d);
                printf("\n\t Enter Desired Number of Terms: \t");
                scanf("%d", &n);

                An = A1 + (n - 1) * d;
                printf("\n\t The Elements of the Series From A1 to An: \n");

                while (A1 <= An) {
                    printf("\n\t %d ", A1);
                    A1 = A1 + d;
                }

                break;
            case 3:
                float ft, inch, cm;

                printf("\n\t Height Conversion Program (Ft to Cm)");

                printf("\n\n\t Enter Height in Feet: \t");
                scanf("%f", &ft);
                printf("\n\t Enter Remaining Inch here (If None Press 0): \t");
                scanf("%f", &inch);
                cm = ((ft * 12) + inch) * 2.54;
                printf("\n\t Your Height in Centimeter is %0.2f cm", cm);

                break;

            case 4:
                float kg, lbs;

                printf("\n\t Weight Conversion Program (Kg to lbs)");

                printf("\n\n\t Enter your Weight in Kg: \t");
                scanf("%f", &kg);
                lbs = (kg * 2.2);
                printf("\n\t Your Weight in Pounds is %0.2f lbs", lbs);

                break;
            case 5:
            {
                double n1, fact = 1, ctr = 1;

                printf(" \n\t Factorial Program \n");

                printf("\n\n\t Enter Desired Integer: \t");
                scanf("%lf", &n1);

                while (ctr <= n1)
                {
                    fact = fact * ctr;
                    printf("\n\t The Factorial of %0.0lf is %0.0lf", ctr, fact);
                    ctr++;
                }
            }
                break;
            case 6:
                float FutureAmount, PrincipalAmount, InterestRate, Time;

                printf("\n\t Compound Interest");

                printf("\n\n\t How much is the Principal Amount: \t");
                scanf("%f", &PrincipalAmount);
                printf("\n\t How much is the Interest Rate: \t");
                scanf("%f", &InterestRate);
                printf("\n\t How many years have passed since then: \t");
                scanf("%f", &Time);

                FutureAmount = PrincipalAmount * (pow((1 + InterestRate / 100), Time));

                printf("\n\t Total Amount of your money is %0.2f pesos", FutureAmount);

                break;
            case 7:
                int S1, n2, r, t, value;

                printf("\n\t Geometric Progression Program");

                printf("\n\n\t Enter Desired First Term: \t");
                scanf("%d", &S1);
                printf("\n\t Enter Desired Common Ratio: \t");
                scanf("%d", &r);
                printf("\n\t Enter Desired Number of Terms:  \t");
                scanf("%d", &n2);

                value = S1;
                printf("\n\t The Elements of the Series From A1 to An: \n");
                for (t = 0; t < n2; t++) {
                    printf("\n\t %d ", value);
                    value = value * r;
                }

                break;
            case 8:
                int A2, d2, n3, Hn;

                printf("\n\t Harmonic Progression Program");

                printf("\n\n\t Enter Desired Denominator of the First Term: \t");
                scanf("%d", &A2);
                printf("\n\t Enter Desired Common Difference: \t");
                scanf("%d", &d2);
                printf("\n\t Enter Desired Number of Terms: \t");
                scanf("%d", &n3);

                Hn = A2 + (n3 - 1) * d2;

                printf("\n\t The Elements of the Series From A1 to An: \t");
                while (A2 <= Hn)
                {
                    printf("\n\t\t 1/%d ", A2);
                    A2 = A2 + d2;
                }

                break;
            case 9:
                printf(" \n\tThank you for using the program!");
                exit(0);
            default:
                printf("\n\t Please pick only indicated numbers! ");
        }
        printf(" \n\t Press 'Y' to pick another option, press other keys to exit: \t");

        scanf("%d", &programs);
        scanf("%c", &prog);
    }
    while ( prog == 'Y');
    printf(" \n\tThank you for using the program!");
    return 0;
}