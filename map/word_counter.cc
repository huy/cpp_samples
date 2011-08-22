#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv){

  typedef map<string,int> WordMap;
  typedef pair<string,int> WordFreq;
  WordMap word_count;
  for(int i=1; i < argc; i++){
    cout << "add " << argv[i] << " to map" << endl;
    WordMap::const_iterator it = word_count.find(string(argv[i]));  
/*
    if( it == word_count.end() ){
        word_count.insert(WordFreq(string(argv[i]),1));
    } else {
        word_count.erase(it->first);
        cout << "erase ok" << endl;
        word_count.insert(WordFreq(string(argv[i]),it->second+1));
    }
*/
    ++word_count[string(argv[i])];
  }

  cout << "--- list of words and frequency" << endl;
  WordMap::const_iterator end = word_count.end(); 
  for(WordMap::const_iterator it = word_count.begin(); it != end; ++it){
      cout << it->first << ":" << it->second << endl;
  }
 
}

