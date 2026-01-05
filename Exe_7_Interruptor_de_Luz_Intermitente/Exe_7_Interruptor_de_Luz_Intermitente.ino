// AUTOR...: MAKERHERO
// Aluno...: Adriano 
// Programa: Interruptor de Luz Intermitente
// Data....: 19/12/2025
 
//----------------Declara as variaveis do codigo----------------
 
int botao = 7;                         // Declara a variável botao e atribui o valor 7 a ela 
int led = 10;                          // Declara a variável led e atribui o valor 10 a ela 
bool estadoLed = LOW;                  // Declara a variável estadoLed e atribui o valor LOW a ela 
bool estadoBotao = LOW;                // Declara a variável estadoBotao e atribui o valor LOW a ela
 
//----------------Funcao executada uma vez na inicializacao do sistema----------------
 
void setup() {
 
  pinMode(botao, INPUT_PULLUP);        // Configura a porta 7 (valor da variável botao) como entrada com resistor de Pull-Up integrado
  
  pinMode(led, OUTPUT);                // Configura a porta 10 (valor da variável led) como saida
 
}
 
//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() {
 
  estadoBotao = digitalRead(botao);    // Le o estado do botao (HIGH ou LOW) e atribui o valor a variavel estadoBotao
 
  estadoLed = !estadoBotao;             // Atribui o valor oposto ao da variavel estadoBotao a variavel estadoLed
 
  digitalWrite(led, estadoLed);        // Apaga ou acende o LED de acordo com o valor da variavel estadoLed (HIGH faz o LED acender e LOW faz o LED apagar)
 
  delay(10);                           // Aguarda 10 milissegundos
 
}