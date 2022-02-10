int simpleArraySum(int ar_count, int* ar) {
    int i,sum=0;
    for(i=0;i<ar_count;i++)
        sum += ar[i];
    return sum;
}