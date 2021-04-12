void comando(String comand)
{
conta++;
avalia = "";
Serial3.println(comand);
while(Serial3.available()<=0) 
{
  Serial.print("preso passo ");
  Serial.println(conta);
  delay(200);
}

while(Serial3.available()>0)
{
  char letra = Serial3.read();
  if (isAlphaNumeric(letra)) avalia += letra;
}

if (avalia=="OK") Serial.print("passo"), Serial.println(conta);
else Serial.print("avalia: "), Serial.println(avalia);
delay(200); 
}
