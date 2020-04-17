#include<iostream>
#include<stdio.h>
#include<stdlib.h>
// #include<graphics.h>
#include<conio.h>
#include<string.h>
#include<cstdio>

using namespace std;

main()
{system("cls");
int op,q,Sc1,Sc2,chtoss,T1,T2,Tp,i,r,S=0,w=0,balls,ch,toss,Btssc1=0,Btssc2=0;
double rr,n;
char S1[10],S2[10],Bt1[10],Bt2[10],Bt3[10],Bt4[10],Bt5[10],Bt6[10],Bt7[10],Bt8[10],Bt9[10],Bt10[10],Bt11[10],Bts1[10],Bts2[10],Bl1[10],Bl2[10],Bl3[10],Bl4[10],Bl5[10],Bl6[10],Bl7[10],Bl8[10],Bl9[10],Bl10[10],Bl11[10],Bls1[10],Bls2[10],Cp1[10],Cp2[10],Btss[10],st1[5],st2[5],Twtoss[10];
cout<<"Welcome to ANUBHAV MADHAV's \n";
cout<<"       CRICKET         \n";
cout<<"1- Play Cricket \n";
cout<<"2- Options \n";
cout<<"3- Quit Game \n";
cin>>ch;
switch(ch)
{case 1:
{cout<<"Which type of Match do you want to Play \n";
cout<<"1- Twenty-20 \n";
cout<<"2- One Day International \n";
cin>>Tp;
if(Tp==1)
{balls=120;}
else if(Tp==2)
{balls=300;}
cout<<"Select your Team \n";
cout<<"1- INDIA \n";
cout<<"2- Australia \n";
cout<<"3- New Zealand \n";
cout<<"4- South Africa \n";
cout<<"5- England \n";
cout<<"6- West Indies \n";
cout<<"7- Sri Lanka \n";
cout<<"8- Pakistan \n";
cout<<"9- Bangladesh \n";
cout<<"10- Zimbabwe \n";
cin>>T1;
cout<<"Select Opponent's Team \n";
cout<<"1- INDIA \n";
cout<<"2- Australia \n";
cout<<"3- New Zealand \n";
cout<<"4- South Africa \n";
cout<<"5- England \n";
cout<<"6- West Indies \n";
cout<<"7- Sri Lanka \n";
cout<<"8- Pakistan \n";
cout<<"9- Bangladesh \n";
cout<<"10- Zimbabwe \n";
cin>>T2;
if(T1==T2)
{cout<<"SORRY! Match Not possible between same teams \n";}
if(T1==1)
strcpy(S1,"IND");
else if(T1==2)
strcpy(S1,"AUS");
else if(T1==3)
strcpy(S1,"NZ");
else if(T1==4)
strcpy(S1,"SA");
else if(T1==5)
strcpy(S1,"ENG");
else if(T1==6)
strcpy(S1,"WI");
else if(T1==7)
strcpy(S1,"SL");
else if(T1==8)
strcpy(S1,"PAK");
else if(T1==9)
strcpy(S1,"BAN");
else if(T1==10)
strcpy(S1,"ZIM");
if(T2==1)
strcpy(S2,"IND");
else if(T2==2)
strcpy(S2,"AUS");
else if(T2==3)
strcpy(S2,"NZ");
else if(T2==4)
strcpy(S2,"SA");
else if(T2==5)
strcpy(S2,"ENG");
else if(T2==6)
strcpy(S2,"WI");
else if(T2==7)
strcpy(S2,"SL");
else if(T2==8)
strcpy(S2,"PAK");
else if(T2==9)
strcpy(S2,"BAN");
else if(T2==10)
strcpy(S2,"ZIM");
cout<<"Enter the names of Players in Team 1 \n";
{fgets(Bt1,sizeof(Bt1), stdin);
fgets(Bt2,sizeof(Bt2), stdin);
fgets(Bt3,sizeof(Bt3), stdin);
fgets(Bt4,sizeof(Bt4), stdin);
fgets(Bt5,sizeof(Bt5), stdin);
fgets(Bt6,sizeof(Bt6), stdin);
fgets(Bt7,sizeof(Bt7), stdin);
fgets(Bt8,sizeof(Bt8), stdin);
fgets(Bt9,sizeof(Bt9), stdin);
fgets(Bt10,sizeof(Bt10), stdin);
fgets(Bt11,sizeof(Bt11), stdin);}
cout<<"Enter the names of Players in Team 2 \n";
{fgets(Bl1,sizeof(Bl1), stdin);
fgets(Bl2,sizeof(Bl2), stdin);
fgets(Bl3,sizeof(Bl3), stdin);
fgets(Bl4,sizeof(Bl4), stdin);
fgets(Bl5,sizeof(Bl5), stdin);
fgets(Bl6,sizeof(Bl6), stdin);
fgets(Bl7,sizeof(Bl7), stdin);
fgets(Bl8,sizeof(Bl8), stdin);
fgets(Bl9,sizeof(Bl9), stdin);
fgets(Bl10,sizeof(Bl10), stdin);
fgets(Bl11,sizeof(Bl11), stdin);}
cout<<"Who is the Captain of Team 1? \n";
fgets(Cp1,sizeof(Cp1), stdin);
cout<<"Who is the Captain of Team 2? \n";
fgets(Cp2,sizeof(Cp2), stdin);
cout<<Cp1;
cout<<" and ";
cout<<Cp2;
cout<<" ,ANUBHAV MADHAV is calling you both for the Toss \n";
cout<<Cp1;
cout<<", what do you want HEAD or TAIL \n";
cout<<"1- HEAD \n";
cout<<"2- TAIL \n";
cin>>toss;
if(toss==1)
{cout<<S1;
cout<<", Won the Toss! \n";}
else if(toss==2)
{cout<<S2;
cout<<", Won the Toss! \n";}
if(toss==1)
{strcpy(Twtoss,S1);}
else if(toss==2)
{strcpy(Twtoss,S2);}
cout<<Twtoss<<" ,what do you want ?\n";
cout<<"1-Batting \n";
cout<<"2-Bowling \n";
cin>>chtoss;
if(((toss==1)&&(chtoss==1))||((toss==2)&&(chtoss==2)))
{cout<<"RULES \n";
cout<<"Enter run achieved on every ball \n";
cout<<"Press '-1' for wicket \n";
cout<<"Ist Innings \n";
cout<<"Start the Match! \n";
strcpy(Btss,Bt1);
strcpy(Bts1,Bt1);
strcpy(Bts2,Bt2);
for(i=1;i<=balls;i++)
{n=i/6;
cout<<"\n Enter the action on this ball \n";
cin>>r;
if((r>=0)&&(r<=6))
{S=S+r;
if(strcmpi(Btss,Bts1)==0)
{Btssc1=Btssc1+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts1);
 strcpy(st1,"*");
 strcpy(st2,"");}
 else if((r%2==1)||(i%6==0))
{strcpy(Btss,"");
 strcpy(Btss,Bts2);
 strcpy(st1,"");
 strcpy(st2,"*");}}
else if(strcmpi(Btss,Bts2)==0)
{Btssc2=Btssc2+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if((r%2==1)||(i%6==0))
{strcpy(Btss,"");
 strcpy(Btss,Bts1);
 strcpy(st1,"*");
 strcpy(st2,"");}}}
else if(r==-1)
{w=w+1;
S=S+0;
if(strcmpi(Btss,Bts1)==0)
{strcpy(Btss,"");
Btssc1=0;
strcpy(Bts1,"");
if(w==1)
{strcpy(Bts1,Bt3);}
else if(w==2)
{strcpy(Bts1,Bt4);}
else if(w==3)
{strcpy(Bts1,Bt5);}
else if(w==4)
{strcpy(Bts1,Bt6);}
else if(w==5)
{strcpy(Bts1,Bt7);}
else if(w==6)
strcpy(Bts1,Bt8);
else if(w==7)
strcpy(Bts1,Bt9);
else if(w==8)
strcpy(Bts1,Bt10);
else if(w==9)
strcpy(Bts1,Bt11);
strcpy(Btss,Bts1);}
else if(strcmpi(Btss,Bts2)==0)
{Btssc2=0;
strcpy(Btss,"");
strcpy(Bts2,"");
if(w==1)
{strcpy(Bts2,Bt3);}
if(w==2)
{strcpy(Bts2,Bt4);}
if(w==3)
{strcpy(Bts2,Bt5);}
if(w==4)
{strcpy(Bts2,Bt6);}
if(w==5)
{strcpy(Bts2,Bt7);}
if(w==6)
strcpy(Bts2,Bt8);
if(w==7)
strcpy(Bts2,Bt9);
if(w==8)
strcpy(Bts2,Bt10);
if(w==9)
strcpy(Bts2,Bt11);
strcpy(Btss,Bts2);}}
if(i%6==0)
{if(strcmpi(Btss,Bts1)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(strcmpi(Btss,Bts2)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts1);
 strcpy(st1,"*");
 strcpy(st2,"");}}
rr=S/n;
Sc1=S;
if((toss==1)&&(chtoss==1))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bts2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==1))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bts2<<st2<<" "<<Btssc2<<endl;}
else if((toss==1)&&(chtoss==2))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bts2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==2))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bts2<<st2<<" "<<Btssc2<<endl;}
if((w==10)||(i==120))
{cout<<"IInd Innings \n";
w=0,S=0;Btssc1=0;Btssc2=0;strcpy(Btss,"");strcpy(Bls1,"");strcpy(Bls2,"");
cout<<"Start the Match! \n";
strcpy(Btss,Bl1);
strcpy(Bls1,Bl1);
strcpy(Bls2,Bl2);
for(i=1;i<=balls;i++)
{n=i/6;
cout<<"\n Enter the action on this ball \n";
cin>>r;
if((r>=0)&&(r<=6))
{S=S+r;
if(strcmpi(Btss,Bls1)==0)
{Btssc1=Btssc1+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls1);
 strcpy(st1,"*");
 strcpy(st2,"");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bls2);
 strcpy(st1,"");
 strcpy(st2,"*");}}
