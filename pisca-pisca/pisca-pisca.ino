// Código para LED pisca-pisca (e potenciômetro) com Arduino
// Link Tinkercad: https://www.tinkercad.com/things/9sgjF3WWXVK-pisca-pisca-gustavo-colombini?sharecode=0rzQxHRv67WA8HoVW5pnRN5F5P22oF-SgFiuZWOU7z4

void setup()
{
  pinMode(A5, INPUT); // Recebe input do potênciometro
  
  pinMode(13, OUTPUT); // LED vermelho
  pinMode(12, OUTPUT); // LED azul
  pinMode(11, OUTPUT); // LED amarelo

  digitalWrite(13, LOW); // Estado inicial do vermelho
  digitalWrite(12, HIGH); // Estado inicial do azul
  digitalWrite(11, LOW); // Estado inicial do amarelo
}

void blink(int pin) // Função de piscar
{
  if (digitalRead(pin) == HIGH)
  {
    digitalWrite(pin, LOW); // Se ligado, desligar
  } 
  else{
    digitalWrite(pin, HIGH); // Caso contrário, ligar
  }
}

void loop()
{
  delay(analogRead(A5)); // Delay baseado no valor do potenciômetro
  blink(11); // Pisca vermelho
  blink(12); // Pisca azul
  blink(13); // Pisca amarelo
}
