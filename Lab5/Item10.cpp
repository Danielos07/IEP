class Integer 
{ 
  int n; 
 
public: 
  Integer(int n) : n{n} { } 
 
  Integer& operator=(const Integer& x) 
  { 
    this->n = x.n; 
    return *this; 
  } 
}; 