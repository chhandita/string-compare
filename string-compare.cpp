#include<iostream>
using namespace std;

int main()  {
   int words_mag, words_note;
    cin>> words_mag;
    cin>> words_note;
    string a[50];
    for (int i=0;i<words_mag;i++){
        cin>>a[i];
    }
    string b[50];
    for (int j=0;j<words_note;j++){
        cin>>b[j];
    }
    int count=0;
    for (int k=0;k<words_mag;k++){
        for(int m=0;m<words_note;m++){
            if(a[k]==b[m]){
                k=k+1;
                count = count +1;
                
            }
            
        }
    }
   
    if (count == words_note){
        cout <<"Yes";
    }
    else{
        cout<<"No";
    }
}
