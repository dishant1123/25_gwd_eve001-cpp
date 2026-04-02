/*
file handling  :  txt 
1. read  : exiting  file   
2.write  : new create +write + exiting  file  open ==> overwrite 
3.append : new create +write + exiting  file  open ==> last add 

fstream  :  file stream  ==> read +write 
ofstream :  file stream  ==> write
ifstream :  file stream  ==> read

ios :: app 
*/

// ex :1 write  mode  
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("yogesh.txt");

    fout<<"my name is yogesh"<<endl;
    fout<<"my age is 20"<<endl;
    fout<<"my gpa is 7.67"<<endl;
    fout<<"my hobby is programming"<<endl;
    fout<<"dream to meet narendra modi"<<endl;

    fout.close(); 
    return 0;
}
*/ 
// ex :2 write  mode exiting file  : 
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("yogesh.txt");

    fout<<"best friend  name is  om modi"<<endl;
    fout<<"study in royal."<<endl;
    fout<<"dream to meet virat kohli"<<endl;

    fout.close(); 
    return 0;
}
*/

// ex :3 read mode : 
/*
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ifstream fin("yogesh.txt");
    string s; 

    while(getline(fin,s))
    {
        cout<<s<<endl;
    }
    return 0 ; 
}
*/
/*
while('\0')
{
    printf("%c ",s);
}
*/

// ex :4 append mode :  new file create
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("ommodi.txt",ios::app);

    fout<<"my name is om modi"<<endl;
    fout<<"my age is 20"<<endl;
    fout<<"my gpa is 8.67"<<endl;
    fout<<"my hobby is programming"<<endl;
    fout<<"dream to meet yogi "<<endl;

    fout.close();
    return 0 ; 

}
*/ 

// ex :5 append mode :  exiting  file : 
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("ommodi.txt",ios::app);

   fout<<"best friend  name is  tejas."<<endl;
   fout<<"study in royal."<<endl;

    fout.close();
    return 0 ; 

}
*/ 
/*
task  :1 ask user to enter the  string  and  seperate  consonant and vowel  in  cons.txt and vowel.txt 

getline(cin,s)
input  : my name is om modi. 
cons.txt : my nm s m md.
vowel.txt :  o m m i
*/

// ex :6 
/*
read +  :  exiting  + write + read  
write + :  new create + write + read + exiting  open  ==> overwrite 
append +:  new create + write + read + exiting  open  ==> add in last . 

seekg()  ==> cursor move 

*/


// ex :6  r+ : 
/*
ofstream  ===> read 
ifstream  ===> write

ios :: in  ==> read
ios :: out  ==> write
ios :: app  ==> append
ios ::binary  ==> binary file
ios::trunc  ==> truncate file
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("yogesh.txt",ios::in | ios::out);  
    string data; 

    // while(getline(file,data))
    // { 
    //     cout<<"read : "<<data<<endl;
    // }
    // getline(file,data); // default  ==> first  line  
    file.seekg(0,ios::beg);
    // cout<<"read : "<<data<<endl;

    file<<"bhvya paras shah."<<endl;
    file.close();
    return 0 ; 
}