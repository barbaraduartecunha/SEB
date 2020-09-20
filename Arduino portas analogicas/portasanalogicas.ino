//Alunas: Ana Flávia Oliveira Notário 11521EBI023 e Barbara Duarte Cunha 11521EBI010

//Software deverá ser capaz de ler a tensão na entrada analógica A0, na qual está ligado o potenciômetro, e acionar três LEDs de acordo com faixas diferentes de tensão;
// Quando a chave estiver na posição aberta os LEDs deverão permanecer apagados;
//A a tensão aplicada na entrada analógica deverá ser apresentada na tela do Serial Monitor.

// Definir dos pinos do arduino de acordo com o roteiro 3
# define  pot              A0   // Pino da entrada analógica do potenciômetro
# define  chave            8    // Pino com a saída analógica da chave 
# define  ledRED           11   // Saída analógica onde o LED Vermelho esta conectado
# define  ledGRE           12   // Saída analógica onde o LED Verde esta conectado
# define  ledYEL           13   // Saída analógica onde o LED Amarelo esta conectado

int val = 0;        // variavel de leitura do potenciometro


// Configurar os pinos da placa como sendo saida ou entrada e inicializar a comunicacao serial:
 
void setup()
{
  pinMode(chave, INPUT_PULLUP);
  pinMode(ledRED, OUTPUT);
  pinMode(ledGRE, OUTPUT);
  pinMode(ledGRE, OUTPUT);
  Serial.begin(9600);  //inicia comucação serial
}


///Executar os comandos de leitura e prints da tela

void  loop () {
  
  val = map(analogRead(pot), 0, 1023, 0, 500);  // mapeia o resultado da entrada analogica dentro do intervalo de 0 a 500 (arduino uno)
  
  if (digitalRead(chave) == HIGH){  //colocar as faixas de nivel alto ou baixo de acordo com a tensão dada no roteiro
    digitalWrite(ledRED, LOW);
    digitalWrite(ledGRE, LOW);
    digitalWrite(ledGRE, LOW);
  }
  
  else {
    if(val < 2){
    digitalWrite(ledRED, LOW);
    digitalWrite(ledGRE, HIGH);
    digitalWrite(ledYEL, LOW);
    }

  else if (val >= 2 && val <= 4){
    digitalWrite(ledRED, LOW);
    digitalWrite(ledGRE, LOW);
    digitalWrite(ledYEL, HIGH);
   }
  else if(val >4 ){
    digitalWrite(ledRED, HIGH);
    digitalWrite(ledGRE, LOW);
    digitalWrite(ledYEL, LOW);
   }
delay(300);  //aguarda 3s para mostrar no serial monitor
}
  Serial. print ( " A tensão na entrada A0: " ); //mostra no serial monitor
  Serial.print(val);
}
