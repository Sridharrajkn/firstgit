#include"stdio.h"
#include"output_header.h"

void main()
{
    int i,n;
    scanf("%d",&n);
    int *arr,*arr1;
    arr = scan_arr(n);
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}