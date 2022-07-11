#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   int number;
   int randNum = rand() * 6;
   char name[] = "";
   char color[] = "";
   char noAnswer[] = "";
   char againAnswer[] = "";

   void play()
   {
      printf("Hello there\n");
      printf("What's your name?");
      scanf("%s", &name);
      sleep(2);
      printf("All right %s...\n", name);
      sleep(1);
      printf("let's play a game ))) \n");
      sleep(1);
      printf("whats your favorite number? ");
      scanf("%d", &number);
      sleep(3);
      printf("%d is your favorite number, isn't it? \n", randNum);
      scanf("%s", noAnswer);

      if (strcmp(noAnswer, "yes") == 0)
      {
         sleep(1);
         printf("woww that was quick!\n");

         printf("do you want to play again? lol");
         scanf("%s", againAnswer);

         if (strcmp(againAnswer, "yes") == 0)
         {
            play();
         }
         else
         {
            printf("bye bye!");
         }
      }
      else
      {
         sleep(2);
         printf("Okay, let me give it another try...\n");
         sleep(4);
         printf("Your fav number is %d", number);
      }

      printf("do you want to play again? lol\n");
      scanf("%s", againAnswer);

      if (strcmp(againAnswer, "yes") == 0)
      {
         play();
      }
      else
      {
         printf("bye bye!");
      }
   }

   play();
   return 0;
}
