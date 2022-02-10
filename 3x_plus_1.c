#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("gimme a number: ");
    int prex = x;
    
    if (x%2==0)
        {
            x = x/2;
            printf("%i\n", x);
        }
        else
        {
            x = 3*x+1;
            printf("%i\n", x);
        }
    
    while (prex != x)
    {
       if (x%2==0)
        {
            x = x/2;
            printf("%i\n", x);
        }
        else if (x%2 != 0)
        {
            x = 3*x+1;
            printf("%i\n", x);
        }
        if (x == 1)
        {
            x = 3*x+1;
            printf("%i\n", x);
            printf("The number has been repeated \n");
            break;
        }
    }
}
