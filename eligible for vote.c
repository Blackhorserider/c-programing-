#include <stdio.h>
main()
{
  int vote_age;

  printf("ENTER THE AGE : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("You are allowed to vote after %d year.\n",18-vote_age);
     }
  else
     printf(" You are eligible for  vote.\n");
}
