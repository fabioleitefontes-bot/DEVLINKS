/*
	Name: numeros
	Author: Fabio.Fontes 
	Date: 08/04/25 11:21
	Description: arquivo que pegue 3 numeros e fale qual o maior, menor, e a média entre eles
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
  
 {
    setlocale(LC_ALL,"portuguese");
 	
 int i =0;
 int num = 0;
 float media = 0.0 ;
 int maio = 0;
 int menor = 0;
 
 printf("digite um número"); scanf("%d", num);
        maio = num;
        menor = num;
        media = num + media
    while(i<2)
    {
      printf("digite um número"); scanf("%d", num);
         if(num < maio)
         { maio = num; 
         }
                 else if (num > menor)
                 {menor = num;
                 }     
         media = num + media / 3;
        i++:     
    }            
 			
 printf("o maior numero lido é: %d", maior);
 printf("a média dos números lidos é:%F", media);			 
 	
 } //fim do progama
