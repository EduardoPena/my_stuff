CREATE TABLE pokemon(
	num integer,
	nome varchar(50),
	nome_japones varchar(50),
	especie varchar(50),
	peso decimal(10,2),
	altura decimal(10,2),
	linha_evolutiva varchar(100),
	descricao varchar(255)
);

INSERT INTO pokemon values (1, 'bulbasauro',
	'Fushigidane', 'Pokémon Semente', 6.9, 0.7,
	'Bulbasaur > lv.16 > Ivysaur > lv.32 > Venusaur','O bulbo em suas costas está cheio de nutrientes. Nele, Bulbasaur armazena suas energias. O bulbo vai crescendo à medida que envelhece porque ele absorve os raios de sol.');
