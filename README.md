# Insertion Sort: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
Insertion sort ou ordenação por inserção é um algoritmo de ordenação que dado uma entrada de tamanho N <b><e1, e2, . . ., en></b>, o resultado é elaborado, inserindo-se elemento a elemento na ordem natural crescente ou decrescente desejada. Para facilitar a compreensão, imagine um grupo de cartas de baralho viradas para baixo. Na primeira interação, você recebe em mãos a primeira carta e a coloca no início de sua sequência. Na segunda interação, você percorre sua mão, encontrando o local ideal para inserir a próxima carta. Assim o faz até que não haja mais cartas a serem inseridas. No final, há uma ordem natural lógica desejada, e assim tem-se o conjunto estruturado corretamente. 
</p>

<p align="justify">
Para a implementação dessa estratégia é preciso criar no vetor de entrada uma posição adicional, reservando-a para as permutações. É comum a utilização da posição de índice 0, a qual é chamada de posição sentinela. Sob essa condição, o laço que realiza as comparações inicia na posição 1 e finaliza na posição N. Vejamos um pequeno exemplo para duas interações do algoritmos com um vetor de 5 posições.
</p>

<p align="center">
	<img src="imgs/insertion.png"/> 
</p>

<p align="justify">
Nessa estratégia de ordenação, o número mínimo de movimentos ocorre quando os registros estão armazenados de forma crescente. Por outro lado, o máximo de comparações (i.e., pior caso) é gerado quando os registros do conjunto se encontram em ordem decrescente. Logo, este método torna-se uma boa solução quando os arquivos apresentarem ordenação parcial no conjunto. Além disso, é uma ótima opção para inserção de novos elementos em conjuntos de elementos já ordenados, apresentando para este caso custo linear ao tamanho da entrada. Por fim, trata-se de uma estratégia estável.
</p>

# Compilação e Execução

A lista dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


# Contatos

<div style="display: inline-block;">
<a href="https://t.me/michelpires369">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 
</a>

<a href="https://www.linkedin.com/in/michelpiressilva/">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

</div>

<p> </p>


<a style="color:black" href="mailto:michel@cefetmg.br?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>michel@cefetmg.br</i>
</a>
