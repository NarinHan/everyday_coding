// https://www.acmicpc.net/problem/1699

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100001

int
min(int a, int b) 
{
    return a < b ? a : b ;
}

int 
main(int argc, char *argv[])
{
    int n ;
    scanf("%d", &n) ;

    int dp[MAX] ;
    memset(dp, MAX, sizeof(dp)) ;
    dp[0] = 0 ;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j*j] + 1) ;
        }
    }

    printf("%d\n", dp[n]) ;

    return 0 ;
}
