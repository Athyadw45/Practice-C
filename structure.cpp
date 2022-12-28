#include <stdio.h>
#include <string.h>

struct Car
{
    char cmpname[50];
    int manYear;
    int price;
    bool isNew;
};

int main(){

    Car maycar1;
    Car maycar2;

    strcpy(maycar1.cmpname , "BMW");
    strcpy(maycar2.cmpname , "Audi");

    maycar1.price =10000;
    maycar2.price = 20000;

    maycar1.manYear = 1998;
    maycar2.manYear = 2003;

    maycar1.isNew = true;
    maycar2.isNew = false;

    
    printf("Printing properties of mycar1\n");
    printf("maycar1 company name %s\n",maycar1.cmpname);
    printf("maycar1 manufacturing year %d\n",maycar1.manYear); 

    printf("Printing properties of mycar2\n");
    printf("maycar2 company name %s\n",maycar2.cmpname);
    printf("maycar2 price %d\n",maycar2.price); 
    printf("maycar2 isNew %d\n",maycar2.isNew); 

    Car mycarCollection[3];
    
    mycarCollection[0] = maycar1;
    mycarCollection[1] = maycar2;

    strcpy(mycarCollection[2].cmpname , "Ferrari");
    mycarCollection[2].price = 50000;

    return 0;
}