#include <stdio.h>
#include <stdbool.h>

int main(){

	short unsigned x=5, y;

	y = x++ + ++x;
	printf("\n y=%d\n", y);
	printf("\n Isso acontece porque x++ está sendo posfixado, somando e depois prefixado.\n ");
	printf("\n Em grosso modo, eu diria assim: Y recebe 5 + 1 + + 1 + 5; ");
	printf("\n Y recebeu o valor da variável mais um. Depois foi somada mais um, mais o valor da variável.");
	printf("\n Se no final fosse x++ o valor seria de Y seria 11 porque o poscremeto não teria efeito.\n");
	return 0;

}
