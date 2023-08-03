// #include<iostream>
// using namespace std;

// int main(){

// char ch;
// cout<<"Enter Character: "<<endl;
// cin >> ch;

// if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){

//     cout<<"Vowel:"<<ch<<endl;

// }

// else{
//     cout<<"Consonent: "<<ch<<endl;
// }

// return 0;

// }

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Character: "<<endl;
    cin>>ch;

    switch(ch){

        case 'A':
        cout<<"Vowel:"<<endl;
        break; 

        case 'a':
        cout<<"Vowel:"<<endl;
        break; 

        case 'E':
        cout<<"Vowel:"<<endl;
        break; 

        case 'e':
        cout<<"Vowel:"<<endl;
        break;

        case 'i':
        cout<<"Vowel:"<<endl;
        break;

        case 'I':
        cout<<"Vowel:"<<endl;
        break;

        case 'o':
        cout<<"Vowel:"<<endl;
        break;

        case 'O':
        cout<<"Vowel:"<<endl;
        break;

        case 'u':
        cout<<"Vowel:"<<endl;
        break;
        case 'U':
        cout<<"Vowel:"<<endl;
        break;

        default :
        cout<<"Consonent"<<endl;
        break;
    }

    return 0;
}
