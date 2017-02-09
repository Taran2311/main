#include <iostream>
#include <fstream>
#include <conio.h>
#include <dirent.h>

using namespace std;
void show_all_phone_numbers(DIR **dir,dirent **current);
int main()
{
    DIR *dir;
    dirent *first;
    dir=opendir(".");    //open current directory
    first=readdir(dir);
    show_all_phone_numbers(&dir,&first);
    closedir(dir);

    return 0;
}
void show_all_phone_numbers(DIR **dir,dirent **current)
{  if(!(*current))
    return;

     cout<<(*current)->d_name<<endl;
    ifstream pointerinfile((*current)->d_name);
    long int mobilenumber;                   //assuming mobile number stored as a type 9856982325 long integer
    while(cin>>mobilenumber){
        cout<<mobilenumber<<endl;}

        *current=readdir(*dir);


    show_all_phone_numbers(&(*dir),&(*current));
}
