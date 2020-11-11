-- List the names of all people who starred in a movie in which Kevin Bacon also starred.

SELECT DISTINCT name FROM stars
JOIN people ON stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE movie_id IN (SELECT movie_id FROM people JOIN stars ON stars.person_id = people.id WHERE people.name = "Kevin Bacon" and birth = 1958)
AND name != "Kevin Bacon";