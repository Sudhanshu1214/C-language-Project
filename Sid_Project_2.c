/*#include<stdio.h>
int main()
{

	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\t\t\t\t");
	printf("WELCOME TO COVID-19 REGISTRATION\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

}*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// void registraion ()
void registration()
{
	/* #ifndef ONLINE_JUDGE                    // to read and write the file....
  freopen("sid.txt","a",stdout);    // to read the file freopen("sid.txt","r",stdin);
  #endif */
	// char s[30],l[30];
	// int a[12],m[10];
	char fname[30], lname[30];
	long long int aadharnumber;
	long long int phoneno;
	int num, i;
	// #ifndef ONLINE_JUDGE
	// freopen("sid.txt","w",stdin);
	// #endif
	FILE *fptr;
	fptr = (fopen("sid.txt", "a"));
	if (fptr == NULL)
	{
		printf("Error!");
		exit(0);
	}
	printf("Enter number of persons want to register for vaccine: ");
	scanf("%d", &num);

	for (i = 0; i < num; ++i)
	{
		printf("For person%d\nEnter first name:", i + 1);
		scanf("%s", fname);
		printf("For person%d\nEnter last name:", i + 1);
		scanf("%s", lname);
		// gets(name);
		//  strcat(fname,lname);
		printf("Enter aadharnumber: ");
		scanf("%lld", &aadharnumber);
		if (aadharnumber > 99999999999 && aadharnumber < 1000000000000)
		{
			printf("Entered Aadhar Number");
			printf("%lld\n", aadharnumber);
		}
		else
		{
			printf("\t\t\tplz enter valid aadhar number");
			exit(0);
			// return;
		}
		printf("Enter phonenumber: ");
		scanf("%lld", &phoneno);
		if (phoneno > 999999999 && phoneno < 100000000000)
		{
			printf("Entered Mobile Number");
			printf("%lld\n", phoneno);
		}
		else
		{
			printf("\t\t\tplz enter valid phone number");
			exit(0);
			// return;
		}

		//   fprintf(fptr,"\nName: %s    %s \nAdharnumber=%lld \nPhonenumber=%lld", fname, lname,aadharnumber,phoneno);

		printf("\nchoose your location");
		printf("press 1: delhi\n");
		printf("press 2: Noida\n");
		printf("press 3: Gzb\n");
		printf("press 4: Gurgaon\n");
		printf("enter your location\n");
		int d;
		scanf("%d", &d);
		switch (d)
		{
		case 1:
			printf("delhi");
			break;
		case 2:
			printf("Noida");
			break;
		case 3:
			printf("Gzb");
			break;
		case 4:
			printf("Gurgaon");
			break;
		}
		fprintf(fptr, "\nName: %s %s \nAdharnumber=%lld \nPhonenumber=%lld \nLocation=%d", fname, lname, aadharnumber, phoneno, d);
	}
	fclose(fptr);
	//
	// scanf("%s",l);
}
int password(char u1[4], char u2[4], char p1[7], char p2[7])
{
	int p = 1;
	int check = 1;
	for (int i = 0; i <= 3; i++)
	{
		if (u1[i] != u2[i])
		{
			check = 0;
		}
	}
	for (int i = 0; i <= 6; i++)
	{
		if (p1[i] != p2[i])
		{
			p = 0;
		}
	}
	return check * p;
}

// 	// printf("hello");

