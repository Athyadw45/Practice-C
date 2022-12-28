#include <stdio.h>

int findMin(int* myarr,int arrlength){
    int mn=myarr[0];
    for(int i=0;i<arrlength;i++){
        if(mn>myarr[i]){
            mn = myarr[i];
        }
    }

    return mn;
}

int findMax(int* myarr,int arrlength){
    int mx=myarr[0];
    for(int i=0;i<arrlength;i++){
        if(mx<myarr[i]){
            mx= myarr[i];
        }
    }
    return mx;
}

int main(){

    printf("how many values you want to enter?\n");
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int minval = findMin(arr,n);
    int maxval = findMax(arr,n);

    printf("Minimum value is: %d\n",minval);
    printf("Maximum value is: %d\n",maxval);

    return 0;
}

