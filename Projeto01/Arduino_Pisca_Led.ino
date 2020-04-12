//Projeto 01 arduino pisca led
//Por Tuane Paixão - www.lojainventor.com
 

void setup() {                    // A função setup executa quando apertar o botão reset ou ligar a placa
pinMode(5, OUTPUT);               // Inicializa o pino digital 5 como uma saída
}
  
void loop() {                     // A função loop executa a funçao repetidamente
digitalWrite(5, HIGH); // Liga o LED
delay(5000); // Espera 5 segundos
digitalWrite(5, LOW); // Desliga o LED
delay(5000); // Espera 5 segundos
}
