class Dani { };
class Moica {
public:
  Moica()                : p_(new Dani())      { }
  Moica(const Moica& f)   : p_(new Dani(*f.p_)) { }
 ~Moica()                { delete p_; }
 Moica& Moica::operator= (const Moica& f)
{
  *p_ = *f.p_;
  return *this;
}
    }
private:
  Dani* p_;
};