#include <stdio.h>
 
int main() {
  int ii, i, teste, cont;
 scanf("%d", &teste);
 	while(teste != 0 )	
 	
		{
			scanf("%d", &i);
			int vet[i];
			int veti[i];
				ii=0;
				for(cont = 0; cont < i; cont++)
				
					{
						scanf("\n%d",  &vet[cont]);
						if(vet[cont] %2 == 1)
							{	
								veti[ii] = vet[cont];
								ii++; 
							}
						}
			for(cont = 0; cont < ii ;cont++)
				{
					printf("%d", veti[cont]);
	
				}
				teste--;
				printf("\n");
		}
    return 0;
}
