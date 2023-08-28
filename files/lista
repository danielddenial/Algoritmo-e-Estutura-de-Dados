#include <iostream>
#define n 10
using namespace std;

struct Registro {
    
    int ch;
    
};

struct data {
    
    int mes;
    int ano;
    
};

struct element {
    
    Registro chave;
    float preco;
    data validade;
    
};

struct Lista {
    
    element A[n+1];
    int numberElem;
    
};

//iniciar a lista: Etapa 8.
void iniLista (Lista *x) {
    
    x->numberElem = 0;
    
}

//tamanho da lista: Etapa 2
int tamList (Lista *x) {
    
    return x->numberElem;
    
}

//busca de elementos: Etapa 3
int buscaSentinela(Lista *x, int ch1) {
    
    int i = 0;
    x->A[x->numberElem].chave.ch = ch1;
    
    while(x->A[i].chave.ch != ch1) {
        
        i++;
        
    } if (i == x->numberElem) {
        
        return -1; 
        
    } else {
        
        return i; 
        
    } 
    
}


//inserir elementos Etapa 1.
bool inserirElem (Lista *x, int posi, Registro reg, float pre, int mes, int ano) {
    
    posi--;
    if (x->numberElem >= n || (posi < 0) || (posi > x->numberElem)) {
        
        return false;
        
    } else {
        
        int j;
        for (j = x->numberElem; j > posi; j--) {
            
            x->A[j] = x->A[j-1];
            
        }
        
        x->A[j].preco = pre;
        x->A[j].validade.mes = mes;
        x->A[j].validade.ano = ano;
        x->A[j].chave.ch = reg.ch;
        x->numberElem++;
        return true;
        
    }
    
}

//Exibir a Lista: Etapa 4
void exibirLista (Lista *x) {
    
    int i;
    cout << "A lista contem os seguintes elementos. \n";
    cout << "Suas chaves: ";
    for (i = 0; i < x->numberElem; i++) {
        
        cout << x->A[i].chave.ch << "\n";
        
    }
    cout << "Seus precos: ";
    for (i = 0; i < x->numberElem; i++) {
        
        cout << x->A[i].preco << "\n";
        
    }
    cout << "Sua validade: ";
    for (i = 0; i < x->numberElem; i++) {
        
        cout << x->A[i].validade.mes << "/" << x->A[i].validade.ano << "\n";
        
    }
    
}

//Ordenar parte1: Etapa 5
void algoritmo1(Lista *l){
    
    for(int i=0;i<l->numberElem-1;++i) {
        
        for(int j=l->numberElem-1;j>i;--j){
            
            if (l->A[i].chave.ch > l->A[j].chave.ch) {
                
                int tempCode = l->A[i].chave.ch;
                l->A[i].chave.ch = l->A[j].chave.ch;
                l->A[j].chave.ch = tempCode;
              
                int tempMes = l->A[i].validade.mes;
                l->A[i].validade.mes = l->A[j].validade.mes;
                l->A[j].validade.mes = tempMes;
             
                int tempAno = l->A[i].validade.ano;
                l->A[i].validade.ano = l->A[j].validade.ano;
                l->A[j].validade.ano = tempAno;
              
                float tempPreco = l->A[i].preco;
                l->A[i].preco = l->A[j].preco;
                l->A[j].preco = tempPreco;
                
            }
            
        }
        
    }

}

//Ordenar parte 2: Etapa 5
void algoritmo2(Lista *l){
    
    for(int i=0;i<l->numberElem-1;++i) {
        
        for(int j=l->numberElem-1;j>i;--j){
            
            if (l->A[i].chave.ch < l->A[j].chave.ch) {
                
                int tempCode = l->A[i].chave.ch;
                l->A[i].chave.ch = l->A[j].chave.ch;
                l->A[j].chave.ch = tempCode;
              
                int tempMes = l->A[i].validade.mes;
                l->A[i].validade.mes = l->A[j].validade.mes;
                l->A[j].validade.mes = tempMes;
             
                int tempAno = l->A[i].validade.ano;
                l->A[i].validade.ano = l->A[j].validade.ano;
                l->A[j].validade.ano = tempAno;
              
                float tempPreco = l->A[i].preco;
                l->A[i].preco = l->A[j].preco;
                l->A[j].preco = tempPreco;
                
            }
            
        }
        
    }

}

//Exluir elemento: Etapa 6
bool excluirLis(int chave, Lista *x) {
    
    int j;
    int posElem = buscaSentinela (x, chave);
    
    if (posElem == -1) {
        return false;
        
    } else {
        for (j = posElem; j < x->numberElem; j++) {
            x->A[j] = x->A[j+1];
            
        }
        x->numberElem--;
        
    }
    return true;
    
}

