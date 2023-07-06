#ifndef RECORD
#define RECORD

struct record {
	   char * code; /* field for storing the output code */
	   char * type; /* field for another purpose */
	   struct record *next; /* ponteiro para o próximo registro na lista encadeada */
};

typedef struct record record;
 
void freeRecord(record *);
record * createRecord(char *, char *);

#endif