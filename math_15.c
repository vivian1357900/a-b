#include <stdio.h>
int main()
{
    int a, b, c = 0, i;
    scanf ("%d %d", &a, &b);
    if (a < b)
    {
        for (i = a; i <= b; i++)
            c += i;
    }
    else
    {
        for (i = b; i <= a; i++)
            c += i;
    }
//    b = ((b*10)+0.5)/10;
    printf ("%d\n", c);
    return 0;
}
