/**
 * clear__System10RaceConfig8ScenarioFv
 * @addr 0x80530b50
 * @size 252 bytes
 * @frame 240 bytes
 * @calls 2 function(s)
 */
void System10RaceConfig8Scenario(void* self) {
    /* r0 = r4+0x10 */
    /* r4+0x8 = r0 */
    /* addi r6, r6, 1 */
    /* clrlwi r0, r6, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r4, r3, r0 */
    /* r0 = r4+0x18 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80530b98 */
    /* r0 = r4+0xe */
    /* extsb. r0, r0 */
    /* if (cr0 <) goto 0x80530b98 */
    /* clrlwi r0, r0, 0x18 */
    /* r4 = r5+0x0 */
    /* mulli r0, r0, 0xec */
    /* add r4, r4, r0 */
    /* r0 = r4+0x10 */
    /* r4+0x8 = r0 */
    /* addi r6, r6, 1 */
    /* bdnz 0x80530adc */
    /* goto 0x80530bf4 */
    /* r0 = r4+0xb54 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80530bf4 */
    /* li r29, 0 */
    /* r30, 0  (load upper immediate) */
    /* clrlwi r0, r29, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r3, r31, r0 */
    /* r0 = r3+0x18 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80530be8 */
    /* r0 = r3+0xe */
    /* extsb. r0, r0 */
    /* if (cr0 <) goto 0x80530be8 */
    /* r3 = r30+0x0 */
    /* clrlwi r4, r0, 0x18 */
    /* 0x805268f4() */
    /* addi r29, r29, 1 */
    /* cmplwi r29, 0xc */
    /* if (cr0 <) goto 0x80530bb8 */
    /* r0 = stack[0x24] */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80530b50: 80 04 00 10              lwz      r0, 0x10(r4) */
/* 0x80530b54: 90 04 00 08              stw      r0, 8(r4) */
/* 0x80530b58: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x80530b5c: 54 c0 06 3e              clrlwi   r0, r6, 0x18 */
/* 0x80530b60: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80530b64: 7c 83 02 14              add      r4, r3, r0 */
/* 0x80530b68: 80 04 00 18              lwz      r0, 0x18(r4) */
/* 0x80530b6c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80530b70: 40 82 00 28              bne      0x80530b98 */
/* 0x80530b74: 88 04 00 0e              lbz      r0, 0xe(r4) */
/* 0x80530b78: 7c 00 07 75              extsb.   r0, r0 */
/* 0x80530b7c: 41 80 00 1c              blt      0x80530b98 */
/* 0x80530b80: 54 00 06 3e              clrlwi   r0, r0, 0x18 */
/* 0x80530b84: 80 85 00 00              lwz      r4, 0(r5) */
/* 0x80530b88: 1c 00 00 ec              mulli    r0, r0, 0xec */
/* 0x80530b8c: 7c 84 02 14              add      r4, r4, r0 */
/* 0x80530b90: 80 04 00 10              lwz      r0, 0x10(r4) */
/* 0x80530b94: 90 04 00 08              stw      r0, 8(r4) */
/* 0x80530b98: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x80530b9c: 42 00 ff 40              bdnz     0x80530adc */
/* 0x80530ba0: 48 00 00 54              b        0x80530bf4 */
/* 0x80530ba4: 80 04 0b 54              lwz      r0, 0xb54(r4) */
/* 0x80530ba8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80530bac: 40 82 00 48              bne      0x80530bf4 */
/* 0x80530bb0: 3b a0 00 00              li       r29, 0 */
/* 0x80530bb4: 3f c0 00 00              lis      r30, 0 */
/* 0x80530bb8: 57 a0 06 3e              clrlwi   r0, r29, 0x18 */
/* 0x80530bbc: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80530bc0: 7c 7f 02 14              add      r3, r31, r0 */
/* 0x80530bc4: 80 03 00 18              lwz      r0, 0x18(r3) */
/* 0x80530bc8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80530bcc: 40 82 00 1c              bne      0x80530be8 */
/* 0x80530bd0: 88 03 00 0e              lbz      r0, 0xe(r3) */
/* 0x80530bd4: 7c 00 07 75              extsb.   r0, r0 */
/* 0x80530bd8: 41 80 00 10              blt      0x80530be8 */
/* 0x80530bdc: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x80530be0: 54 04 06 3e              clrlwi   r4, r0, 0x18 */
/* 0x80530be4: 4b ff 5d 11              bl       0x805268f4 */
/* 0x80530be8: 3b bd 00 01              addi     r29, r29, 1 */
/* 0x80530bec: 28 1d 00 0c              cmplwi   r29, 0xc */
/* 0x80530bf0: 41 80 ff c8              blt      0x80530bb8 */
/* 0x80530bf4: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80530bf8: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80530bfc: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80530c00: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80530c04: 7c 08 03 a6              mtlr     r0 */
/* 0x80530c08: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80530c0c: 4e 80 00 20              blr       */
/* 0x80530c10: 94 21 ff 10              stwu     r1, -0xf0(r1) */
/* 0x80530c14: 7c 08 02 a6              mflr     r0 */
/* 0x80530c18: 90 01 00 f4              stw      r0, 0xf4(r1) */
/* 0x80530c1c: 93 e1 00 ec              stw      r31, 0xec(r1) */
/* 0x80530c20: 3b e0 00 00              li       r31, 0 */
/* 0x80530c24: 93 c1 00 e8              stw      r30, 0xe8(r1) */
/* 0x80530c28: 7c be 2b 78              mr       r30, r5 */
/* 0x80530c2c: 93 a1 00 e4              stw      r29, 0xe4(r1) */
/* 0x80530c30: 7c 9d 23 78              mr       r29, r4 */
/* 0x80530c34: 93 81 00 e0              stw      r28, 0xe0(r1) */
/* 0x80530c38: 7c 7c 1b 78              mr       r28, r3 */
/* 0x80530c3c: 80 63 0b ec              lwz      r3, 0xbec(r3) */
/* 0x80530c40: 4b fe d8 d5              bl       0x8051e514 */
/* 0x80530c44: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80530c48: 41 82 00 88              beq      0x80530cd0 */
#endif


/* === DISASSEMBLY === */

; Function: clear__Q36System10RaceConfig8ScenarioFv
; Demangled: clear__System10RaceConfig8ScenarioFv
; Address: 0x80530b50  (.text+0x1e2b4)
; Size: 252 bytes

  0x80530b50:  lwz      r0, 0x10(r4)
  0x80530b54:  stw      r0, 8(r4)
  0x80530b58:  addi     r6, r6, 1
  0x80530b5c:  clrlwi   r0, r6, 0x18
  0x80530b60:  mulli    r0, r0, 0xf0
  0x80530b64:  add      r4, r3, r0
  0x80530b68:  lwz      r0, 0x18(r4)
  0x80530b6c:  cmpwi    r0, 0
  0x80530b70:  bne      0x80530b98
  0x80530b74:  lbz      r0, 0xe(r4)
  0x80530b78:  extsb.   r0, r0
  0x80530b7c:  blt      0x80530b98
  0x80530b80:  clrlwi   r0, r0, 0x18
  0x80530b84:  lwz      r4, 0(r5)
  0x80530b88:  mulli    r0, r0, 0xec
  0x80530b8c:  add      r4, r4, r0
  0x80530b90:  lwz      r0, 0x10(r4)
  0x80530b94:  stw      r0, 8(r4)
  0x80530b98:  addi     r6, r6, 1
  0x80530b9c:  bdnz     0x80530adc
  0x80530ba0:  b        0x80530bf4
  0x80530ba4:  lwz      r0, 0xb54(r4)
  0x80530ba8:  cmpwi    r0, 0
  0x80530bac:  bne      0x80530bf4
  0x80530bb0:  li       r29, 0
  0x80530bb4:  lis      r30, 0
  0x80530bb8:  clrlwi   r0, r29, 0x18
  0x80530bbc:  mulli    r0, r0, 0xf0
  0x80530bc0:  add      r3, r31, r0
  0x80530bc4:  lwz      r0, 0x18(r3)
  0x80530bc8:  cmpwi    r0, 0
  0x80530bcc:  bne      0x80530be8
  0x80530bd0:  lbz      r0, 0xe(r3)
  0x80530bd4:  extsb.   r0, r0
  0x80530bd8:  blt      0x80530be8
  0x80530bdc:  lwz      r3, 0(r30)
  0x80530be0:  clrlwi   r4, r0, 0x18
  0x80530be4:  bl       0x805268f4
  0x80530be8:  addi     r29, r29, 1
  0x80530bec:  cmplwi   r29, 0xc
  0x80530bf0:  blt      0x80530bb8
  0x80530bf4:  lwz      r0, 0x24(r1)
  0x80530bf8:  lwz      r31, 0x1c(r1)
  0x80530bfc:  lwz      r30, 0x18(r1)
  0x80530c00:  lwz      r29, 0x14(r1)
  0x80530c04:  mtlr     r0
  0x80530c08:  addi     r1, r1, 0x20
  0x80530c0c:  blr      
  0x80530c10:  stwu     r1, -0xf0(r1)
  0x80530c14:  mflr     r0
  0x80530c18:  stw      r0, 0xf4(r1)
  0x80530c1c:  stw      r31, 0xec(r1)
  0x80530c20:  li       r31, 0
  0x80530c24:  stw      r30, 0xe8(r1)
  0x80530c28:  mr       r30, r5
  0x80530c2c:  stw      r29, 0xe4(r1)
  0x80530c30:  mr       r29, r4
  0x80530c34:  stw      r28, 0xe0(r1)
  0x80530c38:  mr       r28, r3
  0x80530c3c:  lwz      r3, 0xbec(r3)
  0x80530c40:  bl       0x8051e514
  0x80530c44:  cmpwi    r3, 0
  0x80530c48:  beq      0x80530cd0
