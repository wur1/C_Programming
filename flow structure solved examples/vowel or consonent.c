//C program to check wether an alphabet is vowel or conconent

#include<stdio.h>

int main(){
	char c;
	int L_case, U_case;
	
	L_case = (c=='a'|| c=='e'|| c=='i'||c=='o'|| c =='u');
	U_case= (c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');
	printf("please enter the alphabet: \n");
	scanf("%c", &c);
	if(c==L_case|| c==U_case){
		printf("%c is a vowel", &c);
	}
	else
	{
		printf("%c is a consnent", &c);
	}
	
	return 0;
}
