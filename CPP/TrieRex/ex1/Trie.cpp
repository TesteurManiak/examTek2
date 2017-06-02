//
// Trie.cpp for trie in /home/exam/rendu/ex0
// 
// Made by exam user
// Login   <exam@epitech.net>
// 
// Started on  Fri Jun  2 14:12:19 2017 exam user
// Last update Fri Jun  2 16:36:16 2017 exam user
//

#include "Trie.hpp"

Trie::Trie()
{
  TrieNode	*root = new TrieNode();

  root->data = '\0';
  root->weight = 0;
  root->children = NULL;
  this->node = root;
}

Trie::Trie(Trie const &cpy)
{
  (void)cpy;
}

Trie::~Trie()
{}

Trie	Trie::operator=(Trie const &cpy)
{
  (void)cpy;
  return *this;
}

void	Trie::addWord(std::string const& word)
{
  int	i = 0;
  TrieNode	*child;

  if (this->node->children == NULL)
    {
      this->node->children = new TrieNode*();
      *(this->node->children) = new TrieNode();
    }
  child = *(this->node->children);
  while (word[i])
    {
      if (child->data)
	child->weight++;
      else
	{
	  child->data = word[i];
	  i++;
	}
      if (child->children == NULL)
	{
	  child->children = new TrieNode*();
	  *(child->children) = new TrieNode();
	}
      child = *(child->children);
    }
  child = NULL;
}

void	Trie::removeWord(std::string const& word)
{
  int	i = 0;
  int	len;
  TrieNode	*child;

  child = *(this->node->children);
  while (child != NULL)
    {
      if (!word[i])
	break;
      if (child->data == word[i])
	{
	  child->data = '\0';
	  i++;
	}
      if (child->children == NULL)
	child = NULL;
      else
	child = *(child->children);
    }
  for (len = 0; word[len]; len++);
  if (len != i)
    std::cerr << "Couldn't find the word" << std::endl;
}

void	operator<<(Trie &obj, std::string const& word)
{
  obj.addWord(word);
}

void	operator>>(Trie &obj, std::string const& word)
{
  obj.removeWord(word);
}

std::ostream&	operator<<(std::ostream & os, TrieNode const &obj)
{
  return os << "('" << obj.data << "', " << obj.weight << ")";
}
