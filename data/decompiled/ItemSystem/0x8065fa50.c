/**
 * ITEMHandler_getPlayerMode
 * @addr 0x8065fa50
 * @size 160 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
u32 ITEMHandler_getPlayerMode(void) {
    /* r18+0x3e0 = r0 */
    /* r4 = r27+0x0 */
    /* 0x80555bf8() */
    /* 0x80555bf8() */
    /* clrlwi r0, r19, 0x18 */
    /* mulli r0, r0, 0x38 */
    /* add r6, r18, r0 */
    /* r0 = r6+0x40 */
    /* r5 = r6+0x44 */
    /* or. r0, r5, r0 */
    /* if (cr0 ==) goto 0x8065fafc */
    /* r24 = r6+0x48 */
    /* r23 = r6+0x4c */
    /* or. r0, r23, r24 */
    /* if (cr0 ==) goto 0x8065fafc */
    /* r0 = r28+0xf8 */
    /* addi r6, r29, 0x4dd3 */
    /* li r5, 0 */
    /* srwi r0, r0, 2 */
    /* mulhwu r0, r6, r0 */
    /* srwi r6, r0, 6 */
    /* 0x80555bf8() */
    /* subfc r0, r23, r4 */
    /* subfe r0, r24, r3 */
    /* subfe r0, r4, r4 */
    /* neg. r0, r0 */
    /* if (cr0 !=) goto 0x8065fafc */
    /* subfc r0, r23, r4 */
    /* r4 = r21+0x350 */
    /* subfe r3, r24, r3 */
    /* r5 = r21+0x354 */
    /* rotlwi r0, r0, 0x1f */
    /* add r6, r18, r20 */
    /* rlwimi r0, r3, 0x1f, 0, 0 */
    /* srwi r3, r3, 1 */
    /* addc r0, r5, r0 */
    /* r21+0x354 = r0 */
    /* adde r0, r4, r3 */
    /* r21+0x350 = r0 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8065fa50: 7c 00 cb 78              or       r0, r0, r25 */
/* 0x8065fa54: 90 12 03 e0              stw      r0, 0x3e0(r18) */
/* 0x8065fa58: 80 9b 00 00              lwz      r4, 0(r27) */
/* 0x8065fa5c: 4b ef 61 9d              bl       0x80555bf8 */
/* 0x8065fa60: 4b ef 61 99              bl       0x80555bf8 */
/* 0x8065fa64: 56 60 06 3e              clrlwi   r0, r19, 0x18 */
/* 0x8065fa68: 1c 00 00 38              mulli    r0, r0, 0x38 */
/* 0x8065fa6c: 7c d2 02 14              add      r6, r18, r0 */
/* 0x8065fa70: 80 06 00 40              lwz      r0, 0x40(r6) */
/* 0x8065fa74: 80 a6 00 44              lwz      r5, 0x44(r6) */
/* 0x8065fa78: 7c a0 03 79              or.      r0, r5, r0 */
/* 0x8065fa7c: 41 82 00 80              beq      0x8065fafc */
/* 0x8065fa80: 83 06 00 48              lwz      r24, 0x48(r6) */
/* 0x8065fa84: 82 e6 00 4c              lwz      r23, 0x4c(r6) */
/* 0x8065fa88: 7e e0 c3 79              or.      r0, r23, r24 */
/* 0x8065fa8c: 41 82 00 70              beq      0x8065fafc */
/* 0x8065fa90: 80 1c 00 f8              lwz      r0, 0xf8(r28) */
/* 0x8065fa94: 38 dd 4d d3              addi     r6, r29, 0x4dd3 */
/* 0x8065fa98: 38 a0 00 00              li       r5, 0 */
/* 0x8065fa9c: 54 00 f0 be              srwi     r0, r0, 2 */
/* 0x8065faa0: 7c 06 00 16              mulhwu   r0, r6, r0 */
/* 0x8065faa4: 54 06 d1 be              srwi     r6, r0, 6 */
/* 0x8065faa8: 4b ef 61 51              bl       0x80555bf8 */
/* 0x8065faac: 7c 17 20 10              subfc    r0, r23, r4 */
/* 0x8065fab0: 7c 18 19 10              subfe    r0, r24, r3 */
/* 0x8065fab4: 7c 04 21 10              subfe    r0, r4, r4 */
/* 0x8065fab8: 7c 00 00 d1              neg.     r0, r0 */
/* 0x8065fabc: 40 82 00 40              bne      0x8065fafc */
/* 0x8065fac0: 7c 17 20 10              subfc    r0, r23, r4 */
/* 0x8065fac4: 80 95 03 50              lwz      r4, 0x350(r21) */
/* 0x8065fac8: 7c 78 19 10              subfe    r3, r24, r3 */
/* 0x8065facc: 80 b5 03 54              lwz      r5, 0x354(r21) */
/* 0x8065fad0: 54 00 f8 3e              rotlwi   r0, r0, 0x1f */
/* 0x8065fad4: 7c d2 a2 14              add      r6, r18, r20 */
/* 0x8065fad8: 50 60 f8 00              rlwimi   r0, r3, 0x1f, 0, 0 */
/* 0x8065fadc: 54 63 f8 7e              srwi     r3, r3, 1 */
/* 0x8065fae0: 7c 05 00 14              addc     r0, r5, r0 */
/* 0x8065fae4: 90 15 03 54              stw      r0, 0x354(r21) */
/* 0x8065fae8: 7c 04 19 14              adde     r0, r4, r3 */
/* 0x8065faec: 90 15 03 50              stw      r0, 0x350(r21) */
#endif


