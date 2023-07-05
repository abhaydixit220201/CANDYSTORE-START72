#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            cout<<y<<endl;
        }else {
            int s=(y-x);
            cout<<((x)+(s*2))<<endl;
                
            
            
        }
            
        
    }
	// your code goes here
	return 0;