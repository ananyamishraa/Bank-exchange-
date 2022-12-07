#include <stdio.h>
#include <stdlib.h>

struct Bank
{
    int balance;
    char name[100];
};
void withdraw(struct Bank *account)
{
    printf("ENTER THE AMOUNT TO BE WITHDRAWN : ");
    int number;
    scanf("%d ",&number);
    account->balance=account->balance-number;
}
void show(struct Bank *account)
{
    printf("%d IS THE CURRENT BALANCE\n",account->balance);
}
void add(struct Bank *account)
{
    printf("ENTER THE AMOUNT TO BE ADDED : ");
    int amount;
    scanf("%d ",&amount);
    account->balance=account->balance+amount;
}
int main()
{
    struct Bank account;
    account.balance=10000;
    while(1)
    {
        
        printf("ENTER W TO WITHDRAW AND A TO ADD : ");
        char a;
        scanf("%c",&a);
        switch(a)
        {   
            
            case 'W':
            show(&account);
            case 'w':
            show(&account);
            
            case 'a':
            withdraw(&account);
            case 'A':
            withdraw(&account);

        }        
    }


}