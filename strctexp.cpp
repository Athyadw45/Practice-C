#include <stdio.h>
#include <string.h>

struct Bank
 {
    char name[50];
    int ACNo;
    
    int Balance;
 };

int main()
{

  Bank arr[10];

    strcpy(arr[0].name , "Suhas");
    strcpy(arr[1].name , "Rahul");
    strcpy(arr[2].name , "Rohit");
    strcpy(arr[3].name , "Siddharth");

    arr[0].ACNo = 45856;
    arr[1].ACNo = 45868;
    arr[2].ACNo = 87459;
    arr[3].ACNo = 67543;

    arr[0].Balance = 147;
    arr[1].Balance = 54;
    arr[2].Balance = 15000;
    arr[4].Balance = 36;
    printf("Customers with balance less than 100\n");

    for(int i=0;i<4;i++){
        if(arr[i].Balance<100){
        printf("Name is %s\n", arr[i].name);
        printf("Account number is %d\n", arr[i].ACNo);
        }
        
        }
    


    return 0;
}
 