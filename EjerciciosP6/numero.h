#ifndef Numero_
#define Numero_
class Numero
{
private:
    bool primo = false;
    int num;
public:
    Numero(int);
    void setNoPrimo();
    int getNum();
    bool isPrimo();
    
};
#endif

