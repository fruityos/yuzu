#ifndef PARSER_H
#define PARSER_H

enum ast_t {
	AST_PROGRAM = 0,
	AST_DEFINITION,
	AST_STATEMENT,
	AST_LVALUE,
	AST_RVALUE,
	AST_BINOP,
	AST_UNARY,
	AST_CONSTANT,
	AST_LEAF
};

enum ast_subtypes_t {
	STATEMENT_LOCAL = 0,
	STATEMENT_IF,
	STATEMENT_WHILE,
	STATEMENT_RETURN,
	STATEMENT_RVALUE,
	LVALUE_ID,
	LVALUE_INDIRECTION,
	RVALUE_BINOP,
	RVALUE_FUNCTION_CALL,
	RVALUE_ASSIGN_WORD,
	RVALUE_ASSIGN_BYTE,
	RVALUE_LVALUE_WORD,
	RVALUE_LVALUE_BYTE,
	RVALUE_UNARY,
	RVALUE_PARENS,
	RVALUE_CONSTANT
};

typedef struct _astnode_t {
	int type;
	int subType;
	int token;
	char* value;
	struct _astnode_t* kid;
	struct _astnode_t* sibling;
} astnode_t;

#endif
