#ifndef PROCESSOR_EMULATOR_INSTRUCTIONS_H
#define PROCESSOR_EMULATOR_INSTRUCTIONS_H

#include "processor.h"

#define INS_LDA_IMMEDIATE 0xA9
#define INS_LDA_ABSOLUTE  0xAD
#define INS_LDA_ABSOLUTE_X 0xBD
#define INS_LDA_ABSOLUTE_Y 0xB9
#define INS_LDA_ZEROPAGE 0xA5
#define INS_LDA_ZEROPAGE_X 0xB5
#define INS_LDA_INDEXED_INDIRECT 0xA1
#define INS_LDA_INDIRECT_INDEXED 0xB1

#define INS_STA_ABSOLUTE 0x8D
#define INS_STA_ABSOLUTE_X 0x9D
#define INS_STA_ABSOLUTE_Y 0x99
#define INS_STA_ZEROPAGE 0x85
#define INS_STA_ZEROPAGE_X 0x95
#define INS_STA_INDEXED_INDIRECT 0x81
#define INS_STA_INDIRECT_INDEXED 0x91

#define INS_LDX_IMMEDIATE 0xA2
#define INS_LDX_ABSOLUTE 0xAE
#define INS_LDX_ABSOLUTE_Y 0xBE
#define INS_LDX_ZEROPAGE 0xA6
#define INS_LDX_ZEROPAGE_Y 0xB6

#define INS_STX_ABSOLUTE 0x8E
#define INS_STX_ZEROPAGE 0x86
#define INS_STX_ZEROPAGE_Y 0x96

#define INS_LDY_IMMEDIATE 0xA0
#define INS_LDY_ABSOLUTE 0xAC
#define INS_LDY_ABSOLUTE_X 0xBC
#define INS_LDY_ZEROPAGE 0xA4
#define INS_LDY_ZEROPAGE_X 0xB4

#define INS_STY_ABSOLUTE 0x8C
#define INS_STY_ZEROPAGE 0x84
#define INS_STY_ZEROPAGE_X 0x94

#define INS_CLC 0x18
#define INS_CLD 0xD8
#define INS_CLI 0x58
#define INS_CLV 0xB8
#define INS_SEC 0x38
#define INS_SED 0xF8
#define INS_SEI 0x78

#define INS_TAX 0xAA
#define INS_TAY 0xA8
#define INS_TXA 0x8A
#define INS_TYA 0x98
#define INS_TSX 0xBA
#define INS_TXS 0x9A

#define INS_INC_ZEROPAGE 0xE6
#define INS_INC_ZEROPAGE_X 0xF6
#define INS_INC_ABSOLUTE 0xEE
#define INS_INC_ABSOLUTE_X 0xFE

#define INS_DEC_ZEROPAGE 0xC6
#define INS_DEC_ZEROPAGE_X 0xD6
#define INS_DEC_ABSOLUTE 0xCE
#define INS_DEC_ABSOLUTE_X 0xDE

#define INS_INX 0xE8
#define INS_DEX 0xCA
#define INS_INY 0xC8
#define INS_DEY 0x88

#define INS_ADC_IMMEDIATE 0x69
#define INS_ADC_ZEROPAGE 0x65
#define INS_ADC_ZEROPAGE_X 0x75
#define INS_ADC_ABSOLUTE 0x6D
#define INS_ADC_ABSOLUTE_X 0x7D
#define INS_ADC_ABSOLUTE_Y 0x79
#define INS_ADC_INDEXED_INDIRECT 0x61
#define INS_ADC_INDIRECT_INDEXED 0x71

#define INS_SBC_IMMEDIATE 0xE9
#define INS_SBC_ZEROPAGE 0xE5
#define INS_SBC_ZEROPAGE_X 0xF5
#define INS_SBC_ABSOLUTE 0xED
#define INS_SBC_ABSOLUTE_X 0xFD
#define INS_SBC_ABSOLUTE_Y 0xF9
#define INS_SBC_INDEXED_INDIRECT 0xE1
#define INS_SBC_INDIRECT_INDEXED 0xF1

