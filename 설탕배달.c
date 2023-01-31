#include <stdio.h>

int main()
{
    int sugar, fiveKG, result;

    scanf("%d", &sugar);

    fiveKG = sugar % 5;

    if(sugar != 1 && sugar != 2 && sugar != 4 && sugar != 7)
    {
        switch(fiveKG) 
        {
            case 0: 
                printf("%d", sugar / 5);
                break;
            case 1:
                printf("%d", ((sugar / 5) - 1) + 2);
                break;
            case 2:
                printf("%d", (sugar / 5) - 2 + 4);
                break;
            case 3:
                printf("%d", (sugar / 5) + 1);
                break;
            case 4:
                printf("%d", ((sugar / 5) - 1) + 3);
                break;
            default:
                break;
        }
    }
    else
    {
        printf("%d", -1);
    }

    return 0;
}
