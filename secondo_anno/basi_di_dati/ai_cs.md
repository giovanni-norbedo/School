## Basi di Dati - Cheatsheet

**Informazioni Generali**

* **Basi di Dati (DB):** Collezione di dati persistenti usata dal sistema di un'azienda e gestita da un DBMS.
* **Database Management System (DBMS):** Software che gestisce un DB, garantendo:
    * Affidabilità
    * Privatezza
    * Efficienza
    * Efficacia
    * Condivisione dei dati tra diverse applicazioni
* **Database System:** DB + DBMS
* **Indipendenza dei Dati:**  La logica di accesso ai dati è separata dalla loro organizzazione fisica.
* **Schema:** Struttura invariante dei dati (es: intestazione tabelle).
* **Istanza:** Valori attuali dei dati (es: contenuto tabelle).
* **Vista:** Rappresentazione parziale di un modello logico, NON una copia dei dati.

**Modello Relazionale (Codd)**

* I dati sono organizzati in tabelle.
* Le operazioni vengono eseguite sulle tabelle.
* I risultati delle operazioni sono tabelle.
* I riferimenti tra dati in tabelle diverse sono rappresentati con valori.

**Elementi di un DB Relazionale**

* **Tabelle:** Organizzazione rettangolare di dati composta da:
    * Record (righe)
    * Campi (colonne)
    * Domini dei dati (tipo di dato di ogni colonna)
* **Chiave Primaria (PK):** Una o più colonne che identificano univocamente un record.  Non possono essere duplicate.
* **Chiave Esterna (FK - Foreign Key):** Colonna in una tabella il cui valore corrisponde ad una PK di un'altra tabella. Crea relazioni tra tabelle.
* **Relazione:** Tabella in cui ogni riga è diversa dalle altre.

**SQL Basics**

* **Data Definition Language (DDL):**
    * `CREATE TABLE/VIEW/INDEX`: Crea tabelle, viste e indici.
    * `DROP TABLE/VIEW/INDEX`: Elimina tabelle, viste e indici.
    * `ALTER TABLE/VIEW/INDEX`: Modifica tabelle, viste e indici.
* **Data Manipulation Language (DML):**
    * `SELECT`: Legge i dati.
    * `INSERT`: Inserisce dati.
    * `DELETE`: Elimina dati.
    * `UPDATE`: Modifica dati.
* **Data Control Language (DCL):**
    * `GRANT`: Assegna permessi.
    * `REVOKE`: Revoca permessi.
* **Transaction Control Language (TCL):**
    * `COMMIT`: Salva le modifiche.
    * `ROLLBACK`: Annulla le modifiche.
* **Programming Language (PL):**
    * `DECLARE`, `OPEN`, `FETCH`, `CLOSE`:  Per la gestione di cursori e stored procedure.


**Tipi di Dati (Domini)**

* **Numeri Interi:** `TINYINT`, `SMALLINT`, `MEDIUMINT`, `INT`, `BIGINT`
* **Numeri Razionali:** `FLOAT`, `DOUBLE`, `NUMERIC(i,n)`, `DECIMAL(i,n)`
* **Testo:** `CHAR`, `VARCHAR`, `TEXT`, `TINYTEXT`, `MEDIUMTEXT`, `LONGTEXT`, `BINARY`, `VARBINARY`, `BLOB`, `TINYBLOB`, `MEDIUMBLOB`, `LONGBLOB`
* **Tempo:** `YEAR`, `DATE`, `TIME`, `DATETIME`, `TIMESTAMP`
* **Spazio:** `GEOMETRY`, `POINT`, `LINESTRING`, `POLYGON`

**Comandi SQL**

* **Database:**
    * `SHOW DATABASES`: Mostra i database.
    * `CREATE DATABASE [IF NOT EXISTS] nome`: Crea un database.
    * `DROP DATABASE [IF EXISTS] nome`: Elimina un database.
    * `USE nome`: Seleziona un database.
* **Tabelle:**
    * `CREATE TABLE nome (colonne)`: Crea una tabella.
        * `PRIMARY KEY (colonne)`: Definisce la chiave primaria.
        * `FOREIGN KEY (colonne) REFERENCES tabella(colonna)`: Definisce una chiave esterna.
        * `NOT NULL`: Impedisce valori nulli.
        * `UNIQUE`: Impedisce valori duplicati.
        * `AUTO_INCREMENT`: Incrementa automaticamente un campo intero.
        * `DEFAULT valore`: Valore di default per un campo.
        * `COMMENT 'commento'`: Aggiunge un commento.
    * `DROP TABLE [IF EXISTS] nome`: Elimina una tabella.
    * `ALTER TABLE nome`: Modifica una tabella.
        * `ADD COLUMN definizione`: Aggiunge una colonna.
        * `DROP COLUMN nome`: Elimina una colonna.
        * `CHANGE COLUMN vecchio nuovo tipo`: Modifica una colonna.
        * `RENAME TO nuovo`: Rinomina la tabella.
        * `ADD CONSTRAINT nome FOREIGN KEY (...) REFERENCES tabella(...)`: Aggiunge una foreign key.
        * `DROP FOREIGN KEY nome`: Elimina una foreign key.