else if(strcmpi(Btss,Bls2)==0)
{Btssc2=Btssc2+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bl2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bl1);
 strcpy(st1,"*");
 strcpy(st2,"");}}}
 else if(r==-1)
{w=w+1;
S=S+0;
if(strcmpi(Btss,Bls1)==0)
{strcpy(Btss,"");
Btssc1=0;
strcpy(Bls1,"");
if(w==1)
{strcpy(Bls1,Bl3);}
else if(w==2)
{strcpy(Bls1,Bl4);}
else if(w==3)
{strcpy(Bls1,Bl5);}
else if(w==4)
{strcpy(Bls1,Bl6);}
else if(w==5)
{strcpy(Bls1,Bl7);}
else if(w==6)
strcpy(Bls1,Bl8);
else if(w==7)
strcpy(Bls1,Bl9);
else if(w==8)
strcpy(Bls1,Bl10);
else if(w==9)
strcpy(Bls1,Bl11);
strcpy(Btss,Bls1);}
else if(strcmpi(Btss,Bls2)==0)
{strcpy(Btss,"");
Btssc2=0;
strcpy(Bts2,"");
if(w==1)
{strcpy(Bls2,Bl3);}
else if(w==2)
{strcpy(Bls2,Bl4);}
else if(w==3)
{strcpy(Bls2,Bl5);}
else if(w==4)
{strcpy(Bls2,Bl6);}
else if(w==5)
{strcpy(Bls2,Bl7);}
else if(w==6)
strcpy(Bls2,Bl8);
else if(w==7)
strcpy(Bls2,Bl9);
else if(w==8)
strcpy(Bls2,Bl10);
else if(w==9)
strcpy(Bls2,Bl11);
strcpy(Btss,Bls2);}}
if(i%6==0)
{if(strcmpi(Btss,Bls1)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(strcmpi(Btss,Bls2)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls1);
 strcpy(st1,"*");
 strcpy(st2,"");}}
