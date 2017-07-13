
// 11727 Cost Cutting
//
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827

#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

    int TC, num[3], i, j;
    int OUT[20];

    scanf("%d", &TC);

    for(i = 0; i < TC; i++){
        for(j = 0; j < 3; j++) scanf("%d", &num[j]);
        sort(num, num+3);
        OUT[i] = num[1];
    }

    for(i = 0; i < TC; i++){
        printf("Case %d: %d\n", i+1, OUT[i]);
    }
}