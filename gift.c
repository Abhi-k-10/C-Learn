#include <stdio.h>

/*Ask User whether they passed in Maths or Science or Both
if Passed in Math , set reward 15
if Passed in Science , set reward 15
If Passed in both Set reward 45 
If not Passed , say try again
*/

int main()
{
    int a ;
    printf("Enter The Numbers Corresponding to the Subjects You passed\n 1.Science\n 2.Maths\n 3.Both\n");
    scanf("%d" , &a );
    if (a == 1 ){
        printf("You were Rewarded RS. 15 By The HoD of Science ");
    }
    else if ( a == 2){
        printf("You were Rewarded RS. 15 by The HoD of Mathematics ");
    }
    else if (a == 3 ){
        printf("Congratulations , You were Rewarded RS.45 By the Dean Of the School of Technology ");
    }

    else {
        printf("Retry Next Year");
    }

    return 0;
}
