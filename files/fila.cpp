#include <iostream>
using namespace std;
#define size 3

struct elemento 
{
    int chave;
    float preco;
};
class Fila
{
    private:
        elemento *dado;
        int primeiro;
        int ultimo; 
    
    public:
        Fila (); 
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
    Fila f1;
    elemento e1;
    int ch1;
    int menu;
    cout << "Hello World! \n";

    cout << "digite enter para continuar \n";
    cin.ignore();

    cout<<"faça uma escolha \n";
    do
    {
        cout<<"digite: \n";
        cout<<" 0 para sair \n";
        cout<<" 1 para inserir um elemento \n"; 
        cout<<" 2 para ver o tamanho da fila \n"; 
        cout<<" 3 para buscar por um elemento \n"; 
        cout<<" 4 para ver todos os elementos da fila \n"; 
        cout<<" 5 para remover um elemento \n";
        cin>>menu;
        switch (menu)
        {
            case 0: 
                cout<<"The End\n"; 
                break;
                
            case 1: 
                cout<<"digite a chave do elemento a ser inserido \n";
                cin>>e1.chave;
                cout<<"digite o preco do elemento: \n";
                cin>>e1.preco;
                f1.inserir (e1); 
                cin.ignore();
                break;
                
            case 2: 
                cout<< "o tamanho da fila é: " <<f1.gettamanho() <<"\n";
                cin.ignore();
                break;
                
            case 3:  
                cout<<"digite a chave do elemento a ser procurado\n";
                cin>>ch1;
                if (f1.busca(ch1)==1)
                {  
                    cout<<"o elemnto já está na fila\n"; 
                }
                else 
                { 
                    cout<<"o elemnto não está na fila\n";
                } 
                cin.ignore();
                break;
                
            case 4:
                f1.mostrar();
                cin.ignore();
                break;
                
            case 5: 
                cout<<f1.remover()<<"\n";  
                cin.ignore();
                break;
                
            default: 
                cout<<"opção invalida \n"; 
                break;
        }
        
        cout<<"digite enter para continuar\n";
        cin.ignore();
        
    } while(menu!=0);
    return 0;
}

Fila::Fila ()
{
    primeiro=0; 
    ultimo=0;
    dado=new elemento [size];
}

//ver se a lista ta vazia
bool Fila::vazia()
{ 
    if(ultimo==primeiro) 
    {
        return true;
    }
    else 
    { 
        return false;
    }
}

//ver se a lista ta cheia
bool Fila::cheia ()
{
    if(ultimo-primeiro==size) {return true;}
    else { return false;}
}

//caso 1 de inserir elemento
void Fila::inserir (elemento e)
{
    int a;
    a=cheia(); 
    if(a==1) 
    {
        cout<<"a fila já está cheia\n";
    }
    else
    { 
        if (busca (e.chave)==1)
        {
            cout<<"o elemento com chave " <<e.chave << " já está na fila\n";
        }
        else
        { 
            int posicao;
            posicao=ultimo%size;
            dado [posicao]=e;
            ultimo=ultimo+1; 
        }
    }
}

//caso 5 para eliminar elementos
int Fila::remover()
{
    int a;
    int p;
    a=vazia(); 
    if(a==1) 
    {
        cout<<" Não foi possivel remover: a fila já estã vazia\n";
         return 0;
    }
    else
    {
        p=primeiro%size;
        primeiro=primeiro+1;
        cout<<"foi removido o elemento com chave: \n";
        return dado[p].chave; 
    }
}

//caso 4 para mostrar todos os elementos da lista
void Fila::mostrar ()
{
    cout<<"os elementos da pilha são:\n";
    int i;
    for(i=primeiro; i<ultimo; i++)
    {
        cout<<dado[i%size].chave;
        cout<<" está na posição " <<i%size;
    }
    cout<<endl<<"preco(s): ";
    for(i=primeiro; i<ultimo; i++)
    {
        cout<<dado[i%size].preco <<"\t";
    }
    cout<<endl;

}

//caso 3 para buscar um elemento na lista
bool Fila::busca (int ch)
{
     int i;
    for(i=primeiro; i<ultimo; i++)
    {
        if (dado[i%size].chave==ch) 
        {
            return true;
        }
    }
     return false;
}

//caso 2 para ver o tamanho da lista
int Fila::gettamanho ()
{
    return (ultimo-primeiro);
}
