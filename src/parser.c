#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_LF = 2,
  anon_sym_device = 3,
  anon_sym_12C508 = 4,
  anon_sym_12C509 = 5,
  anon_sym_12E518 = 6,
  anon_sym_12E519 = 7,
  anon_sym_12F629 = 8,
  anon_sym_12C671 = 9,
  anon_sym_12C672 = 10,
  anon_sym_12F675 = 11,
  anon_sym_16C53 = 12,
  anon_sym_16C54 = 13,
  anon_sym_16C55 = 14,
  anon_sym_16C56 = 15,
  anon_sym_16C57 = 16,
  anon_sym_16C58 = 17,
  anon_sym_16C61 = 18,
  anon_sym_16C62 = 19,
  anon_sym_16C63 = 20,
  anon_sym_16C64 = 21,
  anon_sym_16C65 = 22,
  anon_sym_16C66 = 23,
  anon_sym_16C620 = 24,
  anon_sym_16C621 = 25,
  anon_sym_16C622 = 26,
  anon_sym_16E623 = 27,
  anon_sym_16E624 = 28,
  anon_sym_16E625 = 29,
  anon_sym_16C71 = 30,
  anon_sym_16C72 = 31,
  anon_sym_16C73 = 32,
  anon_sym_16C74 = 33,
  anon_sym_16C76 = 34,
  anon_sym_16C77 = 35,
  anon_sym_16F818 = 36,
  anon_sym_16F819 = 37,
  anon_sym_16C83 = 38,
  anon_sym_16C84 = 39,
  anon_sym_16F83 = 40,
  anon_sym_16F84 = 41,
  anon_sym_16F873 = 42,
  anon_sym_16F874 = 43,
  anon_sym_16F876 = 44,
  anon_sym_16F877 = 45,
  anon_sym_12c508 = 46,
  anon_sym_12c509 = 47,
  anon_sym_12e518 = 48,
  anon_sym_12e519 = 49,
  anon_sym_12f629 = 50,
  anon_sym_12c671 = 51,
  anon_sym_12c672 = 52,
  anon_sym_12f675 = 53,
  anon_sym_16c53 = 54,
  anon_sym_16c54 = 55,
  anon_sym_16c55 = 56,
  anon_sym_16c56 = 57,
  anon_sym_16c57 = 58,
  anon_sym_16c58 = 59,
  anon_sym_16c61 = 60,
  anon_sym_16c62 = 61,
  anon_sym_16c63 = 62,
  anon_sym_16c64 = 63,
  anon_sym_16c65 = 64,
  anon_sym_16c66 = 65,
  anon_sym_16c620 = 66,
  anon_sym_16c621 = 67,
  anon_sym_16c622 = 68,
  anon_sym_16e623 = 69,
  anon_sym_16e624 = 70,
  anon_sym_16e625 = 71,
  anon_sym_16c71 = 72,
  anon_sym_16c72 = 73,
  anon_sym_16c73 = 74,
  anon_sym_16c74 = 75,
  anon_sym_16c76 = 76,
  anon_sym_16c77 = 77,
  anon_sym_16f818 = 78,
  anon_sym_16f819 = 79,
  anon_sym_16c83 = 80,
  anon_sym_16c84 = 81,
  anon_sym_16f83 = 82,
  anon_sym_16f84 = 83,
  anon_sym_16f873 = 84,
  anon_sym_16f874 = 85,
  anon_sym_16f876 = 86,
  anon_sym_16f877 = 87,
  sym_label = 88,
  sym_decimal = 89,
  sym_hex = 90,
  sym_ascii = 91,
  sym_binary = 92,
  sym_whitespace = 93,
  anon_sym_clrw = 94,
  anon_sym_clrwdt = 95,
  anon_sym_nop = 96,
  anon_sym_option = 97,
  anon_sym_sleep = 98,
  anon_sym_retfie = 99,
  anon_sym_return = 100,
  aux_sym_onecommand_token1 = 101,
  aux_sym_onecommand_token2 = 102,
  aux_sym_onecommand_token3 = 103,
  aux_sym_onecommand_token4 = 104,
  aux_sym_onecommand_token5 = 105,
  aux_sym_onecommand_token6 = 106,
  aux_sym_onecommand_token7 = 107,
  aux_sym_onecommand_token8 = 108,
  aux_sym_onecommand_token9 = 109,
  aux_sym_onecommand_token10 = 110,
  aux_sym_onecommand_token11 = 111,
  aux_sym_onecommand_token12 = 112,
  aux_sym_onecommand_token13 = 113,
  aux_sym_onecommand_token14 = 114,
  aux_sym_twocommand_token1 = 115,
  aux_sym_twocommand_token2 = 116,
  aux_sym_twocommand_token3 = 117,
  aux_sym_twocommand_token4 = 118,
  aux_sym_twocommand_token5 = 119,
  anon_sym_COMMA = 120,
  aux_sym_twooptcommand_token1 = 121,
  aux_sym_twooptcommand_token2 = 122,
  aux_sym_twooptcommand_token3 = 123,
  aux_sym_twooptcommand_token4 = 124,
  aux_sym_twooptcommand_token5 = 125,
  aux_sym_twooptcommand_token6 = 126,
  aux_sym_twooptcommand_token7 = 127,
  aux_sym_twooptcommand_token8 = 128,
  aux_sym_twooptcommand_token9 = 129,
  aux_sym_twooptcommand_token10 = 130,
  aux_sym_twooptcommand_token11 = 131,
  aux_sym_twooptcommand_token12 = 132,
  aux_sym_twooptcommand_token13 = 133,
  sym_operation = 134,
  sym_source_file = 135,
  sym_comment = 136,
  sym_line = 137,
  sym_devicedef = 138,
  sym_devicename = 139,
  sym__arguments = 140,
  sym__number = 141,
  sym__statement = 142,
  sym_onecommand = 143,
  sym_twocommand = 144,
  sym_twooptcommand = 145,
  aux_sym_source_file_repeat1 = 146,
  aux_sym_source_file_repeat2 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_device] = "device",
  [anon_sym_12C508] = "12C508",
  [anon_sym_12C509] = "12C509",
  [anon_sym_12E518] = "12E518",
  [anon_sym_12E519] = "12E519",
  [anon_sym_12F629] = "12F629",
  [anon_sym_12C671] = "12C671",
  [anon_sym_12C672] = "12C672",
  [anon_sym_12F675] = "12F675",
  [anon_sym_16C53] = "16C53",
  [anon_sym_16C54] = "16C54",
  [anon_sym_16C55] = "16C55",
  [anon_sym_16C56] = "16C56",
  [anon_sym_16C57] = "16C57",
  [anon_sym_16C58] = "16C58",
  [anon_sym_16C61] = "16C61",
  [anon_sym_16C62] = "16C62",
  [anon_sym_16C63] = "16C63",
  [anon_sym_16C64] = "16C64",
  [anon_sym_16C65] = "16C65",
  [anon_sym_16C66] = "16C66",
  [anon_sym_16C620] = "16C620",
  [anon_sym_16C621] = "16C621",
  [anon_sym_16C622] = "16C622",
  [anon_sym_16E623] = "16E623",
  [anon_sym_16E624] = "16E624",
  [anon_sym_16E625] = "16E625",
  [anon_sym_16C71] = "16C71",
  [anon_sym_16C72] = "16C72",
  [anon_sym_16C73] = "16C73",
  [anon_sym_16C74] = "16C74",
  [anon_sym_16C76] = "16C76",
  [anon_sym_16C77] = "16C77",
  [anon_sym_16F818] = "16F818",
  [anon_sym_16F819] = "16F819",
  [anon_sym_16C83] = "16C83",
  [anon_sym_16C84] = "16C84",
  [anon_sym_16F83] = "16F83",
  [anon_sym_16F84] = "16F84",
  [anon_sym_16F873] = "16F873",
  [anon_sym_16F874] = "16F874",
  [anon_sym_16F876] = "16F876",
  [anon_sym_16F877] = "16F877",
  [anon_sym_12c508] = "12c508",
  [anon_sym_12c509] = "12c509",
  [anon_sym_12e518] = "12e518",
  [anon_sym_12e519] = "12e519",
  [anon_sym_12f629] = "12f629",
  [anon_sym_12c671] = "12c671",
  [anon_sym_12c672] = "12c672",
  [anon_sym_12f675] = "12f675",
  [anon_sym_16c53] = "16c53",
  [anon_sym_16c54] = "16c54",
  [anon_sym_16c55] = "16c55",
  [anon_sym_16c56] = "16c56",
  [anon_sym_16c57] = "16c57",
  [anon_sym_16c58] = "16c58",
  [anon_sym_16c61] = "16c61",
  [anon_sym_16c62] = "16c62",
  [anon_sym_16c63] = "16c63",
  [anon_sym_16c64] = "16c64",
  [anon_sym_16c65] = "16c65",
  [anon_sym_16c66] = "16c66",
  [anon_sym_16c620] = "16c620",
  [anon_sym_16c621] = "16c621",
  [anon_sym_16c622] = "16c622",
  [anon_sym_16e623] = "16e623",
  [anon_sym_16e624] = "16e624",
  [anon_sym_16e625] = "16e625",
  [anon_sym_16c71] = "16c71",
  [anon_sym_16c72] = "16c72",
  [anon_sym_16c73] = "16c73",
  [anon_sym_16c74] = "16c74",
  [anon_sym_16c76] = "16c76",
  [anon_sym_16c77] = "16c77",
  [anon_sym_16f818] = "16f818",
  [anon_sym_16f819] = "16f819",
  [anon_sym_16c83] = "16c83",
  [anon_sym_16c84] = "16c84",
  [anon_sym_16f83] = "16f83",
  [anon_sym_16f84] = "16f84",
  [anon_sym_16f873] = "16f873",
  [anon_sym_16f874] = "16f874",
  [anon_sym_16f876] = "16f876",
  [anon_sym_16f877] = "16f877",
  [sym_label] = "label",
  [sym_decimal] = "decimal",
  [sym_hex] = "hex",
  [sym_ascii] = "ascii",
  [sym_binary] = "binary",
  [sym_whitespace] = "whitespace",
  [anon_sym_clrw] = "clrw",
  [anon_sym_clrwdt] = "clrwdt",
  [anon_sym_nop] = "nop",
  [anon_sym_option] = "option",
  [anon_sym_sleep] = "sleep",
  [anon_sym_retfie] = "retfie",
  [anon_sym_return] = "return",
  [aux_sym_onecommand_token1] = "onecommand_token1",
  [aux_sym_onecommand_token2] = "onecommand_token2",
  [aux_sym_onecommand_token3] = "onecommand_token3",
  [aux_sym_onecommand_token4] = "onecommand_token4",
  [aux_sym_onecommand_token5] = "onecommand_token5",
  [aux_sym_onecommand_token6] = "onecommand_token6",
  [aux_sym_onecommand_token7] = "onecommand_token7",
  [aux_sym_onecommand_token8] = "onecommand_token8",
  [aux_sym_onecommand_token9] = "onecommand_token9",
  [aux_sym_onecommand_token10] = "onecommand_token10",
  [aux_sym_onecommand_token11] = "onecommand_token11",
  [aux_sym_onecommand_token12] = "onecommand_token12",
  [aux_sym_onecommand_token13] = "onecommand_token13",
  [aux_sym_onecommand_token14] = "onecommand_token14",
  [aux_sym_twocommand_token1] = "twocommand_token1",
  [aux_sym_twocommand_token2] = "twocommand_token2",
  [aux_sym_twocommand_token3] = "twocommand_token3",
  [aux_sym_twocommand_token4] = "twocommand_token4",
  [aux_sym_twocommand_token5] = "twocommand_token5",
  [anon_sym_COMMA] = ",",
  [aux_sym_twooptcommand_token1] = "twooptcommand_token1",
  [aux_sym_twooptcommand_token2] = "twooptcommand_token2",
  [aux_sym_twooptcommand_token3] = "twooptcommand_token3",
  [aux_sym_twooptcommand_token4] = "twooptcommand_token4",
  [aux_sym_twooptcommand_token5] = "twooptcommand_token5",
  [aux_sym_twooptcommand_token6] = "twooptcommand_token6",
  [aux_sym_twooptcommand_token7] = "twooptcommand_token7",
  [aux_sym_twooptcommand_token8] = "twooptcommand_token8",
  [aux_sym_twooptcommand_token9] = "twooptcommand_token9",
  [aux_sym_twooptcommand_token10] = "twooptcommand_token10",
  [aux_sym_twooptcommand_token11] = "twooptcommand_token11",
  [aux_sym_twooptcommand_token12] = "twooptcommand_token12",
  [aux_sym_twooptcommand_token13] = "twooptcommand_token13",
  [sym_operation] = "operation",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_line] = "line",
  [sym_devicedef] = "devicedef",
  [sym_devicename] = "devicename",
  [sym__arguments] = "_arguments",
  [sym__number] = "_number",
  [sym__statement] = "_statement",
  [sym_onecommand] = "onecommand",
  [sym_twocommand] = "twocommand",
  [sym_twooptcommand] = "twooptcommand",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_device] = anon_sym_device,
  [anon_sym_12C508] = anon_sym_12C508,
  [anon_sym_12C509] = anon_sym_12C509,
  [anon_sym_12E518] = anon_sym_12E518,
  [anon_sym_12E519] = anon_sym_12E519,
  [anon_sym_12F629] = anon_sym_12F629,
  [anon_sym_12C671] = anon_sym_12C671,
  [anon_sym_12C672] = anon_sym_12C672,
  [anon_sym_12F675] = anon_sym_12F675,
  [anon_sym_16C53] = anon_sym_16C53,
  [anon_sym_16C54] = anon_sym_16C54,
  [anon_sym_16C55] = anon_sym_16C55,
  [anon_sym_16C56] = anon_sym_16C56,
  [anon_sym_16C57] = anon_sym_16C57,
  [anon_sym_16C58] = anon_sym_16C58,
  [anon_sym_16C61] = anon_sym_16C61,
  [anon_sym_16C62] = anon_sym_16C62,
  [anon_sym_16C63] = anon_sym_16C63,
  [anon_sym_16C64] = anon_sym_16C64,
  [anon_sym_16C65] = anon_sym_16C65,
  [anon_sym_16C66] = anon_sym_16C66,
  [anon_sym_16C620] = anon_sym_16C620,
  [anon_sym_16C621] = anon_sym_16C621,
  [anon_sym_16C622] = anon_sym_16C622,
  [anon_sym_16E623] = anon_sym_16E623,
  [anon_sym_16E624] = anon_sym_16E624,
  [anon_sym_16E625] = anon_sym_16E625,
  [anon_sym_16C71] = anon_sym_16C71,
  [anon_sym_16C72] = anon_sym_16C72,
  [anon_sym_16C73] = anon_sym_16C73,
  [anon_sym_16C74] = anon_sym_16C74,
  [anon_sym_16C76] = anon_sym_16C76,
  [anon_sym_16C77] = anon_sym_16C77,
  [anon_sym_16F818] = anon_sym_16F818,
  [anon_sym_16F819] = anon_sym_16F819,
  [anon_sym_16C83] = anon_sym_16C83,
  [anon_sym_16C84] = anon_sym_16C84,
  [anon_sym_16F83] = anon_sym_16F83,
  [anon_sym_16F84] = anon_sym_16F84,
  [anon_sym_16F873] = anon_sym_16F873,
  [anon_sym_16F874] = anon_sym_16F874,
  [anon_sym_16F876] = anon_sym_16F876,
  [anon_sym_16F877] = anon_sym_16F877,
  [anon_sym_12c508] = anon_sym_12c508,
  [anon_sym_12c509] = anon_sym_12c509,
  [anon_sym_12e518] = anon_sym_12e518,
  [anon_sym_12e519] = anon_sym_12e519,
  [anon_sym_12f629] = anon_sym_12f629,
  [anon_sym_12c671] = anon_sym_12c671,
  [anon_sym_12c672] = anon_sym_12c672,
  [anon_sym_12f675] = anon_sym_12f675,
  [anon_sym_16c53] = anon_sym_16c53,
  [anon_sym_16c54] = anon_sym_16c54,
  [anon_sym_16c55] = anon_sym_16c55,
  [anon_sym_16c56] = anon_sym_16c56,
  [anon_sym_16c57] = anon_sym_16c57,
  [anon_sym_16c58] = anon_sym_16c58,
  [anon_sym_16c61] = anon_sym_16c61,
  [anon_sym_16c62] = anon_sym_16c62,
  [anon_sym_16c63] = anon_sym_16c63,
  [anon_sym_16c64] = anon_sym_16c64,
  [anon_sym_16c65] = anon_sym_16c65,
  [anon_sym_16c66] = anon_sym_16c66,
  [anon_sym_16c620] = anon_sym_16c620,
  [anon_sym_16c621] = anon_sym_16c621,
  [anon_sym_16c622] = anon_sym_16c622,
  [anon_sym_16e623] = anon_sym_16e623,
  [anon_sym_16e624] = anon_sym_16e624,
  [anon_sym_16e625] = anon_sym_16e625,
  [anon_sym_16c71] = anon_sym_16c71,
  [anon_sym_16c72] = anon_sym_16c72,
  [anon_sym_16c73] = anon_sym_16c73,
  [anon_sym_16c74] = anon_sym_16c74,
  [anon_sym_16c76] = anon_sym_16c76,
  [anon_sym_16c77] = anon_sym_16c77,
  [anon_sym_16f818] = anon_sym_16f818,
  [anon_sym_16f819] = anon_sym_16f819,
  [anon_sym_16c83] = anon_sym_16c83,
  [anon_sym_16c84] = anon_sym_16c84,
  [anon_sym_16f83] = anon_sym_16f83,
  [anon_sym_16f84] = anon_sym_16f84,
  [anon_sym_16f873] = anon_sym_16f873,
  [anon_sym_16f874] = anon_sym_16f874,
  [anon_sym_16f876] = anon_sym_16f876,
  [anon_sym_16f877] = anon_sym_16f877,
  [sym_label] = sym_label,
  [sym_decimal] = sym_decimal,
  [sym_hex] = sym_hex,
  [sym_ascii] = sym_ascii,
  [sym_binary] = sym_binary,
  [sym_whitespace] = sym_whitespace,
  [anon_sym_clrw] = anon_sym_clrw,
  [anon_sym_clrwdt] = anon_sym_clrwdt,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_retfie] = anon_sym_retfie,
  [anon_sym_return] = anon_sym_return,
  [aux_sym_onecommand_token1] = aux_sym_onecommand_token1,
  [aux_sym_onecommand_token2] = aux_sym_onecommand_token2,
  [aux_sym_onecommand_token3] = aux_sym_onecommand_token3,
  [aux_sym_onecommand_token4] = aux_sym_onecommand_token4,
  [aux_sym_onecommand_token5] = aux_sym_onecommand_token5,
  [aux_sym_onecommand_token6] = aux_sym_onecommand_token6,
  [aux_sym_onecommand_token7] = aux_sym_onecommand_token7,
  [aux_sym_onecommand_token8] = aux_sym_onecommand_token8,
  [aux_sym_onecommand_token9] = aux_sym_onecommand_token9,
  [aux_sym_onecommand_token10] = aux_sym_onecommand_token10,
  [aux_sym_onecommand_token11] = aux_sym_onecommand_token11,
  [aux_sym_onecommand_token12] = aux_sym_onecommand_token12,
  [aux_sym_onecommand_token13] = aux_sym_onecommand_token13,
  [aux_sym_onecommand_token14] = aux_sym_onecommand_token14,
  [aux_sym_twocommand_token1] = aux_sym_twocommand_token1,
  [aux_sym_twocommand_token2] = aux_sym_twocommand_token2,
  [aux_sym_twocommand_token3] = aux_sym_twocommand_token3,
  [aux_sym_twocommand_token4] = aux_sym_twocommand_token4,
  [aux_sym_twocommand_token5] = aux_sym_twocommand_token5,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_twooptcommand_token1] = aux_sym_twooptcommand_token1,
  [aux_sym_twooptcommand_token2] = aux_sym_twooptcommand_token2,
  [aux_sym_twooptcommand_token3] = aux_sym_twooptcommand_token3,
  [aux_sym_twooptcommand_token4] = aux_sym_twooptcommand_token4,
  [aux_sym_twooptcommand_token5] = aux_sym_twooptcommand_token5,
  [aux_sym_twooptcommand_token6] = aux_sym_twooptcommand_token6,
  [aux_sym_twooptcommand_token7] = aux_sym_twooptcommand_token7,
  [aux_sym_twooptcommand_token8] = aux_sym_twooptcommand_token8,
  [aux_sym_twooptcommand_token9] = aux_sym_twooptcommand_token9,
  [aux_sym_twooptcommand_token10] = aux_sym_twooptcommand_token10,
  [aux_sym_twooptcommand_token11] = aux_sym_twooptcommand_token11,
  [aux_sym_twooptcommand_token12] = aux_sym_twooptcommand_token12,
  [aux_sym_twooptcommand_token13] = aux_sym_twooptcommand_token13,
  [sym_operation] = sym_operation,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_line] = sym_line,
  [sym_devicedef] = sym_devicedef,
  [sym_devicename] = sym_devicename,
  [sym__arguments] = sym__arguments,
  [sym__number] = sym__number,
  [sym__statement] = sym__statement,
  [sym_onecommand] = sym_onecommand,
  [sym_twocommand] = sym_twocommand,
  [sym_twooptcommand] = sym_twooptcommand,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12C508] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12C509] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12E518] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12E519] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12F629] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12C671] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12C672] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12F675] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C620] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C621] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C622] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16E623] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16E624] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16E625] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F818] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F819] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16C84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F873] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F874] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F876] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16F877] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12c508] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12c509] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12e518] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12e519] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12f629] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12c671] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12c672] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12f675] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c620] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c621] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c622] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16e623] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16e624] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16e625] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f818] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f819] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16c84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f873] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f874] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f876] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16f877] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clrwdt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retfie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onecommand_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_onecommand_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twocommand_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twocommand_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twocommand_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twocommand_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twocommand_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_twooptcommand_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_twooptcommand_token13] = {
    .visible = false,
    .named = false,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_devicedef] = {
    .visible = true,
    .named = true,
  },
  [sym_devicename] = {
    .visible = true,
    .named = true,
  },
  [sym__arguments] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_onecommand] = {
    .visible = true,
    .named = true,
  },
  [sym_twocommand] = {
    .visible = true,
    .named = true,
  },
  [sym_twooptcommand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(205);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == '0') ADVANCE(384);
      if (lookahead == '1') ADVANCE(381);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == 'B') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'R') ADVANCE(145);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(387);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '2') ADVANCE(239);
      if (lookahead == '3') ADVANCE(242);
      if (lookahead == '4') ADVANCE(244);
      if (lookahead == '5') ADVANCE(246);
      if (lookahead == '6') ADVANCE(248);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(262);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead == '7') ADVANCE(272);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '2') ADVANCE(323);
      if (lookahead == '3') ADVANCE(326);
      if (lookahead == '4') ADVANCE(328);
      if (lookahead == '5') ADVANCE(330);
      if (lookahead == '6') ADVANCE(332);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(346);
      if (lookahead == '2') ADVANCE(348);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead == '6') ADVANCE(354);
      if (lookahead == '7') ADVANCE(356);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(220);
      if (lookahead == '2') ADVANCE(222);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == '2') ADVANCE(306);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(237);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead == '3') ADVANCE(241);
      if (lookahead == '4') ADVANCE(243);
      if (lookahead == '5') ADVANCE(245);
      if (lookahead == '6') ADVANCE(247);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(261);
      if (lookahead == '2') ADVANCE(263);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(267);
      if (lookahead == '6') ADVANCE(269);
      if (lookahead == '7') ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(324);
      if (lookahead == '3') ADVANCE(325);
      if (lookahead == '4') ADVANCE(327);
      if (lookahead == '5') ADVANCE(329);
      if (lookahead == '6') ADVANCE(331);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(345);
      if (lookahead == '2') ADVANCE(347);
      if (lookahead == '3') ADVANCE(349);
      if (lookahead == '4') ADVANCE(351);
      if (lookahead == '6') ADVANCE(353);
      if (lookahead == '7') ADVANCE(355);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(303);
      if (lookahead == '2') ADVANCE(305);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '1') ADVANCE(87);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(284);
      if (lookahead == '7') ADVANCE(43);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '3') ADVANCE(281);
      if (lookahead == '4') ADVANCE(283);
      if (lookahead == '7') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '3') ADVANCE(366);
      if (lookahead == '4') ADVANCE(368);
      if (lookahead == '7') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '3') ADVANCE(365);
      if (lookahead == '4') ADVANCE(367);
      if (lookahead == '7') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == '6') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(100);
      if (lookahead == '7') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '7') ADVANCE(58);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(101);
      if (lookahead == '7') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == '3') ADVANCE(226);
      if (lookahead == '4') ADVANCE(228);
      if (lookahead == '5') ADVANCE(230);
      if (lookahead == '6') ADVANCE(232);
      if (lookahead == '7') ADVANCE(234);
      if (lookahead == '8') ADVANCE(236);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == '3') ADVANCE(278);
      if (lookahead == '4') ADVANCE(280);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 40:
      if (lookahead == '3') ADVANCE(310);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == '5') ADVANCE(314);
      if (lookahead == '6') ADVANCE(316);
      if (lookahead == '7') ADVANCE(318);
      if (lookahead == '8') ADVANCE(320);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(362);
      if (lookahead == '4') ADVANCE(364);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == '3') ADVANCE(256);
      if (lookahead == '4') ADVANCE(258);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 43:
      if (lookahead == '3') ADVANCE(286);
      if (lookahead == '4') ADVANCE(288);
      if (lookahead == '6') ADVANCE(290);
      if (lookahead == '7') ADVANCE(292);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 44:
      if (lookahead == '3') ADVANCE(340);
      if (lookahead == '4') ADVANCE(342);
      if (lookahead == '5') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == '3') ADVANCE(370);
      if (lookahead == '4') ADVANCE(372);
      if (lookahead == '6') ADVANCE(374);
      if (lookahead == '7') ADVANCE(376);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 46:
      if (lookahead == '3') ADVANCE(225);
      if (lookahead == '4') ADVANCE(227);
      if (lookahead == '5') ADVANCE(229);
      if (lookahead == '6') ADVANCE(231);
      if (lookahead == '7') ADVANCE(233);
      if (lookahead == '8') ADVANCE(235);
      END_STATE();
    case 47:
      if (lookahead == '3') ADVANCE(277);
      if (lookahead == '4') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == '3') ADVANCE(309);
      if (lookahead == '4') ADVANCE(311);
      if (lookahead == '5') ADVANCE(313);
      if (lookahead == '6') ADVANCE(315);
      if (lookahead == '7') ADVANCE(317);
      if (lookahead == '8') ADVANCE(319);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(361);
      if (lookahead == '4') ADVANCE(363);
      END_STATE();
    case 50:
      if (lookahead == '3') ADVANCE(255);
      if (lookahead == '4') ADVANCE(257);
      if (lookahead == '5') ADVANCE(259);
      END_STATE();
    case 51:
      if (lookahead == '3') ADVANCE(285);
      if (lookahead == '4') ADVANCE(287);
      if (lookahead == '6') ADVANCE(289);
      if (lookahead == '7') ADVANCE(291);
      END_STATE();
    case 52:
      if (lookahead == '3') ADVANCE(339);
      if (lookahead == '4') ADVANCE(341);
      if (lookahead == '5') ADVANCE(343);
      END_STATE();
    case 53:
      if (lookahead == '3') ADVANCE(369);
      if (lookahead == '4') ADVANCE(371);
      if (lookahead == '6') ADVANCE(373);
      if (lookahead == '7') ADVANCE(375);
      END_STATE();
    case 54:
      if (lookahead == '5') ADVANCE(4);
      if (lookahead == '6') ADVANCE(78);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 55:
      if (lookahead == '5') ADVANCE(21);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(38);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '7') ADVANCE(9);
      if (lookahead == '8') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(224);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(308);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 59:
      if (lookahead == '5') ADVANCE(5);
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == '5') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == '5') ADVANCE(46);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '7') ADVANCE(16);
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == '5') ADVANCE(223);
      END_STATE();
    case 63:
      if (lookahead == '5') ADVANCE(307);
      END_STATE();
    case 64:
      if (lookahead == '5') ADVANCE(40);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '7') ADVANCE(11);
      if (lookahead == '8') ADVANCE(41);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == '5') ADVANCE(48);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '7') ADVANCE(18);
      if (lookahead == '8') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == '5') ADVANCE(6);
      if (lookahead == '6') ADVANCE(80);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 68:
      if (lookahead == '5') ADVANCE(7);
      if (lookahead == '6') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == '5') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 72:
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 73:
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 74:
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 75:
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 76:
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == '6') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == '7') ADVANCE(12);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == '7') ADVANCE(19);
      END_STATE();
    case 80:
      if (lookahead == '7') ADVANCE(13);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 81:
      if (lookahead == '7') ADVANCE(20);
      END_STATE();
    case 82:
      if (lookahead == '8') ADVANCE(25);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 83:
      if (lookahead == '8') ADVANCE(210);
      if (lookahead == '9') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 84:
      if (lookahead == '8') ADVANCE(214);
      if (lookahead == '9') ADVANCE(216);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 85:
      if (lookahead == '8') ADVANCE(294);
      if (lookahead == '9') ADVANCE(296);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == '8') ADVANCE(298);
      if (lookahead == '9') ADVANCE(300);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 87:
      if (lookahead == '8') ADVANCE(274);
      if (lookahead == '9') ADVANCE(276);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == '8') ADVANCE(358);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == '8') ADVANCE(26);
      END_STATE();
    case 90:
      if (lookahead == '8') ADVANCE(209);
      if (lookahead == '9') ADVANCE(211);
      END_STATE();
    case 91:
      if (lookahead == '8') ADVANCE(213);
      if (lookahead == '9') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == '8') ADVANCE(293);
      if (lookahead == '9') ADVANCE(295);
      END_STATE();
    case 93:
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == '9') ADVANCE(299);
      END_STATE();
    case 94:
      if (lookahead == '8') ADVANCE(273);
      if (lookahead == '9') ADVANCE(275);
      END_STATE();
    case 95:
      if (lookahead == '8') ADVANCE(357);
      if (lookahead == '9') ADVANCE(359);
      END_STATE();
    case 96:
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 97:
      if (lookahead == '8') ADVANCE(28);
      END_STATE();
    case 98:
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 99:
      if (lookahead == '9') ADVANCE(302);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == '9') ADVANCE(217);
      END_STATE();
    case 101:
      if (lookahead == '9') ADVANCE(301);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 146:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(412);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(421);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 155:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 156:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 157:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(428);
      END_STATE();
    case 158:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 159:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 160:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      END_STATE();
    case 161:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      END_STATE();
    case 162:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(429);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 174:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 180:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 193:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 194:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 195:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(410);
      END_STATE();
    case 196:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(409);
      END_STATE();
    case 197:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 198:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 199:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(404);
      END_STATE();
    case 200:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(408);
      END_STATE();
    case 201:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(423);
      END_STATE();
    case 202:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(420);
      END_STATE();
    case 203:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 204:
      if (eof) ADVANCE(205);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_12C508);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_12C508);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_12C509);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_12C509);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_12E518);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_12E518);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_12E519);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_12E519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_12F629);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_12F629);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_12C671);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_12C671);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_12C672);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_12C672);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_12F675);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_12F675);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_16C53);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_16C53);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_16C54);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_16C54);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_16C55);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_16C55);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_16C56);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_16C56);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_16C57);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_16C57);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_16C58);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_16C58);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_16C61);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_16C61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_16C62);
      if (lookahead == '0') ADVANCE(250);
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '2') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_16C62);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == '1') ADVANCE(251);
      if (lookahead == '2') ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_16C63);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_16C63);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_16C64);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_16C64);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_16C65);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_16C65);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_16C66);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_16C66);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_16C620);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_16C620);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_16C621);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_16C621);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_16C622);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_16C622);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_16E623);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_16E623);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_16E624);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_16E624);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_16E625);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_16E625);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_16C71);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_16C71);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_16C72);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_16C72);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_16C73);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_16C73);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_16C74);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_16C74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_16C76);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_16C76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_16C77);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_16C77);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_16F818);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_16F818);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_16F819);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_16F819);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_16C83);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_16C83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_16C84);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_16C84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_16F83);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_16F83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_16F84);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_16F84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_16F873);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_16F873);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_16F874);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_16F874);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_16F876);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_16F876);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_16F877);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_16F877);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_12c508);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_12c508);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_12c509);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_12c509);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_12e518);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_12e518);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_12e519);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_12e519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_12f629);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_12f629);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_12c671);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_12c671);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_12c672);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_12c672);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_12f675);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_12f675);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_16c53);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_16c53);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_16c54);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_16c54);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_16c55);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_16c55);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_16c56);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_16c56);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_16c57);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_16c57);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_16c58);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_16c58);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_16c61);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_16c61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_16c62);
      if (lookahead == '0') ADVANCE(334);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead == '2') ADVANCE(338);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_16c62);
      if (lookahead == '0') ADVANCE(333);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead == '2') ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_16c63);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_16c63);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_16c64);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_16c64);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_16c65);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_16c65);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_16c66);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_16c66);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_16c620);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_16c620);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_16c621);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_16c621);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_16c622);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_16c622);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_16e623);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_16e623);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_16e624);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_16e624);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_16e625);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_16e625);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_16c71);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_16c71);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_16c72);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_16c72);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_16c73);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_16c73);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_16c74);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_16c74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_16c76);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_16c76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_16c77);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_16c77);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_16f818);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_16f818);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_16f819);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_16f819);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_16c83);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_16c83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_16c84);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_16c84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_16f83);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_16f83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_16f84);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_16f84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_16f873);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_16f873);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_16f874);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_16f874);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_16f876);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_16f876);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_16f877);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_16f877);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'p') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'u') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '2') ADVANCE(382);
      if (lookahead == '6') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ascii);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_clrw);
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_clrwdt);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_retfie);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_onecommand_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_onecommand_token2);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_onecommand_token3);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_onecommand_token4);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_onecommand_token5);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_onecommand_token6);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_onecommand_token7);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_onecommand_token8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_onecommand_token9);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_onecommand_token10);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_onecommand_token11);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_onecommand_token12);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_onecommand_token13);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_onecommand_token14);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_twocommand_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_twocommand_token2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_twocommand_token3);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_twocommand_token4);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_twocommand_token5);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token4);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token5);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token6);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token7);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token9);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token10);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token11);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token12);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_twooptcommand_token13);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_operation);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_operation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 204},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 204},
  [13] = {.lex_state = 204},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 204},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 204},
  [18] = {.lex_state = 204},
  [19] = {.lex_state = 204},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_12C508] = ACTIONS(1),
    [anon_sym_12C509] = ACTIONS(1),
    [anon_sym_12E518] = ACTIONS(1),
    [anon_sym_12E519] = ACTIONS(1),
    [anon_sym_12F629] = ACTIONS(1),
    [anon_sym_12C671] = ACTIONS(1),
    [anon_sym_12C672] = ACTIONS(1),
    [anon_sym_12F675] = ACTIONS(1),
    [anon_sym_16C53] = ACTIONS(1),
    [anon_sym_16C54] = ACTIONS(1),
    [anon_sym_16C55] = ACTIONS(1),
    [anon_sym_16C56] = ACTIONS(1),
    [anon_sym_16C57] = ACTIONS(1),
    [anon_sym_16C58] = ACTIONS(1),
    [anon_sym_16C61] = ACTIONS(1),
    [anon_sym_16C62] = ACTIONS(1),
    [anon_sym_16C63] = ACTIONS(1),
    [anon_sym_16C64] = ACTIONS(1),
    [anon_sym_16C65] = ACTIONS(1),
    [anon_sym_16C66] = ACTIONS(1),
    [anon_sym_16C620] = ACTIONS(1),
    [anon_sym_16C621] = ACTIONS(1),
    [anon_sym_16C622] = ACTIONS(1),
    [anon_sym_16E623] = ACTIONS(1),
    [anon_sym_16E624] = ACTIONS(1),
    [anon_sym_16E625] = ACTIONS(1),
    [anon_sym_16C71] = ACTIONS(1),
    [anon_sym_16C72] = ACTIONS(1),
    [anon_sym_16C73] = ACTIONS(1),
    [anon_sym_16C74] = ACTIONS(1),
    [anon_sym_16C76] = ACTIONS(1),
    [anon_sym_16C77] = ACTIONS(1),
    [anon_sym_16F818] = ACTIONS(1),
    [anon_sym_16F819] = ACTIONS(1),
    [anon_sym_16C83] = ACTIONS(1),
    [anon_sym_16C84] = ACTIONS(1),
    [anon_sym_16F83] = ACTIONS(1),
    [anon_sym_16F84] = ACTIONS(1),
    [anon_sym_16F873] = ACTIONS(1),
    [anon_sym_16F874] = ACTIONS(1),
    [anon_sym_16F876] = ACTIONS(1),
    [anon_sym_16F877] = ACTIONS(1),
    [anon_sym_12c508] = ACTIONS(1),
    [anon_sym_12c509] = ACTIONS(1),
    [anon_sym_12e518] = ACTIONS(1),
    [anon_sym_12e519] = ACTIONS(1),
    [anon_sym_12f629] = ACTIONS(1),
    [anon_sym_12c671] = ACTIONS(1),
    [anon_sym_12c672] = ACTIONS(1),
    [anon_sym_12f675] = ACTIONS(1),
    [anon_sym_16c53] = ACTIONS(1),
    [anon_sym_16c54] = ACTIONS(1),
    [anon_sym_16c55] = ACTIONS(1),
    [anon_sym_16c56] = ACTIONS(1),
    [anon_sym_16c57] = ACTIONS(1),
    [anon_sym_16c58] = ACTIONS(1),
    [anon_sym_16c61] = ACTIONS(1),
    [anon_sym_16c62] = ACTIONS(1),
    [anon_sym_16c63] = ACTIONS(1),
    [anon_sym_16c64] = ACTIONS(1),
    [anon_sym_16c65] = ACTIONS(1),
    [anon_sym_16c66] = ACTIONS(1),
    [anon_sym_16c620] = ACTIONS(1),
    [anon_sym_16c621] = ACTIONS(1),
    [anon_sym_16c622] = ACTIONS(1),
    [anon_sym_16e623] = ACTIONS(1),
    [anon_sym_16e624] = ACTIONS(1),
    [anon_sym_16e625] = ACTIONS(1),
    [anon_sym_16c71] = ACTIONS(1),
    [anon_sym_16c72] = ACTIONS(1),
    [anon_sym_16c73] = ACTIONS(1),
    [anon_sym_16c74] = ACTIONS(1),
    [anon_sym_16c76] = ACTIONS(1),
    [anon_sym_16c77] = ACTIONS(1),
    [anon_sym_16f818] = ACTIONS(1),
    [anon_sym_16f819] = ACTIONS(1),
    [anon_sym_16c83] = ACTIONS(1),
    [anon_sym_16c84] = ACTIONS(1),
    [anon_sym_16f83] = ACTIONS(1),
    [anon_sym_16f84] = ACTIONS(1),
    [anon_sym_16f873] = ACTIONS(1),
    [anon_sym_16f874] = ACTIONS(1),
    [anon_sym_16f876] = ACTIONS(1),
    [anon_sym_16f877] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_ascii] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_clrw] = ACTIONS(1),
    [anon_sym_clrwdt] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_sleep] = ACTIONS(1),
    [anon_sym_retfie] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [aux_sym_onecommand_token1] = ACTIONS(1),
    [aux_sym_onecommand_token2] = ACTIONS(1),
    [aux_sym_onecommand_token3] = ACTIONS(1),
    [aux_sym_onecommand_token4] = ACTIONS(1),
    [aux_sym_onecommand_token5] = ACTIONS(1),
    [aux_sym_onecommand_token6] = ACTIONS(1),
    [aux_sym_onecommand_token7] = ACTIONS(1),
    [aux_sym_onecommand_token8] = ACTIONS(1),
    [aux_sym_onecommand_token9] = ACTIONS(1),
    [aux_sym_onecommand_token10] = ACTIONS(1),
    [aux_sym_onecommand_token11] = ACTIONS(1),
    [aux_sym_onecommand_token12] = ACTIONS(1),
    [aux_sym_onecommand_token13] = ACTIONS(1),
    [aux_sym_onecommand_token14] = ACTIONS(1),
    [aux_sym_twocommand_token1] = ACTIONS(1),
    [aux_sym_twocommand_token2] = ACTIONS(1),
    [aux_sym_twocommand_token3] = ACTIONS(1),
    [aux_sym_twocommand_token4] = ACTIONS(1),
    [aux_sym_twocommand_token5] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_twooptcommand_token1] = ACTIONS(1),
    [aux_sym_twooptcommand_token2] = ACTIONS(1),
    [aux_sym_twooptcommand_token3] = ACTIONS(1),
    [aux_sym_twooptcommand_token4] = ACTIONS(1),
    [aux_sym_twooptcommand_token5] = ACTIONS(1),
    [aux_sym_twooptcommand_token6] = ACTIONS(1),
    [aux_sym_twooptcommand_token7] = ACTIONS(1),
    [aux_sym_twooptcommand_token8] = ACTIONS(1),
    [aux_sym_twooptcommand_token9] = ACTIONS(1),
    [aux_sym_twooptcommand_token10] = ACTIONS(1),
    [aux_sym_twooptcommand_token11] = ACTIONS(1),
    [aux_sym_twooptcommand_token12] = ACTIONS(1),
    [aux_sym_twooptcommand_token13] = ACTIONS(1),
    [sym_operation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_comment] = STATE(14),
    [sym_devicedef] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_device] = ACTIONS(5),
  },
  [2] = {
    [sym_devicename] = STATE(20),
    [anon_sym_12C508] = ACTIONS(7),
    [anon_sym_12C509] = ACTIONS(7),
    [anon_sym_12E518] = ACTIONS(7),
    [anon_sym_12E519] = ACTIONS(7),
    [anon_sym_12F629] = ACTIONS(7),
    [anon_sym_12C671] = ACTIONS(7),
    [anon_sym_12C672] = ACTIONS(7),
    [anon_sym_12F675] = ACTIONS(7),
    [anon_sym_16C53] = ACTIONS(7),
    [anon_sym_16C54] = ACTIONS(7),
    [anon_sym_16C55] = ACTIONS(7),
    [anon_sym_16C56] = ACTIONS(7),
    [anon_sym_16C57] = ACTIONS(7),
    [anon_sym_16C58] = ACTIONS(7),
    [anon_sym_16C61] = ACTIONS(7),
    [anon_sym_16C62] = ACTIONS(9),
    [anon_sym_16C63] = ACTIONS(7),
    [anon_sym_16C64] = ACTIONS(7),
    [anon_sym_16C65] = ACTIONS(7),
    [anon_sym_16C66] = ACTIONS(7),
    [anon_sym_16C620] = ACTIONS(7),
    [anon_sym_16C621] = ACTIONS(7),
    [anon_sym_16C622] = ACTIONS(7),
    [anon_sym_16E623] = ACTIONS(7),
    [anon_sym_16E624] = ACTIONS(7),
    [anon_sym_16E625] = ACTIONS(7),
    [anon_sym_16C71] = ACTIONS(7),
    [anon_sym_16C72] = ACTIONS(7),
    [anon_sym_16C73] = ACTIONS(7),
    [anon_sym_16C74] = ACTIONS(7),
    [anon_sym_16C76] = ACTIONS(7),
    [anon_sym_16C77] = ACTIONS(7),
    [anon_sym_16F818] = ACTIONS(7),
    [anon_sym_16F819] = ACTIONS(7),
    [anon_sym_16C83] = ACTIONS(7),
    [anon_sym_16C84] = ACTIONS(7),
    [anon_sym_16F83] = ACTIONS(7),
    [anon_sym_16F84] = ACTIONS(7),
    [anon_sym_16F873] = ACTIONS(7),
    [anon_sym_16F874] = ACTIONS(7),
    [anon_sym_16F876] = ACTIONS(7),
    [anon_sym_16F877] = ACTIONS(7),
    [anon_sym_12c508] = ACTIONS(7),
    [anon_sym_12c509] = ACTIONS(7),
    [anon_sym_12e518] = ACTIONS(7),
    [anon_sym_12e519] = ACTIONS(7),
    [anon_sym_12f629] = ACTIONS(7),
    [anon_sym_12c671] = ACTIONS(7),
    [anon_sym_12c672] = ACTIONS(7),
    [anon_sym_12f675] = ACTIONS(7),
    [anon_sym_16c53] = ACTIONS(7),
    [anon_sym_16c54] = ACTIONS(7),
    [anon_sym_16c55] = ACTIONS(7),
    [anon_sym_16c56] = ACTIONS(7),
    [anon_sym_16c57] = ACTIONS(7),
    [anon_sym_16c58] = ACTIONS(7),
    [anon_sym_16c61] = ACTIONS(7),
    [anon_sym_16c62] = ACTIONS(9),
    [anon_sym_16c63] = ACTIONS(7),
    [anon_sym_16c64] = ACTIONS(7),
    [anon_sym_16c65] = ACTIONS(7),
    [anon_sym_16c66] = ACTIONS(7),
    [anon_sym_16c620] = ACTIONS(7),
    [anon_sym_16c621] = ACTIONS(7),
    [anon_sym_16c622] = ACTIONS(7),
    [anon_sym_16e623] = ACTIONS(7),
    [anon_sym_16e624] = ACTIONS(7),
    [anon_sym_16e625] = ACTIONS(7),
    [anon_sym_16c71] = ACTIONS(7),
    [anon_sym_16c72] = ACTIONS(7),
    [anon_sym_16c73] = ACTIONS(7),
    [anon_sym_16c74] = ACTIONS(7),
    [anon_sym_16c76] = ACTIONS(7),
    [anon_sym_16c77] = ACTIONS(7),
    [anon_sym_16f818] = ACTIONS(7),
    [anon_sym_16f819] = ACTIONS(7),
    [anon_sym_16c83] = ACTIONS(7),
    [anon_sym_16c84] = ACTIONS(7),
    [anon_sym_16f83] = ACTIONS(7),
    [anon_sym_16f84] = ACTIONS(7),
    [anon_sym_16f873] = ACTIONS(7),
    [anon_sym_16f874] = ACTIONS(7),
    [anon_sym_16f876] = ACTIONS(7),
    [anon_sym_16f877] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 2,
      aux_sym_twooptcommand_token3,
      aux_sym_twooptcommand_token6,
    STATE(22), 4,
      sym__statement,
      sym_onecommand,
      sym_twocommand,
      sym_twooptcommand,
    ACTIONS(13), 5,
      aux_sym_twocommand_token1,
      aux_sym_twocommand_token2,
      aux_sym_twocommand_token3,
      aux_sym_twocommand_token4,
      aux_sym_twocommand_token5,
    ACTIONS(15), 11,
      aux_sym_twooptcommand_token1,
      aux_sym_twooptcommand_token2,
      aux_sym_twooptcommand_token4,
      aux_sym_twooptcommand_token5,
      aux_sym_twooptcommand_token7,
      aux_sym_twooptcommand_token8,
      aux_sym_twooptcommand_token9,
      aux_sym_twooptcommand_token10,
      aux_sym_twooptcommand_token11,
      aux_sym_twooptcommand_token12,
      aux_sym_twooptcommand_token13,
    ACTIONS(11), 14,
      aux_sym_onecommand_token1,
      aux_sym_onecommand_token2,
      aux_sym_onecommand_token3,
      aux_sym_onecommand_token4,
      aux_sym_onecommand_token5,
      aux_sym_onecommand_token6,
      aux_sym_onecommand_token7,
      aux_sym_onecommand_token8,
      aux_sym_onecommand_token9,
      aux_sym_onecommand_token10,
      aux_sym_onecommand_token11,
      aux_sym_onecommand_token12,
      aux_sym_onecommand_token13,
      aux_sym_onecommand_token14,
  [47] = 3,
    ACTIONS(21), 2,
      sym_hex,
      sym_ascii,
    STATE(21), 2,
      sym__arguments,
      sym__number,
    ACTIONS(19), 4,
      sym_label,
      sym_decimal,
      sym_binary,
      sym_operation,
  [62] = 3,
    ACTIONS(25), 2,
      sym_hex,
      sym_ascii,
    STATE(27), 2,
      sym__arguments,
      sym__number,
    ACTIONS(23), 4,
      sym_label,
      sym_decimal,
      sym_binary,
      sym_operation,
  [77] = 3,
    ACTIONS(29), 2,
      sym_hex,
      sym_ascii,
    STATE(28), 2,
      sym__arguments,
      sym__number,
    ACTIONS(27), 4,
      sym_label,
      sym_decimal,
      sym_binary,
      sym_operation,
  [92] = 3,
    ACTIONS(33), 2,
      sym_hex,
      sym_ascii,
    STATE(24), 2,
      sym__arguments,
      sym__number,
    ACTIONS(31), 4,
      sym_label,
      sym_decimal,
      sym_binary,
      sym_operation,
  [107] = 3,
    ACTIONS(37), 2,
      sym_hex,
      sym_ascii,
    STATE(26), 2,
      sym__arguments,
      sym__number,
    ACTIONS(35), 4,
      sym_label,
      sym_decimal,
      sym_binary,
      sym_operation,
  [122] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_label,
    ACTIONS(45), 1,
      sym_whitespace,
    STATE(10), 3,
      sym_comment,
      sym_line,
      aux_sym_source_file_repeat2,
  [140] = 5,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_label,
    ACTIONS(45), 1,
      sym_whitespace,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym_comment,
      sym_line,
      aux_sym_source_file_repeat2,
  [158] = 5,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_label,
    ACTIONS(45), 1,
      sym_whitespace,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_comment,
      sym_line,
      aux_sym_source_file_repeat2,
  [176] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      sym_label,
    ACTIONS(57), 1,
      sym_whitespace,
    STATE(12), 3,
      sym_comment,
      sym_line,
      aux_sym_source_file_repeat2,
  [194] = 5,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_label,
    ACTIONS(45), 1,
      sym_whitespace,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym_comment,
      sym_line,
      aux_sym_source_file_repeat2,
  [212] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_device,
    STATE(11), 1,
      sym_devicedef,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [226] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_whitespace,
    ACTIONS(64), 2,
      aux_sym_comment_token1,
      sym_label,
  [235] = 3,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_device,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [246] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_whitespace,
    ACTIONS(73), 2,
      aux_sym_comment_token1,
      sym_label,
  [255] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_whitespace,
    ACTIONS(77), 2,
      aux_sym_comment_token1,
      sym_label,
  [264] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_whitespace,
    ACTIONS(81), 2,
      aux_sym_comment_token1,
      sym_label,
  [273] = 3,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_comment,
  [283] = 3,
    ACTIONS(87), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_COMMA,
  [293] = 3,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_comment,
  [303] = 2,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [310] = 2,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(62), 2,
      aux_sym_comment_token1,
      anon_sym_device,
  [322] = 2,
    ACTIONS(103), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_LF,
  [329] = 2,
    ACTIONS(107), 1,
      aux_sym_comment_token1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [336] = 1,
    ACTIONS(111), 1,
      anon_sym_COMMA,
  [340] = 1,
    ACTIONS(113), 1,
      anon_sym_LF,
  [344] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [348] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [352] = 1,
    ACTIONS(62), 1,
      anon_sym_LF,
  [356] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
  [360] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 273,
  [SMALL_STATE(21)] = 283,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 303,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 329,
  [SMALL_STATE(28)] = 336,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 344,
  [SMALL_STATE(31)] = 348,
  [SMALL_STATE(32)] = 352,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_devicedef, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_devicedef, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_devicedef, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_devicedef, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_twooptcommand, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_twooptcommand, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_devicename, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_devicename, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_onecommand, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onecommand, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_twocommand, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_twocommand, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_twooptcommand, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_twooptcommand, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ilassembler(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
