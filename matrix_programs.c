#include <stdio.h>


int main()
{

    int a[4][3],b[3][2],result[4][2],sum=0;
    printf("\nEnter the elements for your First Matrix\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("\nThe a[%d][%d] element of your first Matrix\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements for your Second Matrix\n");
    for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                printf("\nThe b[%d][%d] element of your second Matrix\n",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }
    printf("\nCalculating the result....\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                sum += a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
        printf("%d ",result[i][j]);
        }
        printf("\n");
        }


    return 0;
}