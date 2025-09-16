 #include <stdio.h>

int main() {
    long long  i, cont, teste;
    scanf("%lld", &teste);
    long long fib[61];
    fib[0] = 0;
    fib [1] = 1;
    if(i > 2 && i <60)
    cont = 2;
		for( cont = 2; cont <60 ; cont++ )
				fib[cont] = fib[cont - 1] + fib[cont- 2];
			
				
	while(teste != 0 )	
		{
			scanf("%lld", &i);
			printf("Fib(%d) = %llu\n", i, fib[i]);
			teste--;
		}
		 
    
  return 0;
}

/*#include <stdio.h>

int main() {
    int T, i;
    int N;
    unsigned long long fib[61];

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}*/
