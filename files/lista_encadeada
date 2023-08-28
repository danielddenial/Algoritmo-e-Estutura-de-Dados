#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 50

struct Registro {
    int chave;
    float preco;
};

struct Elemento {
    Registro reg;
    Elemento *prox;
};

typedef Elemento * PONT;

struct Lista {
    PONT inicio;
};

//inicializacao da lista
void iniciarLista (Lista *l) {
    l->inicio = NULL;
}
//busca sequencial auxiliar, serve para ajudar a insercao ordenada
PONT buscarSeqAux (Lista *l, int ch, PONT *ant) {
    *ant = NULL;
    PONT atual = l->inicio;
    while((atual != NULL) && (atual->reg.chave < ch)){
        *ant = atual;
        atual = atual->prox;
    }
    if((atual != NULL) && (atual->reg.chave == ch)){
        return atual;
    }
    return NULL;
}

//Etapa 1: inserir produto
bool inserirOrd (Lista *l, Registro reg) {
    int ch = reg.chave;
    PONT ant, i;
    i = buscarSeqAux (l, ch, &ant);
    if (i != NULL){ 
        return false;
    }
    i = (PONT) malloc (sizeof (Elemento));
    i->reg = reg;
    if (ant == NULL) {
        l->inicio = i;
    } 
    else {
        i->prox = ant->prox;
        ant->prox = i;
    }
    return true;
}

//Etapa 2: tamanho da lista
int tamanho (Lista *l){
    PONT end = l->inicio;
    int tam = 0;
    while (end != NULL) {
        end = end->prox;
        tam++;
    }
    return tam;
}

//Etapa 3: procurar produto
/*PONT buscarOrd (Lista *l, int ch) {
    PONT pos = l->inicio;
    while (pos != NULL && pos->reg.chave < ch) {
        if (pos->reg.chave == ch) {
            return pos;
        }
        pos = pos->prox;
    }
    return NULL;
}
nao esta funcionando....*/
void buscarOrd (Lista *l, int ch) {
    PONT pos = l->inicio;
    PONT guardar;
    while (pos != NULL && pos->reg.chave <= ch) {
        if (pos->reg.chave == ch) {
            cout << "sua chave: " << pos->reg.chave;
            cout << "\nseu preco: " << pos->reg.preco << endl;
            guardar = pos;
        } 
        pos = pos->prox;
    }
    if (guardar->reg.chave != ch) {
        cout << "nao encontrado.\n";
    }
}

//Etapa 4: exibir lista
void exibirLista (Lista *l) {
    PONT end = l->inicio;
    cout << "Segue a sua lista: \n";
    while (end != NULL) {
        cout << "_____________________________";
        cout << "\nchave: " << end->reg.chave << endl;
        cout << "preco: " << end->reg.preco << endl;
        end=end->prox;
    }
}

//Etapa 5: excluir produto
bool excluirElement (Lista *l, int ch) {
    PONT ant, i;
    i = buscarSeqAux (l, ch, &ant);
    if (i == NULL) {
        return false;
    } if (ant == NULL) {
        l->inicio = i->prox;
    } else {
        ant->prox = i->prox;
    }
    free (i);
    return true;
}

//Etapa 6: reiniciar lista
void ReiniciarlizarLista (Lista *l){
    PONT end = l->inicio;
    while (end!=NULL){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }
    l->inicio=NULL;
}

int main() {
    int menu = 1;
    Lista lis;
    Registro regis;
    bool verifica2;
    int verifica;
    int code;
    int prec;
    PONT busca;
    
    cout << "Hello World! \n";
    
    cout << "Huan Guilherme Ribeiro Miranda Di Giorno - 222034127\nDaniel Martinz - 222024345\n"
    "Felipe dos Santos Souza Xavier - 2111038450\nThiago Arcanjo - 222005519\n";

    cout << "Digite enter para continuar. \n";
    cin.ignore();
    
    iniciarLista (&lis);

    while (menu > 0){
    cout << "Digite: \n0 para sair; \n1 para inserir um produto;\n" 
    "2 para contar a quantidade de produtos na lista;\n"
    "3 para procurar um produto pela chave primária;\n"
    "4 para mostrar todos os produtos da lista (com código e preço);\n"
    "5 para eliminar um produto da lista;\n"
    "6 para reinicializar lista.\n";
    cin >> menu;
        
        switch(menu) {
            
            case 0:
                
            break;
            
            case 1:
                cout << "Digite a chave e o preco, respectivamente: ";
                cin >> regis.chave >> regis.preco;
                verifica = inserirOrd (&lis, regis);
                
                if (verifica==0) {
                    cout<<"Nao foi possivel inserir.\n";
                }
                else {
                    cout<<"Elemento inserido com sucesso.\n";
                }
                cin.ignore();
            break;
            
            case 2:
                cout << "O tamanho da lista: " << tamanho (&lis) << "\n";
                cin.ignore();
            break;
            
            case 3:
                cout << "Digite a chave que procura: ";
                cin >> code;
                buscarOrd (&lis, code);
                cin.ignore();
            break;
            
            case 4:
                exibirLista (&lis);
                cin.ignore();
            break;
            
            case 5:
                cout << "Digite a chave que deseja excluir: ";
                cin >> code;
                verifica2 = excluirElement (&lis, code);
                if (verifica2 == true) {
                    cout << "Foi excluido, segue sua nova lista: ";
                    exibirLista(&lis);
                } else {
                    cout << "Produto nao encontrado.\n";
                }
                cin.ignore();
            break;
            
            case 6:
                ReiniciarlizarLista(&lis);
                if (lis.inicio == NULL) {
                    cout << "foi reiniciada...\n";
                } else {
                    cout << "por algum motivo nao reiniciou KKKKKKKK AAAAAAAAAAAAAAAA";
                }
                cin.ignore();
            break;
            
            default: 
                cout<<"Escolha invalida\n";
                cin.ignore();
            break;
            
        }
        
        cout << "Digite enter para continuar. \n";
        cin.ignore();
        
    }

    return 0;
}
