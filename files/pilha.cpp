#include <iostream>
using namespace std;
#define size 50

struct elemento
{
    int chave;
    float preco;
};

class pilha
{
    private:
        elemento *dado;
        int tamanho;
        
    public:
        pilha();
        bool cheia ();
        bool vazia ();
        void inserir (elemento e);
        int remover();
        void mostrar ();
        int gettamanho ();
        bool busca (int ch);
};

int main()
{
    int x;
    pilha p1, p2;
    elemento e1, e2;
    int ch1, ch2;
    int menu, menu0;
    
    cout<<"Hello World! \n";

    cout<<"digite enter para continuar. \n";
    cin.ignore();

    cout<<"faça uma escolha \n";
    cout<<"digite: \n0 para sair. \n1 para a primeira pilha. \n2 para a segunda pilha. \n";
    cin>>menu0;
    switch (menu0)
    {
        case 0: 
            return 0;
        case 1:
            x = 1;
            cout<<"digite enter para continuar. \n";
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            x = 2;
            cout<<"digite enter para continuar. \n";
            cin.ignore();
            cin.ignore();
            break;
        default: 
            cout<<"opção invalida. \n"; 
            break;
    }
    do
    {
        cout<<"digite: \n";
        cout<<" 0 para voltar ao menu anterior. \n";
        cout<<" 1 inserir um elemento. \n";
        cout<<" 2 para remover um elemento. \n";
        cout<<" 3 para ver todos os elementos da pilha. \n";
        cout<<" 4 para ver o tamanho da pilha. \n";
        cout<<" 5 para buscar por um elemento. \n";
        cin>>menu;
        switch (menu)
        {
            case 0: //etapa 0
                cout<<"faça uma escolha \n";
                cout<<"digite: \n0 para sair. \n1 para a primeira pilha. \n2 para a segunda pilha. \n";
                cin>>menu0;
                switch (menu0)
                {
                    case 0: 
                        return 0;
                    case 1:
                        x = 1;
                        cin.ignore();
                        break;
                    case 2:
                        x = 2;
                        cin.ignore();
                        break;
                    default: 
                        cout<<"opção invalida. \n"; 
                        break;
                }
                break;
                
            case 1:
                if (x==1)
                {
                    cout<<"digite a chave do elemento a ser inserido: \n";
                    cin>>e1.chave;
                    cout<<"digite o preco do elemento: \n";
                    cin>>e1.preco;
                    p1.inserir (e1);
                }
                else
                {
                    cout<<"digite a chave do elemento a ser inserido: \n";
                    cin>>e2.chave;
                    cout<<"digite o preco do elemento: \n";
                    cin>>e2.preco;
                    p2.inserir (e2);
                }
                cin.ignore();
                break;
                
            case 2:
                if (x==1)
                {
                    cout<<p1.remover() <<"\n";
                }
                else
                {
                    cout<<p2.remover() <<"\n";
                }
                cin.ignore();
                break;
                
            case 3:
                if (x==1)
                {
                    p1.mostrar();
                }
                else
                {
                    p2.mostrar();
                }
                cin.ignore();
                break;
                
            case 4:
                if (x==1)
                {
                    cout << "o tamanho da pilha é: " <<p1.gettamanho() <<"\n";
                }
                else
                {
                    cout << "o tamanho da pilha é: " <<p2.gettamanho() <<"\n";
                }
                cin.ignore();
                break;
                
            case 5: 
                if (x==1)
                {
                    cout<<"digite a chave do elemento a ser procurado: \n";
                    cin>>ch1;
                    if (p1.busca(ch1)==1)
                    { 
                        cout<<"o elemento já está na pílha. \n"; 
                    }
                    else 
                    { 
                        cout<<"o elemento não está na pilha. \n";
                    }
                }
                else
                {
                    cout<<"digite a chave do elemento a ser procurado: \n";
                    cin>>ch2;
                    if (p2.busca(ch2)==1)
                    { 
                        cout<<"o elemento já está na pílha. \n"; 
                    }
                    else 
                    { 
                        cout<<"o elemento não está na pilha. \n";
                    }
                }
                cin.ignore();
                break;
                
            default: 
                cout<<"opção invalida. \n"; 
                break;
        }
        cout << "digite enter para continuar. \n";
        cin.ignore();
    } while (menu<5);
    return 0;
}

pilha::pilha ()
{
    tamanho=0;
    dado=new elemento [size];
}

bool pilha::cheia ()
{
    if(tamanho==size) 
    {
        return true; 
    }
    else
    { 
        return false;
    }
}

bool pilha::vazia()
{
    if(tamanho==0) 
    {
        return true; 
    }
    
    else
    { 
        return false;
    }
}

//etapa 5
bool pilha::busca (int ch)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        if (dado[i].chave==ch)
        {
            return true;
        }
    }
    return false;
}

//etapa 1
void pilha::inserir (elemento e)
{
    int a;
    a=cheia();
    if(a==1)
    {
        cout<<"a pilha já está cheia. \n";
    }   
    else
    { 
        if (busca (e.chave)==1)
        {   
            cout<<"o elemento com chave " <<e.chave << " já está na pilha. \n";
        }
        else
        {
            dado [tamanho]=e;
            tamanho=tamanho+1;
        }
    }
}

//etapa 2
int pilha::remover()
{
    int a;
    a=vazia();
    if(a==1)
    {
        cout<<" Não foi possivel remover: a pilha já estă vazia. \n";
        return 0;
    }
    else
    {
        tamanho=tamanho-1;
        cout<<"foi removido o elemento com chave: \n";
        return dado [tamanho].chave;
    }
}

//etapa 3
void pilha:: mostrar ()
{
    cout<<"os elementos da pilha são: \n";
    int i;
    cout<<"chave(s): ";
    for(i=0; i<tamanho; i++)
    {
        cout<<dado[i].chave <<"\t";
    }
    cout<<endl<<"preco(s): ";
    for(i=0; i<tamanho; i++)
    {
        cout<<dado[i].preco <<"\t";
    }
    cout<<endl;
}

//etapa 4
int pilha::gettamanho ()
{
    return tamanho;
}
