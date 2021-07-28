#include<stdio.h>
#include<math.h>
#include<string.h>
int area();
void gallery();
int calculator();
void timebreak(int i);
int table();
void loding();
void clear();
int song();




int main()
{
  printf(" \t\t\t  Hey \n");
  timebreak(12333333);
  clear();
  printf("Me Shruti ka Phone \n");
  timebreak(12333333);
  clear();
  printf("han apps khol rha\n");
  timebreak(12345432); 
  clear();
  loding();
  printf("\nsoch rahe hoge itta time kyun lg rha\n");
  timebreak(12344231);
  clear();
  printf("\nYe Phone hi itta chlati\n");
  timebreak(12432432);
  clear();
x:printf("\n\n                    APP GALLERY \n\n");
  printf("\n\n1.sticker.ly    2.Calculator  3.Area Finder  4.Whatsapp\n");
  printf("\n  5.Table Printer 6.Song        7.Videos       8.Gallery\n\n\n");


  printf("\n\n                    ");
  int ch;

  scanf("%d",&ch);
  clear();

 y:switch(ch)
  {
	  case 1:
		  printf("\n      Under Construction\n\n");
		  break;
	  case 2:
		  calculator();
		  break;
	  case 3:
		  area();
		  break;
	  case 4:
		  printf("     Enter Password\n\n\n");
		  timebreak(11234567);
		  printf("Nhi pta\n");
          timebreak(6234567);
          printf("🙂🙂🙂\n");
          timebreak(9234567);
          printf("Nikal lo , pehli fursat me \n\n");
		  break;
	  case 5:
		  table();
		  break;
	  case 6:
          song();
		  break;
	  case 7:
	 	 	 		  printf("\n            No Videos Availible\n\n");
		  break;
	  case 8:
		  gallery();
          break;
	  default:
		  printf("Krpaya aukat me rhiye");
  }
        printf("\nHIT   1 back  2 home  3 off  ");
        int a;
        scanf("%d",&a);

        if(a==1)
        {
            clear();
            goto y;
        }

        if(a==2)
        {
            clear();
            goto x;
        }

        clear();
		  



    
}

		

 






































































void timebreak(int i)
{

int n,l=0,temp,rem,sum=0,m;
for(temp=1;temp<=i;temp++)
{
n=temp;
m=n;
while(n!=0)
{
   l++;
   n=n/10;
}
while(m!=0)
{
   rem=m%10;
   sum=sum+pow(rem,l);
   m=m/10;
}
if(temp==sum)
  {
  }

l=0,sum=0;
}
}
 



void loding()
{
    for(int i=0;i<=25;i++)
    {
     printf(" |   /```\\ |``\\ ``|`` |\\  | |````` \n");
     printf(" |   |   | |  |   |   | \\ | |   _  \n");
     printf(" |__ \\,,,/ |,,/ ,,|.. |  \\| |,,| |\n  ");
 
       for(int j=0;j<=i;j++)
       {
         printf("|");
       }
       printf("\n");
        timebreak(7500000);
        clear();
    }

}


void clear()
{
    printf("\e[1;H\e[2J");
}


int table()
{
 int a, i, n ;
 printf("Enter the number 🙄= ") ;
 scanf("%d", &a) ;

 printf("\nEnter number upto \nyou want to print table 😑= ") ;
 scanf("%d", &n) ;
 printf("\n\n");
 for(i=1;i<=n;i++)
 {

    printf("%d\n",a*i);

 }


 printf("\n\ntadaaaa 🤗🤗🤗\n\n");
    return 0;
}





//area calculator
int are,side,l,h,r;
void area_square();
void area_rectangle();
void area_right_triangle();
void area_circle();

