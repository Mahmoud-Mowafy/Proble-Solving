void miniMaxSum(int arr_count, int* arr) {
    long long i,min_sum=0,max_sum=0,j,temp_1=0,temp_2=0;
    for(j=0;j<arr_count;j++)
        temp_1 += arr[j];
    min_sum = temp_1;      
    for(i=0;i<arr_count;i++)
    { 
        temp_2 = temp_1 - arr[i];
        
        max_sum = ( max_sum > temp_2 ) ? max_sum : temp_2;
        min_sum = ( min_sum < temp_2 ) ? min_sum : temp_2;
    }
    printf("%ld\t",min_sum);
    printf("%ld",max_sum);  
}