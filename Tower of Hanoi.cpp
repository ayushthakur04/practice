#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char A,char B,char C ){
    if(n==1){
        
        cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<endl;
        return;
    }
    
    TOH(n-1,A,C,B);
    cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}
