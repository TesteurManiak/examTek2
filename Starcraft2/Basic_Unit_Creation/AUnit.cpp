//
// AUnit.cpp for aunit in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:12:40 2017 exam user
// Last update Fri Jan 20 18:53:36 2017 exam user
//

#include "AUnit.hpp"

AUnit::~AUnit()
{}

void    AUnit::attack(int x, int y)
{
  this->_x = x;
  this->_y = y;
}

void    AUnit::move(int x, int y)
{
  this->_x = x;
  this->_y = y;
}

int	AUnit::getX() const
{
  return this->_x;
}

int	AUnit::getY() const
{
  return this->_y;
}

void	AUnit::setX(int x)
{
  this->_x = x;
}

void	AUnit::setY(int y)
{
  this->_y = y;
}

int	AUnit::getDam() const
{
  return this->_damages;
}

void	AUnit::setDam(int damages)
{
  this->_damages = damages;
}

void	AUnit::pos(void) const
{
  std::cout << "Position x : " << this->_x << " y : " << this->_y << " <(8<) <(8)> (>3)>" << std::endl;
}
