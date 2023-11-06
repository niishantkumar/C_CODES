/*

Right-angled Triangle
*
* *
* * *
* * * *
* * * * *

*/
#include <stdio.h>
void main (){
    int num;
    printf ("Enter number of rows triangle will cover : ");
    scanf ("%d",&num);
    for (int i=0;i<num;i++) {
        for (int j = 0;j<=i;j++) {
            printf ("*");
        }
        printf ("\n");
    }
}