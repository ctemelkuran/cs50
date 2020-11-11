-- List the titles of the five highest rated movies (in order) that Chadwick Boseman starred in, starting with the highest rated.

SELECT title
FROM movies 
JOIN ratings ON ratings.movie_id = movies.id
WHERE id IN (SELECT movie_id FROM stars JOIN people ON people.id = stars.person_id WHERE people.name = "Chadwick Boseman")
ORDER BY rating DESC LIMIT 5;
