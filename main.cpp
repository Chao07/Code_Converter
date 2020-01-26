#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// gets the file name
string getFile(){
    string name = "";
    cin >> name;
    return name;
}
// removes the type for the name for the new file that will be converted to
string removeType(string name){
    for(int i  = 0; i < name.size(); i++){
        if (name.at(i) == "."){
            name = name.substr(0,i);
            i = name.size();
        }
    }
    return name;
}
//get the type of the document
string type(string name){
    for(int i  = 0; i < name.size(); i++){
        if (name.at(i) == "."){
            name = name.substr(i,name.size());
            i = name.size();
        }
    }
    return name;
}
// this adds the new file name
string new_File_Name(string name){

}
// this is what the user want the files to be converted to
string convertTo(){
    string type_a = "";
    cin >> type_a;
    return type_a;   
}
// main function
int main(){
    string first_file = "";
    string name_of_file = "";
    string type_a = type(first_file);
    string type_b = convertTo();
    string file_one = "";
    file_one = getFile();


    return 0;
}