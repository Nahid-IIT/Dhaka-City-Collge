#include<stdio.h>
#include<conio.h>


void knapsak(float s[],float w[],float p[],int n)
{
  int i,j;
  float t,temp;

  for(i=0;i<n-1;i++)
  {
	for(j=0;j<n-i-1;j++)
	{
	  if (s[j]<s[j+1])
	  {
		temp=s[j];
		s[j]=s[j+1];
		s[j+1]=temp;

		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;

		temp=w[j];
		w[j]=w[j+1];
		w[j+1]=temp;
	  }
	}
  }
}

void main()
{

	clrscr();
	textcolor(11);
	int m,n ,i,rest ;
	float p[10],w[10],s[10],x[10],profit;

	cprintf("Bag size please: ");
	scanf("%d",&m);
	cprintf("How many item: ");
	scanf("%d",&n);
	textcolor(4);
	for (i=0;i<n;i++)
	{
	  printf("\n%d. ",i);
	  cprintf("weight: ");
	  scanf("%f",&w[i]);
	  cprintf("   profit: ");
	  scanf("%f",&p[i]);
	}
	for(i=0;i<n;i++)
	{
	  s[i]=p[i]/w[i];
	}

	knapsak(s,w,p,n);

	rest=m;
	profit=0;

	for(i=0;i<n;i++)
	{
	 x[i]=0.0;
	}

	for(i=0;i<n;i++)
	{
	 if(w[i]>rest)
	 break;
	 x[i]=1.0;
	 profit=profit+p[i];
	 rest=rest-w[i];
	}
	if(i<n)
	{
	 x[i]=rest/w[i];
	 profit=profit+(x[i]*p[i]);
	}

	for (i=0;i<n;i++)
	{
	 printf("\t%.2f",w[i]);
	 printf("\t%.2f",w[i]);
	 printf("\n");
	}

	printf("\n");
	for(i=0;i<n;i++)
	{
	 printf("\t%.2f",x[i]);
	}
	textcolor(2);
	cprintf("\n\nprofit: %.2f",profit);
	getch();
}