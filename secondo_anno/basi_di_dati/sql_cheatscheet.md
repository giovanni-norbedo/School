# SQL Cheatsheet

```sql
SHOW DATABASES; -- mostra i database presenti
```

```sql
CREATE DATABASE nome_database; -- crea un database (accessibile solo all'utente root)
```

```sql
CREATE DATABASE IF NOT EXISTS nome_database; -- crea un database se non esiste
```

```sql
DROP DATABASE [IF EXISTS] nome_database; -- elimina un database
```

```sql
USE nome_database; -- seleziona un database
```

```sql
CREATE TABLE [IF NOT EXISTS] nome_tabella (
    nome_colonna tipo_dato [vincoli],
    ...
); -- crea una tabella
```

**Numeri interi:**

| Tipo | Byte | Minimo | Massimo |
|------|------|--------|---------|
| TINYINT | 1 | -128 | 127 |
| SMALLINT | 2 | -32768 | 32767 |
| MEDIUMINT | 3 | -8388608 | 8388607 |
| INT | 4 | -2147483648 | 2147483647 |
| BIGINT | 8 | -2^63 | 2^63-1 |

`INT(N)` mostra solo `N` caratteri

**Numeri decimali:**

| Tipo | Byte | Precisione | Scala |
|------|------|------------|-------|
| DECIMAL | 5-17 | 65 | 30 |
| NUMERIC | 5-17 | 65 | 30 |
| FLOAT | 4 | 23 | 8 |
| DOUBLE | 8 | 52 | 8 |

`NUMERIC(i, n)` ha `i` cifre totali e `n` cifre decimali  
`DECIMAL(i, n)` salva almeno `n` cifre decimali

**Stringhe:**

| Tipo | Descrizione |
|------|-------------|
| CHAR(n) | stringa di lunghezza fissa (0-255) |
| VARCHAR(n) | stringa di lunghezza variabile (0-65535) |
| BINARY(n) | stringa binaria di lunghezza fissa (0-255) |
| VARBINARY(n) | stringa binaria di lunghezza variabile (0-65535) |

**Generici:**

| Tipo | Descrizione |
|------|-------------|
| TINYBLOB | Binary Large Object (0-255) |
| BLOB | Binary Large Object (0-65535) |
| MEDIUMBLOB | Binary Large Object (0-16777215) |
| LONGBLOB | Binary Large Object (0-4294967295) |

**Testo:**

| Tipo | Descrizione |
|------|-------------|
| TINYTEXT | stringa di testo (0-255) |
| TEXT | stringa di testo (0-65535) |
| MEDIUMTEXT | stringa di testo (0-16777215) |
| LONGTEXT | stringa di testo (0-4294967295) |

**Data e ora:**

| Tipo | Descrizione |
|------|-------------|
| YEAR | anno (YYYY) |
| DATE | data (YYYY-MM-DD) |
| TIME | ora (HH:MM:SS) |
| DATETIME | data e ora (YYYY-MM-DD HH:MM:SS) |
| TIMESTAMP | data e ora (YYYY-MM-DD HH:MM:SS) |

**Spaziali:**

| Tipo | Descrizione |
|------|-------------|
| GEOMETRY | Valore spaziale generico |
| POINT | Punto (x, y) |
| LINESTRING | Sequenza di punti (x1 y1, x2 y2, ...) |
| POLYGON | Poligono (x1 y1, x2 y2, ..., x1 y1) |
...

