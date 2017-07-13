#include <cstdio>

using namespace std;

// 11498 - Division of Nlogonia
//
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2493

int k, n, m;

int where(int x, int y){

    if( x == n || y == m){ return 0; }

    if( x < n ){
        return m < y ? 1 : 3;
    }

    return m < y ? 2 : 4;
}


int main(){

    int x, y, i, w;
    int OUT[1000];

    const char word[][10] = {"divisa", "NO", "NE", "SO", "SE"};

    do {
        scanf("%d", &k);
        scanf("%d %d", &n, &m);

        for(i = 0; i < k; i++){
            scanf("%d %d", &x, &y);
            OUT[i] = where(x, y);
        }

        for(i = 0; i < k; i++){
            printf("%s\n", word[OUT[i]]);
        }

    } while( k != 0);

}