#define INS_CMP_IMMEDIATE 0xC9
#define INS_CMP_ZEROPAGE 0xC5
#define INS_CMP_ZEROPAGE_X 0xD5
#define INS_CMP_ABSOLUTE 0xCD
#define INS_CMP_ABSOLUTE_X 0xDD
#define INS_CMP_ABSOLUTE_Y 0xD9
#define INS_CMP_INDEXED_INDIRECT 0xC1
#define INS_CMP_INDIRECT_INDEXED 0xD1

#define INS_CPX_IMMEDIATE 0xE7
#define INS_CPX_ZEROPAGE 0xE4
#define INS_CPX_ABSOLUTE 0xEC

#define INS_CPY_IMMEDIATE 0xC0
#define INS_CPY_ZEROPAGE 0xC4
#define INS_CPY_ABSOLUTE 0xCC

#define INS_PHA 0x48
#define INS_PLA 0x68
#define INS_PHP 0x08
#define INS_PLP 0x28

#define INS_BCC 0x90
#define INS_BCS 0xB0
#define INS_BEQ 0xF0
#define INS_BMI 0x30
#define INS_BNE 0xD0
#define INS_BPL 0x10
#define INS_BVC 0x50
#define INS_BVS 0x70

#define INS_BIT_ZEROPAGE 0x24
#define INS_BIT_ABSOLUTE 0x2C

#define INS_ANC_IMMEDIATE_ILLEGAL_1 0x0B
#define INS_ANC_IMMEDIATE_ILLEGAL_2 0x2B
#define INS_AND_IMMEDIATE 0x29
#define INS_AND_ZEROPAGE 0x25
#define INS_AND_ZEROPAGE_X 0x35
#define INS_AND_ABSOLUTE 0x2D
#define INS_AND_ABSOLUTE_X 0x3D
#define INS_AND_ABSOLUTE_Y 0x39
#define INS_AND_INDEXED_INDIRECT 0x21
#define INS_AND_INDIRECT_INDEXED 0x31

#define INS_ORA_IMMEDIATE 0x09
#define INS_ORA_ZEROPAGE 0x05
#define INS_ORA_ZEROPAGE_X 0x15
#define INS_ORA_ABSOLUTE 0x0D
#define INS_ORA_ABSOLUTE_X 0x1D
#define INS_ORA_ABSOLUTE_Y 0x19
#define INS_ORA_INDEXED_INDIRECT 0x01
#define INS_ORA_INDIRECT_INDEXED 0x11

#define INS_EOR_IMMEDIATE 0x49
#define INS_EOR_ZEROPAGE 0x45
#define INS_EOR_ZEROPAGE_X 0x55
#define INS_EOR_ABSOLUTE 0x4D
#define INS_EOR_ABSOLUTE_X 0x5D
#define INS_EOR_ABSOLUTE_Y 0x59
#define INS_EOR_INDEXED_INDIRECT 0x41
#define INS_EOR_INDIRECT_INDEXED 0x51

#define INS_ROL_ACCUMULATOR 0x2A
#define INS_ROL_ABSOLUTE 0x2E
#define INS_ROL_ABSOLUTE_X 0x3E
#define INS_ROL_ZEROPAGE 0x26
#define INS_ROL_ZEROPAGE_X 0x36

#define INS_ROR_ACCUMULATOR 0x6A
#define INS_ROR_ABSOLUTE 0x6E
#define INS_ROR_ABSOLUTE_X 0x7E
#define INS_ROR_ZEROPAGE 0x66
#define INS_ROR_ZEROPAGE_X 0x76

#define INS_JMP_ABSOLUTE 0x4C
#define INS_JMP_INDIRECT 0x6C
#define INS_JSR 0x20
#define INS_RTS 0x60
#define INS_RTI 0x40

#endif
