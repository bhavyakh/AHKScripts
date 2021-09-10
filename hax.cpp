// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool has_only_spaces(const std::string& str) {
   return str.find_first_not_of (' ') == str.npos;
}
int main () {
    ofstream out("output.ahk");    
    streambuf *coutbuf = std::cout.rdbuf(); 
    cout.rdbuf(out.rdbuf()); 
    string line;
 
    ifstream myfile ("input.txt");
    if (myfile.is_open())
    {
        cout<<"^j::"<<endl;
        while ( getline (myfile,line) )
        {
            if(!has_only_spaces(line)){
                for(int i=0;i<line.length();i++){
                    // if(line[i] == '{'){
                    //     line.replace(i,1,"{{}");
                    //     i+=2;
                    // }
                    // else if(line[i] == '}'){
                    //     line.replace(i,1,"{}}");
                    //     i+=2;
                    // }
                    // else if(line[i] == '!'){
                    //     line.replace(i,1,"{!}");
                    //     i+=2;
                    // }
                    // else if(line[i] == '+'){
                    //     line.replace(i,1,"{+}");
                    //     i+=2;
                    // }
                    // else if(line[i] == '#'){
                    //     line.replace(i,1,"{#}");
                    //     i+=2;
                    // }
                }
                cout<<"SendRaw , "<<line<<endl;
                cout<<"Send {Enter}"<<endl;
            }
        }
        cout<<"return";
        myfile.close();
    }
 
    else cout << "Unable to open file"; 
 
    return 0;
}