#include<stdio.h>
#include<string.h>

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address  add);

int main()
{   
    struct address adds[2];
    printf("Enter info for  person 1 \n");
    scanf("%d\n",&adds[0].houseNo);
    scanf("%d\n",&adds[0].block);
    scanf("%s\n",&adds[0].city);
    scanf("%s\n",&adds[0].state);


    printf("Enter info for  person 2 \n");
    scanf("%d\n",&adds[1].houseNo);
    scanf("%d\n",&adds[1].block);
    scanf("%s\n",&adds[1].city);
    scanf("%s\n",& adds[1].state);

    printf("Enter info for  person 3 \n");
    scanf("%d\n",&adds[2].houseNo);
    scanf("%d\n",&adds[2].block);
    scanf("%s\n",&adds[2].city);
    scanf("%s\n",&adds[2].state);

    

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);



    return 0;


}

void printAdd(struct address add)
{
    printf("HouseNo: %d\n", "block : %d \n", "city_name : %s\n", "State : %s\n", add.houseNo, add.block, add.city, add.state);	
}