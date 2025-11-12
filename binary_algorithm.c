#include <stdio.h>

main()
{
    int i,j,n,sv,Found=0,B,E,M;
    printf("Enter the number of element of array\n");
    scanf("%d",&n);
    if(n==0)
        printf("Searching is not possible\n");
    else
    {
        int A[n];
    printf("enter the value in ascending order\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    printf("Enter your search value\n");
    scanf("%d",&sv);

        B = 0;
        E = n-1;
        M = (B+E)/2;

        while(B<=E)
        {
            if(A[M] == sv)
            {
                Found = 1;
                break;
            }

            else if(B==E)
                break; //found =0

            else if(A[M]>sv)
                E = M-1;

            else
                B = M+1;
            // if-elseif-else shesh;

            M = (B+E)/2;
        }

        if(Found == 0)
            printf("Value is not found\n");
        else
            printf("Value is found and index %d\n",M);
    }
}
