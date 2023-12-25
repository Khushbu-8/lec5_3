#include<stdio.h>
#include<conio.h>

void main(){
int choice,english,hindi,gujarati;

	clrscr();
     printf("=====Telicom cell servise=====\n\n\n");
     printf("Press 1 for english...\n");
     printf("Press 2 for hindi...\n");
     printf("Press 3 for gujarati...\n\n\n");

     printf("Enter your choice...\n ");
     scanf("%d",&choice);

     switch(choice){
     case 1:
	  printf("For internet Recharge..\n");
	  printf("For Top-up Recharge...\n");
	  printf("For Special Recharge...\n\n\n");

	  printf("Enter your choice...");
	  scanf("%d",&english);

	switch(english){
	  case 1:
	       printf("You have successfully done Internet Recharge....");
	       break;
	  case 2:
	       printf("You have successfully done Top-up Recharge....");
	       break;
	  case 3:
	       printf("You have successfully done Special Recharge....");
	       break;
	}
	break;
	 case 2:
	  printf("Internet Recharge ke liye 1 dabaiye...\n");
	  printf("Top-up Recharge ke liye 2 dabaiye...\n");
	  printf("Special Recharge ke liye 3 dabaiye...\n\n\n");

	  printf("Enter your choice...");
	  scanf("%d",&hindi);

	switch(hindi){
	  case 1:
	       printf("Aapne safaltapurvak Internet Recharge kar liya he....");
	       break;
	  case 2:
	       printf("Aapne safaltapurvak Top-up Recharge kar liya he....");
	       break;
	  case 3:
	       printf("Aapne safalta purvak Special Recharge kar liya he....");
	       break;
	}

	 case 3:
	  printf("Internet Recharge mate 1 dabavo..\n");
	  printf("Top-up Recharge mate 2 dabavo...\n");
	  printf("Special Recharge mate 3 dabavo...\n\n\n");

	  printf("Enter your choice...");
	  scanf("%d",gujarati);

	switch(gujarati){
	  case 1:
	       printf("Tame safaltapurvak Internet Recharge karyi chhe....");
	       break;
	  case 2:
	       printf("Tame safaltapurvak Top-up Recharge karyu chhe....");
	       break;
	  case 3:
	       printf("Tame safaltapurvak Special Recharge karyu chhe....");
	       break;
	}
	break;
     }

getch();

}