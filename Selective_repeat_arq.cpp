#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define TOTAL_FRAMES 500
#define FRAMES_SEND 10

using namespace std;

class sel_repeat
{
private:
int fr_send_at_instance;
int arr[TOTAL_FRAMES];
int send[FRAMES_SEND];
int received[FRAMES_SEND];
char received_ack[FRAMES_SEND];
int sw;
int rw;
public:
void input();
void sender(int);
void receiver(int);
};
void sel_repeat::input()
{
int n;
int m;
int i;
cout<<"\nEnter the no. of bits for the sequence no. : ";
cin>>n;
m=pow(2,n);
int t=0;
fr_send_at_instance=(m/2);
for(i=0;i<TOTAL_FRAMES;i++)
{
arr[i]=t;
t=(t+1)%m;
}
for(i=0;i<fr_send_at_instance;i++)
{
send[i]=arr[i];
received[i]=arr[i];
received_ack[i]='n';
}
rw=sw=fr_send_at_instance;
sender(m);
}
void sel_repeat::sender(int m)
{
for(int i=0;i<fr_send_at_instance;i++)
{
if(received_ack[i]=='n')
cout<<"\nSENDER : Frame "<<send[i]<<" is sent\n";
}
receiver(m);
}
void sel_repeat::receiver(int m)
{
time_t t;
int f;
int j;
int f1;
int a1;
char ch;
srand((unsigned)time(&t));
for(int i=0;i<fr_send_at_instance;i++)
{
if(received_ack[i]=='n')
{
f=rand()%10;
if(f!=5)
{
for(int j=0;j<fr_send_at_instance;j++)
if(received[j]==send[i])
{
cout<<"\nReciever:Frame"<<received[j]<<"recieved correctly\n";
received[j]=arr[rw];
rw=(rw+1)%m;
break;
}
int j;
if(j==fr_send_at_instance)
cout<<"\nReciever:Duplicate frame"<<send[i]<<"discarded\n";
a1=rand()%5;
if(a1==3)
{
cout<<"\n(Acknowledgement "<<send[i]<<" lost)\n";
cout<<"\n(Sender timeouts-->Resend the frame)\n";
received_ack[i]='n';
}
else
{
cout<<"\n(Acknowledgement "<<send[i]<<" recieved)\n";
received_ack[i]='p';
}
}
else
{int ld=rand()%2;
if(ld==0)
{
cout<<"\nRECEIVER : Frame "<<send[i]<<" is damaged\n";
cout<<"\nRECEIVER : Negative Acknowledgement "<<send[i]<<" sent\n";
}
else
{
cout<<"\nRECEIVER : Frame "<<send[i]<<" is lost\n";
cout<<"\n(SENDER TIMEOUTS-->RESEND THE FRAME)\n";
}
received_ack[i]='n';
}
}
}
for(int j=0;j<fr_send_at_instance;j++)
{
if(received_ack[j]=='n')
break;
}
int i=0;
for(int k=j;k<fr_send_at_instance;k++)
{
send[i]=send[k];
if(received_ack[k]=='n')
received_ack[i]='n';
else
received_ack[i]='p';
i++;
}
if(i!=fr_send_at_instance)
{
for(int k=i;k<fr_send_at_instance;k++)
{
send[k]=arr[sw];
sw=(sw+1)%m;
received_ack[k]='n';
}
}
cout<<"Want to continue";
cin>>ch;
cout<<"\n";
if(ch=='y')
sender(m);
else
exit(0);
}
int main()
{
cout<<"\nMohit Suhasaria\t19BCE2167\n";
sel_repeat sr;
sr.input();

}

