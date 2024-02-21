#include <stdio.h>
#include <string.h> // Incluído para usar a função strcmp

// Função para emitir miados com a intensidade especificada.
void emitirMiado(int intensidade)
{
    // Imprime a parte fixa do miado ("M" no início e "AU" no final).
    printf("M");

    // Loop para imprimir a parte variável do miado (repetição de "I" conforme a intensidade).
    for (int i = 0; i < intensidade; i++)
    {
        printf("I");
    }

    // Imprime a parte final do miado ("AU" no final).
    printf("AU\n");
}

int main()
{
    char comando[6]; // Para armazenar a entrada do usuário (5 caracteres + terminador nulo).
    int intensidade;

    // Loop principal que continua até o usuário digitar "PARAR".
    do
    {
        // Solicita ao usuário para digitar a intensidade do miado (ou "PARAR" para encerrar).
        printf("Digite a intensidade do miado (ou PARAR para encerrar): ");
        scanf("%s", comando);

        // Verifica se o usuário digitou "PARAR".
        if (strcmp(comando, "PARAR") == 0)
        {
            break; // Encerra o loop se o usuário digitar "PARAR".
        }

        // Converte a entrada do usuário para um valor inteiro.
        sscanf(comando, "%d", &intensidade);

        // Verifica se a intensidade é não-negativa.
        if (intensidade < 0)
        {
            printf("Por favor, digite um número não-negativo para a intensidade.\n");
        }
        else
        {
            // Chama a função para emitir o miado com a intensidade especificada.
            emitirMiado(intensidade);
        }

    } while (1);

    // Mensagem de encerramento do programa.
    printf("Programa encerrado.\n");

    return 0;
}
