#include <vector>
using namespace std;

class Deg2ArrivalGraph {
    int n;
    vector<int> s0;
    vector<int> s1;
    vector<bool> q;
    int v;

    Deg2ArrivalGraph(int n, vector<int> s0, vector<int> s1) {
        this->n = n;
        this->s0 = s0;
        this->s1 = s1;
        this->q = vector<bool>(n,false);
        this->v = 0;
    }

    void reset() {
        this->q = vector<bool>(n,false);
        this->v = 0;
    }

    int next() {
        q[v] = !q[v];
        return (v = q[v] ? s0[v] : s1[v]);
    }
};


class Deg2ArrivalGraph {
    int n;
    vector<int> s0;
    vector<int> s1;
    vector<bool> q;
    int v;

    Deg2ArrivalGraph(int n, vector<int> s0, vector<int> s1) {
        this->n = n;
        this->s0 = s0;
        this->s1 = s1;
        this->q = vector<bool>(n,false);
        this->v = 0;
    }

    int next() {
        q[v] = !q[v];
        return (v = q[v] ? s0[v] : s1[v]);
    }
};