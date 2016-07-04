 #include <stdio.h>
  
  void main(void) {
 	int num,div,store,seed;
 	printf("Enter value=")
 	scanf("%d%d",&num,&seed);
 	store=num;
 	while(num!=0)
 	{
 		div=num%10;
 		store=store*div;
 		num=num/10;
 	}
 		printf("Output value=%d",store);
 	if(store==seed)
 	printf("give number is seed=%d",store);
 	else
 		printf("give number is not seed=%d",store);
 }
