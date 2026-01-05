// Código: Brilho Oscilante
// Autor.: Makerhero - Aluno Adriano
// Data..: 14/12/2025

//-----------Declaração de variáveis-------------------------------
int pinoLed = 10;             // Declara a variável pinoLed e atribui o valor 11 a ela
int incremento = 5;           // Declara a variável incremento e atribui o valor 5 a ela
int decremento = 5;           // Declara a variável decremento e atribui o valor 5 a ela

//-------------------Função executada uma vez na inicialização do sistema------------------
void setup() {
  pinMode(pinoLed, OUTPUT);    // Configura a porta 11 (valor da variável pinoLed) como saida
  
}

//-------------------Funcao executada repetidamente enquanto o sistema estiver ligado------
void loop() {

  //------------Aumenta o brilho usando o laco for ---------------
  for(byte valor = 0; valor < 255; valor+=incremento){   // Repete os comandos dentro das chaves 255 vezes

  analogWrite(pinoLed, valor);                            //Controla o brilho do pino do Led
    delay(30);                                            //aguarda 30 milissegundos

  }
 
   //------------Diminui o brilho usando o laco for ---------------
  for(byte valor = 255; valor < 0; valor-=decremento){   // Repete os comandos dentro das chaves 255 vezes

  analogWrite(pinoLed, valor);                            //Controla o brilho do pino do Led
    delay(30);                                            //aguarda 30 milissegundos

  }
  
}
