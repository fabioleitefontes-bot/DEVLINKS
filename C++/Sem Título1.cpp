#include <stdio.h>

int main() {
    int opcao;
    long long mult, exp;

    do{
        scanf("%d %lld", &opcao, &exp);
		
        switch (opcao) {
            case 1:
            	mult = (long long) (opcao * exp);
                printf("%lld\n", mult);
                break;
            case 2:
             	mult = (long long) (opcao * exp);
                printf("%lld\n", mult);
                break;
            case 3:
               	mult = (long long) (opcao * exp);
                printf("%lld\n", mult);
                break;
            case 0:
                break;
            default:
                break;
        }

    }  while (opcao >= 1 && opcao <= 3);
    return 0;
}
