
#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_VERMELHO 4
#define LED_AZUL 5

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500

void setup()
{
    Serial.begin(9600);

    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);

}

void loop()
{

    Serial.println(LED_VERMELHO);

    piscaLed(LED_VERDE);
    piscaLed(LED_AMARELO);
    piscaLed(LED_VERMELHO);
    piscaLed(LED_AZUL);

}

void piscaLed(int portaLed)
{

    digitalWrite(portaLed, HIGH);
    delay(UM_SEGUNDO);

    digitalWrite(portaLed, LOW);
    delay(MEIO_SEGUNDO);

}