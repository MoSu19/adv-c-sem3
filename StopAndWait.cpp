#include<iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;
class timer {
    private:
     unsigned long begTime;
    public:
     void start() {
      begTime = clock();
     }
  unsigned long elapsedTime() {
      return ((unsigned long) clock() - begTime) / CLOCKS_PER_SEC;
    }
   bool isTimeout(unsigned long sec) {
      return sec >= elapsedTime();
     }
};
int main()
{

 cout<<"\nMohit Suhasaria\t19BCE2167\n";
 int frames[] = {1,2,3,4,5,6,7,8,9,10};
 unsigned long sec = 5;
 srand(time(NULL));
 timer t;
 cout<<"Sender has to send frames : ";
 for(int i=0;i<10;i++)
     cout<<frames[i]<<" ";
 cout<<endl;
 int c = 0;
 bool delay = false;
 cout<<endl<<"Sender\t\t\t\t\tReceiver"<<endl;
 do
 {
     bool tout = false;
     cout<<"Sending Frame : "<<frames[c];
     cout.flush();
     cout<<"\t\t";
     t.start();
     if(rand()%2)
     {
         int to = 20000 + rand()%(60000 - 20000)  + 1;
         for(int i=0;i<60000;i++)
             for(int j=0;j<to;j++) {}
     }
     if(t.elapsedTime() <= sec)
     {
         cout<<"Received Frame : "<<frames[c]<<" ";
         if(delay)
         {
             cout<<"Duplicate";
             delay = false;
         }
         cout<<endl;
         c++;
     }
     else
     {
         cout<<"---"<<endl;
         cout<<"Timeout"<<endl;
         tout = true;
     }
     t.start();
     if(rand()%2 || !tout)
     {
         int to = 20000 + rand()%(60000 - 20000)  + 1;
         for(int i=0;i<60000;i++)
             for(int j=0;j<to;j++) {}
         if(t.elapsedTime() > sec )
         {
             cout<<"Delayed Acknowledgement"<<endl;
             c--;
             delay = true;
         }
         else if(!tout)
             cout<<"Acknowledgement : "<<frames[c]-1<<endl;
     }
 }while(c!=10);
 return 0;
}
