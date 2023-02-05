#include <stdio.h>

#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

void quicksort(int list[], int A, int Z)
{
    int pivot = A; // 피벗, 기준점은 첫 인덱스 인수
    int a = pivot + 1; // 첫비교 인자는 기준점 바로 다음 인수
    int z = Z; // 두번째 비교인자는 맨 마지막 인수
    int temp;

    if (A >= Z) // 재귀함수로 리스트를 피벗 기준으로 분할중에 리스트 인수가 0개 또는 1개 일때 종료
    {
        return; 
    }

    while (a <= z) // @@@@@@@@@@@교환식@@@@@@@@@@@
    {
        while (a <= Z && list[a] <= list[pivot]) // 피벗보다 큰 수를 저장
        {
        ++a;
        }
        while (z >= A && list[z] >= list[pivot]) // 피벗보다 작은수를 저장
        {
        --z;
        }

        if (a >= z) // 만약 비교인자끼리 지나치거나 만나면 종료 (더 이상 바꿀 인자 존재 안함)
        {
            break;
        }

        SWAP(list[a], list[z], temp); // 피벗 기준으로 크고 작은수를 서로 교환
    }

    


}

int main()
{
    int n, number, ;
    int average = 0 ;
    scanf("%d", &n);
    int list[n];

    for (int m = n; m > 0; m--) //리스트 세팅
    {   
        list[m-1] = scanf("%d", &number);
        average += number;
    }

    printf("%d", average / n); //#1 산술평균

    

    return 0;
}