rr=S/n;
Sc2=S;
if((toss==1)&&(chtoss==1))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==1))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==1)&&(chtoss==2))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==2))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
if(Sc2>Sc1)
{cout<<S2<<" Won the Match! \n";
return 0;}
if((w==10)||(i==120))
{if(Sc1>Sc2)
{cout<<S1<<" Won the Match! \n";
return 0;}
else if(Sc1<Sc2)
{cout<<S2<<" Won the Match! \n";
return 0;}
else if(Sc1==Sc2)
{cout<<"TIE \n";
return 0;}
}}}}}
else if(((toss==1)&&(chtoss==2))||((toss==2)&&(chtoss==1)))
{cout<<"Ist Innings \n";
cout<<"Start the Match! \n";
strcpy(Btss,Bl1);
strcpy(Bls1,Bl1);
strcpy(Bls2,Bl2);
Sc1=0;
for(i=1;i<=balls;i++)
{n=i/6;
cout<<"\n Enter the action on this ball \n";
cin>>r;
if((r>=0)&&(r<=6))
{S=S+r;
if(strcmpi(Btss,Bls1)==0)
{Btssc1=Btssc1+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls1);
 strcpy(st1,"*");
 strcpy(st2,"");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bls2);
 strcpy(st1,"");
 strcpy(st2,"*");}}
