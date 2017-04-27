#include <stdio.h>


int 	 compare (char *,char *);


int main (int argv, char * argc[])
{
#define someone (0)	
#define nobody (1)
#define maxuser (3)
#define nozero (8)

//		Variables
	int is_he=nozero;//needs to be diferent than cero
	int user_num =maxuser;


//		arrays
//	char user1[]="Guido";
	char user2[]="Lucas";
	char user3[]="Francisco";
	char user4[]="Tomas";
//	char pass1[]="hola";
//	char pass2[]="a²+b²=(a+b)²";
	char pass2[]="gil";
	char pass3[]="me chupa un huevo, ME VOY EH";
	char pass4[]="Todo el mundo sabe, TENGO EL GAUCHO POWER";
	char msguser[]="Nadie juna tu usuario";
	char msgpass[]="Nadie juna tu password bobito";
	char congrats[]="MUY BIEN, RECURSASTE PROGRA!\n que tengas un dia lleno de ritmo";


//		Pointer arrays
	char * users[4];
	char * passwords[4];


//		Pointers
	char *user_in;
	char *password_in;


//initialize
//	users [0]=user1;
	users [1]=user2;
	users [2]=user3;
	users [3]=user4;
 //	passwords[0]=pass1;	
 	passwords[1]=pass2;
 	passwords[2]=pass3;
 	passwords[3]=pass4;
	user_in=argc[1];
	password_in=argc[2];


// code 
	while ((is_he !=0))
	{	
		is_he =	 compare (user_in,users[user_num]);
		--user_num;
		
		if (user_num == 0)
		{
			break;
		}
	}
	
	if (is_he)
	{
		printf("%s\n",msguser );
		return 0;
	}

	user_num = maxuser;
	is_he =nozero;

	while (is_he !=0)
	{	
		
		is_he =	 compare (password_in,passwords[user_num]);
		--user_num;
		if (user_num == 0)
		{
			break;
		}
	}

	if (is_he)
	{
		printf("%s\n",msgpass );
		
	}
	else 
	{
		printf("%s\n", congrats);
	}
	return 0;
}



int  compare (char *input,char *user)
{

	int mov=0;
	int not_equal=0;
	int veredict;
	char *input_op;
	char *user_op;
	input_op=input;
	user_op=user;
	
	while ((input[mov]) != 0)
	{
		if (input_op[mov] == user_op[mov])
		{
			++mov;
		}	
		else 
		{
			++not_equal;
			++mov;
		}				
	}
	if (not_equal != 0)
	{
		veredict =nobody;
	}
	else 
		veredict = someone;
	return veredict;
}