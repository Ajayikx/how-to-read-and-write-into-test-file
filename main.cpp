#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myFile;
  /*  myFile.open("things i want to download.txt", ios::out);//write
    if (myFile.is_open()){
        cout << "you have successfully open new file...\n ";
        myFile<< " i need to download c++ builder ..\n ";
        myFile<< " i need to upload to my git account .. ";
        myFile.close();
    }
    else
    {
        cout << "your file was not opened ";
        
       
    }


    myFile.open ("things i want to download.txt", ios::app);
    if (myFile.is_open()){
        cout << "welcome back, you file is opened: \n";
        myFile <<"the new line of the code ,\n what will you like to do"; 
         myFile.close();
    }
*/

     myFile.open("things i want to download.txt",ios::in); //read
     if (myFile.is_open()){
        cout << "welcome ";
        string line;
        while (getline(myFile, line))
        {
            cout<< line << endl;
        }
        
        
        myFile.close();
     }



    return 0;
}
