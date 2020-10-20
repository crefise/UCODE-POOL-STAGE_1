double mx_pow(double n, unsigned int pow) {
    int temp = n;
    if (pow == 0) {
        return 1;
    }
    for ( int i = 1; i < pow; i++) {
        n = temp * n;
    }
    return n;
}


int main(){
    mx_pow(2,2);
}
