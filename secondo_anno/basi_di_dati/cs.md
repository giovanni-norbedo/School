## Cheatsheet SQL

**DDL (Data Definition Language)**

* **CREATE DATABASE `nome_db`;**  Crea un nuovo database.
* **CREATE TABLE `nome_tabella` (
    `colonna1` `tipo_dato` `vincoli`,
    `colonna2` `tipo_dato` `vincoli`,
    ...
    `chiave_primaria`
);** Crea una nuova tabella con colonne specificate, tipi di dato e vincoli.
* **ALTER TABLE `nome_tabella`
    ADD COLUMN `nuova_colonna` `tipo_dato` `vincoli`;** Aggiunge una nuova colonna alla tabella.
* **ALTER TABLE `nome_tabella`
    DROP COLUMN `colonna`;** Elimina una colonna dalla tabella.
* **ALTER TABLE `nome_tabella`
    MODIFY COLUMN `colonna` `nuovo_tipo_dato` `nuovi_vincoli`;** Modifica il tipo di dato o i vincoli di una colonna.
* **ALTER TABLE `nome_tabella`
    RENAME TO `nuovo_nome`;** Rinomina la tabella.
* **DROP TABLE `nome_tabella`;** Elimina una tabella.
* **CREATE VIEW `nome_vista` AS `query`;** Crea una vista basata su una query.
* **DROP VIEW `nome_vista`;** Elimina una vista.


**DML (Data Manipulation Language)**

* **SELECT `colonne`
    FROM `tabella`
    WHERE `condizione`
    GROUP BY `colonne_raggruppamento`
    HAVING `condizione_raggruppamento`
    ORDER BY `colonne_ordinamento`
    LIMIT `numero_righe`;**  Recupera i dati da una o più tabelle.
* **INSERT INTO `tabella` (`colonne`) VALUES (`valori`);** Inserisce nuove righe in una tabella.
* **UPDATE `tabella`
    SET `colonna1` = `valore1`, `colonna2` = `valore2`, ...
    WHERE `condizione`;** Aggiorna i dati nelle righe esistenti.
* **DELETE FROM `tabella`
    WHERE `condizione`;** Elimina righe da una tabella.

**Clausole e Operatori**

* **FROM:** Specifica la tabella da cui recuperare i dati.
* **WHERE:** Filtra le righe in base a una condizione.
    * **`=` , `!=` , `>` , `<` , `>=` , `<=`:** Operatori di confronto.
    * **LIKE, NOT LIKE:**  Per la corrispondenza di pattern nelle stringhe.  `%` corrisponde a zero o più caratteri,  `_` corrisponde a un singolo carattere.
    * **BETWEEN:** Seleziona valori all'interno di un intervallo.
    * **IN, NOT IN:** Seleziona valori presenti (o non presenti) in una lista.
    * **IS NULL, IS NOT NULL:** Verifica la presenza di valori NULL.
    * **AND, OR, NOT:** Operatori logici.
* **GROUP BY:** Raggruppa le righe in base ai valori di una o più colonne.
* **HAVING:** Filtra i gruppi creati da GROUP BY.
* **ORDER BY:** Ordina i risultati in base a una o più colonne.  `ASC` (crescente, default), `DESC` (decrescente).
* **LIMIT:** Limita il numero di righe restituite.
* **JOIN (INNER, LEFT, RIGHT, FULL OUTER, CROSS):** Combina righe da due o più tabelle in base a una condizione di join.
    * **INNER JOIN:** Restituisce solo le righe con corrispondenze in entrambe le tabelle.
    * **LEFT (OUTER) JOIN:** Restituisce tutte le righe dalla tabella di sinistra e le corrispondenze dalla tabella di destra (NULL se non ci sono corrispondenze).
    * **RIGHT (OUTER) JOIN:** Restituisce tutte le righe dalla tabella di destra e le corrispondenze dalla tabella di sinistra (NULL se non ci sono corrispondenze).
    * **FULL OUTER JOIN:** Restituisce tutte le righe da entrambe le tabelle (NULL dove non ci sono corrispondenze). Non supportato da MySQL.
    * **CROSS JOIN:**  Restituisce il prodotto cartesiano delle due tabelle.
* **UNION, INTERSECT, EXCEPT:** Combinano i risultati di più query SELECT.
    * **UNION:** Combina i risultati di due o più query SELECT, eliminando i duplicati (a meno che non si usi `UNION ALL`).
    * **INTERSECT:** Restituisce le righe comuni a due o più query SELECT. Non supportato direttamente da MySQL.
    * **EXCEPT:** Restituisce le righe presenti nella prima query SELECT ma non nella seconda. Non supportato da MySQL.
* **AS:**  Crea un alias per una colonna o tabella.
* **DISTINCT:** Elimina le righe duplicate dal risultato di una query SELECT.
* **SUBQUERY:** Una query annidata all'interno di un'altra query.

**Funzioni di Aggregazione**

* **COUNT():** Conta le righe o i valori non NULL.
* **SUM():** Calcola la somma dei valori.
* **AVG():** Calcola la media dei valori.
* **MAX():** Restituisce il valore massimo.
* **MIN():** Restituisce il valore minimo.

**Controllo Accesso (DCL - Data Control Language)**

* **GRANT `privilegi` ON `risorsa` TO `utente`@`host`;** Concede privilegi specifici su una risorsa a un utente.
* **REVOKE `privilegi` ON `risorsa` FROM `utente`@`host`;** Revoca i privilegi da un utente.


**Transazioni (TCL - Transaction Control Language)**

* **START TRANSACTION;** Inizia una transazione.
* **COMMIT;** Salva le modifiche effettuate all'interno della transazione.
* **ROLLBACK;** Annulla le modifiche effettuate all'interno della transazione.
