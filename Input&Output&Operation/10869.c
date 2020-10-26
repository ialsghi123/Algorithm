#include <stdio.h>

/*문제
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
예제 입력  
7 3
예제 출력 
10
4
21
2
1
*/

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d\n%d\n%d\n%d\n%d",a+b,a-b,a*b,a/b,a%b);
}