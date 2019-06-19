#include<bits/stdc++.h>
using namespace std;


int add(int a, int b){
   return a+b;
}

int main(int argc, char* argv[]){
   string s;   
   if(argc > 0){
      s = argv[1];
   }else{
     s = 'N';
   }
    
   cout <<s<<endl;
   cout<<"Hello WOrld of git";
   cout<<endl<<add(34,26);
   return 0;
}