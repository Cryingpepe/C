// https://www.acmicpc.net/problem/4344

#include <stdio.h>

int main()
{
    int cases, students, total, grades, numofstudents, saved;
    double averege;


    scanf("%d", &cases);

    for (; cases > 0; --cases)
    {
        saved = 0;
        total = 0;

        scanf("%d", &students);

        numofstudents = students;

        int table[students-1];

        for (int a = students; a > 0; --a)
        {
            scanf("%d", &grades);
            total += grades;
            table[a-1] = grades;
        }

        averege =  (double) (total * 1.000) / (numofstudents * 1.000);

        for (int a = students; a > 0; --a)
        {
            if (table[a-1] > averege)
            {
                saved += 1;
            }
        
        }

        printf("%.3f%%\n", ((saved*1.000) / (numofstudents*1.000)) * 100);
    }

    return 0;
}
