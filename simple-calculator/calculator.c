#include <stdio.h>
#include <stdlib.h>

int affichageMenu(int choixMenu)
{
   
   int choixMenu
   {
	printf("\n==================== Simple Calculator ====================\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
	printf("Bye!");
	scanf("%d", &choixMenu);
   }
   int main(int argc, char *argv[])
  { 	   
    switch(choixMenu)
     {	    
		case 1:
		   printf("\n-> 1) Add\n");
	           break;

	        case 2:
                   printf("\n-> 2) Subtract\n");
                   break;

	        case 3:
                   printf("\n-> 3) Multiply\n");
                   break;

	        case 4:
                   printf("\n-> 4) Divide\\n");
                   break;

	        default:
                   printf("Vous ne ferez rien du tout!");
                   break;
       }

   } 
   return 0;   
}
