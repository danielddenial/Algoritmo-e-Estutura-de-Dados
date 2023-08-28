#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <unistd.h>
using namespace std;

struct No
{  
    int chave;
    float preco;
    struct No *esquerda;
    struct No *direita;
};

typedef No *PN; // ponteiro para nó

PN inicializar()
{
return (NULL);
}

PN CriarNovoNo (int ch1, float preco)
{
    PN novoNo = (PN)malloc(sizeof(No));
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    novoNo->chave = ch1;
    novoNo->preco = preco;
    return novoNo;
}

PN adicionarNoNaArv (PN r, PN no)
{
    if(r == NULL) 
    {
        return (no);
    }
    if (no->chave < r->chave)
    {
        r->esquerda = adicionarNoNaArv (r->esquerda, no); 
    }
    else
    { 
        r->direita = adicionarNoNaArv (r->direita, no); 
    }
    return (r);
}

PN busca(int ch, PN r)
{
    if (r == NULL) 
    {
        return (NULL);
    }
    if (r->chave == ch) 
    {
        return (r);
    }
    if (r->chave > ch) 
    {
        return busca (ch, r->esquerda);
    }
    return busca (ch, r->direita);
}

int ContarNos (PN r)
{
    int tam = 0;
    if (r == NULL) 
    {
        return 0;
    }
    else
    { 
        tam = ContarNos(r->esquerda) + 1 + ContarNos (r->direita);
    }
    return tam;
}

void mostrar(PN r)
{
    if(r != NULL)
    {
        cout << "CHAVE: " << r->chave << "\n";
        cout << "PRECO: " << r->preco << "\n";
        cout << "_________________________\n";
        mostrar (r->esquerda);
        mostrar (r->direita);
    }
}

int main() {
 
    int ch;
    int menu, tam;
    float preco;

    cout<<"Hello World!";

    PN raiz = inicializar();
    do
    {
        cout << "\n[GERENCIADOR ARVORE BINARIA]\n\n"
        << "0 Para sair\n"
        << "1 Para inserir produto\n"
        << "2 Para contar quantidade de produtos\n"
        << "3 Para busca binaria pela chave primaria\n"
        << "4 Para mostrar os produtos\n";
        cin >> menu;
        
        switch(menu)
        {
            case 0:
                // sair
                cout << "FINALIZANDO...\n";
                cin.ignore();
                
            break;
            
            case 1:
                // inserir
                cout << "Insira a chave do no a ser inserido: \n";
                cin >> ch;
                cout << "Insira o preço do elemento inserido: \n";
                cin >> preco;
                PN p1;
                p1 = busca(ch, raiz);
                if(p1 != NULL)
                {
                    cout << "ja existe um no com essa chave.\n Tente outra.\n";
                }
                else
                {
                    PN no;
                    no = CriarNovoNo(ch, preco);
                    raiz = adicionarNoNaArv(raiz ,no);  
                    cout << "Elemento iserido com sucesso!\n";
                }
                cin.ignore();
                
            break;
            
            case 2:
                // contar
                tam = ContarNos(raiz);
                cout << "A arvore tem : [" << tam << "] nos\n";
                cin.ignore();
                
            break;
            
            case 3:
                // busca binaria por chave
                cout << "Ingresse a chave do no a ser procurado\n";
                cin >> ch;
                PN p;
                p = busca (ch , raiz);
                if (p == NULL) 
                {
                    cout << "o no de chave: [" << ch <<  "] nao esta na arvore\n";
                }
                else 
                {
                    cout << "O no  esta no endereco: [" << p << "]\n";
                }
                cin.ignore();
                
            break;
            
            case 4:
                // mostrar
                cout << "os elemetos da arvore sao: \n";
                mostrar(raiz);
                cout << "\n";
                cin.ignore();
                
            break;
            
            default:
                // opção invalida
                cout << "OPCAO INVALIDA \n insira outra opcao\n";
                cin.ignore();
                
            break;
            
        }
        
        if (menu != 0) 
        {
            cout << "Digite enter para continuar.";
            cin.ignore();
        }
        
    } while(menu!=0);
    
    return 0;
}
