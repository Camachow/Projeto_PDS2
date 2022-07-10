#include "../include/produto.h"
#include "../include/supermercado.h"
#include "../include/funcionario.h"
#include "../include/gerente.h"
#include "../include/caixa.h"
#include "../include/cliente.h"
#include <iostream>
#include <vector>
#include <string>
#include <limits>

int main(){
  string a, b, c, d, e;
  a="chocolate";
  b="leite";
  c="kitkat";
  d="nescau";
  e="toddy";
 cout<<"funcionou"<<endl;
  Produto prod1= Produto(a, 100, 8.5);
  Produto prod2= Produto(b, 100, 4);
  Produto prod3= Produto(c, 45, 2.65);
  Produto prod4= Produto(d, 150, 12.75);
  Produto prod5= Produto(e, 120, 11.90);

  cout<<"funcionou"<<endl;
  Supermercado epa;
  epa.insere_produto(prod1);
  epa.insere_produto(prod2);
  epa.insere_produto(prod3);
  epa.insere_produto_promocional(prod4);
  epa.insere_produto_promocional(prod5);

    cout<<"funcionou"<<endl;
  
  Cliente larissa=Cliente("larissa");
  //larissa.comprar_produto(prod1, &epa, 10);
  //larissa.comprar_produto(prod3, &epa, 3);
  cout<<"funcionou"<<endl;
  
  string nome_gerente, nome_cliente, nome_caixa;
  int aux=0, loop=1, acao=0;

  cout<< endl << "Selecione seu tipo de usuario: " <<endl;
  cout<< "1-Gerente ; 2-Cliente; 3-caixa" <<endl;
  cout << "Digite o numero e pressione Enter: ";
  cin>> aux;
  

  if(aux==1){  //Gerente
    cout<< "Digite seu nome: ";
    cin >> nome_gerente;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //funcao para ignorar o resto de palavras            
                                                          //que o usuario digitar depois de um \n
    Gerente g=Gerente(nome_gerente, 44, &epa);
     while(loop==1){
      cout << endl<<"O que deseja fazer "<<nome_gerente<< "?";
      cout<<endl<< "1-Consultar saldo no caixa do supermercado";
      cout<<endl<<"2-Ver a quantidade de produtos no estoque";
      cout<<endl<<"3-Atualizar o estoque";
      cout<<endl<<"Digite o numero: ";
      cin >> acao;
       if(acao==1){
        cout<<endl; 
         cout<<"O saldo do supermercado eh: "; 
         cout<< g.consulta_saldo_caixa()<< endl;
       }else if(acao==2){
         cout<<endl;
         g.ver_qtd_produtos();
         cout<<endl;
       }else if(acao==3){
         cout<<endl;
         g.atualiza_estoque();
         g.ver_qtd_produtos();
         cout<< endl<<"Estoque atualizado !" << endl;
       }
     }
  
    }else if(aux==2){ //Cliente
     cout<< "Digite seu nome: ";
     cin >> nome_cliente; 
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); //funcao para ignorar o resto de palavras            
                                                          //que o usuario digitar depois de um \n
     Cliente c= Cliente(nome_cliente);  
     while(loop==1){
      cout << endl<<"O que deseja fazer "<<nome_cliente<< "?";
      cout<<endl<< "1-Ver lista de produtos";
      cout<<endl<<"2-Ver lista de produtos em promocao";
      cout<<endl<<"3-Comprar um produto";
      cout<<endl<<"Digite o numero: ";
      cin >> acao;
       if(acao==1){
         cout<< endl;
         c.ver_lista_produtos(epa);
         cout<<endl;
       }else if(acao==2){
         cout<<endl;
         c.ver_lista_promocional(epa);
         cout<<endl;
       }else if(acao==3){
         string produto;
         int qnt=0;
         cout<< endl;
         cout<< "Digite o nome do produto que quer comprar: ";
         cin>> produto;
         cout<<endl;
         cout<< "Digite quantas unidades quer comprar: ";
         cin>>qnt;

         if(prod1.retorna_nome()==produto){
           float gasto= qnt*prod1.retorna_preco();
           cout<<endl;
           epa.produto_comprado(qnt, prod1);
           cout<< "Compra efetuada!";
           cout<< "Voce gastou "<<gasto<< "reais."<<endl;

         }else if(prod2.retorna_nome()==produto){
           float gasto= qnt*prod2.retorna_preco();
           cout<<endl;
           epa.produto_comprado(qnt, prod2);
           cout<< "Compra efetuada!";
           cout<< "Voce gastou "<<gasto<< "reais."<<endl;
           
         }else if(prod3.retorna_nome()==produto){
           float gasto= qnt*prod3.retorna_preco();
           cout<<endl;
           epa.produto_comprado(qnt, prod3);
           cout<< "Compra efetuada!";
           cout<< "Voce gastou "<<gasto<< "reais."<<endl;

         }else if(prod4.retorna_nome()==produto){
           float gasto= qnt*prod4.retorna_preco();
           cout<<endl;
           epa.produto_comprado(qnt, prod4);
           cout<< "Compra efetuada!";
           cout<< "Voce gastou "<<gasto<< "reais."<<endl;

         }else if(prod5.retorna_nome()==produto){
           float gasto= qnt*prod5.retorna_preco();
           cout<<endl;
           epa.produto_comprado(qnt, prod5);
           cout<< "Compra efetuada!";
           cout<< "Voce gastou "<<gasto<< "reais."<<endl;
         }
       }
       
     }
    
  }else if(aux==3){  //caixa
     cout<< "Digite seu nome: ";
     cin >> nome_caixa; 
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); //funcao para ignorar o resto de palavras            
                                                          //que o usuario digitar depois de um \n
     Caixa caixa=Caixa(nome_caixa, 43);
  }
  
  
  return 0;
}