int main()
{
	system("cls");
	// registration();
	// int u1[9]={"SUDHANSHU"},p1[6];
	char u1[4] = "SID";
	char p1[7] = "RAJPUT";
	char u2[10], p2[7];
	// printf("%s",u1);
	printf("\n\n\n\t\t\t ENTER THE USERNAME AND PASSWORD\n\n\n\n");
	printf("\n\t\t\tUSERNAME: ");
	scanf("%s", u2);
	printf("\n\t\t\tPASSWORD: ");
	scanf("%s", p2);
	// if(u1==u2&&p1==p2);
	// if((strcmp(u1,u2))&&(strcmp(p1,p2)))
	// if((strcmp(u1,u2))==(strcmp(p1,p2)))
	if (password(u1, u2, p1, p2))
	{
		printf("\n\n\t\t login successful....");
		// printf("\n\n\n\t\t\t\t Press any key for main menu.....");
	}
	else
	{
		printf("\n\n\t\tInvalid username and password","😔");
		return 0;
	}
	sleep(3);
	// clrscr();
	// int clrscr();
	system("cls");
	// system(cls());
	sleep(2);
	printf("\n\n\n\n\n\n\n\n\t\t");

	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\t\t\t\t");
	printf("\tWELCOME TO COVID-19 REGISTRATION\n");
	printf("\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("\n\n\n\n\n\n\n\n\n\tPresented By: \n");
	printf("\t\t1. SUDHANSHSU KUMAR\n");
	printf("\t\t2. VIKAS GUPTA\n");
	printf("\t\t3. YASHVEER SINGH\n");
	printf("\t\t4. SONAM TYAGI\n");
	printf("\t\t5. SHRADDHA DHIMAN\n");

	// int main()
	// void registration ()
	//  int enter;
	//  printf("\n\n\tPress Enter");
	//  scanf("%d",&enter);
	printf("\n\n\n\n\n\n\n");
	sleep(5);
	system("cls");
	printf("press 1: Registration for vaccination\n");
	printf("press 2: Registered list\n");
	printf("press 3: Exit\n");
	int n;
	// char c;
	printf("\n\n\t\tenter your choice: ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		system("cls");
		printf("\n\n\t\t\tRegistration for vaccination\n");
		printf("press 1: Covi-Shield\n");
		printf("press 2: Co-Vaccine\n");
		int a;
		printf("\n\n\t\tenter your choice:");
		scanf("%d", &a);
		switch (a)
		// system("cls");
		{
		case 1:
			system("cls");
			printf("Covi-Shield\n");
			// registration();
			// int b;
			// printf("select your dose");
			// system("cls");
			printf("Press 1: First Dose\n");
			printf("Press 2: second Dose\n");
			printf("Press 3: Booster Dose\n");
			int b;
			printf("\n\n\tselect your dose");
			// system("cls");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				system("cls");
				printf("\t\t\t\tFirst Dose\n");
				printf("\t\tenter your details\n");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully");
				break;
			case 2:
				system("cls");
				printf("\t\t\t\tSecond Dose\n");
				printf("\n\t\tenter your details\n");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully");
				break;
			case 3:
				system("cls");
				printf("\t\t\t\tBooster Dose\n");
				printf("\n\t\tenter your details\n");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully for Booster Dose");
				break;
			}
			break;
		case 2:
			printf("Co-Vaccine\n");
			// int c;
			printf("Press 1: First Dose\n");
			printf("Press 2: second Dose\n");
			printf("Press 3: Booster Dose\n");
			int c;
			printf("\n\n\tselect your dose : ");
			scanf("%d", &c);
			switch (c)
			{
			case 1:
				system("cls");
				printf("\t\t\t\tFirst Dose\n");
				printf("\n\t\tenter your details");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully");
				break;
			case 2:
				system("cls");
				printf("\t\t\t\tSecond Dose\n");
				printf("\n\t\tenter your details");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully");
				break;
			case 3:
				system("cls");
				printf("\t\t\t\tBooster Dose\n");
				printf("\n\t\tenter your details\n");
				registration();
				printf("\n\t\t\t\tYou are registered succesfully for Booster Dose");
				break;
			}
			// registration();
			// printf("\n\t\t\t\tYou are registered succesfully");
			break;
		default:
			printf("Invalid Choice");
			break;
		}
		break;
	case 2:
		// int ch;
		printf("\t\t\t\tRegistered list\n");
		{
			FILE *fptr;
			char ch;
			char str1[120];
			// long long int aadharnumber;
			fptr = fopen("sid.txt", "r");
			if (fptr == NULL)
			{
				printf("Error!");
				exit(0);
			}
			while (fptr != EOF)
			{
				fgets(str1, 120, fptr);
				printf("%s", str1);
				printf("\n\t\tyou are not authorized to see all details....");
				// fscanf(&aadharnumber , fptr);
				// printf("%lld", aadharnumber);
				// break;
			}
			fclose(fptr);
		}
		break;
	case 3:
		printf("Exit");
		sleep(2);
		exit(0);
		break;
	default:
		printf("invalid Choice");
	}
}

/*#include<stdio.h>
#include<conio.h>
int main()
{

	clrscr();
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\t\t\t\t");
	printf("WELCOME TO COVID-19 REGISTRATION\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");


}*/
