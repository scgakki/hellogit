#include <iostream>
#include "helloclass.h"
using namespace std;

helloclass::helloclass()
{
   cout<< "I am being created.";
}

void helloclass::sayhello()
{
  cout<< "Hello Class!";
}

helloclass::~helloclass()
{
  cout<< "I am being destroyed.";
}
