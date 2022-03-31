#include <stdio.h>      // sorting an array(bubble sort) 
    int main(){              //  bubble sort means adjacent side check and sort gardei in every iterate.
        int n,a,i,arr[30];
        printf("enter any number: ");
        scanf("%d",&n);
        printf("enter the elements of an array: ");
        for(i=0; i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
            }
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    return 0;
}

