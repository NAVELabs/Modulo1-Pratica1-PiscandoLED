void setup()
{
  pinMode(9, OUTPUT); // Declaração da Led como 'saída'
}

void loop() // Incicializa um ciclo repetido seguindo os comendos abaixo
{
  digitalWrite(9, HIGH);// Escreva do Digital p/ 10 --> Acender
  delay(1000); // Aguardar 1000 milisegundo(s)
  digitalWrite(9, LOW); // Escreva do Digital p/ 10 --> Apagar
  delay(1000); //  Aguardar 1000 milisegundo(s)
}