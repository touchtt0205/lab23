#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char* argv[]){
    if(argc > 1){
        cout<<"---------------------------------\n";
        int sum=0;
        for(int i=0;i<argc;i++){
            sum=sum+atoi(argv[i]);
        }
        cout<<"Average of "<<argc-1<<" numbers = "<< sum/(argc-1);
        cout<<"\n---------------------------------";
    } else{
        cout<<"Please input numbers to find average.";
    }
    
    return 0;
}