/****************************************************************
1-3 & 1-4 (섭씨에서 화씨로 바꾸기, 온도 변환표 위에 항목의 제목 넣기)
*****************************************************************/

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

/*****************************************************************
1-5 (for문을 이용한 역순으로 출력하기)
*****************************************************************/

#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    return 0;
}

/****************************************************************
1-8 (빈칸, 텝, 행의 갯수)
*****************************************************************/

#include <stdio.h>

int main()
{
    int characters;
    double numberofTaps, numberofLines, numberofSpaces, numberofCharacters;

    for (numberofLines = 0, numberofTaps = 0 , numberofSpaces = 0 ; (characters = getchar()) != EOF ; ++numberofCharacters)
    {
        if(characters == '\n')
        {
            ++numberofLines;
        }
        else if(characters == '\t')
        {
            ++numberofTaps;
        }
        else if (characters == ' ') {
            ++numberofSpaces;
        }
    }

    printf("Number of Taps: %.0f\nNumber of Lines: %.0f\nNumber of Spaces: %.0f\n", numberofTaps, numberofLines, numberofSpaces);

    return 0;
}

/****************************************************************
1-9 여러개의 빈칸을 한개의 빈칸으로 바꾸어 출력하기
*****************************************************************/

#include <stdio.h>

#define True 1
#define False 0

int main()
{
    double c;
    int test = False;

    while((c = getchar()) != EOF)
    {

        if(test == True && c == ' ')
            ;
        else 
        {
        putchar(c);
        }

        if(c == ' ')
        {
            test = True;
        }
        else 
        {
            test = False;
        }

    }

    return 0;
}

/****************************************************************
1-10 \t, \b, \\로 변환하여 출력하기
*****************************************************************/

#include <stdio.h>

int main()
{
    int characters;
    double numberofCharacters;

    for (; (characters = getchar()) != EOF ; ++numberofCharacters)
    {
        if(characters == '\n')
        {
            printf("\\n");
        }
        else if(characters == '\b')
        {
            printf("\\b");
        }
        else if (characters == '\\') 
        {
            printf("\\\\");
        }
        else 
        {
            putchar(characters);
        }
    }

    return 0;
}

/****************************************************************
1-12 한행에 한단어 출력
*****************************************************************/

#include <stdio.h>

int main()
{
    int characters;

    while ((characters = getchar()) != EOF)
    {
        putchar(characters);

        if(characters == '\t' || characters == ' ')
        {
            printf("\n");
        }
    }
    
    return 0;
}

/****************************************************************
1-16 모든 행의 길이와 문자 출력
*****************************************************************/

#include <stdio.h>
#define MAXLINE 1000

int getlined(char [], int );
void copy(char [], char []);

int getlined(char s[], int lim)
{
    int c, i;
    i = 0;
    for(; i < lim-1 && (c = getchar()) != EOF && c != '\n' ; ++i)
    {
        s[i] = c;
    }

    if (c == '\n') 
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

int main()
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = getlined(line, MAXLINE)) > 0) 
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
        
    }
    
    if (max > 0)
    {
        printf("%s", longest);
    }
}
