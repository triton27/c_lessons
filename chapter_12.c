# include <stdio.h>

/*

変数の有効範囲

*/
int a = 0; /* グローバル変数 */

void f(void) {
    /* ここに int a = 0; を置くと、ローカル変数になる */
    a++;
    printf("a:%d\n", a);
}

int main(void) {

    f();

    return 0;
}
