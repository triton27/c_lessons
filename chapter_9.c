# include <stdio.h>

/*

関数: 複数の処理

返り値の型 関数名(引数, ...) {
    処理;
    return 返り値;
}

*/

float getMax(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {

    float result;
    result = getMax(2.4, 4.5);
    printf("%f\n", result);

    return 0;
}
