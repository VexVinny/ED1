#ifndef FRAC_H
#define FRAC_H

typedef struct _frac Frac;

Frac* Frac_create(float,float);

void Frac_print(Frac*);

void Frac_soma(Frac*,Frac*);

void Frac_mult(Frac*,Frac*);

int Frac_equiv(Frac*,Frac*);

#endif