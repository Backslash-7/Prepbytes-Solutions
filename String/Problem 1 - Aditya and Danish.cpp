#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int len;
      cin>>len;
      string str;
      cin>>str;
      int countA=0, countD=0;
      for(int i=0;i<len;i++)
      {
        if(str[i]=='A')
        {
          countA++;
        }
        else
        {
          countD++;
        }
      }
      if(countA>countD)
      {
        cout<<"Aditya"<<endl;
      }
      else if(countA<countD)
      {
        cout<<"Danish"<<endl;
      }
      else
      {
        cout<<"AdiDan"<<endl;
      }
      
    }
    
    
    return 0;
  }