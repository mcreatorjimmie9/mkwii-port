/**
 * TimeAttackSplitsPage_ct
 * @addr 0x80857bcc
 * @size 368 bytes
 * @frame 16 bytes
 * @calls 8 function(s)
 */
void TimeAttackSplitsPage_ct(void) {
    /* li r4, 0 */
    /* 0x80612d08() */
    /* addic. r31, r29, 0x6c4 */
    /* if (cr0 ==) goto 0x80857c14 */
    /* addic. r3, r31, 0x648 */
    /* if (cr0 ==) goto 0x80857bf0 */
    /* addi r3, r3, 0x18 */
    /* li r4, 0 */
    /* 0x80612d08() */
    /* r4, 0  (load upper immediate) */
    /* addi r3, r31, 0x174 */
    /* addi r4, r4, 0 */
    /* li r5, 0x254 */
    /* li r6, 2 */
    /* 0x80555bf8() */
    /* r3 = r31 */
    /* li r4, 0 */
    /* 0x80612d08() */
    /* addi r3, r29, 0x430 */
    /* li r4, -1 */
    /* 0x805dc968() */
    /* cmpwi r29, 0 */
    /* if (cr0 ==) goto 0x80857c44 */
    /* addic. r3, r29, 0x54 */
    /* if (cr0 ==) goto 0x80857c38 */
    /* li r4, 0 */
    /* 0x805bc074() */
    /* r3 = r29 */
    /* li r4, 0 */
    /* 0x805e398c() */
    /* cmpwi r30, 0 */
    /* if (cr0 <=) goto 0x80857c54 */
    /* r3 = r29 */
    /* 0x80555bf8() */
    /* r31 = stack[0x1c] */
    /* r3 = r29 */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80857bcc: 38 80 00 00              li       r4, 0 */
/* 0x80857bd0: 4b db b1 39              bl       0x80612d08 */
/* 0x80857bd4: 37 fd 06 c4              addic.   r31, r29, 0x6c4 */
/* 0x80857bd8: 41 82 00 3c              beq      0x80857c14 */
/* 0x80857bdc: 34 7f 06 48              addic.   r3, r31, 0x648 */
/* 0x80857be0: 41 82 00 10              beq      0x80857bf0 */
/* 0x80857be4: 38 63 00 18              addi     r3, r3, 0x18 */
/* 0x80857be8: 38 80 00 00              li       r4, 0 */
/* 0x80857bec: 4b db b1 1d              bl       0x80612d08 */
/* 0x80857bf0: 3c 80 00 00              lis      r4, 0 */
/* 0x80857bf4: 38 7f 01 74              addi     r3, r31, 0x174 */
/* 0x80857bf8: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80857bfc: 38 a0 02 54              li       r5, 0x254 */
/* 0x80857c00: 38 c0 00 02              li       r6, 2 */
/* 0x80857c04: 4b cf df f5              bl       0x80555bf8 */
/* 0x80857c08: 7f e3 fb 78              mr       r3, r31 */
/* 0x80857c0c: 38 80 00 00              li       r4, 0 */
/* 0x80857c10: 4b db b0 f9              bl       0x80612d08 */
/* 0x80857c14: 38 7d 04 30              addi     r3, r29, 0x430 */
/* 0x80857c18: 38 80 ff ff              li       r4, -1 */
/* 0x80857c1c: 4b d8 4d 4d              bl       0x805dc968 */
/* 0x80857c20: 2c 1d 00 00              cmpwi    r29, 0 */
/* 0x80857c24: 41 82 00 20              beq      0x80857c44 */
/* 0x80857c28: 34 7d 00 54              addic.   r3, r29, 0x54 */
/* 0x80857c2c: 41 82 00 0c              beq      0x80857c38 */
/* 0x80857c30: 38 80 00 00              li       r4, 0 */
/* 0x80857c34: 4b d6 44 41              bl       0x805bc074 */
/* 0x80857c38: 7f a3 eb 78              mr       r3, r29 */
/* 0x80857c3c: 38 80 00 00              li       r4, 0 */
/* 0x80857c40: 4b d8 bd 4d              bl       0x805e398c */
/* 0x80857c44: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x80857c48: 40 81 00 0c              ble      0x80857c54 */
/* 0x80857c4c: 7f a3 eb 78              mr       r3, r29 */
/* 0x80857c50: 4b cf df a9              bl       0x80555bf8 */
/* 0x80857c54: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80857c58: 7f a3 eb 78              mr       r3, r29 */
/* 0x80857c5c: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80857c60: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80857c64: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80857c68: 7c 08 03 a6              mtlr     r0 */
/* 0x80857c6c: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80857c70: 4e 80 00 20              blr       */
/* 0x80857c74: 3c 60 00 00              lis      r3, 0 */
/* 0x80857c78: 38 63 00 00              addi     r3, r3, 0 */
/* 0x80857c7c: 4e 80 00 20              blr       */
/* 0x80857c80: 3c 80 00 00              lis      r4, 0 */
/* 0x80857c84: 3c 60 00 00              lis      r3, 0 */
/* 0x80857c88: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80857c8c: 90 83 00 00              stw      r4, 0(r3) */
/* 0x80857c90: 4e 80 00 20              blr       */
/* 0x80857c94: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80857c98: 7c 08 02 a6              mflr     r0 */
/* 0x80857c9c: 3c 80 00 00              lis      r4, 0 */
/* 0x80857ca0: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80857ca4: 54 60 10 3a              slwi     r0, r3, 2 */
/* 0x80857ca8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80857cac: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x80857cb0: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80857cb4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80857cb8: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80857cbc: 83 c3 00 08              lwz      r30, 8(r3) */
/* 0x80857cc0: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x80857cc4: 40 82 00 0c              bne      0x80857cd0 */
/* 0x80857cc8: 3b c0 00 00              li       r30, 0 */
/* 0x80857ccc: 48 00 00 58              b        0x80857d24 */
/* 0x80857cd0: 3f e0 00 00              lis      r31, 0 */
/* 0x80857cd4: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x80857cd8: 41 82 00 48              beq      0x80857d20 */
/* 0x80857cdc: 81 9e 00 00              lwz      r12, 0(r30) */
/* 0x80857ce0: 7f c3 f3 78              mr       r3, r30 */
/* 0x80857ce4: 81 8c 00 60              lwz      r12, 0x60(r12) */
/* 0x80857ce8: 7d 89 03 a6              mtctr    r12 */
/* 0x80857cec: 4e 80 04 21              bctrl     */
/* 0x80857cf0: 48 00 00 18              b        0x80857d08 */
/* 0x80857cf4: 7c 03 f8 40              cmplw    r3, r31 */
/* 0x80857cf8: 40 82 00 0c              bne      0x80857d04 */
/* 0x80857cfc: 38 00 00 01              li       r0, 1 */
/* 0x80857d00: 48 00 00 14              b        0x80857d14 */
/* 0x80857d04: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80857d08: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80857d0c: 40 82 ff e8              bne      0x80857cf4 */
/* 0x80857d10: 38 00 00 00              li       r0, 0 */
/* 0x80857d14: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80857d18: 41 82 00 08              beq      0x80857d20 */
/* 0x80857d1c: 48 00 00 08              b        0x80857d24 */
/* 0x80857d20: 3b c0 00 00              li       r30, 0 */
/* 0x80857d24: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x80857d28: 40 82 00 0c              bne      0x80857d34 */
/* 0x80857d2c: 3b c0 00 00              li       r30, 0 */
/* 0x80857d30: 48 00 00 58              b        0x80857d88 */
/* 0x80857d34: 3f e0 00 00              lis      r31, 0 */
/* 0x80857d38: 3b ff 00 00              addi     r31, r31, 0 */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackSplitsPage_ct
; Demangled: TimeAttackSplitsPage_ct
; Address: 0x80857bcc  (.text+0x345330)
; Size: 368 bytes

  0x80857bcc:  li       r4, 0
  0x80857bd0:  bl       0x80612d08
  0x80857bd4:  addic.   r31, r29, 0x6c4
  0x80857bd8:  beq      0x80857c14
  0x80857bdc:  addic.   r3, r31, 0x648
  0x80857be0:  beq      0x80857bf0
  0x80857be4:  addi     r3, r3, 0x18
  0x80857be8:  li       r4, 0
  0x80857bec:  bl       0x80612d08
  0x80857bf0:  lis      r4, 0
  0x80857bf4:  addi     r3, r31, 0x174
  0x80857bf8:  addi     r4, r4, 0
  0x80857bfc:  li       r5, 0x254
  0x80857c00:  li       r6, 2
  0x80857c04:  bl       0x80555bf8
  0x80857c08:  mr       r3, r31
  0x80857c0c:  li       r4, 0
  0x80857c10:  bl       0x80612d08
  0x80857c14:  addi     r3, r29, 0x430
  0x80857c18:  li       r4, -1
  0x80857c1c:  bl       0x805dc968
  0x80857c20:  cmpwi    r29, 0
  0x80857c24:  beq      0x80857c44
  0x80857c28:  addic.   r3, r29, 0x54
  0x80857c2c:  beq      0x80857c38
  0x80857c30:  li       r4, 0
  0x80857c34:  bl       0x805bc074
  0x80857c38:  mr       r3, r29
  0x80857c3c:  li       r4, 0
  0x80857c40:  bl       0x805e398c
  0x80857c44:  cmpwi    r30, 0
  0x80857c48:  ble      0x80857c54
  0x80857c4c:  mr       r3, r29
  0x80857c50:  bl       0x80555bf8
  0x80857c54:  lwz      r31, 0x1c(r1)
  0x80857c58:  mr       r3, r29
  0x80857c5c:  lwz      r30, 0x18(r1)
  0x80857c60:  lwz      r29, 0x14(r1)
  0x80857c64:  lwz      r0, 0x24(r1)
  0x80857c68:  mtlr     r0
  0x80857c6c:  addi     r1, r1, 0x20
  0x80857c70:  blr      
  0x80857c74:  lis      r3, 0
  0x80857c78:  addi     r3, r3, 0
  0x80857c7c:  blr      
  0x80857c80:  lis      r4, 0
  0x80857c84:  lis      r3, 0
  0x80857c88:  addi     r4, r4, 0
  0x80857c8c:  stw      r4, 0(r3)
  0x80857c90:  blr      
  0x80857c94:  stwu     r1, -0x10(r1)
  0x80857c98:  mflr     r0
  0x80857c9c:  lis      r4, 0
  0x80857ca0:  stw      r0, 0x14(r1)
  0x80857ca4:  slwi     r0, r3, 2
  0x80857ca8:  stw      r31, 0xc(r1)
  0x80857cac:  stw      r30, 8(r1)
  0x80857cb0:  lwz      r3, 0(r4)
  0x80857cb4:  lwz      r3, 0(r3)
  0x80857cb8:  add      r3, r3, r0
  0x80857cbc:  lwz      r30, 8(r3)
  0x80857cc0:  cmpwi    r30, 0
  0x80857cc4:  bne      0x80857cd0
  0x80857cc8:  li       r30, 0
  0x80857ccc:  b        0x80857d24
  0x80857cd0:  lis      r31, 0
  0x80857cd4:  addi     r31, r31, 0
  0x80857cd8:  beq      0x80857d20
  0x80857cdc:  lwz      r12, 0(r30)
  0x80857ce0:  mr       r3, r30
  0x80857ce4:  lwz      r12, 0x60(r12)
  0x80857ce8:  mtctr    r12
  0x80857cec:  bctrl    
  0x80857cf0:  b        0x80857d08
  0x80857cf4:  cmplw    r3, r31
  0x80857cf8:  bne      0x80857d04
  0x80857cfc:  li       r0, 1
  0x80857d00:  b        0x80857d14
  0x80857d04:  lwz      r3, 0(r3)
  0x80857d08:  cmpwi    r3, 0
  0x80857d0c:  bne      0x80857cf4
  0x80857d10:  li       r0, 0
  0x80857d14:  cmpwi    r0, 0
  0x80857d18:  beq      0x80857d20
  0x80857d1c:  b        0x80857d24
  0x80857d20:  li       r30, 0
  0x80857d24:  cmpwi    r30, 0
  0x80857d28:  bne      0x80857d34
  0x80857d2c:  li       r30, 0
  0x80857d30:  b        0x80857d88
  0x80857d34:  lis      r31, 0
  0x80857d38:  addi     r31, r31, 0
