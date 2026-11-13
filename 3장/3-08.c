#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define m_km 0.001

// 시간당 킬로미터로 출력
// 분(60), 초(3600) -> 시간
// 미터 -> #define m_km 0.001 이용 -> km
// km / h
int main(void)
{
    double D; //거리
    int H, M, S; //시, 분, 초
    double T; // 분, 초 -> 시간
    double speed;

    printf("거리를 미터로 입력하시오: ");
    scanf("%lf", &D);

    printf("시간을 입력하시오: ");
    scanf("%d", &H);
    printf("분을 입력하시오: ");
    scanf("%d", &M);
    printf("초를 입력하시오: ");
    scanf("%d", &S);

    T = H + M / 60.0 + S / 3600.0;
    speed = D * m_km / T;

    printf("속도: %lf\n", speed);

    return 0;
}
