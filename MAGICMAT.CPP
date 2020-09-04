#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,a,b,num,result;
char ans[3];
initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
a=getmaxx()/5;
b=getmaxy()/2;
setbkcolor(GREEN);
settextstyle(0,0,4);
outtextxy(a,b,"\2 Magic Math \2");
delay(1000);
cleardevice();
settextstyle(0,0,2);
outtextxy(a/2,b,"* Read the instruction carefully *");
delay(1000);
cleardevice();
settextstyle(0,0,1);
outtextxy(50,50,"1.Assume any three digit number");
outtextxy(50,75,"2.Make sure the last number is less than first number");
outtextxy(50,100,"3.Reverse the assumed number");
outtextxy(60,125,"( Eg. if 572 is an assumed number, then 275 will be reversed number)");
outtextxy(50,150,"4.Subtrat the reversed number from assumed number( Eg. Here 572-275=297)");
outtextxy(50,175,"5.Keep the answer in your mind");
outtextxy(50,200,"6.You need to enter the last digit of your answer alone");
outtextxy(60,225,"(Eg. Here 7 is the last digit in 297 )");
outtextxy(100,250,"Click Enter key,when you red out it..");
getch();
cleardevice();
outtextxy(a,100,"Enter the last digit of your answer..");
scanf("%d",&num);
cleardevice();
settextstyle(0,0,3);
result=num+90+(9-num)*100;
outtextxy(a,b,"Hurray!We got it");
outtextxy(a,b+30,"Your answer is");
itoa(result,ans,10);
outtextxy(250,b+60,ans);
getch();

}
