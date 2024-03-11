//buzzer
#define pinoBuzzer 2

// leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSol 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte doh, re, mi, fa, sol, la, si, doh2 = 0;

int v1 = 500;
int v2 = 800;

void setup() 
{

pinMode(pinoBuzzer, OUTPUT);

pinMode(pinoDo, INPUT);
pinMode(pinoRe, INPUT);
pinMode(pinoMi, INPUT);
pinMode(pinoFa, INPUT);
pinMode(pinoSol, INPUT);
pinMode(pinoLa, INPUT);
pinMode(pinoSi, INPUT);
pinMode(pinoDo2, INPUT);

Serial.begin(9600);
delay(1000);

}

void loop() 
{

doh = digitalRead(pinoDo);
re = digitalRead(pinoRe);
mi = digitalRead(pinoMi);
fa = digitalRead(pinoFa);
sol = digitalRead(pinoSol);
la = digitalRead(pinoLa);
si = digitalRead(pinoSi);
doh2 = digitalRead(pinoDo2);

//verificando qual nota foi acionada

if (doh == 1)
{
  tone(pinoBuzzer, 523);
}

else if(re == 1)
{
  tone(pinoBuzzer, 587);
}

else if(mi == 1)
{
  tone(pinoBuzzer, 659);
}

else if(fa == 1)
{
  tone(pinoBuzzer, 698);
}

else if(sol == 1)
{
  tone(pinoBuzzer, 415);
}

else if(la == 1)
{
  tone(pinoBuzzer, 440);
}

else if(si == 1)
{
  tone(pinoBuzzer, 494);
}

else if(doh2 == 1)
{
  tone(pinoBuzzer, 594);
}


else
{ 
  noTone(pinoBuzzer);
}

delay(50);

}

// 1° Parte

tone(pinoBuzzer, 523); //do 
delay(v1);
tone(pinoBuzzer, 0); //0 
tone(pinoBuzzer, 587); //re
delay(v1);
tone(pinoBuzzer, 0); //0 
tone(pinoBuzzer, 659); //mi
delay(v1);
tone(pinoBuzzer, 0); //0
tone(pinoBuzzer, 698); //fa
delay(v2);
tone(pinoBuzzer, 0); //0
delay(v1);

tone(pinoBuzzer, 698); //fa
delay(v1);
tone(pinoBuzzer, 0); //0
tone(pinoBuzzer, 698); //fa
delay(v2);
tone(pinoBuzzer, 0); //0
delay(v1);

// 2° parte 

tone(pinoBuzzer, 523); //do 
delay(v1);
tone(pinoBuzzer, 0); //0
tone(pinoBuzzer, 587); //re
delay(v1);
tone(pinoBuzzer, 0); //0
tone(pinoBuzzer, 523); //do 
delay(v1);
tone(pinoBuzzer, 0); //0
tone(pinoBuzzer, 587); //re
delay(v2);
tone(pinoBuzzer, 0); //0
delay(v1);

// 3° parte 

tone(pinoBuzzer, 587); //re
tone(pinoBuzzer, 587); //re
delay(1000);
tone(pinoBuzzer, 523); //do 
tone(pinoBuzzer, 415); //Sol
tone(pinoBuzzer, 698); //fa
tone(pinoBuzzer, 659); //mi
delay(1000);
tone(pinoBuzzer, 659); //mi
tone(pinoBuzzer, 659); //mi