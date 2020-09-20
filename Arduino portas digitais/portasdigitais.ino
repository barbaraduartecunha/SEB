const int LED_VERMELHO = 11;  
const int LED_AMARELO = 12;   // atrbuindo variável do tipo inteira e inicializando nas portas digitais do arduino.
const int LED_VERDE = 13;
const int chave = 8;

void setup() {   //A void setup() é uma função que é executada apenas quando se inicia o programa e serve para configurar os pinos da placa e estabecer a comunicação serial com um computador.
  pinMode(chave, INPUT_PULLUP);  //configurar um pino como sendo saida ou entrada //INPUT_PULLUP: saída e entrada com pull-up ativado.
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}
void loop() { //é a função que executa os comandos.

  if(digitalRead(chave)){ // serve para ler em um pino digital 0 ou 1(0V ou 5V).
    
    digitalWrite(LED_VERMELHO, HIGH);  //serve para escrever em um pino digital 0 ou 1(0V ou 5V).
    delay(3000); // aguarda 3s
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    delay(1000);// aguarda 1s
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    delay(2000);//aguarda 2s
    digitalWrite(LED_VERDE, LOW);
    
  }
   else{
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, LOW);

    digitalWrite(LED_AMARELO, HIGH);
    delay(500);
    digitalWrite(LED_AMARELO, LOW);
    delay(500);

  }
}
