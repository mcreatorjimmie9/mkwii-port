/**
 * ItemHolder_init
 * @addr 0x8079bc7c
 * @size 188 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void ItemHolder_init(void) {
    /* r25 = r3+0x25 */
    /* li r26, 0 */
    /* li r27, 0 */
    /* r28, 0  (load upper immediate) */
    /* goto 0x8079bcdc */
    /* r3 = r28+0x0 */
    /* r4 = r31+0x0 */
    /* r3 = r3+0x18 */
    /* lwzx r3, r3, r27 */
    /* r0 = r3+0x9c */
    /* mulli r0, r0, 0xf0 */
    /* add r3, r4, r0 */
    /* r0 = r3+0xf4 */
    /* cmpw r30, r0 */
    /* if (cr0 !=) goto 0x8079bcc8 */
    /* r3 = r29+0xa8 */
    /* r4 = r26 */
    /* 0x8055f1c8() */
    /* goto 0x8079bcd4 */
    /* r3 = r29+0xa8 */
    /* r4 = r26 */
    /* 0x8055f1e0() */
    /* addi r27, r27, 4 */
    /* addi r26, r26, 1 */
    /* cmpw r26, r25 */
    /* if (cr0 <) goto 0x8079bc90 */
    /* r3, 0  (load upper immediate) */
    /* r5 = r3+0x0 */
    /* r0 = r5+0x25 */
    /* cmplwi r0, 4 */
    /* if (cr0 !=) goto 0x8079bd94 */
    /* r3 = r5+0x218 */
    /* li r4, 1 */
    /* addi r3, r3, -1 */
    /* cmplwi r3, 4 */
    /* if (cr0 >) goto 0x8079bd20 */
    /* li r0, 1 */
    /* slw r0, r0, r3 */
    /* andi. r0, r0, 0x19 */
    /* if (cr0 ==) goto 0x8079bd20 */
    /* li r4, 0 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079bd94 */
    /* r3 = r5+0x308 */
    /* li r4, 1 */
    /* addi r3, r3, -1 */
    /* cmplwi r3, 4 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079bc7c: 8b 23 00 25              lbz      r25, 0x25(r3) */
