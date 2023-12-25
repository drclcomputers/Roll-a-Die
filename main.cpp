#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

void generator(){
    char text[]="Roll a die";
    for(int i=0; i<10; i++){
        if(int(text[i])==32){
            cout<<text[i]<<text[i+1];
            i++;}
        else cout<<text[i];
        Sleep(200);
    }
    cout<<" ";
    for(int i=0; i<3; i++){
        cout<<". ";
        Sleep(200);
    }
    cout<<endl<<endl;
    srand(time(NULL));
    int side=1+rand()%6;
    switch(side){
    case 1:
        cout<<"    . . ."<<endl;
        cout<<"    . o ."<<endl;
        cout<<"    . . ."<<endl;
        break;
    case 2:
        cout<<"    . . o"<<endl;
        cout<<"    . . ."<<endl;
        cout<<"    o . ."<<endl;
        break;
    case 3:
        cout<<"    . . o"<<endl;
        cout<<"    . o ."<<endl;
        cout<<"    o . ."<<endl;
        break;
    case 4:
        cout<<"    o . o"<<endl;
        cout<<"    . . ."<<endl;
        cout<<"    o . o"<<endl;
        break;
    case 5:
        cout<<"    o . o"<<endl;
        cout<<"    . o ."<<endl;
        cout<<"    o . o"<<endl;
        break;
    case 6:
        cout<<"    o . o"<<endl;
        cout<<"    o . o"<<endl;
        cout<<"    o . o"<<endl;
        break;
    }
    char quest;
    cout<<endl<<"Do you want to re-roll? (Y or N) : "; cin>>quest;
    if(int(quest)==89 || int(quest)==121){
        system("cls");
        generator();
    }
}

int main()
{
    generator();
    return 0;
}
