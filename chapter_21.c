# include <stdio.h>

/*

値渡し
参照渡し

*/

void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void) {

    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}
