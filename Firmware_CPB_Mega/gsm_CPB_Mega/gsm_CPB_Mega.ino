#include <Sim800l.h>
Sim800l Sim800l;

#include <Crescer.h>

Tempora temp1;

String avalia = "";
int conta = 0;
int teste;

void setup()
{
  Serial.begin(9600);
  delay(1000);
  Serial3.begin(9600);
  
  comando ("AT");
  comando ("AT+CMGF=1");
  comando ("ATE0");
  delay(1500);
  comando ("AT+CNMI=1,2,0,0,0");
  delay(1000);
  temp1.defiSP(500);
  delay(8000);
}

void loop()
{
  String comp = "";
  if (Serial3.available() > 0) {
    
    String msggsm = "";
    while (Serial3.available() > 0)
    {
      char letra = Serial3.read();
      if (isAlphaNumeric(letra)) msggsm += letra;
    }
    int tam = msggsm.length();


    comp += msggsm[tam - 2];
    comp += msggsm[tam - 1];

    Serial.print("MSG1: ");
    Serial.println(msggsm);

    Serial.print("comp: ");
    Serial.println(comp);



    if (comp == "L1")  // compara mensagem recebida
    {
      digitalWrite(11, 0);
      Serial.println("Ligou1");
    }
    else if (comp == "D1")
    {
      digitalWrite(11, 1);
      Serial.println("Desligou1");
    }
    else if (comp == "L2")
    {
      digitalWrite(12, 0);
      Serial.println("ligou2");
    }
    else if (comp == "D2")
    {
      digitalWrite(12, 1);
      Serial.println("Desligou2");
    }
    
    delay(300);
  }

  int entrada = digitalRead(4);

  
  if (entrada == 0 or comp == "Le")  // envia mensagem
  {
    comando ("AT+CMGF=1");
    comando ("ATE0");
    comando ("AT+CNMI=1,2,0,0,0");

    Serial3.print("AT+CMGS=");
    Serial3.write(0x22);//aspa dupla
    Serial3.print("+5551999999999");
    Serial3.write(0x22);//aspa dupla
    Serial3.println();

    delay(1000);
    Serial3.print("Valor da entrada A0: ");
    Serial3.println(teste);
    Serial.println(teste);

    delay(2000);

    Serial3.write(0x1A);
    Serial3.write(0x0D);
    Serial3.write(0x0A);
    Serial.println("fim1");
    delay(2000);
    Serial.println("fim2");
  }

}
