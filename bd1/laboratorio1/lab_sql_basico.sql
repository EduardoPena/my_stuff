sqlite3 pokeagenda.db

CREATE TABLE pokemon ( 
	num integer PRIMARY KEY,
	nome varchar(30),
	nome_japones varchar(30),
	especie varchar(30),
	peso decimal(10,2),
	altura decimal(10,2),
	linha_evolutiva varchar(100),
	descricao varchar(255)
	);

INSERT INTO pokemon values (001, 'bulbasaur','Fushigidane', 'Pokémon Semente',
6.9,0.7, 'Bulbasaur > lv.16 > Ivysaur > lv.32 > Venusaur', 'O bulbo em suas costas está cheio de nutrientes. Nele, Bulbasaur armazena suas energias. O bulbo vai crescendo à medida que envelhece porque ele absorve os raios de sol.');

INSERT INTO pokemon values (004, 'Charmander','Hitokage', 'Pokémon Lagarto',
8.5,0.6, 'Charmander > lv.16 > Charmeleon > lv.36 > Charizard', 'A chama que possui na ponta de seu rabo mostra a força de sua vida. Se ele estiver fraco, a chama irá diminuir. Quando está saudável, a chama brilhará intensamente.');

INSERT INTO pokemon values (034, 'Nidoking','Nidoking', 'Pokémon Broca',
62.0,1.4, 'Nidoran  > lv.16 > Nidorino > Pedra da Lua > Nidoking', 'Utiliza-se de sua cauda poderosa para bater e enrolar seus oponentes. Combates corpo a corpo são a sua especialidade. Seu chifre é capaz de perfurar diamantes.');