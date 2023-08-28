#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

struct elemento
{
	int chave;
	float preco;
};

struct No
{   	 
	elemento valor;
	No *anterior;
	No *prox;
};

class PilhaD 
{
	private:
        
     	No *NoTopo;

	public:
        
        PilhaD ();
        bool vazia ();
        void inserir (elemento e);
        elemento remover ();
        void mostrar ();
        int gettamanho ();
        bool busca (int ch);

};

class FilaD
{
	private:
        
     	No *inicio;
     	No *fim;

	public:
     
     	FilaD ();
        bool vazia ();
        void inserir (elemento e);
        elemento remover ();
        void mostrar ();
        int gettamanho ();
        bool busca (int ch);

};



//____________________METODOS PILHA________________________

// criar
PilhaD::PilhaD ()
{
    NoTopo = NULL;
}

// checar se esta vazia
bool PilhaD::vazia()
{
    if (NoTopo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// inserir
void PilhaD::inserir (elemento e)
{
    if (busca(e.chave) == 1)
    {
        cout << "o elemento da chave " << e.chave << " ja existe\n";
    }
    else
    {
        No *NoNovo;
        NoNovo = (No *) malloc(sizeof(elemento));
        NoNovo->valor = e;
        NoNovo->anterior = NoTopo;
        NoTopo = NoNovo;
        cout << "o elemento da chave " << e.chave << " foi adicionado\n";
    } 
}

// remover
elemento PilhaD::remover()
{
    No *NoTemp;
    NoTemp = NoTopo;
    elemento e;
    e = NoTopo->valor;
    NoTopo = NoTopo->anterior;
    delete NoTemp;
    return e;
}

// mostrar
void PilhaD::mostrar ()
{
    No *NoTemp;
    NoTemp = NoTopo;
    cout<<"os elementos da pilha sao:\n";
    while (NoTemp!=NULL)
    {
        cout << "[chave: " << NoTemp->valor.chave << "\t preco: " << NoTemp->valor.preco << "]\n";
        NoTemp = NoTemp->anterior;
    }
}

// obter tamanho
int PilhaD::gettamanho ()
{
    int tamanho = 0;
    No *NoTemp;
    NoTemp = NoTopo;
    while (NoTemp != NULL)
    {
       tamanho = tamanho + 1;
       NoTemp = NoTemp->anterior;
    }
    return tamanho;
}

// busca
bool PilhaD::busca (int ch)
{
    No *NoTemp;
    NoTemp = NoTopo; 
    while (NoTemp != NULL)
    {
        if (NoTemp->valor.chave == ch)
        {
            return true;
        }
        NoTemp = NoTemp->anterior;
    }
    return false;
}



//____________________METODOS FILA________________________

// criar
FilaD::FilaD()
{
    inicio = NULL;
    fim = NULL;
}

// obter tamanho
int FilaD::gettamanho()
{
    int tam = 0;
    No *NoTemp;
    NoTemp = inicio;
    while (NoTemp != NULL)
    {
        tam = tam + 1;
        NoTemp = NoTemp->prox;
    }
    return tam;
}

// mostrar
void FilaD::mostrar()
{
    int tam = 0;
    No *NoTemp;
    NoTemp = inicio;
    cout << "Os elementos da fila sao:\n";
    while(NoTemp != NULL)
    {   
        cout << "[chave: " << NoTemp->valor.chave << "\t preco: " << NoTemp->valor.preco << "]\n";
        NoTemp = NoTemp->prox;
    }
}

// inserir
void FilaD::inserir (elemento e)
{
    if (busca (e.chave)==1)
    {
        cout << " O elemento com chave " << e.chave << " ja esta na fila\n";
    }
    else
    {
        No *NoNovo;
        NoNovo = (No*) malloc(sizeof(elemento));
        NoNovo->valor = e;
        NoNovo->prox = NULL;
        
        if (fim == NULL)
        {
            inicio = NoNovo;
            fim = NoNovo;
        }
        else
        {
            fim->prox=NoNovo;
            fim=fim->prox;
        }
        cout << "o  Elemento com chave " << e.chave << " foi inserido! :)\n";
    }
}

// remover
elemento FilaD::remover()
{
    No *NoTemp;
    NoTemp = inicio;
    elemento e;
    e= inicio->valor;
    inicio = inicio->prox;
    delete NoTemp;
    if(inicio == NULL)
    {
        fim = NULL;
    }
    return e;
}

// checar se esta vazia
bool FilaD::vazia()
{
    if(inicio == NULL)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

// busca
bool FilaD::busca (int ch)
{
    No *NoTemp;
    NoTemp = inicio;
    while(NoTemp != NULL)
    {
        if(NoTemp->valor.chave == ch)
        {
            return true;
        }
        NoTemp = NoTemp->prox;
    }
    return false;
}

//funcao main
int main()
{
	PilhaD p1;
	FilaD f1;
	elemento e1;
	int ch1, verificaFila, verificaPilha, vazio;
	int menu0, menu1, menu2, menu3;
	do 
	{
        cout << "digite: \n0 para sair \n1 para a pilha dinamica \n2 para a fila dinamica \n";
        cin >> menu0;
        switch (menu0)
        {
            case 0:
                
                cout << "finalizando...";
                
            break;
            
            case 1:
                do
                {
                    cout << "digite: \n";
                    cout << "0 para voltar para o menu anterior \n";
                    cout << "1 para inserir um elemento \n";
                    cout << "2 para remover um elemento \n";
                    cout << "3 para ver todos os elementos \n";
                    cout << "4 para ver o tamanho da estrutura\n";
                    cout << "5 para buscar por um elemento \n";
                    cin >> menu1;
                    switch (menu1)
                    {
                        case 0:
                            
                            cin.ignore();
                            
                        break;
                        
                        case 1:
                            
                            cout<<"digite a chave do elemento a ser inserido:\n";
                            cin>>e1.chave;
                            cout << "Insira o preço do elemento:\n";
                            cin >> e1.preco;
                            verificaPilha = p1.busca (e1.chave);
                            verificaFila = f1.busca (e1.chave);
                            if (verificaPilha == 0 && verificaFila == 0) 
                            {
                                p1.inserir (e1);
                            } 
                            else if (verificaFila == 1)
                            {
                                cout << "chave ja existente na fila\n";
                            } 
                            else 
                            {
                                cout << "chave ja existente na pilha\n";
                            }
                            cin.ignore();
                            
                        break;
                        
                        case 2: 
                            
                            do 
                            {
                                
                                cout << "0 Para voltar para o menu anterior. \n1 Para remover permanentemente. \n2 Para colocar o elemento em outra estrutura.\n";
                                cin >> menu2;
                                switch (menu2) 
                                {
                                    
                                    case 0:
                                        
                                        cout << "cancelando remocao, voltando para o outro menu...\n";
                                        cin.ignore();
                                        
                                    break;
                                    
                                    case 1:
                                        
                                        vazio = p1.vazia();
                                        if(vazio == 1)
                                        {
                                            cout << "a fila ja esta vazia\n";
                                            
                                        }
                                        else
                                        {
                                            p1.remover();
                                        }
                                        cout << "removido com sucesso\n";
                                        menu2 = 0;
                                        cin.ignore();
                                        
                                    break;
                                    
                                    case 2:
                                        
                                        cout << "0 para voltar para o menu anterior. \n1 para colocar o elemento removido no topo da pilha. \n2 para colocar o elemento removido no inicio da fila.\n";
                                        cin >> menu3;
                                        switch (menu3) 
                                        {
                                            
                                            case 0:
                                                
                                                cout << "cancelando acao... voltando para o menu anterior\n";
                                                
                                            break;
                                            
                                            case 1:
                                                
                                                vazio = p1.vazia();
                                                if(vazio == 1)
                                                {
                                                    cout << "a fila ja esta vazia\n";
                                                    
                                                }
                                                else
                                                {
                                                    p1.inserir(p1.remover());
                                                }
                                                menu2 = 0;
                                                
                                            break;
                                            
                                            case 2:
                                                
                                                vazio = p1.vazia();
                                                if(vazio == 1)
                                                {
                                                    cout << "a fila ja esta vazia\n";
                                                    
                                                }
                                                else
                                                {
                                                    f1.inserir(p1.remover());
                                                }
                                                menu2 = 0;
                                                
                                            break;
                                            
                                            default:
                                                
                                                cout << "Opção invalida, voltando para o menu anterior...\n";
                                                
                                            break;
                                            
                                        }
                                        cin.ignore();
                                        
                                    break;
                                    
                                    default:
                                        
                                        cout << "Opção invalida.\n";
                                        cin.ignore();
                                     
                                    break;
                                    
                                }
                                
                            } while (menu2 != 0);
                            
                        break;
                        
                        case 3:
                            
                            p1.mostrar(); 
                            cin.ignore();
                            
                        break;
                        
                        case 4:
                            
                            cout << "o tamanho da pilha e: "<< p1.gettamanho() << "\n";
                            cin.ignore();
                            
                        break;
                        
                        case 5: 
                            
                            cout << "digite a chave do elemento a ser procurado\n";
                            cin >> ch1;
                            if (p1.busca (ch1) == 1)
                            { 
                                cout << "o elemnto já está na pilha\n"; 
                            }
                            else 
                            { 
                                cout << "o elemnto não está na pilha\n";
                            }
                            cin.ignore();
                            
                        break;
                        
                        default: 
                            
                            cout << "opção invalida \n"; 
                            cin.ignore();
                            
                        break;
                        
                    }
                    
                    cout << "Digite enter para continuar. \n";
                    cin.ignore();
                    
                } while (menu1!=0);
                
            break;
            
            case 2:
                
                do
                {
                    cout << "digite: \n";
                    cout << "0 para voltar para o menu anterior \n";
                    cout << "1 para inserir um elemento \n";
                    cout << "2 para remover um elemento \n";
                    cout << "3 para ver todos os elementos \n";
                    cout << "4 para ver o tamanho da estrutura\n";
                    cout << "5 para buscar por um elemento \n";
                    cin >> menu1;
                    
                    switch (menu1)
                    {
                        case 0:
                            
                            cin.ignore();
                            
                        break;
                        
                        case 1:
                            
                            cout << "insira a chave do elemento a ser inserido\n";
                            cin >> e1.chave; 
                            cout << "Insira o preço do elemento\n";
                            cin >> e1.preco;
                            verificaPilha = p1.busca (e1.chave);
                            verificaFila = f1.busca (e1.chave);
                            if (verificaPilha == 0 && verificaFila == 0) 
                            {
                                f1.inserir (e1);
                            } 
                            else if (verificaFila == 1)
                            {
                                cout << "chave ja existente na fila\n";
                            } 
                            else 
                            {
                                cout << "chave ja existente na pilha\n";
                            }
                            cin.ignore();
                            
                        break;
                        
                        case 2:
                            
                            do
                            {
                                
                                cout << "0 Para voltar para o menu anterior. \n1 Para remover permanentemente. \n2 Para colocar o elemento em outra estrutura.\n";
                                cin >> menu2;
                                switch (menu2) 
                                {
                                    
                                    case 0:
                                        
                                        cout << "cancelando acao... voltando para o outro menu\n";
                                        cin.ignore();
                                        
                                    break;
                                    
                                    case 1:
                                        
                                        vazio = f1.vazia();
                                        if(vazio==1)
                                        {
                                            cout<<"a pilha ja esta vazia\n";
                                        }
                                        else
                                        {
                                            f1.remover();
                                        }
                                        cout << "removido com sucesso\n";
                                        menu2 = 0;
                                        cin.ignore();
                                        
                                    break;
                                    
                                    case 2:
                                        
                                        cout << "0 para voltar para o menu anterior. \n1 para colocar o elemento removido no topo da pilha. \n2 para colocar o elemento removido no inicio da fila.\n";
                                        cin >> menu3;
                                        switch (menu3) 
                                        {
                                            
                                            case 0:
                                                
                                                cout << "cancelando acao... voltando para o menu anterior\n";
                                                
                                            break;
                                            
                                            case 1:
                                                
                                                vazio = f1.vazia();
                                                if(vazio==1)
                                                {
                                                    cout<<"a pilha ja esta vazia\n";
                                                }
                                                else
                                                {
                                                    p1.inserir(f1.remover());
                                                }
                                                menu2 = 0;
                                                
                                            break;
                                            
                                            case 2:
                                                
                                                vazio = f1.vazia();
                                                if(vazio==1)
                                                {
                                                    cout<<"a pilha ja esta vazia\n";
                                                }
                                                else
                                                {
                                                    f1.inserir(f1.remover());
                                                }
                                                menu2 = 0;
                                                
                                            break;
                                            
                                            default:
                                                
                                                cout << "Opção invalida, voltando para o menu anterior...\n";
                                                
                                            break;
                                            
                                        }
                                        cin.ignore();
                                        
                                    break;
                                    
                                    default:
                                        
                                        cout << "Opção invalida.\n";
                                        cin.ignore();
                                     
                                    break;
                                    
                                }
                                
                            } while (menu2 != 0);
                            
                        break;
                        
                        case 3:
                            
                            f1.mostrar();
                            cin.ignore();
                            
                        break;
                        
                        case 4:
                            
                            cout << "O tamanho da fila e: " << f1.gettamanho() << "\n";
                            cin.ignore();
                            
                        break;
                        
                        case 5: 
                            
                            cout << "Digite a chave do elemento a ser procurado\n";
                            cin >> ch1;
                            if (f1.busca(ch1) == 1)
                            {   
                                cout << "o elemento ja esta na fila\n";
                            }
                            else
                            {
                                cout << "O elemento nao esta na fila :/\n";
                            }
                            cin.ignore();
                            
                        break;
                        
                        default:
                            
                            cout << "Opção invalida :(\n";
                            cin.ignore();
                            
                        break;
                        
                    }
                    
                    cout << "Digite enter para continuar. \n";
                    cin.ignore();
                    
                } while (menu1 != 0);
                
            break;
        }
        
	} while (menu0 != 0);
	
	return 0;
}
