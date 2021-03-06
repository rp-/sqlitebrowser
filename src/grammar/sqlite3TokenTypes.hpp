#ifndef INC_sqlite3TokenTypes_hpp_
#define INC_sqlite3TokenTypes_hpp_

/* $ANTLR 2.7.7 (20130425): "sqlite3.g" -> "sqlite3TokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API sqlite3TokenTypes {
#endif
	enum {
		EOF_ = 1,
		ABORT = 4,
		ACTION = 5,
		AUTOINCREMENT = 6,
		AS = 7,
		ASC = 8,
		AND = 9,
		OR = 10,
		CASCADE = 11,
		CASE_T = 12,
		CAST = 13,
		CHECK = 14,
		CREATE = 15,
		COLLATE = 16,
		CONFLICT = 17,
		CONSTRAINT = 18,
		CURRENT_TIME = 19,
		CURRENT_DATE = 20,
		CURRENT_TIMESTAMP = 21,
		DEFAULT = 22,
		DEFERRABLE = 23,
		DEFERRED = 24,
		DELETE = 25,
		DESC = 26,
		ELSE_T = 27,
		END = 28,
		ESCAPE = 29,
		FAIL = 30,
		FOREIGN = 31,
		GLOB = 32,
		KEY = 33,
		LIKE = 34,
		TABLE = 35,
		IF_T = 36,
		IGNORE = 37,
		INITIALLY = 38,
		IMMEDIATE = 39,
		IS = 40,
		NOT = 41,
		NULL_T = 42,
		MATCH = 43,
		EXISTS = 44,
		ON = 45,
		PRIMARY = 46,
		RAISE = 47,
		REFERENCES = 48,
		REGEXP = 49,
		REPLACE = 50,
		RESTRICT = 51,
		ROLLBACK = 52,
		ROWID = 53,
		SET = 54,
		TEMPORARY = 55,
		TEMP = 56,
		THEN = 57,
		UNIQUE = 58,
		UPDATE = 59,
		WHEN = 60,
		WITHOUT = 61,
		TYPE_NAME = 62,
		COLUMNDEF = 63,
		COLUMNCONSTRAINT = 64,
		TABLECONSTRAINT = 65,
		CREATETABLE = 66,
		KEYWORDASTABLENAME = 67,
		KEYWORDASCOLUMNNAME = 68,
		DIGIT = 69,
		DOT = 70,
		ID = 71,
		QUOTEDID = 72,
		QUOTEDLITERAL = 73,
		NUMERIC = 74,
		NL = 75,
		COMMENT = 76,
		WS = 77,
		STRINGLITERAL = 78,
		LPAREN = 79,
		RPAREN = 80,
		COMMA = 81,
		SEMI = 82,
		PLUS = 83,
		MINUS = 84,
		STAR = 85,
		TILDE = 86,
		AMPERSAND = 87,
		BITOR = 88,
		OROP = 89,
		EQUAL = 90,
		EQUAL2 = 91,
		GREATER = 92,
		GREATEREQUAL = 93,
		LOWER = 94,
		LOWEREQUAL = 95,
		UNEQUAL = 96,
		UNEQUAL2 = 97,
		BITWISELEFT = 98,
		BITWISERIGHT = 99,
		NO = 100,
		SELECT = 101,
		SLASH = 102,
		PERCENT = 103,
		IN = 104,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_sqlite3TokenTypes_hpp_*/
