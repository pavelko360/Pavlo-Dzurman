#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t Aaaaaaaaa;
   int16_t Aaaaaaaa2;
   int16_t Bbbbbbbbb;
   int16_t Xxxxxxxxx;
   int16_t Cccccccc1;
   int16_t Cccccccc2;
   printf("Enter Aaaaaaaaa:");
   scanf("%hd", &Aaaaaaaaa);
   printf("Enter Bbbbbbbbb:");
   scanf("%hd", &Bbbbbbbbb);
   for (int16_t Aaaaaaaa2 = Aaaaaaaaa; Aaaaaaaa2 <= Bbbbbbbbb; Aaaaaaaa2++)
   printf("%d\n", (Aaaaaaaa2 * Aaaaaaaa2));
   for (int16_t Aaaaaaaa2 = Bbbbbbbbb; Aaaaaaaa2 <= Aaaaaaaaa; Aaaaaaaa2++)
   printf("%d\n", (Aaaaaaaa2 * Aaaaaaaa2));
   Xxxxxxxxx = 0;
   Cccccccc1 = 0;
   while (Cccccccc1 < Aaaaaaaaa)
   {
   {
   Cccccccc2 = 0;
   while (Cccccccc2 < Bbbbbbbbb)
   {
   {
   Xxxxxxxxx = (Xxxxxxxxx + 1);
   Cccccccc2 = (Cccccccc2 + 1);
   }
   }
   Cccccccc1 = (Cccccccc1 + 1);
   }
   }
   printf("%d\n", Xxxxxxxxx);
   Xxxxxxxxx = 0;
   Cccccccc1 = 1;
   do
   {
   Cccccccc2 = 1;
   do
   {
   Xxxxxxxxx = (Xxxxxxxxx + 1);
   Cccccccc2 = (Cccccccc2 + 1);
   }
   while (!(Cccccccc2 > Bbbbbbbbb));
   Cccccccc1 = (Cccccccc1 + 1);
   }
   while (!(Cccccccc1 > Aaaaaaaaa));
   printf("%d\n", Xxxxxxxxx);
   system("pause");
    return 0;
}
