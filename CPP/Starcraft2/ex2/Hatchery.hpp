//
// Hatchery.hpp for hatchery in /home/exam/rendu/ex2
//
// Made by exam user
// Login   <exam@epitech.net>
//
// Started on  Fri Jan 20 17:41:53 2017 exam user
// Last update Thu Apr 27 11:04:38 2017 guillaume2.roux
//

#ifndef HATCHERY_HPP_
#define HATCHERY_HPP_

#include <iostream>
#include "AUnit.hpp"

class Hatchery
{
public:
  template<typename X>
  static AUnit*	create()
  {
    AUnit* monster = new X();
    return monster;
  }
};

#endif
