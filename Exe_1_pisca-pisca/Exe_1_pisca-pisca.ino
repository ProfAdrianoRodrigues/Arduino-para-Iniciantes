// Código: Pisca Pisca
// Autor.: Makerhero - Aluno Adriano
// Data..: 14/12/2025

//-------------------Função executada uma vez na inicialização do sistema------------------
void setup() {
  pinMode(11, OUTPUT);    //Define a porta 11 como saída
  pinMode(10, OUTPUT);    //Define a porta 10 como saída
}

//-------------------Função exexutada repetidamente enquanto o sistema estiver ligado------
void loop() {
  digitalWrite(11, HIGH); //Acende o Led
    delay(1000);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  digitalWrite(11, LOW);  //Apaga o Led
    delay(1000);          //aguarda o intevalo de tempo entre parenteses em milissegundos

//-------inserindo o segundo led de cor direrente do exercício
 digitalWrite(10, HIGH); //Acende o Led
    delay(1000);          //aguarda o intevalo de tempo entre parenteses em milissegundos

  digitalWrite(10, LOW);  //Apaga o Led
    delay(1000);          //aguarda o intevalo de tempo entre parenteses em milissegundos


}
