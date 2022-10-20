#include <stdio.h>
#include <string.h>


typedef struct driver{
        char name[20];
        long license_no;
        char Route[40];
        int kms;    }drv;
int main()
{
    drv w1,w2,w3;
    scanf("%s",&w1.name);
    scanf("%ld",&w1.license_no);
    scanf("%s",&w1.Route);
    scanf("%d",&w1.kms);
    
    scanf("%s",&w2.name);
    scanf("%ld",&w2.license_no);
    scanf("%s",&w2.Route);
    scanf("%d",&w2.kms);
    
    scanf("%s",&w3.name);
    scanf("%ld",&w3.license_no);
    scanf("%s",&w3.Route);
    scanf("%d",&w3.kms);
    
    printf("%s %ld %s %d\n",w1.name,w1.license_no,w1.Route,w1.kms);
    printf("%s %ld %s %d\n",w2.name,w2.license_no,w2.Route,w2.kms);
    printf("%s %ld %s %d\n",w3.name,w3.license_no,w3.Route,w3.kms);





    return 0;
}