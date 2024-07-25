#ifndef ROTA_H
#define ROTA_H
#include<cmath>
#include<map>
#include<vector>
using namespace std;

class Rota{
private:
vector<float>distancia_;
map<float,float>rota_;
vector<float>caminho_;
float hora_;
float x_;
float y_;

public:
Rota(){};
float calculadistancia(float x1, float y1, float x2, float y2);
void setempresa(float x, float y);
void setrota(float x, float y);
void sethora(float hora);
void setcaminho();
vector<float> getcaminho();
};
#endif