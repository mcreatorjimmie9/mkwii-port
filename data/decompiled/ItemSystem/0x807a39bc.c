/**
 * ItemObj_checkPlayerCollision
 * @addr 0x807a39bc
 * @size 428 bytes
 * @frame 32 bytes
 * @calls 5 function(s)
 */
void ItemObj_checkPlayerCollision(void) {
    /* li r4, 0x10e */
    /* r3+0x1ac = r6 */
    /* r5, 0  (load upper immediate) */
    /* r6 = r3+0x9c */
    /* r3+0x1ec = r4 */
    /* li r4, 4 */
    /* f2 = *(f32*)(r5+0x0) */
    /* r3+0x78 = r0 */
    /* *(f32*)(r3+0x1a0) = f1 */
    /* r3 = r6+0x28 */
    /* 0x805598b4() */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a39bc: 38 80 01 0e              li       r4, 0x10e */
/* 0x807a39c0: 90 c3 01 ac              stw      r6, 0x1ac(r3) */
/* 0x807a39c4: 3c a0 00 00              lis      r5, 0 */
/* 0x807a39c8: 80 c3 00 9c              lwz      r6, 0x9c(r3) */
/* 0x807a39cc: 90 83 01 ec              stw      r4, 0x1ec(r3) */
/* 0x807a39d0: 38 80 00 04              li       r4, 4 */
/* 0x807a39d4: c0 45 00 00              lfs      f2, 0(r5) */
/* 0x807a39d8: 90 03 00 78              stw      r0, 0x78(r3) */
/* 0x807a39dc: d0 23 01 a0              stfs     f1, 0x1a0(r3) */
/* 0x807a39e0: 80 66 00 28              lwz      r3, 0x28(r6) */
/* 0x807a39e4: 4b db 5e d1              bl       0x805598b4 */
/* 0x807a39e8: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x807a39ec: 7c 08 03 a6              mtlr     r0 */
/* 0x807a39f0: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807a39f4: 4e 80 00 20              blr       */
/* 0x807a39f8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a39fc: 7c 08 02 a6              mflr     r0 */
/* 0x807a3a00: 3c 80 00 00              lis      r4, 0 */
/* 0x807a3a04: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a3a08: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a3a0c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a3a10: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x807a3a14: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a3a18: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a3a1c: 4b ee c1 e1              bl       0x8068fbfc */
/* 0x807a3a20: 80 7f 01 d4              lwz      r3, 0x1d4(r31) */
/* 0x807a3a24: 38 80 00 00              li       r4, 0 */
/* 0x807a3a28: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a3a2c: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x807a3a30: 7d 89 03 a6              mtctr    r12 */
/* 0x807a3a34: 4e 80 04 21              bctrl     */
/* 0x807a3a38: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a3a3c: 4b ff 7b 91              bl       0x8079b5cc */
/* 0x807a3a40: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a3a44: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a3a48: 7c 08 03 a6              mtlr     r0 */
/* 0x807a3a4c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a3a50: 4e 80 00 20              blr       */
/* 0x807a3a54: 3c a0 00 00              lis      r5, 0 */
/* 0x807a3a58: 3c c0 00 00              lis      r6, 0 */
/* 0x807a3a5c: 7c 64 1b 78              mr       r4, r3 */
/* 0x807a3a60: 80 66 00 00              lwz      r3, 0(r6) */
/* 0x807a3a64: c0 25 00 00              lfs      f1, 0(r5) */
/* 0x807a3a68: 7c 85 23 78              mr       r5, r4 */
/* 0x807a3a6c: 38 c0 00 28              li       r6, 0x28 */
/* 0x807a3a70: 38 e0 00 0a              li       r7, 0xa */
/* 0x807a3a74: 39 00 00 00              li       r8, 0 */
/* 0x807a3a78: 39 20 00 1e              li       r9, 0x1e */
/* 0x807a3a7c: 4b fe 78 f0              b        0x8078b36c */
/* 0x807a3a80: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a3a84: 54 00 06 73              rlwinm.  r0, r0, 0, 0x19, 0x19 */
/* 0x807a3a88: 41 82 00 10              beq      0x807a3a98 */
/* 0x807a3a8c: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3a90: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3a94: 4e 80 00 20              blr       */
/* 0x807a3a98: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3a9c: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3aa0: 4e 80 00 20              blr       */
/* 0x807a3aa4: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a3aa8: 54 00 06 73              rlwinm.  r0, r0, 0, 0x19, 0x19 */
/* 0x807a3aac: 41 82 00 10              beq      0x807a3abc */
/* 0x807a3ab0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3ab4: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3ab8: 4e 80 00 20              blr       */
/* 0x807a3abc: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3ac0: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3ac4: 4e 80 00 20              blr       */
/* 0x807a3ac8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a3acc: 7c 08 02 a6              mflr     r0 */
/* 0x807a3ad0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a3ad4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a3ad8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a3adc: 7c 9f 23 78              mr       r31, r4 */
/* 0x807a3ae0: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x807a3ae4: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807a3ae8: 41 82 00 30              beq      0x807a3b18 */
/* 0x807a3aec: 34 03 01 a4              addic.   r0, r3, 0x1a4 */
/* 0x807a3af0: 41 82 00 18              beq      0x807a3b08 */
/* 0x807a3af4: 3c 80 00 00              lis      r4, 0 */
/* 0x807a3af8: 38 84 00 00              addi     r4, r4, 0 */
/* 0x807a3afc: 90 83 01 a4              stw      r4, 0x1a4(r3) */
/* 0x807a3b00: 80 63 01 b8              lwz      r3, 0x1b8(r3) */
/* 0x807a3b04: 4b db 20 f5              bl       0x80555bf8 */
/* 0x807a3b08: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807a3b0c: 40 81 00 0c              ble      0x807a3b18 */
/* 0x807a3b10: 7f c3 f3 78              mr       r3, r30 */
/* 0x807a3b14: 4b db 20 e5              bl       0x80555bf8 */
/* 0x807a3b18: 7f c3 f3 78              mr       r3, r30 */
/* 0x807a3b1c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a3b20: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x807a3b24: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a3b28: 7c 08 03 a6              mtlr     r0 */
/* 0x807a3b2c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a3b30: 4e 80 00 20              blr       */
/* 0x807a3b34: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x807a3b38: 3c c0 00 00              lis      r6, 0 */
/* 0x807a3b3c: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3b40: 84 a6 00 00              lwzu     r5, 0(r6) */
/* 0x807a3b44: 38 63 00 00              addi     r3, r3, 0 */
/* 0x807a3b48: 90 a1 00 08              stw      r5, 8(r1) */
/* 0x807a3b4c: 80 86 00 04              lwz      r4, 4(r6) */
/* 0x807a3b50: 80 06 00 08              lwz      r0, 8(r6) */
/* 0x807a3b54: 90 81 00 0c              stw      r4, 0xc(r1) */
/* 0x807a3b58: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807a3b5c: 90 a3 00 04              stw      r5, 4(r3) */
/* 0x807a3b60: 90 83 00 08              stw      r4, 8(r3) */
/* 0x807a3b64: 90 03 00 0c              stw      r0, 0xc(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_checkPlayerCollision
; Demangled: ItemObj_checkPlayerCollision
; Address: 0x807a39bc  (.text+0x291120)
; Size: 428 bytes

  0x807a39bc:  li       r4, 0x10e
  0x807a39c0:  stw      r6, 0x1ac(r3)
  0x807a39c4:  lis      r5, 0
  0x807a39c8:  lwz      r6, 0x9c(r3)
  0x807a39cc:  stw      r4, 0x1ec(r3)
  0x807a39d0:  li       r4, 4
  0x807a39d4:  lfs      f2, 0(r5)
  0x807a39d8:  stw      r0, 0x78(r3)
  0x807a39dc:  stfs     f1, 0x1a0(r3)
  0x807a39e0:  lwz      r3, 0x28(r6)
  0x807a39e4:  bl       0x805598b4
  0x807a39e8:  lwz      r0, 0x24(r1)
  0x807a39ec:  mtlr     r0
  0x807a39f0:  addi     r1, r1, 0x20
  0x807a39f4:  blr      
  0x807a39f8:  stwu     r1, -0x10(r1)
  0x807a39fc:  mflr     r0
  0x807a3a00:  lis      r4, 0
  0x807a3a04:  stw      r0, 0x14(r1)
  0x807a3a08:  stw      r31, 0xc(r1)
  0x807a3a0c:  mr       r31, r3
  0x807a3a10:  lwz      r3, 0(r4)
  0x807a3a14:  lha      r4, 0xa(r31)
  0x807a3a18:  lwz      r3, 0x74(r3)
  0x807a3a1c:  bl       0x8068fbfc
  0x807a3a20:  lwz      r3, 0x1d4(r31)
  0x807a3a24:  li       r4, 0
  0x807a3a28:  lwz      r12, 0(r3)
  0x807a3a2c:  lwz      r12, 0xc(r12)
  0x807a3a30:  mtctr    r12
  0x807a3a34:  bctrl    
  0x807a3a38:  mr       r3, r31
  0x807a3a3c:  bl       0x8079b5cc
  0x807a3a40:  lwz      r0, 0x14(r1)
  0x807a3a44:  lwz      r31, 0xc(r1)
  0x807a3a48:  mtlr     r0
  0x807a3a4c:  addi     r1, r1, 0x10
  0x807a3a50:  blr      
  0x807a3a54:  lis      r5, 0
  0x807a3a58:  lis      r6, 0
  0x807a3a5c:  mr       r4, r3
  0x807a3a60:  lwz      r3, 0(r6)
  0x807a3a64:  lfs      f1, 0(r5)
  0x807a3a68:  mr       r5, r4
  0x807a3a6c:  li       r6, 0x28
  0x807a3a70:  li       r7, 0xa
  0x807a3a74:  li       r8, 0
  0x807a3a78:  li       r9, 0x1e
  0x807a3a7c:  b        0x8078b36c
  0x807a3a80:  lwz      r0, 0x7c(r3)
  0x807a3a84:  rlwinm.  r0, r0, 0, 0x19, 0x19
  0x807a3a88:  beq      0x807a3a98
  0x807a3a8c:  lis      r3, 0
  0x807a3a90:  lfs      f1, 0(r3)
  0x807a3a94:  blr      
  0x807a3a98:  lis      r3, 0
  0x807a3a9c:  lfs      f1, 0(r3)
  0x807a3aa0:  blr      
  0x807a3aa4:  lwz      r0, 0x7c(r3)
  0x807a3aa8:  rlwinm.  r0, r0, 0, 0x19, 0x19
  0x807a3aac:  beq      0x807a3abc
  0x807a3ab0:  lis      r3, 0
  0x807a3ab4:  lfs      f1, 0(r3)
  0x807a3ab8:  blr      
  0x807a3abc:  lis      r3, 0
  0x807a3ac0:  lfs      f1, 0(r3)
  0x807a3ac4:  blr      
  0x807a3ac8:  stwu     r1, -0x10(r1)
  0x807a3acc:  mflr     r0
  0x807a3ad0:  cmpwi    r3, 0
  0x807a3ad4:  stw      r0, 0x14(r1)
  0x807a3ad8:  stw      r31, 0xc(r1)
  0x807a3adc:  mr       r31, r4
  0x807a3ae0:  stw      r30, 8(r1)
  0x807a3ae4:  mr       r30, r3
  0x807a3ae8:  beq      0x807a3b18
  0x807a3aec:  addic.   r0, r3, 0x1a4
  0x807a3af0:  beq      0x807a3b08
  0x807a3af4:  lis      r4, 0
  0x807a3af8:  addi     r4, r4, 0
  0x807a3afc:  stw      r4, 0x1a4(r3)
  0x807a3b00:  lwz      r3, 0x1b8(r3)
  0x807a3b04:  bl       0x80555bf8
  0x807a3b08:  cmpwi    r31, 0
  0x807a3b0c:  ble      0x807a3b18
  0x807a3b10:  mr       r3, r30
  0x807a3b14:  bl       0x80555bf8
  0x807a3b18:  mr       r3, r30
  0x807a3b1c:  lwz      r31, 0xc(r1)
  0x807a3b20:  lwz      r30, 8(r1)
  0x807a3b24:  lwz      r0, 0x14(r1)
  0x807a3b28:  mtlr     r0
  0x807a3b2c:  addi     r1, r1, 0x10
  0x807a3b30:  blr      
  0x807a3b34:  stwu     r1, -0x20(r1)
  0x807a3b38:  lis      r6, 0
  0x807a3b3c:  lis      r3, 0
  0x807a3b40:  lwzu     r5, 0(r6)
  0x807a3b44:  addi     r3, r3, 0
  0x807a3b48:  stw      r5, 8(r1)
  0x807a3b4c:  lwz      r4, 4(r6)
  0x807a3b50:  lwz      r0, 8(r6)
  0x807a3b54:  stw      r4, 0xc(r1)
  0x807a3b58:  stw      r0, 0x10(r1)
  0x807a3b5c:  stw      r5, 4(r3)
  0x807a3b60:  stw      r4, 8(r3)
  0x807a3b64:  stw      r0, 0xc(r3)
