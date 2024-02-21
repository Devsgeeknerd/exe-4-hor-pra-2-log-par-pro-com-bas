<!-- Título -->
# Exercício 4

***Conteúdo do Exercício:***

Escreva um programa em **C** que faça com que um gato dê um miado com uma intensidade informada pelo usuário.

Enquanto o usuário não digitar `PARAR`, o personagem deverá continuar solicitado `níveis de miado` e os emitindo no nível pedido pelo usuário.

Considere como intensidade do miado a quantidade de letras `I` na palavra `MIAU`.

Por exemplo, se o usuário informar `6` como intensidade, deverá ser escrito `MIIIIIIAU`; se o usuário informar `3` como intensidade, deverá ser escrito `MIIIAU`.

[Resolução.](main.c)

> [!IMPORTANT]\
> **Boas práticas**:
>
> * Comentários Descritivos:
>   * Utilize comentários para descrever a finalidade das funções e trechos de código, tornando mais fácil para outros programadores entenderem o seu código.
>
> * Validação de Entrada:
>   * Adicione verificações para garantir que o usuário insira uma intensidade válida.
>
> * Tratamento de Strings:
>   * Considere utilizar funções mais seguras para entrada de strings, como `fgets`, para evitar potenciais problemas de ***buffer overflow***.

> [!WARNING]\
> **Sugestões de melhoria**:
>
> * Entrada Segura:
>   * Substitua `scanf("%s", comando)` por `fgets(comando, sizeof(comando), stdin)` para evitar estouro de ***buffer*** e garantir uma entrada mais segura.
>
> * Limites de Intensidade:
>   * Considere adicionar verificações adicionais para limitar a intensidade de miados, dependendo dos requisitos do programa.

> [!NOTE]\
> **Observações**:
>
> * Cuidado com Tamanhos de ***Buffer***:
>   * O tamanho do *buffer* para armazenar a entrada do usuário (`char comando[6]`) pode ser insuficiente, dependendo dos casos.
>   * Considere aumentar o tamanho se necessário.
>
> * Tratamento de Encerramento:
>   * O código trata de forma eficiente o encerramento do programa quando o usuário digita “PARAR”.

<!-- Informações -->
## &#8505; Informações

![Visitors](https://api.visitorbadge.io/api/visitors?path=Devsgeeknerd%2Fexe-4-hor-pra-2-log-par-pro-com-bas&label=Visitantes&labelColor=%23700070&labelStyle=none&countColor=%23000fff&style=plastic&color=%23ffffff "Total de Visitantes")
&nbsp;
![Followers](https://img.shields.io/github/followers/Devsgeeknerd?style=p&label=Seguidores&labelColor=800080&color=000fff "Total de Seguidores")
&nbsp;
![Watchers](https://img.shields.io/github/watchers/Devsgeeknerd/exe-4-hor-pra-2-log-par-pro-com-bas?style=p&label=Observadores&labelColor=800080&color=000fff "Total de Observadores")
&nbsp;
![Stars](https://img.shields.io/github/stars/Devsgeeknerd/exe-4-hor-pra-2-log-par-pro-com-bas?style=p&label=Estrelas&labelColor=800080&color=000fff "Total de Estrelas")
&nbsp;
![Forks](https://img.shields.io/github/forks/Devsgeeknerd/exe-4-hor-pra-2-log-par-pro-com-bas?style=p&label=Bifurcações&labelColor=800080&color=000fff "Total de Bifurcações")
&nbsp;
![Repo Size](https://img.shields.io/github/repo-size/Devsgeeknerd/exe-4-hor-pra-2-log-par-pro-com-bas?style=p&label=Tamanho&labelColor=800080&color=000fff "Tamanho do Repositório")
&nbsp;
![License](https://img.shields.io/github/license/Devsgeeknerd/exe-4-hor-pra-2-log-par-pro-com-bas?style=p&label=Licença&labelColor=800080&color=000fff "Licença do Repositório")
