#include <limits.h>

/*@
    requires \valid(i) && \valid(j);
    // Evitar overflow al hacer *j + 3
    requires INT_MIN + 3 <= *j && *j <= INT_MAX - 3;
    // Evitar overflow al hacer *i + 2
    requires INT_MIN + 2 <= *i && *i <= INT_MAX - 2;
    // Precondición original: i*j + 2*j + 3*i == 0
    requires (*i) * (*j) + 2 * (*j) + 3 * (*i) == 0;

    assigns *i, *j;

    // Postcondición: tras i := i+2, j := j+3, el producto sea 6
    ensures (\old(*i) + 2) * (\old(*j) + 3) == 6;
*/
void step(int *i, int *j) {
    *j = *j + 3;
    *i = *i + 2;
}

