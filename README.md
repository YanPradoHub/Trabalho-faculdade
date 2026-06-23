# 🎮 Jogo-Enigma: O Mistério do Número Perdido

## 📖 Sobre o Projeto

Este projeto foi desenvolvido como trabalho da disciplina de *Lógica de Programação*.

O jogo consiste em um desafio de adivinhação, no qual o jogador deve descobrir um número secreto gerado aleatoriamente pelo computador. Durante a partida, o sistema fornece dicas para auxiliar o jogador, que possui um número limitado de tentativas para resolver o mistério.

O objetivo principal do projeto é colocar em prática conceitos fundamentais da programação em linguagem C, como estruturas de decisão, repetição, funções, modularização e geração de números aleatórios.

## 🎯 Objetivos

- Desenvolver o raciocínio lógico.
- Aplicar os conceitos estudados em sala de aula.
- Trabalhar com programação estruturada em linguagem C.
- Utilizar funções para organizar o código.
- Criar uma aplicação interativa utilizando entrada e saída de dados.

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Biblioteca stdio.h
- Biblioteca stdlib.h
- Biblioteca time.h

## 📂 Estrutura do Projeto

O projeto está organizado em módulos para facilitar a leitura e manutenção do código.

| main.c | Controla a execução principal do jogo. |
| historia.c | Exibe a introdução, mensagens de vitória, derrota e dicas narrativas. |
| interface.c | Responsável pela interação com o usuário e validação das entradas. |
| logica.c | Contém a lógica do jogo, geração do número secreto e verificação dos palpites. |
| codigo_final.c | Versão final do projeto reunindo todas as funcionalidades. |

## 🎲 Como Funciona

1. O sistema gera um número aleatório entre *1 e 50*.
2. O jogador recebe algumas pistas iniciais.
3. O jogador possui *5 tentativas* para descobrir o número.
4. A cada erro, o jogo informa se o número secreto é maior ou menor que o palpite informado.
5. Caso acerte, o jogador vence.
6. Caso utilize todas as tentativas, o número secreto é revelado.
7. Ao final, o jogador pode escolher jogar novamente.

## 💡 Funcionalidades

- Número secreto aleatório.
- Validação das entradas do usuário.
- Dicas durante a partida.
- Limite de tentativas.
- Mensagens de vitória e derrota.
- Opção de jogar novamente.
- Código organizado em funções.

## 📚 Conceitos de Lógica de Programação Utilizados

Durante o desenvolvimento deste projeto foram aplicados diversos conceitos, entre eles:

- Variáveis
- Constantes (#define)
- Funções
- Estruturas condicionais (if e else)
- Estruturas de repetição (for e do...while)
- Geração de números aleatórios (rand)
- Modularização do código
- Entrada e saída de dados (scanf e printf)

## ▶️ Como Executar

1. Clone o repositório:
2. Abra o projeto em uma IDE compatível com C (Dev-C++, Code::Blocks, Visual Studio Code ou outra).
3. Compile o projeto.
4. Execute o programa.

