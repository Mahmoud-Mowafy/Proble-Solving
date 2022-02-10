int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int i;
    *result_count = 2;
    static int arr[2]={0};
    for(i=0;i<3;i++)
    {
       if(a[i] > b[i])
          arr[0]++;
       else if(a[i] < b[i])
          arr[1]++;   
    }
    return arr;
}