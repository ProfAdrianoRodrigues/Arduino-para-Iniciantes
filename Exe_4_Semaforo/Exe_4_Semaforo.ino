// Código: Semáforo
// Autor.: Makerhero - Aluno Adriano
// Data..: 14/12/2025

//-----------Declaração de variáveis-------------------------------
int carroVerde = 9;                         // Declara a variável carroVerde e atribui o valor 9 a ela
 
int carroAmarelo = 10;                      // Declara a variável carroAmarelo e atribui o valor 10 a ela
 
int carroVermelho = 11;                     // Declara a variável carroVermelho e atribui o valor 11 a ela

//-------------------Função executada uma vez na inicialização do sistema------------------
void setup() {
  pinMode(carroVerde, OUTPUT);              // Configura a porta 9 (valor da variavel carroVerde) como saida
 
  pinMode(carroAmarelo, OUTPUT);            // Configura a porta 10 (valor da variavel carroAmarelo) como saida
 
  pinMode(carroVermelho, OUTPUT);           // Configura a porta 11 (valor da variavel carroVermelho) como saida

  // Coloca o semaforo na posição inicial.
 
  digitalWrite(carroVerde, LOW);            // Apaga o LED Verde do semaforo
 
  digitalWrite(carroAmarelo, LOW);          // Apaga o LED Amarelo do semaforo
 
  digitalWrite(carroVermelho, HIGH);        // Acende o LED Vermelho do semaforo
  
}

//-------------------Funcao executada repetidamente enquanto o sistema estiver ligado------
void loop() {

  digitalWrite(carroVerde, HIGH);           // Acende o LED Verde do semaforo 
 
  digitalWrite(carroVermelho, LOW);         // Apaga o LED Vermelho do semaforo
 
  delay(5000);                              // Aguarda 5000 milissegundos (5 segundos)
 
  digitalWrite(carroVerde, LOW);            // Apaga o LED Verde do semaforo
 
  digitalWrite(carroAmarelo, HIGH);         // Acende o LED Amarelo do semaforo
 
  delay(3000);                              // Aguarda 3000 milissegundos (3 segundos)
 
  digitalWrite(carroAmarelo, LOW);          // Apaga o LED Amarelo do semaforo
 
  digitalWrite(carroVermelho, HIGH);        // Acende o LED Vermelho do semaforo
 
  delay(5000);                              // Aguarda 5000 milissegundos (5 segundos)
  
}
