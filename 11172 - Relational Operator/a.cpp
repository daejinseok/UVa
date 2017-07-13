#include <cstdio>

// 11172 - Relational Operator
//
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113

int main(){

    int TC, a, b, i;
    char OUT[15];

    scanf("%d", &TC);

    for(i = 0; i < TC; i++){
        scanf("%d %d", &a, &b);
        OUT[i] = a == b ? '=' : a > b ? '>' : '<';
    }

    for(i = 0; i < TC; i++){
        printf("%c\n", OUT[i]);
    }
}