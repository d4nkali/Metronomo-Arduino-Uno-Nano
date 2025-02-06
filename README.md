# Metrônomo Arduino Uno/Nano

Metrônomo simples usando Arduíno Uno/Nano.

## Funcionalidades

- Ajuste contínuo de BPM entre 40 e 240 utilizando potenciômetro.

- Sinalização sonora com buzzer.

- Indicação visual com LED.

- Exibição do BPM em tempo real no Serial Monitor.

## Componentes Necessários

- 1 Arduino Nano (ou Uno)

- 1 Buzzer

- 1 LED (opcional)

- 1 Resistor de 220Ω (para o LED)

- 1 Potenciômetro (10 kΩ recomendado)

- Protoboard e jumpers

## Localização dos pinos no Arduino:

<img src="./img/Metronomo Uno.png" alt="Imagem da Mini Estação Meteorológica com Arduino Uno" width="300"/>

    Alimentação +: VIN
    Alimentação -: GND
    Alimentação UNO: Conector

    Potenciômetro: A0
    Buzzer: D8
    LED: D13 ou Integrado a placa

## Instalação e Uso

1. Certifique-se de ter a *Arduino IDE* instalada e conecte o *Arduino* ao computador.

2. Clone esse repositório em seu computador.

3. Abra o código do projeto (`Metronomo_Uno.ino`).

4. Configure a IDE para:

    - Placa: Arduino Nano ou Arduino Uno

    - Porta: Porta correta onde o Arduino está conectado

5. Clique em Upload para gravar o código na placa.

6. Abra o Serial Monitor para visualizar o BPM em tempo real.

## Estrutura do Código

### Variáveis Principais:

- `bpm`: Armazena o valor atual de BPM (inicialmente 120).

- `ultimoToqueBeat`: Guarda o tempo do último toque gerado.

- `intervaloBeat`: Armazena o intervalo entre os toques em milissegundos.

### Funções:

- `setup()`: Configura os pinos e inicia a comunicação Serial.

- `loop()`: Executa continuamente a leitura do potenciômetro, atualiza o BPM e controla os sinais sonoros e luminosos.

- `atualizarIntervalo()`: Calcula o intervalo em milissegundos com base no BPM atual.

### Funcionamento:

1. Lê o valor analógico do potenciômetro.

2. Converte o valor para um BPM dentro do intervalo desejado (40 a 240).

3. Calcula o intervalo do metrônomo.

4. Gera o sinal sonoro e luminoso sincronizado.

5. Exibe o BPM atual no Serial Monitor.

## Licença

Este projeto é de código aberto e está disponível sob a licença **MIT**.

## Autor

Desenvolvido por @d4nkali em 06/02/2025.
