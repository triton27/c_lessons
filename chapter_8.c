# include <stdio.h>

/*

ループ (for)

continue: 一回スキップ
break: ループを抜ける

*/

int main(void) {

    int m = 0;
    for (m = 0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }
        printf("m: %d\n", m);
    }
//    int n = 0;
//    do {
//        printf("n: %d\n", n);
//        n++;
//    } while (n < 10);
//    return 0;
}
