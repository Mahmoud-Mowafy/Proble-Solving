long aVeryBigSum(int ar_count, long* ar) {
    int i=0;
    long sum=0;
    for(i=0;i<ar_count;i++)
    {
        sum += ar[i];
    }
    return sum;
}