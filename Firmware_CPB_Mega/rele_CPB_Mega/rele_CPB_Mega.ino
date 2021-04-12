void setup()
{
  pinMode(31, OUTPUT);     // declaração de um pino de saída Relé 1
  pinMode(32, OUTPUT);     // declaração de um pino de saída Relé 2
  pinMode(33, OUTPUT);     // declaração de um pino de saída Relé 3
  pinMode(34, OUTPUT);     // declaração de um pino de saída Relé 4
  pinMode(35, OUTPUT);     // declaração de um pino de saída Relé 5
  pinMode(36, OUTPUT);     // declaração de um pino de saída Relé 6
  pinMode(37, OUTPUT);     // declaração de um pino de saída Relé 7
}

void loop()
{
  digitalWrite(31, HIGH);    // liga a porta 31     (relé 1 da CPB)
  delay(300);
  digitalWrite(31, LOW);     // desliga a porta 31  (relé 1 da CPB)

  digitalWrite(32, HIGH);    // liga a porta 32     (relé 2 da CPB)
  delay(300);
  digitalWrite(32, LOW);     // desliga a porta 32  (relé 2 da CPB)

  digitalWrite(33, HIGH);    // liga a porta 33     (relé 3 da CPB)
  delay(300);
  digitalWrite(33, LOW);     // desliga a porta 33  (relé 3 da CPB)

  digitalWrite(34, HIGH);    // liga a porta 34     (relé 4 da CPB)
  delay(300);
  digitalWrite(34, LOW);     // desliga a porta 34  (relé 4 da CPB)

  digitalWrite(35, HIGH);    // liga a porta 35     (relé 5 da CPB)
  delay(300);
  digitalWrite(35, LOW);     // desliga a porta 35  (relé 5 da CPB)

  digitalWrite(36, HIGH);    // liga a porta 36     (relé 6 da CPB)
  delay(300);
  digitalWrite(36, LOW);     // desliga a porta 36  (relé 6 da CPB)
  
  digitalWrite(37, HIGH);    // liga a porta 37     (relé 7 da CPB)
  delay(300);
  digitalWrite(37, LOW);     // desliga a porta 37  (relé 7 da CPB)
  
}
