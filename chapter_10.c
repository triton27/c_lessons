# include <stdio.h>

/*

関数: 複数の処理

返り値の型 関数名(引数, ...) {
    処理;
    return 返り値;
}

プロトタイプ宣言

*/

float getMax(float a, float b);

void sayHi(void) {
    printf("hi!\n");
}

// void とは...空間、無い
int main(void) {

    float result;
    result = getMax(2.4, 4.6);
    printf("%f\n", result);

    sayHi();

    return 0;
}

float getMax(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}
