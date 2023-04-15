int ldr = 26;      //Atribui A0 a variável ldr
int valorldr = 0;  //Declara a variável valorldr como inteiro

void setup() {
  // Define o pino do Buzzer como Saida
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  valorldr = analogRead(ldr);              //Lê o valor do sensor ldr e armazena na variável valorldr

  if (valorldr >= 4000) {
    valorldr = 4000;
  }

  int percentualDeLuz = 0;
  percentualDeLuz = (100 * valorldr) / 4000;

  Serial.print("Valor lido pelo LDR = ");  //Imprime na serial a mensagem Valor lido pelo LDR
  Serial.println(percentualDeLuz);                //Imprime na serial os dados de valorldr
  delay(1000);
}
