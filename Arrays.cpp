#include<iostream>

using namespace std;

int main()
{
   int squarearray[5];
   for(int i=0;i<5;i++)
   {
       int square=(i+1)*(i+1);
       squarearray[i]=square;

   }

   
   for(int i:squarearray){
       cout<<i<<endl;
   }
    system("pause");
    cout<<"Hi";


}