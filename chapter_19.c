# include <stdio.h>

/*

ポインタ: メモリの節約

*/

void f(long *pa) {
    *pa = *pa + 100;
    printf("%ld\n", *pa);
}

int main(void) {

    long a = 1000; /* long は セル８個分の領域 */
    f(&a);

    return 0;

}
