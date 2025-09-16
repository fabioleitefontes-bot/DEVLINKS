/*
	Name: multiplaescolha.cpp
	Author: Fabio.fontes
	Date: 10/06/25 11:38
	Description: progama que apresenta uma estrutura de "mutipla esc0lha para o usuário".
*/


 #include<stdio.h>
 #include<windows.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	int opc = 0;
 	char sim;
 	
 	while(1) //loop em quanto for vdd
 	{
	 	 opc = 0;
	 	 printf("\n--------\n");
	 	 printf("menu de opção:");
	 	 printf("\n--------\n");
	 	 printf("|Digitou 1 | mostrará: um é o número que escolheram.|\n|Digitou 2 | mostrará: o número é dois.|\n|Digitou 3 | mostrará: só o número 3.|\n|Digitou 4 | mostrará: olha só o número 4 |\n");
       	 printf("\n--------\n");
	  	 printf("digite uma opção:"); scanf("%d", &opc);
         printf("\n--------\n");
         system("cls");
		
		//estrutura de múltiplas escolha
		
		//switch case
		switch(opc)
		{
			case 1: puts("um é o número que você escolheu");
				break;	
			case 2: puts(" o número é dois");
				break;
			case 3: puts("só o número três");
				break;
			case 4: puts("olha só o numeros 4");
				break;
			default: puts("digitou errado panguaré.\n progama finalizado...");
				exit(0);
	     }//fim do switch
	 
	} // fim do switch
			  
	system("pause");
 	
 } //fim do progama
	
	
	
	
	
	
	
	
	
