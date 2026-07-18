/**
 * ItemHolderPlayer_init
 * @addr 0x80799bc8
 * @size 432 bytes
 * @frame 32 bytes
 * @calls 9 function(s)
 */
void ItemHolderPlayer_init(void) {
    /* r7 = r30 */
    /* li r5, 2 */
    /* 0x80656b2c() */
    /* goto 0x80799bf8 */
    /* r3, 0  (load upper immediate) */
    /* r5, 0  (load upper immediate) */
    /* r6 = r5+0x0 */
    /* r4 = r28 */
    /* r3 = r3+0x0 */
    /* r7 = r30 */
    /* li r5, 2 */
    /* 0x80799848() */
    /* r31 = stack[0x1c] */
    /* r3, 0  (load upper immediate) */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* r28 = stack[0x10] */
    /* r0 = stack[0x24] */
    /* r3 = r3+0x0 */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80799bc8: 7f c7 f3 78              mr       r7, r30 */
/* 0x80799bcc: 38 a0 00 02              li       r5, 2 */
/* 0x80799bd0: 4b eb cf 5d              bl       0x80656b2c */
/* 0x80799bd4: 48 00 00 24              b        0x80799bf8 */
/* 0x80799bd8: 3c 60 00 00              lis      r3, 0 */
/* 0x80799bdc: 3c a0 00 00              lis      r5, 0 */
/* 0x80799be0: 80 c5 00 00              lwz      r6, 0(r5) */
/* 0x80799be4: 7f 84 e3 78              mr       r4, r28 */
/* 0x80799be8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80799bec: 7f c7 f3 78              mr       r7, r30 */
/* 0x80799bf0: 38 a0 00 02              li       r5, 2 */
/* 0x80799bf4: 4b ff fc 55              bl       0x80799848 */
/* 0x80799bf8: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80799bfc: 3c 60 00 00              lis      r3, 0 */
/* 0x80799c00: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80799c04: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80799c08: 83 81 00 10              lwz      r28, 0x10(r1) */
/* 0x80799c0c: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80799c10: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80799c14: 7c 08 03 a6              mtlr     r0 */
/* 0x80799c18: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80799c1c: 4e 80 00 20              blr       */
/* 0x80799c20: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80799c24: 7c 08 02 a6              mflr     r0 */
/* 0x80799c28: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80799c2c: 54 a0 25 36              rlwinm   r0, r5, 4, 0x14, 0x1b */
/* 0x80799c30: 7c 80 03 78              or       r0, r4, r0 */
/* 0x80799c34: 3c a0 00 00              lis      r5, 0 */
/* 0x80799c38: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80799c3c: 3f e0 00 00              lis      r31, 0 */
/* 0x80799c40: 3c 80 00 00              lis      r4, 0 */
/* 0x80799c44: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80799c48: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80799c4c: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80799c50: 80 ff 00 00              lwz      r7, 0(r31) */
/* 0x80799c54: b0 c7 00 02              sth      r6, 2(r7) */
/* 0x80799c58: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80799c5c: 98 03 00 04              stb      r0, 4(r3) */
/* 0x80799c60: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80799c64: 80 05 00 00              lwz      r0, 0(r5) */
/* 0x80799c68: b0 03 00 00              sth      r0, 0(r3) */
/* 0x80799c6c: 83 c4 00 00              lwz      r30, 0(r4) */
/* 0x80799c70: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799c74: 4b eb cf 7d              bl       0x80656bf0 */
/* 0x80799c78: 38 00 00 05              li       r0, 5 */
/* 0x80799c7c: 7c 03 00 40              cmplw    r3, r0 */
/* 0x80799c80: 41 80 00 30              blt      0x80799cb0 */
/* 0x80799c84: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799c88: 4b eb ce b1              bl       0x80656b38 */
/* 0x80799c8c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80799c90: 41 82 00 20              beq      0x80799cb0 */
/* 0x80799c94: 80 df 00 00              lwz      r6, 0(r31) */
/* 0x80799c98: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799c9c: 7f a4 eb 78              mr       r4, r29 */
/* 0x80799ca0: 38 a0 00 04              li       r5, 4 */
/* 0x80799ca4: 38 e0 00 05              li       r7, 5 */
/* 0x80799ca8: 4b eb ce 85              bl       0x80656b2c */
/* 0x80799cac: 48 00 00 24              b        0x80799cd0 */
/* 0x80799cb0: 3c 60 00 00              lis      r3, 0 */
/* 0x80799cb4: 3c a0 00 00              lis      r5, 0 */
/* 0x80799cb8: 80 c5 00 00              lwz      r6, 0(r5) */
/* 0x80799cbc: 7f a4 eb 78              mr       r4, r29 */
/* 0x80799cc0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80799cc4: 38 a0 00 04              li       r5, 4 */
/* 0x80799cc8: 38 e0 00 05              li       r7, 5 */
/* 0x80799ccc: 4b ff fb 7d              bl       0x80799848 */
/* 0x80799cd0: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80799cd4: 3c 60 00 00              lis      r3, 0 */
/* 0x80799cd8: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80799cdc: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80799ce0: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80799ce4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80799ce8: 7c 08 03 a6              mtlr     r0 */
/* 0x80799cec: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80799cf0: 4e 80 00 20              blr       */
/* 0x80799cf4: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80799cf8: 7c 08 02 a6              mflr     r0 */
/* 0x80799cfc: 3c c0 00 00              lis      r6, 0 */
/* 0x80799d00: 3c 80 00 00              lis      r4, 0 */
/* 0x80799d04: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80799d08: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80799d0c: 3f e0 00 00              lis      r31, 0 */
/* 0x80799d10: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80799d14: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80799d18: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80799d1c: 80 bf 00 00              lwz      r5, 0(r31) */
/* 0x80799d20: 80 06 00 00              lwz      r0, 0(r6) */
/* 0x80799d24: b0 05 00 00              sth      r0, 0(r5) */
/* 0x80799d28: 83 c4 00 00              lwz      r30, 0(r4) */
/* 0x80799d2c: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799d30: 4b eb ce c1              bl       0x80656bf0 */
/* 0x80799d34: 38 00 00 14              li       r0, 0x14 */
/* 0x80799d38: 7c 03 00 40              cmplw    r3, r0 */
/* 0x80799d3c: 41 80 00 30              blt      0x80799d6c */
/* 0x80799d40: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799d44: 4b eb cd f5              bl       0x80656b38 */
/* 0x80799d48: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80799d4c: 41 82 00 20              beq      0x80799d6c */
/* 0x80799d50: 80 df 00 00              lwz      r6, 0(r31) */
/* 0x80799d54: 7f c3 f3 78              mr       r3, r30 */
/* 0x80799d58: 7f a4 eb 78              mr       r4, r29 */
/* 0x80799d5c: 38 a0 00 03              li       r5, 3 */
/* 0x80799d60: 38 e0 00 14              li       r7, 0x14 */
/* 0x80799d64: 4b eb cd c9              bl       0x80656b2c */
/* 0x80799d68: 48 00 00 24              b        0x80799d8c */
/* 0x80799d6c: 3c 60 00 00              lis      r3, 0 */
/* 0x80799d70: 3c a0 00 00              lis      r5, 0 */
/* 0x80799d74: 80 c5 00 00              lwz      r6, 0(r5) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderPlayer_init
; Demangled: ItemHolderPlayer_init
; Address: 0x80799bc8  (.text+0x28732c)
; Size: 432 bytes

  0x80799bc8:  mr       r7, r30
  0x80799bcc:  li       r5, 2
  0x80799bd0:  bl       0x80656b2c
  0x80799bd4:  b        0x80799bf8
  0x80799bd8:  lis      r3, 0
  0x80799bdc:  lis      r5, 0
  0x80799be0:  lwz      r6, 0(r5)
  0x80799be4:  mr       r4, r28
  0x80799be8:  lwz      r3, 0(r3)
  0x80799bec:  mr       r7, r30
  0x80799bf0:  li       r5, 2
  0x80799bf4:  bl       0x80799848
  0x80799bf8:  lwz      r31, 0x1c(r1)
  0x80799bfc:  lis      r3, 0
  0x80799c00:  lwz      r30, 0x18(r1)
  0x80799c04:  lwz      r29, 0x14(r1)
  0x80799c08:  lwz      r28, 0x10(r1)
  0x80799c0c:  lwz      r0, 0x24(r1)
  0x80799c10:  lwz      r3, 0(r3)
  0x80799c14:  mtlr     r0
  0x80799c18:  addi     r1, r1, 0x20
  0x80799c1c:  blr      
  0x80799c20:  stwu     r1, -0x20(r1)
  0x80799c24:  mflr     r0
  0x80799c28:  stw      r0, 0x24(r1)
  0x80799c2c:  rlwinm   r0, r5, 4, 0x14, 0x1b
  0x80799c30:  or       r0, r4, r0
  0x80799c34:  lis      r5, 0
  0x80799c38:  stw      r31, 0x1c(r1)
  0x80799c3c:  lis      r31, 0
  0x80799c40:  lis      r4, 0
  0x80799c44:  stw      r30, 0x18(r1)
  0x80799c48:  stw      r29, 0x14(r1)
  0x80799c4c:  mr       r29, r3
  0x80799c50:  lwz      r7, 0(r31)
  0x80799c54:  sth      r6, 2(r7)
  0x80799c58:  lwz      r3, 0(r31)
  0x80799c5c:  stb      r0, 4(r3)
  0x80799c60:  lwz      r3, 0(r31)
  0x80799c64:  lwz      r0, 0(r5)
  0x80799c68:  sth      r0, 0(r3)
  0x80799c6c:  lwz      r30, 0(r4)
  0x80799c70:  mr       r3, r30
  0x80799c74:  bl       0x80656bf0
  0x80799c78:  li       r0, 5
  0x80799c7c:  cmplw    r3, r0
  0x80799c80:  blt      0x80799cb0
  0x80799c84:  mr       r3, r30
  0x80799c88:  bl       0x80656b38
  0x80799c8c:  cmpwi    r3, 0
  0x80799c90:  beq      0x80799cb0
  0x80799c94:  lwz      r6, 0(r31)
  0x80799c98:  mr       r3, r30
  0x80799c9c:  mr       r4, r29
  0x80799ca0:  li       r5, 4
  0x80799ca4:  li       r7, 5
  0x80799ca8:  bl       0x80656b2c
  0x80799cac:  b        0x80799cd0
  0x80799cb0:  lis      r3, 0
  0x80799cb4:  lis      r5, 0
  0x80799cb8:  lwz      r6, 0(r5)
  0x80799cbc:  mr       r4, r29
  0x80799cc0:  lwz      r3, 0(r3)
  0x80799cc4:  li       r5, 4
  0x80799cc8:  li       r7, 5
  0x80799ccc:  bl       0x80799848
  0x80799cd0:  lwz      r31, 0x1c(r1)
  0x80799cd4:  lis      r3, 0
  0x80799cd8:  lwz      r30, 0x18(r1)
  0x80799cdc:  lwz      r29, 0x14(r1)
  0x80799ce0:  lwz      r0, 0x24(r1)
  0x80799ce4:  lwz      r3, 0(r3)
  0x80799ce8:  mtlr     r0
  0x80799cec:  addi     r1, r1, 0x20
  0x80799cf0:  blr      
  0x80799cf4:  stwu     r1, -0x20(r1)
  0x80799cf8:  mflr     r0
  0x80799cfc:  lis      r6, 0
  0x80799d00:  lis      r4, 0
  0x80799d04:  stw      r0, 0x24(r1)
  0x80799d08:  stw      r31, 0x1c(r1)
  0x80799d0c:  lis      r31, 0
  0x80799d10:  stw      r30, 0x18(r1)
  0x80799d14:  stw      r29, 0x14(r1)
  0x80799d18:  mr       r29, r3
  0x80799d1c:  lwz      r5, 0(r31)
  0x80799d20:  lwz      r0, 0(r6)
  0x80799d24:  sth      r0, 0(r5)
  0x80799d28:  lwz      r30, 0(r4)
  0x80799d2c:  mr       r3, r30
  0x80799d30:  bl       0x80656bf0
  0x80799d34:  li       r0, 0x14
  0x80799d38:  cmplw    r3, r0
  0x80799d3c:  blt      0x80799d6c
  0x80799d40:  mr       r3, r30
  0x80799d44:  bl       0x80656b38
  0x80799d48:  cmpwi    r3, 0
  0x80799d4c:  beq      0x80799d6c
  0x80799d50:  lwz      r6, 0(r31)
  0x80799d54:  mr       r3, r30
  0x80799d58:  mr       r4, r29
  0x80799d5c:  li       r5, 3
  0x80799d60:  li       r7, 0x14
  0x80799d64:  bl       0x80656b2c
  0x80799d68:  b        0x80799d8c
  0x80799d6c:  lis      r3, 0
  0x80799d70:  lis      r5, 0
  0x80799d74:  lwz      r6, 0(r5)
