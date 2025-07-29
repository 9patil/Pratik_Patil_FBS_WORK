#include<stdio.h>

void deposit(int *amt, int addAmt);
void withdraw(int *amt, int withAmt);

int main()
{
	int amt, ch, addAmt, withAmt;
	
	printf("Enter initial amount: ");
	scanf("%d", &amt);
	
	while(1)
	{
		printf("\nEnter choice: 1) Deposit  2) Withdraw  3) Exit: ");
		scanf("%d", &ch);
		
		if(ch == 1)
		{
			printf("Enter amount to deposit: ");
			scanf("%d", &addAmt);
			deposit(&amt, addAmt);  
		}
		else if(ch == 2)
		{
			if(amt <= 3000)
			{
				printf("Cannot withdraw money. Minimum balance should be 3000.\n");
				continue;
			}
			
			printf("Enter amount to withdraw: ");
			scanf("%d", &withAmt);
			withdraw(&amt, withAmt);  
		}
		else if(ch == 3)
		{
			printf("Final amount: %d\n", amt);
			break;
		}
		else
		{
			printf("Invalid choice. Try again.\n");
		}
	}
	
	return 0;
}

void deposit(int *amt, int addAmt)
{
	*amt = *amt + addAmt;
	printf("Amount after deposit: %d\n", *amt);
}

void withdraw(int *amt, int withAmt)
{
	*amt = *amt - withAmt;
	printf("Amount after withdrawal: %d\n", *amt);
}