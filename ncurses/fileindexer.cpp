#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    list<vector<long>> vec_list;
    vector<long> v;
    v.resize(2);
    v[0] = 1;
    v[1] = 2;
    vec_list.push_back(v);

    // get one arg
    string arg = argv[1];
    int len = arg.length();
    for(int i = 0; i < len; ++i)
    {
        if(!std::isdigit(arg[i]))
        {
            cout << "error" << endl;
            return -1;
        }
    }

    int n = 0;
    if(n = atoi(arg.c_str()) - 1) return  0;
    for(int i = 0; i < n; ++i)
    {
        int len = v.size();
        for(int j = 1; j < len; ++j)
        {
            v[j] = v[j] ^ v[j-1];
        }
        v.resize(v.size()+1);
        v[len] = 1;
        vec_list.push_back(v);
    }
    
    auto end = vec_list.end();
    auto begin = vec_list.begin();
    for(auto iter = begin; iter != end; ++iter)
    {
        int len = iter->size();
        for(int i = 0; i < len; ++i)
        {
            cout << iter->at(i) << " "; 
        }
        cout << endl;
    }
  }  