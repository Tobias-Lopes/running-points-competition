#include <stdio.h>
#include <string.h>

typedef struct time
{
    char nome[200];
    int vitorias, empates, derrotas;
    int golsFeitos, golsSofridos;
} Time;

void ordenar(Time *times, int numeroDeTimes)
{
    Time valorTemp;

    for (int k = 0; k < numeroDeTimes - 1; k++) // Ajustando para evitar acesso fora do limite
    {
        for (int l = 0; l < numeroDeTimes - 1 - k; l++) // Evita comparar elementos já ordenados
        {
            int nPontos1 = times[l].vitorias * 3 + times[l].empates;
            int nPontos2 = times[l + 1].vitorias * 3 + times[l + 1].empates;

            if (nPontos1 < nPontos2) // Ordenando em ordem decrescente de pontos
            {
                valorTemp = times[l];
                times[l] = times[l + 1];
                times[l + 1] = valorTemp;
            }
            else if (nPontos1 == nPontos2)
            {
                if (times[l].vitorias < times[l + 1].vitorias)
                {
                    valorTemp = times[l];
                    times[l] = times[l + 1];
                    times[l + 1] = valorTemp;
                }
                else if (times[l].vitorias == times[l + 1].vitorias)
                {
                    int saldoGols1 = times[l].golsFeitos - times[l].golsSofridos;
                    int saldosGols2 = times[l + 1].golsFeitos - times[l + 1].golsSofridos;
                    if (saldoGols1 < saldosGols2)
                    {
                        valorTemp = times[l];
                        times[l] = times[l + 1];
                        times[l + 1] = valorTemp;
                    }
                }
            }
        }
    }
}
void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) // Descarta até encontrar um '\n'
        ;
}
int main()
{
    int numeroDeTimes;
    Time times[50];

    scanf("%d", &numeroDeTimes);
    limparBuffer();

    for (int i = 0; i < numeroDeTimes; i++)
    {
        scanf("%[^;];", times[i].nome); // Lê até o ponto e vírgula
        // Leitura dos dados numéricos após o nome
        scanf("%d %d %d %d %d", &times[i].vitorias, &times[i].empates, &times[i].derrotas, &times[i].golsFeitos, &times[i].golsSofridos);
        limparBuffer();
    }

    ordenar(times, numeroDeTimes);

    printf("Tabela do campeonato:\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");

    for (int j = 0; j < numeroDeTimes; j++)
    {
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n",
               times[j].nome,
               (times[j].vitorias * 3 + times[j].empates),                 // Pontos
               (times[j].vitorias + times[j].derrotas + times[j].empates), // Jogos
               times[j].vitorias, times[j].empates, times[j].derrotas,     // Vitorias, Empates, Derrotas
               times[j].golsFeitos, times[j].golsSofridos,                 // Gols
               (times[j].golsFeitos - times[j].golsSofridos));             // Saldo de gols
    }

    printf("\nTimes na zona da libertadores:\n");
    for (int l = 0; l < 6; l++)
    {
        printf("%s\n", times[l].nome);
    }

    printf("\nTimes rebaixados:");
    for (int k = numeroDeTimes; k > numeroDeTimes - 5; k--)
    {
        printf("%s\n", times[k].nome);
    }

    return 0;
}
