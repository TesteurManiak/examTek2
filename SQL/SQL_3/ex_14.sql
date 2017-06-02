SELECT titre, date_debut_affiche AS 'date_debut', film.id_distrib AS 'id_distrib', distrib.nom AS 'nom_distrib' FROM film, distrib
WHERE titre LIKE('%death%');
