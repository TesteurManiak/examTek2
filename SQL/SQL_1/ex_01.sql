SELECT titre AS "titre film" FROM film WHERE (id_genre = 0 OR id_genre = 6 OR id_genre = 5) AND titre LIKE('E%');
