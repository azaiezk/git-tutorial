#include <stdio.h>
#include "espl_lib.h"
int main() {
	int confirmed = 1;
	do{
		int nbr;
		char msg;
		printf("Hello ESPL! \n");
		printf("write a number, please \n");
		scanf("%d",&nbr);
		getchar();
		printf("%s",num_to_words(nbr)); 
		printf(" \n Do you wish to continue ?(Y)es or (N)o? \n");
		scanf("%c",&msg);
		if ( msg == 'N'){
			confirmed =0; 
		}
	} while (confirmed==1);
} 


