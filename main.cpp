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
        if (name.at(i) == '.'){
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
            name = name.substr(i+1,name.size());
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
    string type_a = "";
    string type_b = "";
    string file_one = "";
    
    first_file = getFile();
    name_of_file = removeType(first_file);
    type_a = type(first_file);
    type_b = convertTo();
    file_one = getFile();

    // get the file the file type and the name 
    // get what file the user wants to convert to
    // open the original file and create a new file that is empty
    // create a function to compare the file to the language given by a directory in the beginning of the main function
    // once compare add the comparisons into the new file line by line
    // once done cout the file
    // end program
    return 0;
}