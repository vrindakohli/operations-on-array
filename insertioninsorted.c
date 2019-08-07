void ArrayInsertion(int [], int*, int, int); //int for array, then no. of elements, then position at which value to be inserted, then value
void OrderedInsertion(int [], int*, int); //array, size of array, element to insert
void ArrayTraversal(int[], int*);  //traverse wont return anything.

//****************************************************************************************************************
void main()
{ int n=4;
    int A[10]={2,4,6,8};
OrderedInsertion(A, &n, 5 );
ArrayTraversal(A, &n);
}
//**************************************************************************************

void ArrayInsertion(int a[], int *n, int i, int x)
{
    int j;
    for(j=(*n)-1;j>=i;j--)
        a[j+1]=a[j];
    a[i]=x;
    (*n)=(*n)+1;
}
//*******************************************************************************************
void OrderedInsertion(int a[], int (*n), int x)
{
    int i=0;
    while(x>a[i]&&i<=n-1)
        i++;
    ArrayInsertion(a, &(*n), i, x);
}
//**************************************************************************************


void ArrayTraversal(int a[], int *n)
{
    int j;
    for (j=0;j<(*n);j++)
        printf(" %d ", a[j]);
        printf("\n");

}
/**************************************************************************************/

