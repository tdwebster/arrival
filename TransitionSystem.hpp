#include <vector>
using namespace std;

class TransitionGraph {
    virtual int next();
    virtual void reset();
    virtual bool isAbsorbing(int k);


    bool isHit(int k);
    bool isHit(vector<int> K);
    bool terminatesAt(int k);
    bool terminatesAt(vector<int> K);
};