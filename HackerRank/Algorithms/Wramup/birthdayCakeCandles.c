int birthdayCakeCandles(int candles_count, int* candles) {
    int i=0,j,tallest=0;
    int tallest_count=0;
    for(i=0;i<candles_count;i++)
    {
        if(tallest < candles[i])
            tallest = candles[i];
    }
    for(i=0;i<candles_count;i++)
    {
        if(tallest == candles[i])
            tallest_count++;
    }
    printf("%d",tallest_count);
    return tallest_count;
}