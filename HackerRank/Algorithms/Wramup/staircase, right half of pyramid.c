void staircase(int n) {
    int i,j,space=n-1,row=0,col=0;
    for(row=0;row<n;row++)
    {
        for(space=n-1-row;space>0;space--)
        {
            printf(" ");
        }
        for(col=row+1;col>0;col--)
        {
            printf("#");
        }
        printf("\n");
    }
}