/* === DISASSEMBLY === */

; Function: ITEMHandler_getPlayerMode
; Demangled: ITEMHandler_getPlayerMode
; Address: 0x8065fa50  (.text+0x14d1b4)
; Size: 160 bytes

  0x8065fa50:  or       r0, r0, r25
  0x8065fa54:  stw      r0, 0x3e0(r18)
  0x8065fa58:  lwz      r4, 0(r27)
  0x8065fa5c:  bl       0x80555bf8
  0x8065fa60:  bl       0x80555bf8
  0x8065fa64:  clrlwi   r0, r19, 0x18
  0x8065fa68:  mulli    r0, r0, 0x38
  0x8065fa6c:  add      r6, r18, r0
  0x8065fa70:  lwz      r0, 0x40(r6)
  0x8065fa74:  lwz      r5, 0x44(r6)
  0x8065fa78:  or.      r0, r5, r0
  0x8065fa7c:  beq      0x8065fafc
  0x8065fa80:  lwz      r24, 0x48(r6)
  0x8065fa84:  lwz      r23, 0x4c(r6)
  0x8065fa88:  or.      r0, r23, r24
  0x8065fa8c:  beq      0x8065fafc
  0x8065fa90:  lwz      r0, 0xf8(r28)
  0x8065fa94:  addi     r6, r29, 0x4dd3
  0x8065fa98:  li       r5, 0
  0x8065fa9c:  srwi     r0, r0, 2
  0x8065faa0:  mulhwu   r0, r6, r0
  0x8065faa4:  srwi     r6, r0, 6
  0x8065faa8:  bl       0x80555bf8
  0x8065faac:  subfc    r0, r23, r4
  0x8065fab0:  subfe    r0, r24, r3
  0x8065fab4:  subfe    r0, r4, r4
  0x8065fab8:  neg.     r0, r0
  0x8065fabc:  bne      0x8065fafc
  0x8065fac0:  subfc    r0, r23, r4
  0x8065fac4:  lwz      r4, 0x350(r21)
  0x8065fac8:  subfe    r3, r24, r3
  0x8065facc:  lwz      r5, 0x354(r21)
  0x8065fad0:  rotlwi   r0, r0, 0x1f
  0x8065fad4:  add      r6, r18, r20
  0x8065fad8:  rlwimi   r0, r3, 0x1f, 0, 0
  0x8065fadc:  srwi     r3, r3, 1
  0x8065fae0:  addc     r0, r5, r0
  0x8065fae4:  stw      r0, 0x354(r21)
  0x8065fae8:  adde     r0, r4, r3
  0x8065faec:  stw      r0, 0x350(r21)
