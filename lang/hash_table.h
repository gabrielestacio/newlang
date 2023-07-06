#ifndef HASH_TABLE
#define HASH_TABLE
#define TABLE_SIZE 256

#include "record.h"

struct hash_table {
    struct record* table[TABLE_SIZE];
};
typedef struct hash_table hash_table;

void free_Record(record * rec);
record * create_Record(const char* code, const char* type);
unsigned int hash_function(const char* code);
hash_table* create_table();
void insert_record(struct hash_table* ht, struct record* rec);
record* search_record(struct hash_table* ht, const char* code);
void update_record(struct hash_table* ht, const char* code, const char* new_type);
void delete_record_helper(struct record** rec_ptr, const char* code);
void delete_record(struct hash_table* ht, const char* code);
void display_table_helper(struct record* rec, int index, struct hash_table* ht);
void display_table(struct hash_table* ht);
void free_table_helper(struct record* rec);
void free_table(struct hash_table* ht);

#endif