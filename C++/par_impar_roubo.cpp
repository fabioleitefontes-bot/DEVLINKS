/*
	Name: par impar ou roubo
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: um jogo de impar onde vc pode roubar ou se defebder di roubo
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 int p, j1, j2, r,a, par;
 
 scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
 par = (j1 + j2) % 2;
	if (r == 1 && a == 1) {
        printf("Jogador 2 ganha!\n");
    } else if (r == 1 && a == 0) {
        printf("Jogador 1 ganha!\n");
    } else if (r == 0 && a == 1) {
        printf("Jogador 1 ganha!\n");
    } else {
        if (p != par) {
            printf("Jogador 1 ganha!\n");
        } 
          else
		    printf("Jogador 2 ganha!\n");
        }
    }
			

  //fim do progama
