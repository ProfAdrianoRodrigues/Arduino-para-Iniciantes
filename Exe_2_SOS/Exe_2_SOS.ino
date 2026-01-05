// Código: Pisca - S.O.S
// Autor.: Makerhero - Aluno Adriano
// Data..: 14/12/2025

//-----------Declaração de variáveis-------------------------------
int pinoLed = 11;             // Declara a variável pinoLed e atribui o valor 11 a ela

//-------------------Função executada uma vez na inicialização do sistema------------------
void setup() {
  pinMode(pinoLed, OUTPUT);    // Configura a porta 11 (valor da variável pinoLed) como saida
  
}

//-------------------Função exexutada repetidamente enquanto o sistema estiver ligado------
void loop() {

  //------------S(...) três pontos ---------------
  for(int x=0; x<3; x++){   // Repete os comandos dentro das chaves 3 vezes

  digitalWrite(pinoLed, HIGH); //Acende o Led
    delay(150);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  digitalWrite(pinoLed, LOW);  //Apaga o Led
    delay(150);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  }
  delay(200);

   //------------O(---) três linhas ---------------
  for(int x=0; x<3; x++){   // Repete os comandos dentro das chaves 3 vezes

  digitalWrite(pinoLed, HIGH); //Acende o Led
    delay(450);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  digitalWrite(pinoLed, LOW);  //Apaga o Led
    delay(450);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  }
  delay(200);

//------------S(...) três pontos ---------------
  for(int x=0; x<3; x++){   // Repete os comandos dentro das chaves 3 vezes

  digitalWrite(pinoLed, HIGH); //Acende o Led
    delay(150);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  digitalWrite(pinoLed, LOW);  //Apaga o Led
    delay(150);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  }
  delay(5000);

}
