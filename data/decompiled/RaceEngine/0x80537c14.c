/**
 * RaceinfoPlayer_getLapSplit
 * @addr 0x80537c14
 * @size 312 bytes
 * @frame 16 bytes
 * @calls 1 function(s)
 */
u32 RaceinfoPlayer_getLapSplit(void) {
    /* r3 = r3+0x4 */
    /* rlwinm r0, r4, 2, 0x16, 0x1d */
    /* r3 = r3+0xc */
    /* lwzx r3, r3, r0 */
    /* r4 = r3+0x21 */
    /* extsb. r0, r4 */
    /* if (cr0 >=) goto 0x80537c34 */
    /* li r4, 0 */
    /* r3, 0  (load upper immediate) */
    /* extsb r4, r4 */
    /* r3 = r3+0x0 */
    /* clrlwi r4, r4, 0x10 */
    /* goto 0x8051ad14 */
    /* stwu r1, -0x10(r1) */
    /* r3, 0  (load upper immediate) */
    /* r1+0x14 = r0 */
    /* r4 = r3+0x0 */
    /* r3 = r4+0x20 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80537c70 */
    /* r3 = r3+0x4 */
    /* goto 0x80537c74 */
    /* li r3, 0 */
    /* neg r0, r3 */
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */
    /* if (cr0 ==) goto 0x80537ca8 */
    /* r3 = r4+0x1c */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80537c98 */
    /* r3 = r3+0x4 */
    /* goto 0x80537c9c */
    /* li r3, 0 */
    /* neg r0, r3 */
    /* srwi r0, r0, 0x1f */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80537cb8 */
    /* li r3, 0 */
    /* goto 0x80537cf4 */
    /* r3, 0  (load upper immediate) */
    /* li r4, 0 */
    /* r3 = r3+0x0 */
    /* 0x80533c90() */
    /* extsb. r0, r3 */
    /* if (cr0 >=) goto 0x80537cd8 */
    /* li r3, 0 */
    /* goto 0x80537cf4 */
    /* r4, 0  (load upper immediate) */
    /* rlwinm r0, r3, 2, 0x16, 0x1d */
    /* r3 = r4+0x0 */
    /* r3 = r3+0xc */
    /* lwzx r3, r3, r0 */
    /* r0 = r3+0x38 */
    /* rlwinm r3, r0, 0x1f, 0x1f, 0x1f */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return /* r3 */;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80537c14: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x80537c18: 54 80 15 ba              rlwinm   r0, r4, 2, 0x16, 0x1d */
/* 0x80537c1c: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80537c20: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80537c24: 88 83 00 21              lbz      r4, 0x21(r3) */
/* 0x80537c28: 7c 80 07 75              extsb.   r0, r4 */
/* 0x80537c2c: 40 80 00 08              bge      0x80537c34 */
/* 0x80537c30: 38 80 00 00              li       r4, 0 */
/* 0x80537c34: 3c 60 00 00              lis      r3, 0 */
/* 0x80537c38: 7c 84 07 74              extsb    r4, r4 */
/* 0x80537c3c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80537c40: 54 84 04 3e              clrlwi   r4, r4, 0x10 */
/* 0x80537c44: 4b fe 30 d0              b        0x8051ad14 */
/* 0x80537c48: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80537c4c: 7c 08 02 a6              mflr     r0 */
/* 0x80537c50: 3c 60 00 00              lis      r3, 0 */
/* 0x80537c54: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80537c58: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80537c5c: 80 64 00 20              lwz      r3, 0x20(r4) */
/* 0x80537c60: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80537c64: 41 82 00 0c              beq      0x80537c70 */
/* 0x80537c68: a0 63 00 04              lhz      r3, 4(r3) */
/* 0x80537c6c: 48 00 00 08              b        0x80537c74 */
/* 0x80537c70: 38 60 00 00              li       r3, 0 */
/* 0x80537c74: 7c 03 00 d0              neg      r0, r3 */
/* 0x80537c78: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80537c7c: 54 00 0f ff              rlwinm.  r0, r0, 1, 0x1f, 0x1f */
/* 0x80537c80: 41 82 00 28              beq      0x80537ca8 */
/* 0x80537c84: 80 64 00 1c              lwz      r3, 0x1c(r4) */
/* 0x80537c88: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80537c8c: 41 82 00 0c              beq      0x80537c98 */
/* 0x80537c90: a0 63 00 04              lhz      r3, 4(r3) */
/* 0x80537c94: 48 00 00 08              b        0x80537c9c */
/* 0x80537c98: 38 60 00 00              li       r3, 0 */
/* 0x80537c9c: 7c 03 00 d0              neg      r0, r3 */
/* 0x80537ca0: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80537ca4: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x80537ca8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80537cac: 40 82 00 0c              bne      0x80537cb8 */
/* 0x80537cb0: 38 60 00 00              li       r3, 0 */
/* 0x80537cb4: 48 00 00 40              b        0x80537cf4 */
/* 0x80537cb8: 3c 60 00 00              lis      r3, 0 */
/* 0x80537cbc: 38 80 00 00              li       r4, 0 */
/* 0x80537cc0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80537cc4: 4b ff bf cd              bl       0x80533c90 */
/* 0x80537cc8: 7c 60 07 75              extsb.   r0, r3 */
/* 0x80537ccc: 40 80 00 0c              bge      0x80537cd8 */
/* 0x80537cd0: 38 60 00 00              li       r3, 0 */
/* 0x80537cd4: 48 00 00 20              b        0x80537cf4 */
/* 0x80537cd8: 3c 80 00 00              lis      r4, 0 */
/* 0x80537cdc: 54 60 15 ba              rlwinm   r0, r3, 2, 0x16, 0x1d */
/* 0x80537ce0: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80537ce4: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80537ce8: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80537cec: 80 03 00 38              lwz      r0, 0x38(r3) */
/* 0x80537cf0: 54 03 ff fe              rlwinm   r3, r0, 0x1f, 0x1f, 0x1f */
/* 0x80537cf4: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80537cf8: 7c 08 03 a6              mtlr     r0 */
/* 0x80537cfc: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80537d00: 4e 80 00 20              blr       */
/* 0x80537d04: 3c 80 00 00              lis      r4, 0 */
/* 0x80537d08: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x80537d0c: 80 85 00 20              lwz      r4, 0x20(r5) */
/* 0x80537d10: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80537d14: 41 82 00 0c              beq      0x80537d20 */
/* 0x80537d18: a0 84 00 04              lhz      r4, 4(r4) */
/* 0x80537d1c: 48 00 00 08              b        0x80537d24 */
/* 0x80537d20: 38 80 00 00              li       r4, 0 */
/* 0x80537d24: 7c 04 00 d0              neg      r0, r4 */
/* 0x80537d28: 7c 00 23 78              or       r0, r0, r4 */
/* 0x80537d2c: 54 00 0f ff              rlwinm.  r0, r0, 1, 0x1f, 0x1f */
/* 0x80537d30: 41 82 00 28              beq      0x80537d58 */
/* 0x80537d34: 80 85 00 1c              lwz      r4, 0x1c(r5) */
/* 0x80537d38: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80537d3c: 41 82 00 0c              beq      0x80537d48 */
/* 0x80537d40: a0 84 00 04              lhz      r4, 4(r4) */
/* 0x80537d44: 48 00 00 08              b        0x80537d4c */
/* 0x80537d48: 38 80 00 00              li       r4, 0 */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_getLapSplit
; Demangled: RaceinfoPlayer_getLapSplit
; Address: 0x80537c14  (.text+0x25378)
; Size: 312 bytes

  0x80537c14:  lwz      r3, 4(r3)
  0x80537c18:  rlwinm   r0, r4, 2, 0x16, 0x1d
  0x80537c1c:  lwz      r3, 0xc(r3)
  0x80537c20:  lwzx     r3, r3, r0
  0x80537c24:  lbz      r4, 0x21(r3)
  0x80537c28:  extsb.   r0, r4
  0x80537c2c:  bge      0x80537c34
  0x80537c30:  li       r4, 0
  0x80537c34:  lis      r3, 0
  0x80537c38:  extsb    r4, r4
  0x80537c3c:  lwz      r3, 0(r3)
  0x80537c40:  clrlwi   r4, r4, 0x10
  0x80537c44:  b        0x8051ad14
  0x80537c48:  stwu     r1, -0x10(r1)
  0x80537c4c:  mflr     r0
  0x80537c50:  lis      r3, 0
  0x80537c54:  stw      r0, 0x14(r1)
  0x80537c58:  lwz      r4, 0(r3)
  0x80537c5c:  lwz      r3, 0x20(r4)
  0x80537c60:  cmpwi    r3, 0
  0x80537c64:  beq      0x80537c70
  0x80537c68:  lhz      r3, 4(r3)
  0x80537c6c:  b        0x80537c74
  0x80537c70:  li       r3, 0
  0x80537c74:  neg      r0, r3
  0x80537c78:  or       r0, r0, r3
  0x80537c7c:  rlwinm.  r0, r0, 1, 0x1f, 0x1f
  0x80537c80:  beq      0x80537ca8
  0x80537c84:  lwz      r3, 0x1c(r4)
  0x80537c88:  cmpwi    r3, 0
  0x80537c8c:  beq      0x80537c98
  0x80537c90:  lhz      r3, 4(r3)
  0x80537c94:  b        0x80537c9c
  0x80537c98:  li       r3, 0
  0x80537c9c:  neg      r0, r3
  0x80537ca0:  or       r0, r0, r3
  0x80537ca4:  srwi     r0, r0, 0x1f
  0x80537ca8:  cmpwi    r0, 0
  0x80537cac:  bne      0x80537cb8
  0x80537cb0:  li       r3, 0
  0x80537cb4:  b        0x80537cf4
  0x80537cb8:  lis      r3, 0
  0x80537cbc:  li       r4, 0
  0x80537cc0:  lwz      r3, 0(r3)
  0x80537cc4:  bl       0x80533c90
  0x80537cc8:  extsb.   r0, r3
  0x80537ccc:  bge      0x80537cd8
  0x80537cd0:  li       r3, 0
  0x80537cd4:  b        0x80537cf4
  0x80537cd8:  lis      r4, 0
  0x80537cdc:  rlwinm   r0, r3, 2, 0x16, 0x1d
  0x80537ce0:  lwz      r3, 0(r4)
  0x80537ce4:  lwz      r3, 0xc(r3)
  0x80537ce8:  lwzx     r3, r3, r0
  0x80537cec:  lwz      r0, 0x38(r3)
  0x80537cf0:  rlwinm   r3, r0, 0x1f, 0x1f, 0x1f
  0x80537cf4:  lwz      r0, 0x14(r1)
  0x80537cf8:  mtlr     r0
  0x80537cfc:  addi     r1, r1, 0x10
  0x80537d00:  blr      
  0x80537d04:  lis      r4, 0
  0x80537d08:  lwz      r5, 0(r4)
  0x80537d0c:  lwz      r4, 0x20(r5)
  0x80537d10:  cmpwi    r4, 0
  0x80537d14:  beq      0x80537d20
  0x80537d18:  lhz      r4, 4(r4)
  0x80537d1c:  b        0x80537d24
  0x80537d20:  li       r4, 0
  0x80537d24:  neg      r0, r4
  0x80537d28:  or       r0, r0, r4
  0x80537d2c:  rlwinm.  r0, r0, 1, 0x1f, 0x1f
  0x80537d30:  beq      0x80537d58
  0x80537d34:  lwz      r4, 0x1c(r5)
  0x80537d38:  cmpwi    r4, 0
  0x80537d3c:  beq      0x80537d48
  0x80537d40:  lhz      r4, 4(r4)
  0x80537d44:  b        0x80537d4c
  0x80537d48:  li       r4, 0