//Contagem precos: Etapa 7
void contaLis(Lista *x, float p) {
    
    int cont = 0;
    
    for (int i = 0; i < x->numberElem; i++) {
        
        if (p < x->A[i].preco) {
            
            cont++;
            
        }
        
    }
    
    cout << "Tem " << cont << " mais caro(s) que o valor digitado.\n";
    
}


int main() {
    
    int menu = 1;
    int menu2 = 0;
    Lista lis;
    Registro code;
    int pos1;
    int verifica;
    int mes;
    int ano;
    float preco;
    float p;
    
    cout << "Hello World! \n";
    
    cout << "Digite enter para continuar. \n";
    cin.ignore();

    cout << "Nao esqueça de iniciar a lista. \n";
    cout << "Digite enter para continuar. \n";
    cin.ignore();
    
    while (menu > 0) {
        
        cout << "Digite: \n0 para sair. \n"
        "1 para inserir um produto. \n"
        "2 para contar a quantidade de produtos na lista.\n"
        "3 para procurar um produto pelo código. \n"
        "4 para mostrar todos os produtos da lista (com código e preço). \n"
        "5 para ordenar a lista pelo código. \n"
        "6 para eliminar um produto da lista. \n"
        "7 para contar todos os produtos que possuem um preço maior que p, onde p é um número real positivo ingressado pelo usuário. \n"
        "8 para iniciar uma lista. \n";
        cin >> menu;
        
        switch(menu) {
            
            case 0:
                
            break;
            
            case 1:
                cout << "Digite a posicao que deseja colocar: \n";
                cin >> pos1;
                cout << "Digite a chave, o preco e a data de validade (mes e ano), respectivamente: ";
                cin >> code.ch >> preco >> mes >> ano;
                
                verifica = buscaSentinela(&lis, code.ch);
                
                if (verifica==-1) {
                    verifica=inserirElem (&lis, pos1, code, preco, mes, ano);
                    
                    if (verifica==0) {
                        
                        cout<<"Nao foi possivel inserir.\n";
                        
                    }
                    else {
                        
                        cout<<"Elemento inserido com sucesso.\n";
                        
                    }
                    
                }
                else {
                    cout<<"o elemento com chave ja está na lista. \n";
                    
                }
                
                cin.ignore();
                
            break;
            
            case 2:
                cout << "O tamanho da lista: " << tamList(&lis) << "\n";
                cin.ignore();
                
            break;
            
            case 3:
                cout << "Digite a chave do produto: ";
                cin >> code.ch;
                verifica = buscaSentinela(&lis, code.ch);
                
                if (verifica==-1) {
                    cout<<"o elemento com chave " << code.ch <<" nao esta na lista. \n";
                    
                }
                else {
                    cout<<"o elemento com chave " << code.ch <<" esta na posicao: " << verifica+1 <<"\n";
                    
                }
                cin.ignore();
                
            break;
            
            case 4:
                exibirLista(&lis);
                cin.ignore();
                
            break;
            
            case 5:
                cout << "Para ordenar digite:\n 1 para o algoritmo crescente.\n 2 para o algoritmo decrescente. \n";
                cin >> menu2;
                
                switch(menu2) {
                    
                    case 1:
                        algoritmo1(&lis);
                        cout << "Sua lista foi ordenada! :D \n";
                        
                    break;
                    
                    case 2: 
                        algoritmo2(&lis);
                        cout << "Sua lista foi ordenada! :D \n";
                        
                    break;
                    
                    default: 
                        cout << "Escolha invalida. \n";
                        
                    break;
                }
                
                cin.ignore();
                
            break;
            
            case 6:
                cout << "Digite a chave que deseja excluir: ";
                cin >> code.ch;
                verifica = excluirLis (code.ch, &lis);
                
                if (verifica == -1) {
                    cout << "A chave digitada não existe\n";
                    
                } else {
                    cout << "A chave " << code.ch << " foi exluida com sucesso.\n";
                    
                }
                cin.ignore();
                
            break;
            
            case 7:
                cout<<"Digite o valor de p: \n";
                cin>>p;
                contaLis(&lis, p);
                cin.ignore();
                
            break;
            
            case 8:
                if (lis.numberElem > 0 ) {
                    cout << "A lista ja foi iniciada.\n";
                    cin.ignore();
                    
                } else {
                    iniLista(&lis);
                    
                }
                
            break;
            
            default: 
                cout << "Escolha invalida!\n";
                cin.ignore();
                
            break;
            
        }
        
        cout << "Digite enter para continuar. \n";
        cin.ignore();
        
    }

    return 0;
}
