// Autor..: Makehero - Aluno Adriano
// Projeto: Luzes Coloridas
// Data...: 18/12/2025

//----------------Declara as variaveis do codigo----------------
 
int led_R = 7;                    // Declara a variável led_R e atribui o valor 7 a ela (R)
int led_G = 6;                    // Declara a variável led_G e atribui o valor 6 a ela (G)
int led_B = 5;                    // Declara a variável led_B e atribui o valor 5 a ela (B)

//----------------Declaracao da funcao que acende a cor Vermelha do LED----------------
void acendeVermelho() {
  digitalWrite(led_R, LOW);       // Acende a cor Vermelha do LED
  digitalWrite(led_G, HIGH);      // Apaga a cor Verde do LED
  digitalWrite(led_B, HIGH);      // Apaga a cor Azul do LED
}

//----------------Declaracao da funcao que acende a cor Verde do LED----------------
 
void acendeVerde() { 
  digitalWrite(led_R, HIGH);     // Apaga a cor Vermelha do LED 
  digitalWrite(led_G, LOW);      // Acende a cor Verde do LED 
  digitalWrite(led_B, HIGH);     // Apaga a cor Azul do LED   
}

//----------------Declaracao da funcao que acende a cor Azul do LED----------------
 
void acendeAzul() { 
  digitalWrite(led_R, HIGH);      // Apaga a cor Vermelha do LED 
  digitalWrite(led_G, HIGH);      // Apaga a cor Verde do LED 
  digitalWrite(led_B, LOW);       // Acende a cor Azul do LED 
}

//----------------Declaracao da funcao que apaga todas as cores do LED----------------
 
void apagaLed() { 
  digitalWrite(led_R, HIGH);      // Apaga a cor Vermelha do LED 
  digitalWrite(led_G, HIGH);      // Apaga a cor Verde do LED 
  digitalWrite(led_B, HIGH);      // Apaga a cor Azul do LED 
}

//----------------Funcao executada uma vez na inicializacao do sistema----------------
 
void setup() { 
  pinMode(led_R, OUTPUT);         // Configura a porta 7 (valor da variável led_R) como saida 
  pinMode(led_G, OUTPUT);         // Configura a porta 6 (valor da variável led_G) como saida 
  pinMode(led_B, OUTPUT);         // Configura a porta 5 (valor da variável led_B) como saida 
  apagaLed();                     // Chama a funcao de apagar todas as cores do LED
 
}

//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() { 
  acendeVermelho();               // Chama a funcao de acender a cor Vermelha do LED e apagar as demais
  delay(1000);                    // Aguarda 1000 milissegundos (1 segundo)
  acendeVerde();                  // Chama a funcao de acender a cor Verde do LED e apagar as demais
  delay(1000);                    // Aguarda 1000 milissegundos (1 segundo)
  acendeAzul();                   // Chama a funcao de acender a cor Azul do LED e apagar as demais
  delay(1000);                    // Aguarda 1000 milissegundos (1 segundo)
  apagaLed();                     // Chama a funcao de apagar todas as cores do LED
  delay(1000);                    // Aguarda 1000 milissegundos (1 segundo)
 
}
