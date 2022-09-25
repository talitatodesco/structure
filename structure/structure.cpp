#include <iostream>
using namespace std;

struct clientes
{
    int cliente_id;
    string nome_cliente;
    int idade;
    float salario;
};
int main()
{
    clientes meu_cliente;//Declarei que a variavel, meu cliente vai receber a estrutura de cliente

   //meu_cliente = { 123, "Demi", 30, 9000 };

   /* USANDO ARRAY
   meu_cliente[30] = { 123, "Demi", 30, 9000 };
   cout << "ID do cliente: " << meu_cliente[0].cliente_id << endl << "Nome do cliente: " << meu_cliente[0].nome_cliente << endl;
   cout << "Idade do cliente: " << meu_cliente[0].idade << endl << "Salario do cliente: " << meu_cliente[0].salario << endl;*/
    
    //Entrada de dados
    cout << "Entre com o id do cliente: ";
    cin >> meu_cliente.cliente_id;

    cout << "Entre com o nome do cliente: ";
    cin >> meu_cliente.nome_cliente;

    cout << "Entre com a idade do cliente: ";
    cin >> meu_cliente.idade;

    cout << "Entre com o salario do cliente: ";
    cin >> meu_cliente.salario;

   cout << "ID do cliente: " << meu_cliente.cliente_id << endl << "Nome do cliente: " << meu_cliente.nome_cliente << endl;
   cout << "Idade do cliente: " << meu_cliente.idade << endl << "Salario do cliente: " << meu_cliente.salario << endl;

    return 0;
}