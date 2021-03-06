
// 573 - The Snail
//
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=514

#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

    int h, u, d, f;

    while(1){
        scanf("%d %d %d %d", &h, &u, &d, &f);
        if( h == 0){
            break;
        }

        int ad = 0;            // afterday;
        double du = u;
        double ch = 0;           // cur height;
        double fd = u * f / 100.0; // fatigure distinct;

        while(1){

            ad++;

            ch = ch + du;

            if( ch > h){
                printf("success on day %d\n", ad);
                break;
            }

            ch = ch - d;

            if( ch < 0){
                printf("failure on day %d\n", ad);
                break;
            }

            du  -= fd;

            if( du < 0) du = 0;

        }

    }
}