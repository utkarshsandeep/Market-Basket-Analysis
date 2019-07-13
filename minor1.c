#include<stdio.h>
#include<stdlib.h>
float pair(int data[][6],int a, int b)
{
 int flaga=0,flagb=0,counter,i,j;
 float supp;
 counter=0;
 for(i=0;i<100;i++)
 {
     for(j=0;j<5;j++)
     {
      if(a==data[i][j])
   {
    flaga = 1;
   }
   
   if(b==data[i][j])
   {
    flagb = 1; 
   }  
  }
     
     if(flaga == 1 && flagb==1)
  {
    counter++;
    flaga=0;
    flagb=0;
  }
  
  else
  {
   flaga=0;
   flagb=0;
  }
  
 }
 supp = (float)counter/100;
 return supp;
}
/*
float tries(int data[][6],int a, int b,int c)
{
 int flaga=0,flagb=0,flagc=0,count=0,i,j;
 float supp;
 for(i=0;i<100;i++)
 {
     for(j=0;j<5;j++)
     {
      if(a==data[i][j])
   {
    flaga = 1;
   }
   
   if(b==data[i][j])
   {
    flagb = 1;
   }
   
   if(c==data[i][j])
   {
    flagc = 1;
   }  
  }
     
     if(flaga==1 && flagb==1 && flagc==1)
  {
   count = count+1;
   flaga=0;
   flagb=0;
   flagc=0;
  }
  
  else
  {
   flaga=0;
   flagb=0;
   flagc=0;
  }
 }
 supp = (float)count/100;
 return supp;
}
*/
void display(int va)
{
	if(va==1)
	printf("cleaner");
	else if(va==2)
	printf("salt");
	else if(va==3)
	printf("curd");
	else if(va==4)
	printf("beverages");
	else if(va==5)
	printf("snack");
	else if(va==6)
	printf("meat");
	else if(va==7)
	printf("milk");
	else if(va==8)
	printf("dessert");
	else if(va==9)
	printf("water");
	else if(va==10)
	printf("bags");
	else if(va==11)
	printf("vegetables");
	else if(va==12)
	printf("flour");
	else if(va==13)
	printf("beef");
	else if(va==14)
	printf("potato");
	else if(va==15)
	printf("yogurt");
	else if(va==16)
	printf("rice");
	else if(va==17)
	printf("chicken");
	else if(va==18)
	printf("sauce");
	else if(va==19)
	printf("bread");
	else if(va==20)
	printf("newspapers");
	else if(va==21)
	printf("berries");
	else if(va==22)
	printf("cream");
	else if(va==23)
	printf("spices");
	else if(va==24)
	printf("cereals");
	else if(va==25)
	printf("butter");
	else if(va==26)
	printf("onions");
	else if(va==27)
	printf("margarine");
	else if(va==28)
	printf("fruit");
	else if(va==29)
	printf("gum");
	else if(va==30)
	printf("cake");
	else if(va==31)
	printf("waffles");
	else if(va==32)
	printf("pork");
	else if(va==33)
	printf("cheese");
	else if(va==34)
	printf("wine");
	else if(va==35)
	printf("detergent");
	else if(va==36)
	printf("chocolate");
	else if(va==37)
	printf("eggs");
	else if(va==38)
	printf("pastry");
	else if(va==39)
	printf("coffee");
	else if(va==40)
	printf("oil");
	else if(va==41)
	printf("sugar");
	else if(va==42)
	printf("juice");
	else if(va==43)
	printf("soda");
	else if(va==44)
	printf("beer");
	else if(va==45)
	printf("soup");
	else if(va==46)
	printf("fish");
	else
	printf("grapes");
}
int main()
{
int i,j,k;
char ch;
char nx;
int data[100][6];
FILE *fp;
fp=fopen("mba_data2.txt","r");
if(fp==NULL)
{
    printf("File not found");
    exit(0);
    return(1);
}
while(!feof(fp))
{
    //printf("%c",ch);
    ch=fgetc(fp);
    //printf("%c",ch);
    if(ch!=',' && ch!='\n' && ch!=' ')
    {
        //printf("xyx");
        nx=fgetc(fp);
        if(nx!=',' && nx!='\n' && nx!=' ')
        {
            //printf("%d %d ",i,j);
            data[i][j]= (nx-'0')+((ch-'0')*10);
            //printf("%d\n",data[i][j]);
        }
        else
        {
            //printf("%d %d ",i,j);
            data[i][j]=ch-'0';
            //printf("%d\n",data[i][j]);
        }
        j++;
    }
    if(ch=='\n')
    {
        i++;
        j=0;
    }
}
fclose(fp);
const char unique[47][20]={"cleaner", "salt", "curd", "beverages", "snack", "meat", "milk", "dessert", "water", "bags", "vegetables", "flour", "beef", "potato", "yogurt", "rice", "chicken", "sauce", "bread", "newspapers", "berries", "cream", "spices", "cereals", "butter", "onions", "margarine", "fruit", "gum", "cake", "waffles", "pork", "cheese", "wine", "detergent", "chocolate", "eggs", "pastry", "coffee", "oil", "sugar", "juice", "soda", "beer", "soup", "fish", "grapes"};
int values[47]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
int b[47];
float c[47];
for(k=0;k<47;k++)
{
 int count=0;
 for(i=0;i<100;i++)
 {
  for(j=0;j<6;j++)
  {
   if(values[k]==data[i][j])
   {
    count++;
    break;
   }
  }
 }
 b[k]=count;
 c[k]=(float)b[k]/100;
}
printf("Enter minimum support");
float min_support;
scanf("%f",&min_support);
if(min_support>1||min_support<0)
{
 printf("Enter correct support");
 exit(0);
}
printf("\n");
float temp1;
int temp2;
printf("\n Occurence of each item\n");
printf("\nItem ID\tIts occurence\n");
for(i=0;i<47;i++)
{
 printf("%d\t%d\n",values[i],b[i]);
}
printf("\n\n\n");
printf("\n Support of each item\n");
printf("\nItem ID\tIts support\n");
for(i=0;i<47;i++)
{
 printf("%d\t%.4f\n",values[i],c[i]);
}
for(i=0;i<47;i++)
{
 for(j=0;j<46;j++)
 {
  if(c[j]<c[j+1])
  {
   temp1=c[j];
   c[j]=c[j+1];
   c[j+1]=temp1;
   temp2=values[j];
   values[j]=values[j+1];
   values[j+1]=temp2;
  }
  
 }
}
int x=0;
for(i=0;i<47;i++)
{
 if(min_support<=c[i])
 {
  x=i+1;
 }
 else
 {
  break;
 }
}
printf("\n\n\n");
printf("\n Support of items having more than min_support\n");
printf("\nItem ID\tIts support\n");
for(i=0;i<x;i++)
{
 printf("%d\t%.4f\n",values[i],c[i]);
}

int doublets[30][2];
float dub_sup[30];
int d_count=0,l,m;
for(l=0;l<x-1;l++)
{
 for(m=l+1;m<x-1;m++)
 {
  doublets[d_count][0]=values[l];
  doublets[d_count][1]=values[m];
  dub_sup[d_count]=pair(data,values[l],values[m]);
  d_count++;
 }
}
printf("\n Support of each pair\n");
printf("\nItem Pair\t\tIts support\n");
for(i=0;i<d_count;i++)
{
 printf("%d\t%d\t%.4f\n",doublets[i][0],doublets[i][1],dub_sup[i]);
}
float swap1;
int swap2,swap3;
for(l=0;l<d_count;l++)
{
 for(m=0;m<d_count-1;m++)
 {
  if(dub_sup[m]<dub_sup[m+1])
  {
   swap1=dub_sup[m];
   dub_sup[m]=dub_sup[m+1];
   dub_sup[m+1]=swap1;
   swap2=doublets[m][0];
   doublets[m][0]=doublets[m+1][0];
   doublets[m+1][0]=swap2;
   swap3=doublets[m][1];
   doublets[m][1]=doublets[m+1][1];
   doublets[m+1][1]=swap3;
  }
 }
}
printf("\nItem Pair\t\tIts support\n");
for(i=0;i<d_count;i++)
{
 printf("%d\t%d\t%.4f\n",doublets[i][0],doublets[i][1],dub_sup[i]);
}
int d_min=0;;
for(i=0;i<d_count;i++)
{
 if(min_support<=dub_sup[i])
 {
  d_min=i+1;
 }
 else
 {
  break;
 }
}
printf("\n Support of pairs having more than min_support\n");
printf("\nItem Pair\t\tIts support\n");
for(i=0;i<d_min;i++)
{
 printf("%d\t%d\t%.4f\n",doublets[i][0],doublets[i][1],dub_sup[i]);
}
/*int triplets[10][3];
int tri=0;
for(i=0;i<d_count;i++)
{
 for(j=0;j<d_count;j++)
 {
  if(i==j)
  {
   continue;
  }
  else
  {
   if(doublets[i][1]=doublets[j][0])
   {
    triplets[k][0]=doublets[i][0];
    triplets[k][1]=doublets[i][1];
    triplets[k][2]=doublets[i][2];
    k++;
   }
  }
 }
}
*/

//Confidence
printf("Confidence of \n");
int condi[10][2];
float confs[10][2];
for(i=0;i<d_min;i++)
{
	printf("%d->%d\t\t%d->%d\n",doublets[i][0],doublets[i][1],doublets[i][1],doublets[i][0]);
	for(j=0;j<x;j++)
	{
		if(doublets[i][0]==values[j])
		{
			condi[i][0]=doublets[i][0];
			condi[i][1]=doublets[i][1];
			confs[i][0]=dub_sup[i]/c[j];
			printf("%.4f\t\t",confs[i][0]);
		}
	}
	for(j=0;j<x;j++)
	{
		if(doublets[i][1]==values[j])
		{
			confs[i][1]=dub_sup[i]/c[j];
			printf("%.4f\n\n",confs[i][1]);
		}
	}
}
float conf;
printf("Enter minimum confidence");
scanf("%f",&conf);
if(conf>1||conf<0)
{
 printf("Enter correct confidence\n");
 exit(0);
}
float min_conf[10];
int min_con[10][2];
int ix=0;
printf("Items having more than min confidence\n");
for(i=0;i<d_min;i++)
{
	if(confs[i][0]>conf)
	{
		printf("%d->%d\t\t",doublets[i][0],doublets[i][1]);
		printf("%.4f\n",confs[i][0]);
		min_con[ix][0]=doublets[i][0];
		min_con[ix][1]=doublets[i][1];
		min_conf[ix]=confs[i][0];
		ix++;
	}
	if(confs[i][1]>conf)
	{
		printf("%d->%d\t\t",doublets[i][1],doublets[i][0]);
		printf("%.4f\n",confs[i][1]);
		min_con[ix][0]=doublets[i][1];
		min_con[ix][1]=doublets[i][0];
		min_conf[ix]=confs[i][1];
		ix++;
	}
}
printf("From the above calculations we get\n");
for(i=0;i<ix;i++)
{
	printf("Whenever customer buys\t\"");
	display(min_con[i][0]);
	printf("\"\t he will buys\t\"");
	display(min_con[i][1]);
	printf("\"\n");
}
return 0;
}