# include <stdio.h>

/*

ポインタ: アドレスを格納するためにの変数

メモリ (記憶領域)

&: アドレス演算子

*: 関節演算子

*/

int main(void) {

    int a;
    a = 10;

    int *pa; /* int * は宣言, pa は変数 */
    pa = &a;

    printf("%d\n", *pa);

    return 0;
}
