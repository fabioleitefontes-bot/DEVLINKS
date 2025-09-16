
	 
/*
	Name: senhor dos aneis
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: contagem das especies.
*/
 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	int n, anao = 0, elfo =0, humano=0, mago=0, hobbit = 0;
 	char especie[30], raca;
 	
 	scanf("%d", &n);
 	for(int i = 0; i < n; i++)
 	{
		
	 			scanf("%s %c", especie, &raca);
	 			if(raca == 'A')
	 				anao++;
	 			else if(raca == 'E')
	 				elfo++;
	 			else if(raca == 'H')
	 				humano++;
		        else if(raca == 'M')
	 				mago++;
				else if(raca == 'X')
	 				hobbit++; 	
			 	 	
 		}
 		
 	printf("%d Hobbit(s)\n", hobbit);
    printf("%d Humano(s)\n", humano);
    printf("%d Elfo(s)\n", elfo);
    printf("%d Anao(oes)\n", anao);
    printf("%d Mago(s)\n", mago);	 
 } //fim do progama

