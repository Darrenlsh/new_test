// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
 int max(int x,int y);
 int a,b,c;
 printf("please enter two integer numbers:");
 scanf("%d,%d",&a,&b);
 c=max(a,b);
 printf("max is %d\n",c);
 return 0;
}
 int max(int x,int y)
 {
	 int z;
	 if (x>=y)
		 z=x;
	 else
		 z=y;
	 return(z);
 }
