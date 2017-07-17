
// 10141 - Request for Proposal
//
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1082

#include <cstdio>
#include <algorithm>
using namespace std;

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