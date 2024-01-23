// https://www.acmicpc.net/problem/15649

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char visited[8] ;
unsigned int n ;
unsigned int m ;

void
backtracking(int depth)
{
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", ans[i]) ;
        }
        printf("\n") ;
        return ;
    }
    
    int *ans = (int *)malloc(sizeof(m) * m) ;

    for (int i = 0; i < m; i++) {
        for (int j = 1; j <= n; j++) {
            if (visited[j] == 0) {
                ans[i] = j ;
                visited[i] = 1 ;
            }
        }
    }

    free(ans) ;

}

int
main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m) ;
    if (m > n) {
        fprintf(stderr, "m should be smaller or equal than n") ;
        exit(EXIT_FAILURE) ;
    }
    backtracking(0) ;
    
    return 0 ;
}
