void setup() {
  pinMode(22, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 1
  pinMode(23, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 2
  pinMode(24, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 1
  pinMode(25, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 4
  pinMode(26, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 5
  pinMode(27, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 6
  pinMode(28, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 7
  pinMode(29, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 8
  pinMode(30, INPUT_PULLUP);      // declaração de um pino de entrada NPN OPTOACOPLADA 9
  
  pinMode(38, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 10
  pinMode(39, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 11
  pinMode(40, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 12
  pinMode(41, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 13
  pinMode(42, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 14
  pinMode(43, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 15
  pinMode(44, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 16
  pinMode(45, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 17
  pinMode(46, OUTPUT);            // declaração de um pino de saída OPTOACOPLADA 18
}

void loop() {
  
  digitalRead(22);        // leitura da entrada do opto 22
  digitalRead(23);        // leitura da entrada do opto 23
  digitalRead(24);        // leitura da entrada do opto 24
  digitalRead(25);        // leitura da entrada do opto 25

  digitalWrite(38, HIGH);        // Exemplo para ligar o opto 10 na saída 38
  delay(300);
  digitalWrite(38, LOW);         // Exemplo para desligar o opto 10 na saída 38

  digitalWrite(39, HIGH);        // Exemplo para ligar o opto 11 na saída 39
  delay(300);
  digitalWrite(39, LOW);         // Exemplo para desligar o opto 11 na saída 39

  digitalWrite(40, HIGH);        // Exemplo para ligar o opto 12 na saída 40
  delay(300);
  digitalWrite(40, LOW);         // Exemplo para desligar o opto 12 na saída 40

}
