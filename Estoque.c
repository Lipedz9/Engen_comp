#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void registrarProdutos(Produto produtos[], int *n) {
    int i = 0;
    printf("Digite o número de produtos que deseja registrar: ");
    scanf("%d", n);
    for ( ; i < *n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Código: "); scanf("%d", &produtos[i].codigo);
        printf("Nome: "); scanf("%s", produtos[i].nome);
        printf("Quantidade: "); scanf("%d", &produtos[i].quantidade);
        printf("Preço: "); scanf("%f", &produtos[i].preco);
    }
}

void listarProdutos(Produto produtos[], int n) {
    int i = 0;
    printf("Lista de produtos:\n");
    for (; i < n; i++) {
        printf("Código: %d, Nome: %s, Quantidade: %d, Preço: %.2f\n",
               produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
    }
}

void atualizarEstoque(Produto produtos[], int n) {
    int codigo, novaQuantidade;
    int i = 0;
    printf("Digite o código do produto para atualizar: ");
    scanf("%d", &codigo);
    for (; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Nova quantidade para %s: ", produtos[i].nome);
            scanf("%d", &novaQuantidade);
            produtos[i].quantidade = novaQuantidade;
            printf("Estoque atualizado!\n");
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

void buscarProduto(Produto produtos[], int n) {
    char nome[50];
    int i = 0;
    printf("Digite o nome do produto para buscar: ");
    scanf("%s", nome);
    for (; i < n; i++) {
        if (strcmp(produtos[i].nome, nome) == 0) {
            printf("Produto encontrado: Código: %d, Nome: %s, Quantidade: %d, Preço: %.2f\n",
                   produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

float calcularValorTotalEstoque(Produto produtos[], int n) {
    float valorTotal = 0;
    int i = 0;
    for (; i < n; i++) {
        valorTotal += produtos[i].quantidade * produtos[i].preco;
    }
    return valorTotal;
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Registrar produtos\n");
        printf("2. Listar produtos\n");
        printf("3. Atualizar estoque\n");
        printf("4. Buscar produto\n");
        printf("5. Calcular valor total em estoque\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: registrarProdutos(produtos, &n); break;
            case 2: listarProdutos(produtos, n); break;
            case 3: atualizarEstoque(produtos, n); break;
            case 4: buscarProduto(produtos, n); break;
            case 5: printf("Valor total em estoque: %.2f\n", calcularValorTotalEstoque(produtos, n)); break;
            case 6: printf("Saindo do programa.\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}
