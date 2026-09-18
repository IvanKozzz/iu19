#include <stdio.h>
#include <stdlib.h> 



double power(double base, int exp) {
    double result = 1.0;
    int abs_exp = abs(exp);
    if (exp == 0) {
        return 1;
    }

    else {
        for (abs_exp; abs_exp > 0; abs_exp--) {
            result *= base;

        }
        if (exp > 0) {
            return result;
        } else
        return 1 / result;
    }
    return 0;
}

int main() {
    double base_ex;
    int exp_ex;
    scanf("%lf %d", &base_ex, &exp_ex);
    double ret = power(base_ex, exp_ex);
    printf("%f", ret);
    return 0;


}
