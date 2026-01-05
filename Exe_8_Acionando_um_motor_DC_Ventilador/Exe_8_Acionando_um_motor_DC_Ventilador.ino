// AUTOR: MAKERHERO
// Aluno: Adriano
// Data..: 26/12/2025
// Programa: Acionando um motor DC (Ventilador)
 
//----------------Declara as variaveis do codigo----------------
 
int botao = 7;                                   // Declara a variável botao e atribui o valor 7 a ela
 
 
 
int motor = 9;                                   // Declara a variável motor e atribui o valor 9 a ela
 
//----------------Funcao executada uma vez na inicializacao do sistema----------------
 
void setup() {
 
  pinMode(botao, INPUT_PULLUP);                  // Configura a porta 7 (valor da variável botao) como saida
 
  pinMode(motor, OUTPUT);                        // Configura a porta 9 (valor da variável motor) como saida
 
}
  
 
//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() {
 
  if(digitalRead(botao) == LOW) {                // Se o botao estiver apertado (leitura igual a LOW), executa as instrucoes entre chaves
 
   
 
    digitalWrite(motor,HIGH);                    // Aciona o motor DC
 
     
 
    delay(10);                                   // Aguarda 10 milissegundos
 
  } else {                                       // Caso contrário (botao nao apertado), executa as instrucoes entre chaves
 
    digitalWrite(motor,LOW);                     // Desliga o motor DC
 
  }
 
  delay(100);                                    // Aguarda 100 milissegundos
 
}