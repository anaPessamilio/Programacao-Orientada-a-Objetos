#include "Rota.hpp"

using namespace std;


float Rota::calculadistancia(float x1, float y1, float x2, float y2) {
return 110.57 * sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}
void Rota::setempresa(float x, float y){
    x_=x;
    y_=y;
}
void Rota::setrota(float x, float y){
    auto it=rota_.end();
     float distancia;
   distancia=calculadistancia(it->first,it->second,x,y);
    distancia_.push_back(distancia);
    rota_.insert( std::pair<float,float>(x,y) );
    
}
void Rota::sethora(float hora){
    hora_=hora*60;
}
void Rota::setcaminho(){
    auto it=rota_.begin();
    float distancia=calculadistancia(x_, y_,it->first,it->second);
    hora_=hora_-(distancia/18);
    caminho_.push_back(hora_);
    for(auto it=distancia_.begin(); it!=distancia_.end(); it++){
         
    float h=((*it/18))+hora_;
    //hora_=h;
   caminho_.push_back(h);
    }

}
vector<float> Rota::getcaminho(){
    return caminho_;
}