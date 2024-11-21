#include <iostream>
#include <fstream>

int main(){
  //  std::ofstream file; //this will create file and each time we run program, it override the value
    std::ofstream file ("demo.txt", std::ios::app);//this allo to append the value in existing file
   // file.open("demo.txt");
    if(file.is_open()){
        std::cout<< "able to open file n000b\n";
    }
    // above line will create blank file in current directory.
    std::vector<std::string> names;
    names.push_back("rakesh");
    names.push_back("suresh");
    for(std::string name : names){
        file << name << std::endl;
    }
    return 0;
}
