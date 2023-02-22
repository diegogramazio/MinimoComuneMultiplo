#include <stdio.h>

/* programma che legge due interi ed informa l'utente sul
 * minimo comune multiplo fra i due interi letti */
int main() {
      int x, y;              // gli interi da leggere
      int risultato;           // il mcm fra i due interi

      /* INPUT */
      printf("Caro utente, introduci due interi.\n");
      scanf("%d%d", &x, &y);

      /* CALCOLA IL MINIMO COMUNE MULTIPLO */
      if(x<y)
            risultato = y;
      else
            risultato = x;
      while(risultato%x!=0 || risultato%y!=0)
            risultato++;

      /* OUTPUT */
      printf("Il minimo comune multiplo fra %d e %d %c %d.\n", x, y, 138, risultato);
}
