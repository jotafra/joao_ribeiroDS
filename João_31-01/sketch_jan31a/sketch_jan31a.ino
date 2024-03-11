float sal_atual, novo_sal;

void setup()

{  // começo setup

  sal_atual = 1200;  //Verificação do valor do salário

  Serial.begin(9600);

  if (sal_atual <= 500 && sal_atual > 0) 
  {
    novo_sal = sal_atual * 1.2;
  } 
  
  else if (sal_atual > 500) 
  {
    novo_sal = sal_atual * 1.1;
  } 

  else 
  {
    novo_sal = -1;
  }

}  // fim setup

void loop()

{  // começo void

  if (novo_sal == 0) 
  {
    Serial.println(" Digite um salário válido!!! ");
  }

  else
  {
    Serial.print("Novo Salário: ");
    Serial.println(novo_sal);
    Serial.println("----------------------------");
  }

  delay(1000);

}  // fim void
