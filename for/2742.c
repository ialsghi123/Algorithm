#include <stdio.h>

/*문제
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

예제 입력 1 
5
예제 출력 1 
5
4
3
2
1
*/

int main()
{
    int n;

    scanf("%d",&n);

    for(int i=n; i>0; i--)
    {
        printf("%d\n",i);
    }
}