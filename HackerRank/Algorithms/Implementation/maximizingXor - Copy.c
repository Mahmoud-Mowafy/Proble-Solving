int maximizingXor(int l, int r) {
    int i,j,result=0,temp=0;
    for(i=l;i<=r;i++)
    {
        for(j=l;j<=r;j++)
        {
          temp = i ^ j;
          result = (temp > result ? temp : result); 
        }
    }
    return result;
}