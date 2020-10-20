int mx_sum_digits(int num) {
    if (num < 0) {
        num = num * (-1);
    }
    int ost = 1;
    int sum = 0 ;
   while (ost != 0) {
       ost = num % 10;
       num = num / 10;
       sum = sum + ost;
   }
   return sum;
}
