#include <stdio.h>
#define SEPARATOR '-'
#define SIZEARRAY (50)

void clear (void);
void keyboard (char array[]);
char * separate (char *, char);
int makeanum (char *);
int power(int base, int exp);


int main (void)
{
	int first_num;
	int second_num;
	int temp;
	char *second_num_arr;
	char term_arr[50];
	char input[50];
	int term =0 ;
	char welcome_message[]="Ingrese los dos primeros terminos";
	char term_message[]="Ingrese la cantidad de terminos que desea";


	printf("%s\n",welcome_message );
	keyboard(input);
	clear;
	second_num_arr = separate( input,  SEPARATOR);
	first_num = makeanum(input);
		printf("first %d\n",first_num );
	second_num= makeanum(second_num_arr);

	printf("%s\n",term_message );

	keyboard(term_arr);
	clear;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%d\n%d\n", first_num , second_num );
	term = makeanum (term_arr);
	//printf("%d\n",term );
	
	while (term)
	{

		temp = first_num + second_num;
		first_num = second_num;
		second_num = temp;
		printf("%d\n",temp );
		--term;
	}
	printf("Matate PUTITO\n");
}



void keyboard (char array[SIZEARRAY])
{
	char key;
	int key_counter = 0;
	
	while ( (( key = getchar() ) != '\n') && (key_counter <= SIZEARRAY) ) 
	{
		array[key_counter] = key;
		++key_counter;
	}
}



void clear (void)
{    
  while ( getchar() != '\n' );
}




char * separate (char *pointer, char separator )
{	
	char *pointer_op;
	pointer_op=pointer;
	while ((*pointer_op) != separator)
	{
		++pointer_op;
	}
	*pointer_op= 0;

	return pointer_op+1;
}

int  makeanum (char *num)
{
	char *num_op;
	int asc2dec=0;
	int total;
	int counter;
	int final_num=0;
	int letter_counter=0;

	num_op=num;

	while ((*num_op) != 0)
	{
		++num_op;
		++letter_counter;
	}
	--num_op;
	total = letter_counter;

	while ((letter_counter) != 0)
	{
		asc2dec=(*num_op -'0');
		counter = power (asc2dec,(total-letter_counter));
		final_num+= counter;
		--num_op;
		--letter_counter;
	}
	return final_num;
}

int power(int base, int exp)
{
    
    while (exp)
    {
    	base *= 10;
    	--exp;
    }
    return base;
}
