#include<stdio.h>
int TwoWheeler(int );
int ThreeWheeler(int );
int FourWheeler(int );
void availability(int ,int ,int );
int two(int );
int three(int );
int four(int );

int main()
{
int i,val=0,c=0;
char ans='y',ans1;
int tw=50,thw=70,fw=100,TotalSum=0;
printf("\t\t\t\t\t\t\t    PARKING MANAGEMENT SYSTEM SOFTWARE\n");
printf("\n");
printf("\t\t\t\t\t\t***********************************************************\n");
printf("\n");
while(ans=='y')
{
printf("\t\t\t\t\t\t\tEnter 1 for Two Wheelers : cost of each is 50/-\n\n\t\t\t\t\t\t\tEnter 2 for Three Wheelers : cost of each is 70/-\n\n\t\t\t\t\t\t\tEnter 3 for Four Wheelers:cost of each is 100/- \n\n\t\t\t\t\t\t\tEnter 4 to withdraw Two wheeler\n\n\t\t\t\t\t\t\tEnter 5 to withdraw Three wheeler\n\n\t\t\t\t\t\t\tEnter 6 to withdraw Four wheeler\n\n\t\t\t\t\t\t\tEnter 7 to Check Availability :\n\n\t\t\t\t\t\t\tEnter 8 for Two and Three Wheeler :\n\n\t\t\t\t\t\t\tEnter 9 for Three and Four Wheeler:\n\n\t\t\t\t\t\t\tEnter 10 for Two and Four Wheeler:\n\n\t\t\t\t\t\t\tEnter 11 to park all types of vehicles:" );
scanf("%d",&i);
printf("\n");

switch(i)
{
case 1:if(tw==0){
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy TwoWheeler slots are ocuupied\n"); printf("\n");}
	else{
	tw=TwoWheeler(tw);}
	break;
case 2:if(thw==0){
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n");  printf("\n");}
	else{
	thw=ThreeWheeler(thw);}
	break;
case 3:if(fw==0){
	printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  printf("\n");}
	else{
	fw=FourWheeler(fw);}
	break;	

case 4:tw=two(tw);
	break;
case 5:thw=three(thw);
	break;
case 6:fw=four(fw);
	break;
case 7: availability(tw,thw,fw);
	break;
case 8:
	if(tw==0 && thw==0)
	{
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy\n");  
	printf("\n");
	}
	else if(tw==0){
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy TwoWheeler slots are ocuupied\n"); 				
	printf("\n");
	thw=three(thw);
	}
	else if(thw==0){printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n");  
	printf("\n");
	tw=two(tw);
	}
	else{
	tw=TwoWheeler(tw);
	thw=ThreeWheeler(thw);
	/*TotalSum=tw+thw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\t Total Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	
	}break;
case 9:
	if(thw==0 && fw==0)
	{
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	}
	else if(thw==0){
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n"); 				
	printf("\n");
	fw=four(fw);
	}
	else if(fw==0){printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	thw=ThreeWheeler(thw);
	}
	else{
	
	thw=ThreeWheeler(thw);fw=FourWheeler(fw);
	/*TotalSum=fw+thw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\t Total Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	}break;
case 10:
	if(tw==0 && fw==0)
	{
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy Two slots are ocuupied\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	}
	else if(tw==0){
	printf("\t\t\t\t\t\t\tTwo Slots are Busy Two slots are ocuupied\n"); 				
	printf("\n");
	fw=FourWheeler(fw);
	}
	else if(fw==0){printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	tw=TwoWheeler(tw);
	}
	else{
	
	tw=TwoWheeler(tw);fw=FourWheeler(fw);
	/*TotalSum=fw+tw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\tTotal Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	}
	break;
case 11:
	
	if(tw==0 && fw==0 && thw==0)
	{
	printf("\t\t\t\t\t\t\tAll Slots are Busy Two slots are Busy\n"); 				
	printf("\n");
	}
	else if(tw==0 && thw!=0 && fw!=0){
	if(thw==0 && fw==0)
	{
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	}
	else if(thw==0){
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n"); 				
	printf("\n");
	fw=four(fw);
	}
	else if(fw==0){printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	thw=ThreeWheeler(thw);
	}
	else{
	
	thw=ThreeWheeler(thw);fw=FourWheeler(fw);
	/*TotalSum=fw+thw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\t Total Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	
	}
	}
	else if(fw==0 && tw!=0 && thw!=0){
	if(tw==0 && thw==0)
	{
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy\n");  
	printf("\n");
	}
	else if(tw==0){
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy TwoWheeler slots are ocuupied\n"); 				
	printf("\n");
	thw=three(thw);
	}
	else if(thw==0){printf("\t\t\t\t\t\t\tThree Wheeler Slots are Busy ThreeWheeler slots are ocuupied\n");  
	printf("\n");
	tw=two(tw);
	}
	else{
	tw=TwoWheeler(tw);
	thw=ThreeWheeler(thw);
	/*TotalSum=tw+thw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\t Total Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	
	}
	}
	else if(thw==0 && tw!=0 && fw!=0){
	if(tw==0 && fw==0)
	{
	printf("\t\t\t\t\t\t\tTwo Wheeler Slots are Busy Two slots are ocuupied\n"); 				
	printf("\n");
	printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	}
	else if(tw==0){
	printf("\t\t\t\t\t\t\tTwo Slots are Busy Two slots are ocuupied\n"); 				
	printf("\n");
	fw=FourWheeler(fw);
	}
	else if(fw==0){printf("\t\t\t\t\t\t\tFour Wheeler Slots are Busy FourWheeler slots are ocuupied\n");  
	printf("\n");
	tw=TwoWheeler(tw);
	}
	else{
	
	tw=TwoWheeler(tw);fw=FourWheeler(fw);
	/*TotalSum=fw+tw;
	printf("\t\t\t\t\t\t***********************************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t\tTotal Sum of TwoTypes of Vehicles:%d",TotalSum);
	printf("\n");
	TotalSum=0;*/
	}
	}
	else{
	
	tw=TwoWheeler(tw);
	thw=ThreeWheeler(thw);fw=FourWheeler(fw);
	}
	break;
	
default: 
	printf("\t\t\t\t\t\t\tEnter valid choice\n");
	break;
}
if(tw!=0 || thw!=0 ||fw!=0)
{
	
	{
	printf("\t\t\t\t\t\t\tIf you want to continue press y ");
	scanf(" %c",&ans1);
	printf("\n");
	ans=ans1;
	}

}

if(tw==0 && thw==0 && fw==0)
{
printf("\t\t\t\t\t\t\tAll Slots are Occupied\n");
printf("\n");
break;
}
}

printf("\t\t\t\t\t\t***********************************************************\n");printf("\n");
}
int TwoWheeler(int tw)
{
	int ch,c=50,sum=0,val=0;
	printf("\t\t\t\t\t\t\tEnter number of TwoWheelers you want to park : ");
	
	scanf("%d",&ch);
	printf("\n");
	if(ch>tw){printf("\t\t\t\t\t\t\tavailable TwoWheelers slots are %d\n",tw);
	printf("\n");
	return tw;}
	else{
	sum=c*ch;
	printf("\t\t\t\t\t\t\tTotal sum is  : %d\n",sum);
	val=tw-ch;
	printf("\n");
	return val;}
}	
int ThreeWheeler(int thw)
{
	int ch1,sum=0,b=70,val=0,c;
	printf("\t\t\t\t\t\t\tEnter number of ThreeWheelers you want to park : ");
	scanf("%d",&ch1);
	printf("\n");
	if(ch1>thw)
	{
	printf("\t\t\t\t\t\t\tavailable ThreeWheelers slots are %d \n",thw);
	printf("\n");
	
	return thw;
	}
	else{
	sum=b*ch1;
	printf("\t\t\t\t\t\t\tTotal sum is : %d\n",sum);
	printf("\n");
	val=thw-ch1;
	return val;}
}	
int FourWheeler(int fw)
{
	int ch1,sum=0,b=100,val=0,c;
	printf("\t\t\t\t\t\t\tEnter number of FourWheelers you want to park : ");
	scanf("%d",&ch1);
	printf("\n");
	if(ch1>fw)
	{
	printf("\t\t\t\t\t\t\tavailable FourWheelers slots are %d \n",fw);
	printf("\n");
	return fw;
	}
	else{
	sum=b*ch1;
	printf("\t\t\t\t\t\t\tTotal sum is : %d\n",sum);
	printf("\n");
	val=fw-ch1;
	return val;}
}	
void availability(int tw,int thw,int fw)
{
printf("\t\t\t\t\t\t\tAvailable number of TwoWheeler Slots are : %d\n\n",tw);
printf("\t\t\t\t\t\t\tAvailable number of ThreeWheeler Slots are : %d\n\n",thw);
printf("\t\t\t\t\t\t\tAvailable number of FourWheeler Slots are : %d\n\n",fw);
printf("\n");
}
int two(int tw)
{
	int x;
	printf("\t\t\t\t\t\t\tenter no of TwoWheelervehicles you want to withdraw:");
	scanf("%d",&x);printf("\n");
	if(x>50-tw)
	printf("\t\t\t\t\t\t\tenter with in the range %d\n\n",50-tw);
	else
	{
		tw=tw+x;
	}	
	return tw;
}
int three(int thw)
{
	int x;
	printf("\t\t\t\t\t\t\tenter no of ThreeWheeler vehicles you want to withdraw:");
	scanf("%d",&x);printf("\n");
	if(x>70-thw)
	printf("\t\t\t\t\t\t\tenter with in the range %d\n\n",70-thw);
	else
	{
		thw=thw+x;
	}	
	return thw;
}
int four(int fw)
{
	int x;
	printf("\t\t\t\t\t\t\tenter no of FourWheeler vehicles you want to withdraw:");
	scanf("%d",&x);printf("\n");
	if(x>100-fw)
	printf("\t\t\t\t\t\t\tenter with in the range %d\n\n",100-fw);
	else
	{
		fw=fw+x;
	}	
	return fw;
}