else if(strcmpi(Btss,Bls2)==0)
{Btssc2=Btssc2+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bls1);
 strcpy(st1,"*");
 strcpy(st2,"");}}}
else if(r==-1)
{w=w+1;
S=S+0;
if(strcmpi(Btss,Bls1)==0)
{strcpy(Btss,"");
Btssc1=0;
strcpy(Bls1,"");
if(w==1)
{strcpy(Bls1,Bl3);}
else if(w==2)
{strcpy(Bls1,Bl4);}
else if(w==3)
{strcpy(Bls1,Bl5);}
else if(w==4)
{strcpy(Bls1,Bl6);}
else if(w==5)
{strcpy(Bls1,Bl7);}
else if(w==6)
strcpy(Bls1,Bl8);
else if(w==7)
strcpy(Bls1,Bl9);
else if(w==8)
strcpy(Bls1,Bl10);
else if(w==9)
strcpy(Bls1,Bl11);
strcpy(Btss,Bls1);}
else if(strcmpi(Btss,Bls2)==0)
{Btssc2=0;
strcpy(Btss,"");
strcpy(Bls2,"");
if(w==1)
{strcpy(Bls2,Bl3);}
if(w==2)
{strcpy(Bls2,Bl4);}
if(w==3)
{strcpy(Bls2,Bl5);}
if(w==4)
{strcpy(Bls2,Bl6);}
if(w==5)
{strcpy(Bls2,Bl7);}
if(w==6)
strcpy(Bls2,Bl8);
if(w==7)
strcpy(Bls2,Bl9);
if(w==8)
strcpy(Bls2,Bl10);
if(w==9)
strcpy(Bls2,Bl11);
strcpy(Btss,Bls2);}}
if(i%6==0)
{if(strcmpi(Btss,Bls1)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(strcmpi(Btss,Bls2)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bls1);
 strcpy(st1,"*");
 strcpy(st2,"");}}
rr=S/n;
Sc1=S;
if((toss==1)&&(chtoss==1))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==1))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==1)&&(chtoss==2))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==2))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bls1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
if((w==10)||(i==120))
{cout<<"IInd Innings \n";
Sc2=0;w=0,S=0;Btssc1=0;Btssc2=0;strcpy(Btss,"");strcpy(Bts1,"");strcpy(Bts2,"");
cout<<"Start the Match! \n";
strcpy(Btss,Bt1);
strcpy(Bts1,Bt1);
strcpy(Bts2,Bt2);
for(i=1;i<=balls;i++)
{n=i/6;
cout<<"\n Enter the action on this ball \n";
cin>>r;
if((r>=0)&&(r<=6))
{S=S+r;
if(strcmpi(Btss,Bts1)==0)
{Btssc1=Btssc1+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts1);
 strcpy(st1,"*");
 strcpy(st2,"");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bts2);
 strcpy(st1,"");
 strcpy(st2,"*");}}
