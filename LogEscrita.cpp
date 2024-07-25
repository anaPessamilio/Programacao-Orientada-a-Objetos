#include "LogEscrita.hpp"

LogEscrita::LogEscrita(string A, string D) {
  this->Antes = A;
  this->Depois = D;
}

string LogEscrita::getAntes() { return this->Antes; }

string LogEscrita::getDepois() { return this->Depois; }

void LogEscrita::setAntes(string a) { this->Antes = a; }

void LogEscrita::setDepois(string d) { this->Depois = d; }

void LogEscrita::printLogEscrita() {
  cout << "\n Log de escrita registrado \n";
  cout << "O usuario eh:";
  cout << this->getUser().getNome() << "\n";
  cout << this->getDataHoraStr() << "\n"
       << this->getEntidade() << "\n"
       << "Antes:" << this->Antes << "\n"
       << "Depois:" << this->Depois << "\n";
}