# include <stdio.h>

/*

三項演算子

if (条件) {
    return A;
} else {
    return B;
}

返り値 = (条件) ? A : B;

true : false

*/

float getMax(float a, float b) {

/*
float getMax(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}
*/
    return (a >= b) ? a : b;
}

int main(void) {

    float result;
    result = getMax(2.4, 4.6);
    printf("%f\n", result);

    return 0;
}

/*
4.6
(false)
 */
