#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t Aaaaaaaaa, Bbbbbbbbb, Xxxxxxxxx, Yyyyyyyyy;
   printf("Enter Aaaaaaaaa:");
   scanf("%hd", &Aaaaaaaaa);
   printf("Enter Bbbbbbbbb:");
   scanf("%hd", &Bbbbbbbbb);
   printf("%d\n", Aaaaaaaaa + Bbbbbbbbb);
   printf("%d\n", Aaaaaaaaa - Bbbbbbbbb);
   printf("%d\n", Aaaaaaaaa * Bbbbbbbbb);
   printf("%d\n", Aaaaaaaaa / Bbbbbbbbb);
   printf("%d\n", Aaaaaaaaa % Bbbbbbbbb);
   Xxxxxxxxx = (Aaaaaaaaa - Bbbbbbbbb) * 10 + (Aaaaaaaaa + Bbbbbbbbb) / 10;
   Yyyyyyyyy = Xxxxxxxxx + (Xxxxxxxxx % 10);
   printf("%d\n", Xxxxxxxxx);
   printf("%d\n", Yyyyyyyyy);
   system("pause");
    return 0;
}
