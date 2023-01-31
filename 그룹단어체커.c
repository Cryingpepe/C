//https://www.acmicpc.net/problem/1316

#include <stdio.h>

#define MAXLINE 100

int main()
{
    int numberofWords;
    char wordlist[26];
    int result = 0;

    scanf("%d", &numberofWords);

    for(int i = 0 ; i < numberofWords ; i++)
    {
        char word[MAXLINE];
        int index = 0;

        scanf("%s", word);

        for(int x = 0; x < 26; x++)
        {
            wordlist[x] = '0';
        }

        while (1)
        {
            if ((wordlist[word[index] - 'a']) == '0')
            {
                wordlist[word[index] - 'a'] = '1';
            }
            else if (word[index] != word[index -1])
            {
                break;
            }
            
            index += 1;

            if(word[index] == '\0')
            {
                result += 1;
                break;
            }
        }

    }

    printf("%d\n", result);

    return 0;
}
