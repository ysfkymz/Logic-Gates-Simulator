#include<stdio.h>
int And(int a, int b);
int Or(int a, int b);
int Not(int a);
int Xor(int a, int b);

int main()
{
    int gateNumber;
    int ab=0,ba=0;
    label1:
    printf("#############Logic Term Simulator#############\n");
    printf("Press 1 for AND gate.\n");
    printf("Press 2 for OR gate.\n");
    printf("Press 3 for NOT gate.\n");
    printf("Press 4 for XOR gate.\n");
    label2:
    printf("Please choose your option!\n");
    printf("(Select 1-2-3-4 and then press enter)---->");

    scanf("%d",&gateNumber);
    if(gateNumber>4 || gateNumber<=0)
    {
        printf("Invalid number!!!\n");
        goto label2;
    }

    switch( gateNumber )
    {
		case 1: printf("Your choice-->AND GATE\n"); printf("Enter first input-->"); scanf("%d",&ab); printf("Enter second input-->");  scanf("%d",&ba); printf("AND output: %d",And(ab,ba));printf("\n");goto label1;break ;
		case 2: printf("Your choice-->OR GATE\n"); printf("Enter first input-->"); scanf("%d",&ab); printf("Enter second input-->");  scanf("%d",&ba); printf("OR output: %d",Or(ab,ba));printf("\n");goto label1;break ;
		case 3: printf("Your choice-->NOT GATE\n"); printf("Enter first input-->"); scanf("%d",&ab); printf("NOT output: %d",Not(ab)); printf("\n");goto label1;break ;
		case 4: printf("Your choice-->XOR GATE\n"); printf("Enter first input-->"); scanf("%d",&ab); printf("Enter second input-->");  scanf("%d",&ba); printf("XOR output: %d",Xor(ab,ba));printf("\n");goto label1;break ;
        default:printf("ERROR!!!\n");

	 }



}
int And(int a, int b)
{
 int output;
 if(a==0 && b==0)
  output=0;
  if(a==1 && b==0)
  output=0;
 if(a==0 && b==1)
  output=0;
 if(a==1 && b==1)
  output=1;
 return (output);
}
int Or(int a, int b)
{
 int output;
 if(a==0 && b==0)
  output=0;
  if(a==1 && b==0)
  output=1;
 if(a==0 && b==1)
  output=1;
 if(a==1 && b==1)
  output=1;
 return (output);
}
int Not(int a)
{
int output;
 if(a==0 )
  output=1;
 if(a==1 )
  output=0;
  return (output);
}
int Xor(int a, int b)
{
 int output;
 if(a==0 && b==0)
  output=0;
  if(a==1 && b==0)
  output=1;
 if(a==0 && b==1)
  output=1;
 if(a==1 && b==1)
  output=0;
 return (output);
}

