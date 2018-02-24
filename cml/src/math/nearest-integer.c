#include <stdlib.h>
#include <cml/math.h>

/*
 * Returns the nearest integer not less than the given value
 *
 * @param double x
 * @return double
 */

double
cml_ceil(double x)
{
        mint_t w;

        w = (mint_t) x;
        return cml_isnull(x - w) ?
               x :
               w + 1.0;
}


/*
 * Return the largest integer value less than or equal to x.
 *
 * @param double x
 * @return double
 */

double
cml_floor(double x)
{
        return (double) ((mint_t) x);
}
