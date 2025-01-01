#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t Aaaaaaaaa, Bbbbbbbbb, Ccccccccc;
   printf("Enter Aaaaaaaaa:");
   scanf("%hd", &Aaaaaaaaa);
   printf("Enter Bbbbbbbbb:");
   scanf("%hd", &Bbbbbbbbb);
   printf("Enter Ccccccccc:");
   scanf("%hd", &Ccccccccc);
   if ((Aaaaaaaaa > Bbbbbbbbb))
   {
   if ((Aaaaaaaaa > Ccccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", Ccccccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", Aaaaaaaaa);
   goto OutofIF;
   }
   }
   if ((Bbbbbbbbb < Ccccccccc))
   {
   printf("%d\n", Ccccccccc);
   }
   else
   {
   printf("%d\n", Bbbbbbbbb);
   }
OutofIF:
   if (((Aaaaaaaaa == Bbbbbbbbb) && (Aaaaaaaaa == Ccccccccc) && (Bbbbbbbbb == Ccccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((Aaaaaaaaa < 0) || (Bbbbbbbbb < 0) || (Ccccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(Aaaaaaaaa < (Bbbbbbbbb + Ccccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
