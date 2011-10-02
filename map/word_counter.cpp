#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<string,int> WordMap;
typedef pair<string,int> WordFreq;

void add_word_option1(WordMap& word_map,const string& word){
    WordMap::const_iterator it = word_map.find(word);
    if( it == word_map.end() ){
        word_map.insert(WordFreq(word,1));
    } else {
        word_map.erase(it->first);
        cout << "erase ok" << endl;
        word_map.insert(WordFreq(word,it->second+1));
    }
}

void add_word_option2(WordMap& word_map,const string& word){
    ++word_map[word];
}

int main(int argc, char** argv){

  WordMap word_map1, word_map2;

  for(int i=1; i < argc; i++){
    add_word_option1(word_map1,string(argv[i]));
  }

  for(int i=1; i < argc; i++){
    add_word_option2(word_map2,string(argv[i]));
  }

  cout << "--- 1. list of words and frequency" << endl;
  for(WordMap::const_iterator it = word_map1.begin(); it != word_map1.end(); ++it){
      cout << it->first << ":" << it->second << endl;
  }

  cout << "--- 2. list of words and frequency" << endl;
  for(WordMap::const_iterator it = word_map2.begin(); it != word_map2.end(); ++it){
      cout << it->first << ":" << it->second << endl;
  }
 
}

