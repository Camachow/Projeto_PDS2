Trabalho final da disciplina Programação e Desenvolvimento de Software || - UFMG 2022/1

Sistema de Gerenciamento de Fluxo de Produtos em um supermercado

User Stories:

GERENTE

-Eu como gerente quero poder ter acesso ao fluxo de caixa para averiguar quanto capital está entrando no caixa.

-Eu como gerente quero ter acesso a uma lista com a quantidade de cada produto, afim de saber quais estão em falta e quais estão em excesso.

-Eu como gerente quero poder adicionar produtos que estão em excesso no estoque a uma "lista promocional", para que eles possam ser vendidos mais rápido.

CLIENTE

-Eu como cliente quero ter acesso a uma lista de produtos e seus preços, para poder escolher e comprar o que for do meu interesse.

-Eu como cliente quero ter acesso a uma lista promocional, para saber quais produtos estão sendo vendidos com preços abaixo do normal.

CAIXA

-Eu como caixa quero poder incrementar o valor do lucro atual do supermercado, para atualizar este valor a cada venda de produtos realizada e contabilizada por mim.

-Eu como caixa quero poder emitir uma nota fiscal após cada compra, para entregar ao cliente o "documento" que consta o valor de cada produto comprado, as quantidades e o valor total da compra.

FUNCIONARIO

-Funcionario é uma superclasse que servirá de herança para a classe caixa e gerente, fazendo essas classes herdarem por exemplo o nome e id.



COMO COMPILAR E RODAR O PROGRAMA:
No WINDOWS - clone o repositório do GitHub copiando o link do repositório e depois cole-o no VS Code como mostrado na imagem abaixo, ou na sua IDE preferida! 

![clonar](https://user-images.githubusercontent.com/97178655/179424633-b07bcd3b-463d-41f9-8d16-7d25666638f2.png)
![vscode clonar](https://user-images.githubusercontent.com/97178655/179424946-f8f03018-294e-4b7e-a520-80c5ae58ef95.png)

depois disso, crie uma pasta chamada "obj" dentro da pasta do Projeto que você tiver criado, como mostrado na imagem abaixo!

![pastaobj](https://user-images.githubusercontent.com/97178655/179425083-581206bd-a469-4be1-b0de-d0393b10fd1c.png)

Agora, abra o terminal selecionando a opção "Terminal" do VS Code que está na parte superior centralizada, e no terminal digite "mingw32-make" para que compile os arquivos e gere o executável
![comando make](https://user-images.githubusercontent.com/97178655/179425206-ecdc41c5-24b2-4643-a966-faec3c52cf15.png)
Depois disso, o executável "e-commerce.exe" será gerado, e execute-o no terminal também dando o comando ".\e-commerce.exe" 
Agora o programa será executado, e faça bom uso dele! :)

No LINUX/WSL: Repita os mesmos passados do tutorial para o Windows e não se esqueça de criar a pasta "obj" também, e por último abra o terminal e de o comando "make" e depois rode o executável digitando "./e-commerce" no terminal como mostrado abaixo"
![compilar no linux](https://user-images.githubusercontent.com/97178655/179426130-beb8dada-e30f-4144-9221-7973f0b404bd.png)



