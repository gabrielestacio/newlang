#include "hash_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"

unsigned int hash_function(const char* code) {
    if (*code == '\0') {
        return 0;
    }

    unsigned int sum = strlen(code);
    return sum % TABLE_SIZE;
}

void free_Record(record * rec){
  if (rec) {
    if (rec->code != NULL) free(rec->code);
	  if (rec->type != NULL) free(rec->type);
    free(rec);
  }
}

record* create_Record(const char* code, const char* type) {
    struct record* new_record = (struct record*)malloc(sizeof(struct record));
    new_record->code = strdup(code);
    new_record->type = strdup(type);
    new_record->next = NULL; // Define o próximo registro como NULL por padrão
    return new_record;
}

hash_table* create_table() {
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

record* search_record(struct hash_table* ht, const char* code) {
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