else if(strcmpi(Btss,Bts2)==0)
{Btssc2=Btssc2+r;
if(r%2==0)
{strcpy(Btss,"");
 strcpy(Btss,Bt2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(r%2==1)
{strcpy(Btss,"");
 strcpy(Btss,Bt1);
 strcpy(st1,"*");
 strcpy(st2,"");}}}
 else if(r==-1)
{w=w+1;
S=S+0;
if(strcmpi(Btss,Bts1)==0)
{strcpy(Btss,"");
Btssc1=0;
strcpy(Bts1,"");
if(w==1)
{strcpy(Bts1,Bt3);}
else if(w==2)
{strcpy(Bts1,Bt4);}
else if(w==3)
{strcpy(Bts1,Bt5);}
else if(w==4)
{strcpy(Bts1,Bt6);}
else if(w==5)
{strcpy(Bts1,Bt7);}
else if(w==6)
strcpy(Bts1,Bt8);
else if(w==7)
strcpy(Bts1,Bt9);
else if(w==8)
strcpy(Bts1,Bt10);
else if(w==9)
strcpy(Bts1,Bt11);
strcpy(Btss,Bts1);}
else if(strcmpi(Btss,Bts2)==0)
{strcpy(Btss,"");
Btssc2=0;
strcpy(Bts2,"");
if(w==1)
{strcpy(Bts2,Bt3);}
else if(w==2)
{strcpy(Bts2,Bt4);}
else if(w==3)
{strcpy(Bts2,Bt5);}
else if(w==4)
{strcpy(Bts2,Bt6);}
else if(w==5)
{strcpy(Bts2,Bt7);}
else if(w==6)
strcpy(Bts2,Bt8);
else if(w==7)
strcpy(Bts2,Bt9);
else if(w==8)
strcpy(Bts2,Bt10);
else if(w==9)
strcpy(Bts2,Bt11);
strcpy(Btss,Bts2);}}
if(i%6==0)
{if(strcmpi(Btss,Bts1)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts2);
 strcpy(st1,"");
 strcpy(st2,"*");}
 else if(strcmpi(Btss,Bts2)==0)
{strcpy(Btss,"");
 strcpy(Btss,Bts1);
 strcpy(st1,"*");
 strcpy(st2,"");}}
rr=S/n;
Sc2=S;
if((toss==1)&&(chtoss==1))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==1))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==1)&&(chtoss==2))
{cout<<S1<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
else if((toss==2)&&(chtoss==2))
{cout<<S2<<" | "<<S<<"-"<<w<<" | "<<n<<"overs"<<" "<<"Run Rate :"<<rr<<"  "<<Bts1<<st1<<" "<<Btssc1<<"  "<<Bls2<<st2<<" "<<Btssc2<<endl;}
if(Sc2>Sc1)
{cout<<S1<<" Won the Match! \n";
return 0;}
if((w==10)||(i==120))
{if(Sc1>Sc2)
{cout<<S2<<" Won the Match! \n";
return 0;}
else if(Sc1<Sc2)
{cout<<S1<<" Won the Match! \n";
return 0;}
else if(Sc1==Sc2)
{cout<<"TIE \n";}
return 0;}
}}}}
}
case 2:
{cout<<"   OPTIONS   \n";
 cout<<"1- Batting Statistics \n";
 cout<<"2- Bowling Ststistics \n";
 cout<<"3- Sound \n";
 cout<<"4- Camera \n";
 cin>>op;}
case 3:
{cout<<"Are you sure you want to quit game \n";
 cout<<"1- Yes \n";
 cout<<"2- No \n";
 cin>>q;}
 }}