int area(){
 printf("\t\t\t Welcome to area calculator   \n");
 printf("Press 1 for area of SQUARE \n");
 printf("Press 2 for area of RECTANGLE \n");
 printf("Press 3 for area of RIGHT TRIANGLE \n");
 printf("Press 4 for area of CIRCLE \n");

 int choice;

 printf("\n Your choice is : ");
 scanf("%d",&choice);
 printf("-------------------------------------------------------------------------------\n");
 switch (choice)
 {
 case 1:
     area_square();
     break;
 case 2:
     area_rectangle();
     break;
 case 3:
     area_right_triangle();
     break;
 case 4:
     area_circle();
     break;        
 default :
   printf("\t\t*WRONG SELECTION*");
     break;
 
}
printf("\n");
 return 0;
}

void area_square(){
    int side;
    printf("Enter the side of square : ");
    scanf("%d",&side);
    are = side*side;
    printf("\n The area of square is = %d",are);
}
void area_right_triangle(){
    int h,b;
    printf("Enter the height of triangle : ");
    scanf("%d",&h);
    printf("Enter the base  of  triangle : ");
    scanf("%d",&b);
    are = h*b/2;
    printf("\n The area of right triangle is = %d",are);
}
void area_circle(){
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    are = (22/7)*r*r;
    printf("\n The area of circle is = %d",are);
}
void area_rectangle(){
    int l,k;
    printf("Enter the lenght of rectangle : ");
    scanf("%d",&l);
    printf("Enter the hight of  rectangle : ");
    scanf("%d",&k);
    are = l*k;
    printf("\n The area of rectangle is = %d",are);
}



int calculator() {
    int cho;
    double first, second;
    printf("Enter 1 for +, 2 for -, 3 for *, 4 for / ");
    scanf("%d", &cho);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (cho) {
    case 1: 
        printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
        break;
    case 2: 
        printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
        break;
    case 3: 
        printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
        break;
    case 4: 
        printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct\n");
    }

    return 0;
}



void gallery()
{   
    int a;

    printf(" =(°-°)=\n");
    printf("  /|_|\\ \n");
    printf("  /£££\\ \n");
    printf("   | |\n");

    printf("\nShruti\n\n\n");


    printf(" (°-°)\n");
    printf(" /|_|\\ \n");
    printf("  |||\n");
    printf("  | |\n");

    printf("\nShruti ka B.F.\n");
    

}


int song()
{
   int Ch;
   printf("  SONG LIST \n\n");
   printf("1.kun faya\n");
   printf("2.Mera man kehne lga\n");
   printf("3.ye tune kya kiya\n");
   printf("4.Samajavargamana\n");
   printf("5.Meherbani\n\n");
   printf("play song number--");
   scanf("%d",&Ch);
   switch(Ch)
 {

   case 1:
   printf("\nrangreja rang Mera tan mera man\nlele rangai chahe tan chahe man\nsajra savera mere tann barse\nkajra andhera Teri jalti lau\nsajra savera mere tann barse\nkajra andhera Teri jalti lau\nQatra Mila Jo tere date barse \n\nO maulaaa\nMaulaa...aa\n\n");
   break;
    
   case 2:
   printf("\nMera man kahne lga paas aake na Tu door ja");
   break;
 
   case 3: 
   printf("\nfiru ab mara mara me Chand s bichda Tara me\nDil se itna kyu hara me \nye tune kya kiya\nsari duniya se jeet ke me Aaya hu idhr\ntere aage hi me hara Kiya tune kya asar\nme ❤️ Ka raaj kahta hu ki jab jab saase leta hu\ntera hi naam leta hu\n\n-----------------\nye tune kya kiya\n---------------\n\n");
   break;
 
   case 4:
   printf("\nSamajavargamana ninu choosi aga galana Manasa midhu vayasa kunna adhupu cheppa taguna");
   break;

   case 5:
   printf("\nhe saaj Tu tere Tarz me\nu hai dava or Marj me\ndildar Tu khudgarj me ");
   break;
   
   default:
   printf("\nitte hi kare download\n");
   
}

}