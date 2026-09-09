#include <stdio.h>

/*
Make a Programme ask user About which units to be converted
1.Kms to Miles // 1km = 0.62 Miles
2.Inches to Foot // 1Inc = 0.083 Foot
3.Cms to inches // 1Cm = 0.393
4.Pounds to Kgs // 1Pound = 0.4535
5.Inches to meters // 1Inche = 0.025

*/

void unitConverter()
{
    int i;
    float a;
    printf("Enter The Number Corresponding to Unit You Want to convert in :\n 1.KM to Miles\n 2.Inches to Foot\n 3.Cms to Inches\n 4.Pounds to KG\n 5.Inches to meter\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Enter The Value :\n");
        scanf("%f", &a);
        printf("%.4f KM = %.4f Miles\n", a, a * 0.62);
    }
    else if (i == 2)
    {
        printf("Enter The Value :\n");
        scanf("%f", &a);
        printf("%.4f Inches = %.4f F\noot", a, a * 0.083);
    }
    else if (i == 3)
    {
        printf("Enter The Value :\n");
        scanf("%f", &a);
        printf("%.4f Cm = %.4f Inche\ns", a, a * 0.393);
    }
    else if (i == 4)
    {
        printf("Enter The Value :\n");
        scanf("%f", &a);
        printf("%.4f Pounds = %.4f K\nG", a, a * 0.453);
    }
    else if (i == 5)
    {
        printf("Enter The Value :\n");
        scanf("%f", &a);
        printf("%.4f Inches = %.4f M\neter", a, a * 0.025);
    }
    else
    {
        printf("Error , Your Choice is not Recognized as a valid Choice !!");
    }
}

int main()
{

    char name[50], choice;
    printf("Enter Your Name To Continue :\n");
    scanf("%s", &name);
    printf("Hello %s , Welcome to Unit calculator designed by Abhik !\nPlease Type 'U' to Continue or Type 'Q' to Quit :\n", name);
    scanf(" %c", &choice);
    if (choice == 'u' || choice == 'U')
    {
        unitConverter();
    }

    else if (choice == 'q' || choice == 'Q')
    {
        printf("Quiting....");
        goto end;
    }
    else
    {
        printf("Error: Invalid command , Quiting....");
        goto end;
    }

end:

    return 0;
}
