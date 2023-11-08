#include <stdio.h>

int HowManyKnights(int linhas, int colunas){
	int cavalos, tabuleiro;
	tabuleiro = linhas * colunas;
	/* CASO 1 */
	if(linhas >= 3 && colunas >= 3){
		if(tabuleiro % 2 == 0){ cavalos = tabuleiro / 2; }
		else{ cavalos = (tabuleiro + 1) / 2; }
	}
        /* CASO 2 */
        else if(linhas == 1 || colunas == 1){ cavalos = tabuleiro; }
	/* CASO 3 */
	else if(linhas == 2 || colunas == 2){
		int n;
		if(linhas == 2){ n = colunas; }
		else{ n = linhas; }				
	
		if(n % 4 == 0){ cavalos = n; }
		else if(n % 2 != 0){ cavalos = n + 1; }
		else{ cavalos = n + 2; }
	}

	return cavalos;
}

int main(){
	int cavalos, linhas, colunas;
	while(1){
		scanf("%d %d", &linhas, &colunas);
		if(linhas == 0 || colunas == 0){ break; }

		cavalos = HowManyKnights(linhas, colunas);

		printf("%d knights may be placed on a %d row %d column board.\n", cavalos, linhas, colunas);
	}

	return 0;
}

/* 696 - How Many Knights
* https://onlinejudge.org/external/6/696.pdf */
