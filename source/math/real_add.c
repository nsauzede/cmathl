#include <stdlib.h>
#include <cml.h>

real
real_add(real x, real y)
{
        double k, w;
        k = x->value(x);
        w = y->value(y);
        return real_new((cml_t) k+w);
}
