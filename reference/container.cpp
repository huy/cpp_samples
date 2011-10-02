#include <vector>
#include <string>
#include <boost/ref.hpp>

using namespace std;
vector<string> vs;
vector<string*> vps;
//vector<string&> vrs; // not compiled
vector<boost::reference_wrapper<string> > vrs;

