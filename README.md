# running-points-competition

Challenge:
​ITP teachers began to become addicted to one of the most dangerous games on the face of the earth... Cartola FC. Every day they avidly follow the results of the matches, trying to find out who the best signings are and how their team performed.

A certain bald professor who will not be named is in last place with zero points, and decided to make a program that checks whether the classification table displayed by Google is correct, so that he can guide his next choices based on it. The problem is that he doesn't know how to program, and asked the group to make the program.

Your program must read an integer T, indicating the number of teams, followed by T lines in the following format:

name; victories draws defeats goals_scored goals_conceived

where:

    Name: team name. A string consisting of a maximum of 200 characters.

    Wins, draws and defeats: results of matches played. Integer values.

    Goals Scored and Goals Conceded: integer values ​​representing the number of goals the team scored and conceded.



Your program will print as output the final championship table containing:

- Team name;

- Points obtained by the team. Each win counts 3 points, and draws count 1 point;

- Total number of matches;

- Number of wins]

- Number of draws;

- Number of defeats;

- Goals scored;

- Goals Conceded;

- Goal balance;

- List of times that are in the Libertadores zone (top 6 in the championship);

- List of times that are in the relegation zone (last 4. Printing must start from last place to first in the zone).

Pay attention to the output examples to check the print formatting.



Printing must occur in the championship classification order. The position of the times is defined according to the following criteria:

- Points: the time with more points is ahead of the time with fewer points.

- Number of victories: in case of a tie in the number of points, the time with the most victories is considered to be ahead;

- Goal difference: in case of a tie in the previous criteria, the team with the highest goal difference is considered to be ahead.



Your program must contain:

- A Time data type, which stores possible information for each half of the championship;

- A function to read entry times;

- A function to print the table;

TIP: printing will be easier if you order the times according to the advertised criteria.

input example:
20
athletico paranaense; 17 8 10 49 31
atletico mineiro; 11 9 15 40 46
avai; 3 9 23 16 55
bahia; 11 12 12 40 39
botafogo; 13 3 19 30 41
ceara; 10 7 18 34 38
chapecoense; 6 10 19 27 49
corinthias; 13 14 8 39 30
cruzeiro; 7 15 13 27 41
csa; 8 8 19 22 51
flamengo; 26 6 3 77 31
fluminense; 11 8 16 35 44
fortaleza; 13 7 15 46 47
goias; 14 7 14 41 55
gremio; 17 8 10 57 36
internacional; 14 9 12 40 36
palmeiras; 19 11 5 53 28
santos; 20 8 7 54 32
sao paulo; 15 12 8 35 25
vasco da gama; 11 11 13 36 43

output:
Tabela do campeonato:
Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols
flamengo| 84| 35| 26| 6| 3| 77| 31| 46
santos| 68| 35| 20| 8| 7| 54| 32| 22
palmeiras| 68| 35| 19| 11| 5| 53| 28| 25
gremio| 59| 35| 17| 8| 10| 57| 36| 21
athletico paranaense| 59| 35| 17| 8| 10| 49| 31| 18
sao paulo| 57| 35| 15| 12| 8| 35| 25| 10
corinthias| 53| 35| 13| 14| 8| 39| 30| 9
internacional| 51| 35| 14| 9| 12| 40| 36| 4
goias| 49| 35| 14| 7| 14| 41| 55| -14
fortaleza| 46| 35| 13| 7| 15| 46| 47| -1
bahia| 45| 35| 11| 12| 12| 40| 39| 1
vasco da gama| 44| 35| 11| 11| 13| 36| 43| -7
botafogo| 42| 35| 13| 3| 19| 30| 41| -11
atletico mineiro| 42| 35| 11| 9| 15| 40| 46| -6
fluminense| 41| 35| 11| 8| 16| 35| 44| -9
ceara| 37| 35| 10| 7| 18| 34| 38| -4
cruzeiro| 36| 35| 7| 15| 13| 27| 41| -14
csa| 32| 35| 8| 8| 19| 22| 51| -29
chapecoense| 28| 35| 6| 10| 19| 27| 49| -22
avai| 18| 35| 3| 9| 23| 16| 55| -39

Times na zona da libertadores: 
flamengo
santos
palmeiras
gremio
athletico paranaense
sao paulo

Times rebaixados: 
avai
chapecoense
csa
cruzeiro
