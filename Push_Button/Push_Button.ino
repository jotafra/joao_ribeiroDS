//buzzer
#define pinoBuzzer 2
// leds
#define pinoDo 3
#define pinoRe 4

byte doh, re = 0;

void setup() 
{

pinMode(pinoBuzzer, OUTPUT);

pinMode(pinoDo, INPUT);
pinMode(pinoRe, INPUT);

Serial.begin(9600);
delay(1000);

}

void loop() 
{
doh = digitalRead(pinoDo);
re = digitalRead(pinoRe)


}