#ifndef COMPLEXO_H_INCLUDED


struct polares {
    float modulo;
    float angulo;
};

struct complexo {
    float real;
    float img;
    struct polares polar;
};

float modulo (struct complexo a);
struct complexo soma (struct complexo a, struct complexo b);
void imprimir(struct complexo z);


#endif // COMPLEXO_H_INCLUDED

