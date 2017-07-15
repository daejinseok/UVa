
// 10114 - Loansome Car Buyer
//
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1055

#include <cstring>
#include <cstdio>


// float쓰면 wa판정, long를 써야 함.

int main(){

    int   duration; // duration in months of the loan, 
    double payment; // the down payment
    double loan; // amount of the loan
    int   num; // number of depreciation records

    double mm; // 매달 값는 돈

    int   m[100]; // mon
    double d[100]; // depreciation

    while(1){

        scanf("%d %lf %lf %d", &duration, &payment, &loan, &num);
        if(duration < 0){ break; }

        mm = loan / duration;

        memset( m, 0, sizeof m);
        memset( d, 0, sizeof d);

        int i;
        for(i = 0; i < num; i++) {
            scanf("%d %lf", &m[i], &d[i]);
        }
        m[i] = -1;

        // for(i = 0; i < num+1; i++) {
        //     printf("%d %f\n", m[i], d[i]);
        // }
        // m[i] = -1;

        int mon = 0;
        int cur_m = 0;

        double car   = (payment + loan) * (1 - d[cur_m]); 
        double bank  = loan;

        //printf("%f %f\n", car, bank);

        while( car < bank ){

            mon++;
            bank -= mm;

            if( (m[cur_m] != -1) && ( m[cur_m+1] == mon) ){
                cur_m++;
            }
            car = car * (1 - d[cur_m]);
            //printf("%f %f %f %d\n", car, bank, d[cur_m], cur_m);
        }

        printf("%d %s\n", mon, (mon != 1) ? "months":"month");
    }

}