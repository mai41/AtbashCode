//FCI - Programming 1 - 2018 - Assignment 2
//Program Name: Atbash_Code_Game2
//Last Modification Date: 1 - 3 - 2018
//Author 1 : Mai Rady Hassan - 20170302 - G 12
//Author 2 : Nour Elhoda Khaled Samir - 20170320 - G 12
//Author 3 : Andrew Emad Aziz - 20170061 - G 12
//Teaching Assistant: ENG.Khadiga && ENG.Dina Mohamed
//Purpose: Writing a code to convert a message into an atbash cipher, then decipher it





#include <iostream>

using namespace std;

int main()
{
    cout<<"Ahlan ya user ya habibi"<<endl;
    cout<<endl;
    cout<<"What do you like to do today?!"<<endl;
    cout<<endl;
    char capital_letters[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char small_letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string message;
    cout<<"Please enter the message: "<<endl;
    getline(cin,message);

    for(int i=0; i<message.length(); i++){

        for(int j=0; j<26; j++){
            if(message[i]==' '){
                    cout<<(char)(32);
                    break;
            }
             else if(message[i]==capital_letters[j]){
                 cout<<capital_letters[25-j];
                 break;
             }
             else if(message[i]==small_letters[j]){
                  cout<<small_letters[25-j];
                  break;
             }
        }



    }










    return 0;
}
