//
// Hatchery.hpp for hatchery in /home/exam/rendu/ex2
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jan 20 17:41:53 2017 exam user
// Last update Fri Jan 20 17:57:27 2017 exam user
//

#ifndef HATCHERY_HPP_
#define HATCHERY_HPP_

#include <iostream>
#include "AUnit.hpp"

class Hatchery
{
public:
  template<typename X>
  static AUnit*	create() {
    AUnit* monster = new X();
    return monster;
  }
};

#endif
