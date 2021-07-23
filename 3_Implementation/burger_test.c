#include "burger.h"

bool interrupt = false; /* Flag which will be set to true when the threads should terminate themselves */

/* Define the counter for available burgers in the rack */
uint8_t burger_count;

int main ()
{
	//uint8_t burger_count = 0;

	char s[1000];
	FILE *fptr;
	if ((fptr = fopen("test_cases.txt", "r")) == NULL)
        {
            printf("Error! File cannot be opened.");
            exit(1);
        }
	while(fgets(s,sizeof(s),fptr))
	{
		//burger_count = 0;
		int num_of_tests;
		fscanf(fptr,"%d",&num_of_tests);
		printf("Number of test cases :: %d\n",num_of_tests);

		while (num_of_tests--)
		{
			burger_count = 0;
			printf("Burger Count :: %d\n",burger_count);
			//burger_count = 0;

			fscanf(fptr,"%d",&COOK_COUNT);
			printf("Enter cook count :: %d\n",COOK_COUNT);
			
			fscanf(fptr,"%d",&CASHIER_COUNT);
			printf("Enter cashier count :: %d\n",CASHIER_COUNT);
			
			fscanf(fptr,"%d",&CUSTOMER_COUNT);
			printf("Enter customer count :: %d\n",CUSTOMER_COUNT);
			
			fscanf(fptr,"%d",&RACK_HOLDER_SIZE);
			printf("Enter rack holder size :: %d\n",RACK_HOLDER_SIZE);
			
			fscanf(fptr,"%d",&WAITING_TIME);
			printf("Enter waiting time :: %d\n",WAITING_TIME);
			
		
			burger_threads();
		}
	}
	fclose(fptr);

/*
	int num_of_tests;
	printf("Number of test cases :: ");
	scanf("%d",&num_of_tests);
	while (num_of_tests--)
	{
		printf("Enter cook count :: ");
		scanf("%d",&COOK_COUNT);
		printf("Enter cashier count :: ");
		scanf("%d",&CASHIER_COUNT);
		printf("Enter customer count :: ");
		scanf("%d",&CUSTOMER_COUNT);
		printf("Enter rack holder size :: ");
		scanf("%d",&RACK_HOLDER_SIZE);
		printf("Enter waiting time :: ");
		scanf("%d",&WAITING_TIME);
	
		burger_threads();
	}
*/
}