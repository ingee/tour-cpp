class Vector {
private:
  double* elem;
  int sz;

public:
  explicit Vector(int s);
  ~Vector() { delete[] elem; }

  //Vector(std::initializer_list<double>);

  Vector(const Vector& a);            //copy constructor
  Vector& operator=(const Vector& a); //copy assignmemt

  Vector(Vector&& a);                 //move constructor
  Vector& operator=(Vector&& a);      //move assignment

  double& operator[](int i);
  const double& operator[](int i) const;

  int size() const;
};
