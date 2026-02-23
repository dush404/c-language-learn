#include <stdio.h>

int pathWays(int cr, int cc, int er, int ec)
{
    int rightWays = 0;
    int downWays = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cr == er)
    {rightWays += pathWays(cr, cc + 1, er, ec);
    }
    
    if (cc == ec)
    {downWays += pathWays(cr + 1, cc, er, ec);
    }
    
     if (cr < er && cc < ec)
    {
        rightWays += pathWays(cr, cc + 1, er, ec);
        downWays += pathWays(cr + 1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main()
{
    int sr, sc, er, ec;
    printf("start row: ");
    scanf("%d", &sr);

    printf("start column: ");
    scanf("%d", &sc);
    printf("end row: ");
    scanf("%d", &er);
    printf("end column: ");
    scanf("%d", &ec);
    printf("Result: %d\n", pathWays(sr,sc,er,ec));

    return 0;
}