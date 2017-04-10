//
// Overlord.hpp for ovelord in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 16:20:29 2017 exam user
// Last update Fri Jan 20 16:45:06 2017 exam user
//

#ifndef OVERLORD_HPP_
#define OVERLORD_HPP_

#include "AUnit.hpp"
#include <iostream>

class Overlord : public AUnit
{
public:
  Overlord();
  explicit Overlord(const AUnit& copy);
  ~Overlord();
  Overlord& operator=(const AUnit& copy);
  void	attack(int x, int y);
  void	move(int x, int y);
};

#endif
