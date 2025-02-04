/*

  Programa do Metrônomo usando arduino uno ou nano.

  Autor: d4nkali
  Data: 04/02/2025

*/

// Pinos
#define PINO_BUZZER 8
#define PINO_LED 9
#define PINO_POTENCIOMETRO A0

// Variáveis
int bpm = 120; // Variavel para armazenar o BPM e ja define para 120 o BPM inicial
unsigned long ultimoToqueBeat = 0;
int intervaloBeat; // Intervalo em milissegundos

void setup() {

  pinMode(PINO_BUZZER, OUTPUT);
  pinMode(PINO_LED, OUTPUT);
  Serial.begin(9600);

  atualizarIntervalo();

}

void loop() {

  //* Ler potenciômetro e armazena em uma variavel
  int valPotenciometro = analogRead(PINO_POTENCIOMETRO);
  bpm = map(valPotenciometro, 0, 1023, 40, 240); // Mapear valor para BPM (entre 40 a 240)
  atualizarIntervalo();

  // Emitir som e luz no toque do BPM
  unsigned long toqueAtual = millis();

  if (toqueAtual - ultimoToqueBeat >= intervaloBeat) {
    ultimoToqueBeat = toqueAtual;

    tone(PINO_BUZZER, 1000, 100); // Toca no buzzer por 100ms
    digitalWrite(PINO_LED, HIGH); // Liga led
    delay(100); // intervalo do som e do led
    digitalWrite(PINO_LED, LOW); // Desliga led

  }

  // Exibir o BPM no Serial Monitor
  Serial.print("BPM: ");
  Serial.println(bpm);

}

void atualizarIntervalo() { //* Função para atualizar o intervalo do beat do metrônomo

  intervaloBeat = 60000 / bpm; // 60 segundos / BPM

}

// FIM!
