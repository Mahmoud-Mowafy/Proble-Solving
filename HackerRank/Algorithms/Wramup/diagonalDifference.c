int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int difference = 0,i,j,result;
    int left_to_wright_diagonal =0, wright_to_left_diagonal =0;
    for(i=0;i<arr_rows;i++)
    {
        left_to_wright_diagonal += arr[i][i];
        wright_to_left_diagonal += arr[i][arr_rows-1-i];
    }
    result = abs(left_to_wright_diagonal - wright_to_left_diagonal);
    return result;
}