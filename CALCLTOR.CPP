#include<iostream.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
void arithmetic(float a,float b,char x);
void logical(int c,int d,int);
void scientific(int m);
void end();
void main()
{
 clrscr();
 int i,j,n,m,c,d,s;
 float a,b;
 double p;
 char x,ch,k,cm,as,ak;

 do
 {
	clrscr();
	textcolor(LIGHTRED);
	gotoxy(30,8);cprintf("SCIENTIFIC CALCULATOR");
	textcolor(YELLOW);
	gotoxy(26,12);cprintf("1. Arithmetic Calculator");
	gotoxy(26,14);cprintf("2. Logical Calculator");
	gotoxy(26,16);cprintf("3. Scientific Calculator");
	gotoxy(26,18);cprintf("4. Exit");
	textcolor(GREEN);
	gotoxy(30,22);cprintf("Enter your choice:");
	cin>>n;
	textcolor(WHITE);
	clrscr();
	if(n>4)
	{
		cout<<"\n INVALID CHOICE";
		goto x;
	}
 switch(n)
 {
   case 1:
	z:cout<<"\n\a Enter two numbers:";
	cin>>a>>b;
	cout<<"\n Enter arithmetical operator(+,-,*,/):";
	cin>>x;
	arithmetic(a,b,x);
	cout<<"\n ---------------------------------------";
	cout<<"\n\n WANT MORE<Y/N>? :";
	cin>>as;
	if(as=='y' || as=='Y')
	goto z;
	clrscr();
	break;
   case 2:
	w:cout<<"\n Enter two no.s:";
	cin>>c>>d;
	cout<<"\n Logical operators:- \n\t1.< \n\t2.> \n\t3.<= \n\t4.>= \n\t5.=";
	cout<<"\n Enter your choice:";
	cin>>k;
	cout<<endl;
	logical(c,d,k);
	cout<<"\n ---------------------------------------";
	cout<<"\n\n WANT MORE<Y/N>? :";
	cin>>ak;
	if(ak=='y' || ak=='Y')
	goto w;
	clrscr();
	break;
   case 3:
	cout<<"\n What You Want To Calculate";
	cout<<"\n --------------------------";
	p:cout<<"\n\t1.Sin \n\t2.Cos \n\t3.Tan \n\t4.Cot \n\t5.Sec \n\t6.Cosec \n\t7.Power \n\t8.Square Root\n\t9.Exit";
	cout<<"\n\n Enter your choice:";
	cin>>s;
	scientific(s);
	cout<<"\n -------------------------------------------";
	cout<<"\n\n Want More In SCIENTIFIC CALCULATIONS (Y/N):";
	cin>>cm;
	if(cm=='y' || cm=='Y')
	goto p;
	clrscr();
	break;
  case 4:
	end();
	exit(0);
	break;
 }
	x:cout<<"\n\n\a BACK TO MAIN MENU (Y/N)?";
	cin>>ch;
 }while(ch=='y' || ch== 'Y');
 end();
getch();
}
void arithmetic(float p,float q,char r)
{	if(r=='+')
	cout<<"\n The Result is:"<<p+q;
	else if(r=='-')
	cout<<"\n The Result is:"<<p-q;
	else if(r=='*')
	cout<<"\n The Result is:"<<p*q;
	else if(r=='/')
	cout<<"\n The Result is:"<<p/q;
}
void logical(int c,int d,int k)
{
	switch(k)
	{
		case'1':
		     if(c<d)
		     cout<<"True";
		     else
		     cout<<"False"; break;
		case'2':
		     if(c>d)
		     cout<<"True";
		     else
		     cout<<"False"; break;
		case'3':
		     if(c<=d)
		     cout<<"True";
		     else
		     cout<<"False"; break;
		case'4':
		     if(c>=d)
		     cout<<"True";
		     else
		     cout<<"False";break;
		case'5':
		     if(c==d)
		     cout<<"True";
		     else
		     cout<<"False";break;
		default:
		cout<<"\n\a*** Wrong operator ***\a";
	}
}
void scientific(int m)
{
	double p;
	int a,b;
	if(m==1 || m==2 || m==3 || m==4 || m==5 || m==6)
	{
		cout<<"\n\a Enter A Degree Measure OR A Number:";
		cin>>p;
		p=(p*3.142)/180;
	}
	switch(m)
	{
		case 1:
			cout<<"\n The Result Is:"<<sin(p);
			break;
		case 2:
			cout<<"\n The Result Is:"<<cos(p);
			break;
		case 3:
			cout<<"\n The Result Is:"<<tan(p);
			break;
		case 4:
			cout<<"\n The Result Is:"<<1/tan(p);
			break;
		case 5:
			cout<<"\n The Result Is:"<<1/cos(p);
			break;
		case 6:
			cout<<"\n The Result Is:"<<1/sin(p);
			break;
		case 7:
			cout<<"\n\a Input Base & Power:";
			cin>>a>>b;
			cout<<" \n The Answer is:"<<pow(a,b);
			break;
		case 8:
			cout<<"\n\a Enter The Number:";
			cin>>a;
			cout<<"\n\n The Square root of "<<a<<" is:"
			<<sqrt(a);
			break;
		case 9: end();
			exit(0);
			break;
	}
}

void end()
{
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
 errorcode = graphresult();
 if(errorcode != grOk)  /* an error occurred */
 {
  printf("Graphics error: %s\n", grapherrormsg(errorcode));
  printf("Press any key to halt:");
  getch();
  exit(1);             /* return with error code */
 }
 fflush(stdin);
 setfillstyle(1,BLUE);
 rectangle(2,1,660,660);
 bar(2,1,660,660);
 setcolor(YELLOW);
 setlinestyle(1,0,3);
 settextstyle(1,0,8);
 settextjustify(LEFT_TEXT,TOP_TEXT);
 line(10,110,380,110);
 outtextxy(10,20,"C");
 settextstyle(4,0,8);
 outtextxy(47,20,"reated By:-");
 settextstyle(1,0,6);
 settextjustify(LEFT_TEXT,CENTER_TEXT);
 setcolor(YELLOW);
 settextstyle(1,0,4);
 outtextxy(90,220,"KALPA NIGAM ACHARYA");
 sleep(10);
 clrscr();
 getch();
}





