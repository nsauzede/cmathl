#include <stdlib.h>
#include "includes/cml.h"

real
real_abs(real x)
{
        // Declaration of structures
        real sgn, y;

        // Mathematical algorithm
        sgn = x->sgn(x);
        y = x->prod(x, sgn);

        // Free structures
        free(sgn);

        // Return
        return y;
}
