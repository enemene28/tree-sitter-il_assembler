module.exports = grammar({
  name: 'ilassembler',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(
      repeat($.comment),
      $.devicedef,
      repeat(choice($.line, $.comment))
    ),
    comment: $ => seq(/;.*/, '\n'),
    line: $ => seq(choice($.label, $.whitespace), $._statement, choice($.comment, '\n')),
    devicedef: $ => seq(
      'device',
      $.devicename,
      optional($.comment),
      '\n'
    ),
    devicename: $ => choice(
      '12C508', '12C509', '12E518', '12E519', '12F629', '12C671', '12C672', '12F675', '16C53', '16C54', '16C55', '16C56', '16C57', '16C58', '16C61', '16C62', '16C63', '16C64', '16C65', '16C66', '16C620', '16C621', '16C622', '16E623', '16E624', '16E625', '16C71', '16C72', '16C73', '16C74', '16C76', '16C77', '16F818', '16F819', '16C83', '16C84', '16F83', '16F84', '16F873', '16F874', '16F876', '16F877', '12c508', '12c509', '12e518', '12e519', '12f629', '12c671', '12c672', '12f675', '16c53', '16c54', '16c55', '16c56', '16c57', '16c58', '16c61', '16c62', '16c63', '16c64', '16c65', '16c66', '16c620', '16c621', '16c622', '16e623', '16e624', '16e625', '16c71', '16c72', '16c73', '16c74', '16c76', '16c77', '16f818', '16f819', '16c83', '16c84', '16f83', '16f84', '16f873', '16f874', '16f876', '16f877'
    ),
    label: $ => /[a-zA-Z][a-zA-Z0-9]*/,
    _arguments: $ => choice($.label, $._number, $.operation),
    _number: $ => choice($.decimal, $.hex, $.ascii, $.binary),
    decimal: $ => /\d+/,
    hex: $ => /[0-9][0-9a-fA-F]*[hH]/,
    ascii: $ => /'[a-zA-Z]'/,
    binary: $ => /[01]+[bB]/,
    whitespace: $ => /\s+/,
    _statement: $ => choice($.onecommand, $.twocommand, $.twooptcommand),
    zerocommand: $ => choice('clrw', 'clrwdt', 'nop', 'option', 'sleep', 'retfie', 'return'),
    onecommand: $ => seq(choice(/[oO][rR][gG]/, /[eE][qQ][uU]/, caseInsensitive('clrf'),caseInsensitive('andlw'), caseInsensitive('call'), caseInsensitive('goto'), caseInsensitive('iorlw'), caseInsensitive('movlw'), caseInsensitive('movwf'), caseInsensitive('retlw'), caseInsensitive('tris'), caseInsensitive('xorlw'), caseInsensitive('addlw'), caseInsensitive('sublw')), $._arguments),
    twocommand: $ => seq(choice( caseInsensitive('bcf'), caseInsensitive('bsf'), caseInsensitive('btfsc'), caseInsensitive('btfsc'), caseInsensitive('btfss')), $._arguments, ',', $._arguments),
    twooptcommand: $ => seq(choice(caseInsensitive('addwf'), caseInsensitive('andwf'), caseInsensitive('incf'), caseInsensitive('incfsz'), caseInsensitive('comf'), caseInsensitive('decf'), caseInsensitive('decfsz'), caseInsensitive('iorwf'), caseInsensitive('rlf'), caseInsensitive('rrf'), caseInsensitive('subwf'), caseInsensitive('swapf'), caseInsensitive('xorwf'),  caseInsensitive('movf')), $._arguments, optional(seq(',', $._arguments))),
    operation: $ => 'blup'

  }
})

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}
