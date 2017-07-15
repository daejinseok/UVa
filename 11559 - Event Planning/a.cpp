
// 11559 - Event Planning
//
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2595

#include <cstdio>
#include <algorithm>
#include <limits>
using namespace std;

int main(){

    int n, b, h, w;
    int p;

    int tc;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF){

        tc = numeric_limits<int>::max(); // 그냥 임이의 큰 값
        
        for(int i = 0; i < h; i++){

            scanf("%d", &p);

            int dw, boo = 1;
            for(int j = 0; j < w; j++){
                scanf("%d", &dw);

                if( dw >= n){
                    tc = min(n * p, tc);
                }
            }
        }

        if( tc == numeric_limits<int>::max() || tc >= b){
            printf("stay home\n");
        }else{
            printf("%d\n", tc);
        }
    }
}