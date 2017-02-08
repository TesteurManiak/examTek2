//
// AUnit.hpp for aunit in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:07:26 2017 exam user
// Last update Fri Jan 20 17:08:33 2017 exam user
//

#ifndef AUNIT_HPP_
#define AUNIT_HPP_

#include <iostream>

class	AUnit
{
public:
  virtual ~AUnit();
  virtual void	attack(int x, int y);
  virtual void	move(int x, int y);
  int	getX() const;
  int	getY() const;
  void	setX(int x);
  void	setY(int y);
  int	getDam(void) const;
  void	setDam(int damages);
  void	pos(void) const;
private:
  int	_x;
  int	_y;
  int	_damages;
};

std::ostream&	operator<<(std::ostream& os, const AUnit& obj);

#endif
