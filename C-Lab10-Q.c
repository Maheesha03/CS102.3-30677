#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[3][3]={{3,2,4},{1,4,6},{4,3,2}};
    int b[3][3]={{2,6,3},{4,3,2},{5,1,7}};
    int c[3][3];

    for (int i=0;i<3;i++)
    {
        for (int k=0;k<3;k++)
        {
            printf("%d\t",a[i][k]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            printf("%d\t",b[i][k]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    for (int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            c[k][i]=a[k][i]+b[k][i];
            printf("%d\t",c[i][k]);
        }
        printf("/n");
    }

}
