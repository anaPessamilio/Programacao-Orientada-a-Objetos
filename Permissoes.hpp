#ifndef PERMISSOES_H
#define PERMISSOES_H 

#include<vector>
using namespace std;
class Permissoes{
    
    private:
    vector<int> p_;

    public:
    Permissoes(){};
    void setpermissao(int i);
    vector<int> getpermissao();
   
};
#endif


