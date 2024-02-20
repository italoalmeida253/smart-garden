<h1 align="center">Smart Garden - Irrigação automática com microcontroladores</h1>
<p align="center">
    <img width="200" src="https://raw.githubusercontent.com/italoalmeida253/smart-garden/444e2336163b2c50cd3f8ade50eaff07f97f373c/smart-garden-logo.svg" alt="Logo do Smart Garden"/>
</p>

<p align="center"><em>Smart Garden é um projeto acadêmico que visa buscar a economia de água e facilidade na irrigação de jardins pessoais ou terrenos agrícolas.</em></p>

## Documentação
Para instalar o Smart Garden, você precisa configurar um ambiente de desenvolvimento antes de começar a usar.

Você pode acompanhar os seguintes passos para configurar um ambiente próprio para a instalação do Smart Garden utilizando seu computador.

### Requisitos
- Possuir um microcontrolador (Arduino, por exemplo);
- Válvula solenóide (220v);
- Módulo relé (5v);
- Possuir o Arduino IDE (https://www.arduino.cc/en/software) instalado no seu computador para o upload do código na placa;
- Possui a última versão da biblioteca Time (https://github.com/PaulStoffregen/Time) baixada no seu computador.
- Possuir o código .ino do Smart Garden para o upload no seu microcontrolador. Você pode consegui-lo baixando diretamente do repositório ou, em um terminal do seu sistema, rode: ```git clone https://github.com/italoalmeida253/smart-garden``` (caso tenha o git instalado).

### Configuração direta no código
Por padrão, o Smart Garden segue alguns padrões de irrigação que podem não serem ideias para seu jardin. Você pode fazer algumas mudanças no funcionamento simplismente mudando alguns valores dentro do código. Aqui alguns exemplos:

#### Tempo de irrigação (em segundos)
Determina quanto tempo a passagem de água ficará aberta durante os ciclos.
Variável no código:
```c++
int tempoDeIrrigação = 15; // Em segundos; 
                           // Por padrão, está definido para 15 segundos.
```

#### Intervalo entre ciclos de irrigagem (em horas)
Determina o intervalo entre uma irrigagem e outra em horas.
Variável no código:
```c++
int intervaloEntreCiclos = 6; // Em horas; 
                              // Por padrão, está definido para 6 horas.
```

#### Pino relé
Determina a porta em que o relé está conectada no microcontrolador.
**A porta precisa ser do tipo digital. Certifique de verificar o pinout da sua placa antes de trocar de porta.**
Variável no código:
```c++
int pinoRele = 13; // Por padrão, está definido para a porta 13.
```

### Instalando
Com o código .ino e seu microcontrolador conectado ao seu computador, siga os seguintes passos instalar o código do Smart Garden:

1. Abra o Arduino IDE;
2. No menu superior, clique em File > Open e abra o código .ino do Smart Garden;
3. No menu superior, clique em Sketch > Include Library > Add .ZIP Library... e escolha o arquivo .zip da biblioteca Time (https://github.com/PaulStoffregen/Time).
4. Com o arquivo da biblioteca já incluso, clique na seta apontada para a direita para fazer o upload na placa;

Com isso, você terá o código instalado na sua placa!
