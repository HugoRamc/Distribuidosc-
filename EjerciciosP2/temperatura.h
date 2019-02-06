#ifndef Temperatura_
#define Temperatura_
class Temperatura
{
private:
    float tempK;
    float tempC;
    float tempF;
public:
    Temperatura(float);
    void setTempKelvin();
    void setTempFahrenheit();
    void setTempCelsius();
};





#endif