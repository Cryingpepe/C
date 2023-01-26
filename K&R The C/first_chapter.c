// 1-3 & 1-4 (섭씨에서 화씨로 바꾸기, 온도 변환표 위에 항목의 제목 넣기)

/*

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, steps;

    lower = 0;
    upper = 300;
    steps = 20;

    celsius = lower;
    printf("%.0f\t%.1f\n", celsius, fahr);

    while (celsius <= upper) 
    {
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%s\t%s\n", "celsius" , "fahr");
        celsius += steps;
    }

    return 0;
}

*/

// 1-5 (for문을 이용한 역순으로 출력하기)

#include <stdio.h>

/*

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    return 0;
}

*/

#include <stdio.h>

int main()
{
    printf("%d", EOF);
}
