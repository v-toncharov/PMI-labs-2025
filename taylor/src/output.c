#include "output.h"

#include "sumfn.h"
#include "util.h"
#include <stdio.h>

int print_header(void) {
    try(fputs("x,libm value", stdout));
    for (const sum_alg *restrict al = sum_algs; al < sum_algs_end; al++) {
        try(printf(",%s sum", al->desc, al->desc));
    }
    try(putchar('\n'));
    return 0;
}
int print_per_row(double x, double ref) {
    try(printf(PRECDBL CS PRECDBL, x, ref));
    return 0;
}
int print_per_sumfn(double sum) {
    try(printf(CS PRECDBL, sum));
    return 0;
}
