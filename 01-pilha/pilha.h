typedef int TipoItem;
const int max_itens = 100;

class pilha {
    private:
        int tamanho;
        TipoItem* estrutura;

    public:
        pilha(); //construtora
        ~pilha(); // destrutora
        bool estacheia(); // verifica se a pilha esta cheia
        bool estavazia(); // verifica se a pilha está vazia 
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
        int qualtamanho();
};