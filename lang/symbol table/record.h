#ifndef RECORD
#define RECORD

#define TABLE_SIZE 256


struct record {
    char* code; /* campo para armazenar o código */
    char* type; /* campo para outro propósito */
    struct record* next; /* ponteiro para o próximo registro na lista encadeada */
};
typedef struct record record;

struct hash_table {
    struct record* table[TABLE_SIZE];
};
typedef struct hash_table hash_table;

void freeRecord(record *);
record * createRecord(const char* code, const char* type);
unsigned int hash_function(const char* code);
void freeRecord(record * rec);
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