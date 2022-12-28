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
    Bank cust1;
    Bank cust2;
    Bank cust3;

    strcpy(cust1.name , "Suhas");
    strcpy(cust2.name , "Rahul");
    strcpy(cust3.name , "Rohit");

    cust1.ACNo = 45856;
    cust2.ACNo = 45868;
    cust3.ACNo = 87459;

    cust1.Balance = 147;
    cust2.Balance = 54;
    cust3.Balance = 15000;

   


    printf("Deatils of Customer whose balance is less than 100\n");
    
    printf("Name %s\n",cust2.name);
    printf("Account Number : %d\n",cust2.ACNo);
    

    return 0;
}
 