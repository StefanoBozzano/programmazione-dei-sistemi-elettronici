#ifndef _STUPIDMATHH_
#define _STUPIDMATHH_

//commento di prova commit2
typedef struct complex_int {
    int re;
    int im;
} complex_int_t;

typedef struct complex_float {
    int re;
    int im;
} complex_float_t;

float mean(int a, int b);
complex_float_t commplex_mean(complex_int_t a, complex_int_t b);

#endif