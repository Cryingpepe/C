#include <stdio.h>

int main(void)
{   
    int map[101][101] = {0,};
    int sqares, x, y;
    int result = 0;

    scanf("%d", &sqares);

    for (; sqares > 0 ; sqares--)
    {
        scanf("%d %d", &x, &y);

        for ( int m = x; m < (x+10); m++)
        {
            for ( int n = y; n < (y+10); n++)
            {
                map[m][n] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (map[i][j] == 1)
            {
                result += 1;
            }
        }
    }

    printf("%d", result);

    return 0;
}