/* 0x8079bc80: 3b 40 00 00              li       r26, 0 */
/* 0x8079bc84: 3b 60 00 00              li       r27, 0 */
/* 0x8079bc88: 3f 80 00 00              lis      r28, 0 */
/* 0x8079bc8c: 48 00 00 50              b        0x8079bcdc */
/* 0x8079bc90: 80 7c 00 00              lwz      r3, 0(r28) */
/* 0x8079bc94: 80 9f 00 00              lwz      r4, 0(r31) */
/* 0x8079bc98: 80 63 00 18              lwz      r3, 0x18(r3) */
/* 0x8079bc9c: 7c 63 d8 2e              lwzx     r3, r3, r27 */
/* 0x8079bca0: 88 03 00 9c              lbz      r0, 0x9c(r3) */
/* 0x8079bca4: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x8079bca8: 7c 64 02 14              add      r3, r4, r0 */
/* 0x8079bcac: 80 03 00 f4              lwz      r0, 0xf4(r3) */
/* 0x8079bcb0: 7c 1e 00 00              cmpw     r30, r0 */
/* 0x8079bcb4: 40 82 00 14              bne      0x8079bcc8 */
/* 0x8079bcb8: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bcbc: 7f 44 d3 78              mr       r4, r26 */
/* 0x8079bcc0: 4b dc 35 09              bl       0x8055f1c8 */
/* 0x8079bcc4: 48 00 00 10              b        0x8079bcd4 */
/* 0x8079bcc8: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bccc: 7f 44 d3 78              mr       r4, r26 */
/* 0x8079bcd0: 4b dc 35 11              bl       0x8055f1e0 */
/* 0x8079bcd4: 3b 7b 00 04              addi     r27, r27, 4 */
/* 0x8079bcd8: 3b 5a 00 01              addi     r26, r26, 1 */
/* 0x8079bcdc: 7c 1a c8 00              cmpw     r26, r25 */
/* 0x8079bce0: 41 80 ff b0              blt      0x8079bc90 */
/* 0x8079bce4: 3c 60 00 00              lis      r3, 0 */
/* 0x8079bce8: 80 a3 00 00              lwz      r5, 0(r3) */
/* 0x8079bcec: 88 05 00 25              lbz      r0, 0x25(r5) */
/* 0x8079bcf0: 28 00 00 04              cmplwi   r0, 4 */
/* 0x8079bcf4: 40 82 00 a0              bne      0x8079bd94 */
/* 0x8079bcf8: 80 65 02 18              lwz      r3, 0x218(r5) */
/* 0x8079bcfc: 38 80 00 01              li       r4, 1 */
/* 0x8079bd00: 38 63 ff ff              addi     r3, r3, -1 */
/* 0x8079bd04: 28 03 00 04              cmplwi   r3, 4 */
/* 0x8079bd08: 41 81 00 18              bgt      0x8079bd20 */
/* 0x8079bd0c: 38 00 00 01              li       r0, 1 */
/* 0x8079bd10: 7c 00 18 30              slw      r0, r0, r3 */
/* 0x8079bd14: 70 00 00 19              andi.    r0, r0, 0x19 */
/* 0x8079bd18: 41 82 00 08              beq      0x8079bd20 */
/* 0x8079bd1c: 38 80 00 00              li       r4, 0 */
/* 0x8079bd20: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079bd24: 41 82 00 70              beq      0x8079bd94 */
/* 0x8079bd28: 80 65 03 08              lwz      r3, 0x308(r5) */
/* 0x8079bd2c: 38 80 00 01              li       r4, 1 */
/* 0x8079bd30: 38 63 ff ff              addi     r3, r3, -1 */
/* 0x8079bd34: 28 03 00 04              cmplwi   r3, 4 */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolder_init
; Demangled: ItemHolder_init
; Address: 0x8079bc7c  (.text+0x2893e0)
; Size: 188 bytes

  0x8079bc7c:  lbz      r25, 0x25(r3)
  0x8079bc80:  li       r26, 0
  0x8079bc84:  li       r27, 0
  0x8079bc88:  lis      r28, 0
  0x8079bc8c:  b        0x8079bcdc
  0x8079bc90:  lwz      r3, 0(r28)
  0x8079bc94:  lwz      r4, 0(r31)
  0x8079bc98:  lwz      r3, 0x18(r3)
  0x8079bc9c:  lwzx     r3, r3, r27
  0x8079bca0:  lbz      r0, 0x9c(r3)
  0x8079bca4:  mulli    r0, r0, 0xf0
  0x8079bca8:  add      r3, r4, r0
  0x8079bcac:  lwz      r0, 0xf4(r3)
  0x8079bcb0:  cmpw     r30, r0
  0x8079bcb4:  bne      0x8079bcc8
  0x8079bcb8:  lwz      r3, 0xa8(r29)
  0x8079bcbc:  mr       r4, r26
  0x8079bcc0:  bl       0x8055f1c8
  0x8079bcc4:  b        0x8079bcd4
  0x8079bcc8:  lwz      r3, 0xa8(r29)
  0x8079bccc:  mr       r4, r26
  0x8079bcd0:  bl       0x8055f1e0
  0x8079bcd4:  addi     r27, r27, 4
  0x8079bcd8:  addi     r26, r26, 1
  0x8079bcdc:  cmpw     r26, r25
  0x8079bce0:  blt      0x8079bc90
  0x8079bce4:  lis      r3, 0
  0x8079bce8:  lwz      r5, 0(r3)
  0x8079bcec:  lbz      r0, 0x25(r5)
  0x8079bcf0:  cmplwi   r0, 4
  0x8079bcf4:  bne      0x8079bd94
  0x8079bcf8:  lwz      r3, 0x218(r5)
  0x8079bcfc:  li       r4, 1
  0x8079bd00:  addi     r3, r3, -1
  0x8079bd04:  cmplwi   r3, 4
  0x8079bd08:  bgt      0x8079bd20
  0x8079bd0c:  li       r0, 1
  0x8079bd10:  slw      r0, r0, r3
  0x8079bd14:  andi.    r0, r0, 0x19
  0x8079bd18:  beq      0x8079bd20
  0x8079bd1c:  li       r4, 0
  0x8079bd20:  cmpwi    r4, 0
  0x8079bd24:  beq      0x8079bd94
  0x8079bd28:  lwz      r3, 0x308(r5)
  0x8079bd2c:  li       r4, 1
  0x8079bd30:  addi     r3, r3, -1
  0x8079bd34:  cmplwi   r3, 4
