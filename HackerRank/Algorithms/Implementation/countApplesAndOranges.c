void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int i,temp,onHouseLandApple=0,onHouseLandOrange=0;
    for(i=0;i<apples_count;i++)
    {
        temp = apples[i] + a;
        if( ( temp >= s ) && ( temp <= t ))
            onHouseLandApple++;
    }
    for(i=0;i<oranges_count;i++)
    {
        temp = oranges[i] + b;
        if( ( temp >= s ) && ( temp <= t ) )
            onHouseLandOrange++;
    }
    printf("%d\n%d",onHouseLandApple,onHouseLandOrange);
}