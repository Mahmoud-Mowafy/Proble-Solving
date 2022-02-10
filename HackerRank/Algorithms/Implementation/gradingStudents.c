int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *ar = malloc(grades_count*sizeof(int));
    int i,j,rem,div,nextMultiplyOperator,nextMultiply,difference;
    for(i=0;i<grades_count;i++)
    {
        rem = grades[i] % 5;
        div = grades[i] / 5;
        nextMultiplyOperator = div +1; 
        nextMultiply = nextMultiplyOperator * 5;
        difference = nextMultiply - grades[i];
        if(( difference < 3 ) && ( nextMultiply >= 40 ))
           ar[i] = nextMultiply;
        else
            ar[i] = grades[i];
    }
    return ar;
}