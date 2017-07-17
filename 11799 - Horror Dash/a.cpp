
// 11799 - Horror Dash
//
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899

#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

    int TC;
    scanf("%d", &TC);

    for(int i = 1; i <= TC; i++){

        int n;
        scanf("%d", &n);

        int ms = -1; // max speed
        int c;
        for(int j = 0; j < n; j++){
            scanf("%d", &c);
            ms = max(ms, c);
        }

        printf("Case %d: %d\n", i, ms);
    }

}