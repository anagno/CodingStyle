/*
Copyright (c) 2013, Anagnostopoulos Vasilis-Thanos, 
Post-Graduate Student in University of Piraeus. 
All rights reserved.

Redistribution and use in source and binary forms, 
with or without modification,
are permitted provided that the following conditions are met:
  ...
*/

#ifndef TEST_H_
#define TEST_H_

#define SOME_MACRO_       // all uppercase ending with 
                          // trailing underscore

typedef double SomeType;  // CamelCase, starting capital

/*
This is a class that ...
*/
class SomeClass 
{                             // camelcase, starting capital
  public:
    void method();
    Real anotherMethod(
	Real x,               // camelcase, starting lowercase
        Real y) const;
    void setMember(Real);     // setter, leading "set"

  private:
    //Some comment describing the variables
    Real member_;             // all lowercase with
                              // underscore between the words

    Integer another_member_;  // trailing underscore
};

struct SomeStruct 
{
  Real foo_foo;                // struct members:
  Integer bar;                 // no trailing underscore
};

/*
This is a function that ...
*/
Size 
someFunction(
  Real parameter,             // one parameter per line,
  Real another_parameter)     // camelCase, starting lowercase
{    
  Real local_variable = 0.0;
  if (condition)
  {                                   // brackets here...
      local_variable += 3.14159;
  } 
  else  
  {                                   // ...here...
      local_variable -= 2.71828;
  }                                   // ...and here.
  return 42;
}

#endif // TEST_H_
