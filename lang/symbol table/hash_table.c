#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 256

struct record {
    char* code; /* campo para armazenar o código */
    char* type; /* campo para outro propósito */
    struct record* next; /* ponteiro para o próximo registro na lista encadeada */
};

struct hash_table {
    struct record* table[TABLE_SIZE];
};

unsigned int hash_function(const char* code) {
    if (*code == '\0') {
        return 0;
    }

    unsigned int sum = strlen(code);
    return sum % TABLE_SIZE;
}

struct record* createRecord(const char* code, const char* type) {
    struct record* new_record = (struct record*)malloc(sizeof(struct record));
    new_record->code = strdup(code);
    new_record->type = strdup(type);
    new_record->next = NULL; // Define o próximo registro como NULL por padrão
    return new_record;
}

struct hash_table* create_table() {
    struct hash_table* ht = (struct hash_table*)malloc(sizeof(struct hash_table));
    memset(ht->table, 0, sizeof(ht->table));
    return ht;
}

void insert_record(struct hash_table* ht, struct record* rec) {
    if (ht == NULL || rec == NULL) {
        return;
    }

    unsigned int index = hash_function(rec->code);
    rec->next = ht->table[index];
    ht->table[index] = rec;
}

struct record* search_record(struct hash_table* ht, const char* code) {
    if (ht == NULL) {
        return NULL;
    }

    unsigned int index = hash_function(code);
    struct record* rec = ht->table[index];

    while (rec != NULL) {
        if (strcmp(rec->code, code) == 0) {
            return rec;
        }
        rec = rec->next;
    }

    return NULL;
}

void update_record(struct hash_table* ht, const char* code, const char* new_type) {
    struct record* rec = search_record(ht, code);
    if (rec != NULL) {
        free(rec->type);
        rec->type = strdup(new_type);
    }
}

void delete_record_helper(struct record** rec_ptr, const char* code) {
    if (*rec_ptr == NULL) {
        return;
    }

    if (strcmp((*rec_ptr)->code, code) == 0) {
        struct record* temp = *rec_ptr;
        *rec_ptr = (*rec_ptr)->next;
        free(temp->code);
        free(temp->type);
        free(temp);
        return;
    }

    delete_record_helper(&((*rec_ptr)->next), code);
}

void delete_record(struct hash_table* ht, const char* code) {
    if (ht == NULL) {
        return;
    }

    unsigned int index = hash_function(code);
    delete_record_helper(&(ht->table[index]), code);
}

void display_table_helper(struct record* rec, int index, struct hash_table* ht) {
    if (rec != NULL) {
        printf("code=%s, type=%s -> ", rec->code, rec->type);
        display_table_helper(rec->next, index, ht);
    } else {
        printf("NULL\n");
        if (index < TABLE_SIZE - 1) {
            display_table_helper(ht->table[index + 1], index + 1, ht);
        }
    }
}

void display_table(struct hash_table* ht) {
    printf("Hash Table:\n");
    display_table_helper(ht->table[0], 0, ht);
}

void free_table_helper(struct record* rec) {
    if (rec == NULL) {
        return;
    }

    struct record* next = rec->next;

    free(rec->code);
    free(rec->type);
    free(rec);

    free_table_helper(next);
}

void free_table(struct hash_table* ht) {
    if (ht == NULL) {
        return;
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        free_table_helper(ht->table[i]);
    }

    free(ht);
}

int main() {
    struct hash_table* ht = create_table();

    // Exemplo de uso
    struct record* rec1 = createRecord("ABC", "Type A");
    struct record* rec2 = createRecord("DEF", "Type B");
    struct record* rec3 = createRecord("GHI", "Type C");

    insert_record(ht, rec1);
    insert_record(ht, rec2);
    insert_record(ht, rec3);

    display_table(ht);

    struct record* search_result = search_record(ht, "DEF");
    if (search_result != NULL) {
        printf("Search Result: code=%s, type=%s\n", search_result->code, search_result->type);
    } else {
        printf("Record not found\n");
    }

    update_record(ht, "DEF", "New Type");
    display_table(ht);

    delete_record(ht, "ABC");
    display_table(ht);

    free_table(ht);

    return 0;
}

/*
int main() {
    struct hash_table* ht = create_table();

    // Exemplo de uso
    struct record* rec1 = create_record("123", "TypeA");
    struct record* rec2 = create_record("456", "TypeB");
    struct record* rec3 = create_record("789", "TypeC");

    insert_record(ht, rec1);
    insert_record(ht, rec2);
    insert_record(ht, rec3);

    display_table(ht);

    update_record(ht, "456", "NewTypeB");
    delete_record(ht, "789");

    display_table(ht);

    free_table(ht);

    return 0;
}
*/


