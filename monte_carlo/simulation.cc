#include <iostream>
#include <math.h>

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/discrete_distribution.hpp>
#include <boost/random/exponential_distribution.hpp>

using namespace std;

int main(int argc, char** argv){
  for(int i=1; i < argc; i++){
    cout << argv[i] << endl;
  }
}

