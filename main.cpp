#include <stdio.h>
int main(void)
{
//while문은 조건은 먼저 물어보고 실행문을 실행
//for문은 초깃갚 최소 설정 후 조건을 묻고 실행문을 실행 증감식을 실행 후 다시 조건 확인
//do ~ while문은 실행문을 무조건 실행 조건 확인 후 다시 실행문 실행
    int whil, fo, fornum, dowhil;
    whil = 1;
    fo = 1;
    dowhil = 1;
    while (whil < 10)
    {
        whil = whil * 2;
        printf("%d", whil);
    }
    
    
    printf("\n");
    
    
    for (fornum = 1; fornum < 10; fornum *= 2)
    {
        fo = fo * 2;
        printf("%d", fo);
    }

    printf("\n");
    
//for문 사용 시 주의 점 초기식, 조건식, 증감식 종류가 많음 어떤 것을 사용하더라도 결과 값이 같다면 이해하기 쉬운 코드를 선택하여야 함. 그리고 반복 횟수를 세는 변수는 반복문 안에서 바꾸지 않는 것이 좋음 그리고 for문을 while문으로 바꾸는 것도 가능 함.  다만 반복 횟수가 정해진 경우는 for문을 사용하는 것이 좋고 알 수 없는 경우에는 while문을 사용 하는 것이 좋음.
    
    do
    {
        dowhil = dowhil * 2;
        printf("%d", dowhil);
    }while (dowhil < 10);
    printf("\n");
//do while문의 가장 큰 특징은 최소 1번을 실행한다. 일단 실행을 하고 조건을 확인하기 때문이다.
    return 0;
}
