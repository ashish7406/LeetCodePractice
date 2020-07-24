#include<iostream>

using namespace std;

int main()
{ 
    int nums[8]={10,415,141};
    int n=sizeof(nums)/sizeof(nums[0]);
   int  count=0;

   for(int i=0;i<n;i++)
   {  
       int num=nums[i];
       int a=0;
       do
       {
           int a=num/10;
          
           num=a;
           count=count+1;
           
       } while (num!=0);
       
     
            if(count%2==0)
            {
                int final=count;
                cout<<"Even number of digits"<<final;
               
            } 
             count=0;  

   }
       
        
        std::system("pause");
}