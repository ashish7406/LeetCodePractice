#include<iostream>

using namespace std;

int main()
{
    int arr[8]={1,1,0,1,0,1,1,1};
    int length=sizeof(arr)/sizeof(arr[0]);
    int counter=0;
    int newcounter=0;
    int result=0;
    int newarray[length];
    for(int i=0;i<length;i++)
    {
     
        if(arr[i]== 1)
        { 
            newcounter=newcounter+1;
             result=max(counter,newcounter);
          
            
        }
        else{
          
            newcounter=0;
        }
        
    }
    
    cout<<result;
    
    std::system("pause");

}