double mx_pow_rec(double n, unsigned int pow) {
    if(pow == 1) {
        return n;
    }
    return n*mx_pow_rec(n,(pow-1));
}
