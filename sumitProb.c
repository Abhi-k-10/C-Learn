#include <stdio.h>


/*U have to make a code for finding is that number divisible by 7 or not if yes then check for is it even or odd then return as true or false for example  if number is divisible and even the true,true should result if the number is divisible but odd true , false if not divisible but even then false,true and so on*/

int main()
{
    int num;
    printf("Enter Your Number : \n");
    scanf("%d" , &num );

    if (num%7 == 0 ){
        if (num%2 == 0){
            printf(" True , True \n");
        }
        else {
            printf(" True , False \n");
        }
        
    }
    else if( num%7 != 0 ) {
        if (num%2 == 0){
            printf(" False , True \n");
        }
        else {
            printf(" False , False \n");
        }

    }
    else {
        printf("Number is Not an Integer");
    }

    return 0;
}
