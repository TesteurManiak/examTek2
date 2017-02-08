//
// Overlord.cpp for overlord in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:22:25 2017 exam user
// Last update Fri Jan 20 16:57:49 2017 exam user
//

#include "Overlord.hpp"

Overlord::Overlord()
{
  this->setX(0);
  this->setY(0);
  this->setDam(0);
  std::cout << "Creation d'un Overlord" << std::endl;
}

Overlord::Overlord(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  std::cout << "Creation d'un Overlord" << std::endl;
}


Overlord::~Overlord()
{
  std::cout << "Destruction d'un Overlord" << std::endl;
}

Overlord&	Overlord::operator=(const AUnit& copy)
{
  this->setX(copy.getX());
  this->setY(copy.getY());
  this->setDam(copy.getDam());
  return *this;
}

void	Overlord::attack(int x, int y)
{
  this->move(x, y);
  std::cout << "Un Overlord ne peut attaquer" << std::endl;
}

void	Overlord::move(int x, int y)
{
  this->setX(x);
  this->setY(y);
  std::cout << "Deplacement en x : " << this->getX() << " y : " << this->getY() << std::endl;
}
