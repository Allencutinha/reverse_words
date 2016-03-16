#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

int main(int argc, char* argv[]){
    ifstream inFile(argv[1]);
    ofstream outFile(argv[2]);
    if(!inFile){return -1;}
    if(!outFile){return -2;}
    int cases, loopIterator = 0, words;
    inFile >> cases;
    cout<<cases<<endl;
    string test;
    getline(inFile, test);
    while(loopIterator < cases){

        std::string line;
        vector<string> revLine;
        words = 0;
        (getline(inFile, line));

        std::stringstream fullLine(line);
        std::string word;
        while(fullLine>>word){
            revLine.push_back(word);
            words++;
        }


        cout<<"Case #"<<loopIterator+1<<": ";
        outFile<<"Case #"<<loopIterator+1<<": ";
        while(words > 0){
            cout<<revLine[words-1]<<" ";
            outFile<<revLine[words-1]<<" ";
            words--;
        }
        cout<<endl;
        outFile<<endl;
        loopIterator++;
    }
	return 0;
}
