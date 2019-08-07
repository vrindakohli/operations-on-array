
int ArrayDeletion(int[], int*, int i);
void RepeatDeletion(int [], int*); //array, size of array, position of element to delete
void ArrayTraversal(int[], int);  //traverse wont return anything.

//****************************************************************************************************************
void main()
{ int n=6;
    int A[10]={5,5,7,8,9,9};
RepeatDeletion(A, &n);
ArrayTraversal(A, n);
}
/***************************************************************************************/


int ArrayDeletion(int a[], int *n, int i)
{
    int j;

    for(j=i+1;j<=(*n)-1;j++)
        a[j-1]=a[j];
    (*n)=(*n)-1;

}
/***************************************************************************************/

void ArrayTraversal(int a[], int n)
{
    int j;
    for (j=0;j<n;j++)
        printf(" %d ", a[j]);
        printf("\n");

}
/**************************************************************************************/

void RepeatDeletion(int a[], int(*n))
{
    int i,j;
    for(i=0;i<(*n);i++)
    {
        for(j=i+1;j<=(*n)-1;j++)
        {
            if (a[i]==a[j])
            {
                ArrayDeletion(a, &(*n), j);
                j--;
                ArrayDeletion(a, &(*n),i);

            }
        }
    }
}