* **Dati:**
    * `SELECT [DISTINCT] colonne FROM tabella [WHERE condizione] [ORDER BY colonne [ASC|DESC]] [LIMIT x,n]`: Seleziona i dati.
    * `INSERT INTO tabella [(colonne)] VALUES (valori)`: Inserisce dati.
    * `UPDATE tabella SET colonna = valore [WHERE condizione]`: Aggiorna i dati.
    * `DELETE FROM tabella [WHERE condizione]`: Elimina dati.
* **Join:**
    * `INNER JOIN`: Restituisce le righe che hanno corrispondenza in entrambe le tabelle.
    * `LEFT [OUTER] JOIN`: Restituisce tutte le righe della tabella di sinistra e le corrispondenti della tabella di destra.
    * `RIGHT [OUTER] JOIN`: Restituisce tutte le righe della tabella di destra e le corrispondenti della tabella di sinistra.
    * `CROSS JOIN`: Prodotto cartesiano.
    * `NATURAL JOIN`: Join basato sulle colonne con lo stesso nome.
    * `SELF JOIN`: Join di una tabella con se stessa.
    * `UNION [ALL]`: Unisce i risultati di più query, eliminando i duplicati (o mantenendoli con `ALL`).
* **Aggregazione e Raggruppamento:**
    * `GROUP BY colonne`: Raggruppa le righe in base ai valori delle colonne specificate.
    * `HAVING condizione`: Filtra i gruppi risultanti.
    * Funzioni di aggregazione: `COUNT()`, `SUM()`, `AVG()`, `MAX()`, `MIN()`.
* **Subquery:** Query annidate all'interno di altre query.
* **Variabili:** `SET @variabile = valore`: Definisce una variabile.
* **Prepared Statement:**
    * `PREPARE nome FROM 'query'`: Precompila una query.
    * `EXECUTE nome USING variabili`: Esegue la query preparata.
    * `DEALLOCATE PREPARE nome`: Elimina la query preparata.
* **Viste:**
    * `CREATE VIEW nome AS SELECT ...`: Crea una vista.
    * `DROP VIEW nome`: Elimina una vista.
    * `ALTER VIEW nome AS SELECT ...`: Modifica una vista.
    * `SHOW CREATE VIEW nome`: Mostra la definizione di una vista.
* **Controllo Accessi:**
    * `CREATE USER utente@host IDENTIFIED BY 'password'`: Crea un utente.
    * `GRANT privilegio ON risorsa TO utente@host`: Assegna permessi.
    * `REVOKE privilegio ON risorsa FROM utente@host`: Revoca permessi.
    * `SHOW GRANTS FOR utente@host`: Mostra i permessi di un utente.
    * `SET PASSWORD FOR utente@host = PASSWORD('nuovapassword')`: Modifica la password di un utente.
    * `DROP USER utente@host`: Elimina un utente.
* **Transazioni:**
    * `START TRANSACTION`: Inizia una transazione.
    * `COMMIT`: Conferma una transazione.
    * `ROLLBACK`: Annulla una transazione.


**Operatori e Clausole**

* `WHERE`:  Filtra le righe.
* `AND`, `OR`, `NOT`:  Operatori booleani.
* `LIKE`, `NOT LIKE`:  Per la ricerca di pattern nelle stringhe.
* `BETWEEN`:  Seleziona valori all'interno di un intervallo.
* `IN`, `NOT IN`:  Controlla se un valore è presente (o non presente) in una lista.
* `IS NULL`, `IS NOT NULL`:  Controlla se un valore è nullo (o non nullo).
* `AS`: Assegna un alias a una colonna o a una tabella.
* `DISTINCT`: Elimina le righe duplicate.
* `ORDER BY`: Ordina i risultati.
* `LIMIT`: Limita il numero di righe restituite.
* `EXISTS`, `NOT EXISTS`: Controlla se una subquery restituisce righe.


**Note Aggiuntive**

* I comandi SQL non sono case-sensitive (tranne le stringhe).
* I comandi terminano con `;`.
* `[...]` indica parti opzionali di un comando.
* `/* commento */`: Commenti multi-riga.
* `-- commento`: Commenti a linea singola.

This cheatsheet provides a concise overview of essential database concepts and SQL commands in Italian. Remember to consult specific database documentation for detailed syntax and functionalities as implementations may vary.