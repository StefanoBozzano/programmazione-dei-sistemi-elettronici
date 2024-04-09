#include "stupid_math.h"

float mean(int a, int b){
    return (a + b) / 2;
}
//comm4
complex_float_t commplex_mean(complex_int_t a, complex_int_t b){
    complex_float_t res = {0, 0};
    res.re = mean(a.re, b.re);
    res.im = mean(a.im, b.im);

    return res;
}