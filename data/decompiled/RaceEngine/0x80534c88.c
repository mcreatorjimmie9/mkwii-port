/**
 * Raceinfo_construct
 * @addr 0x80534c88
 * @size 1444 bytes
 * @frame 48 bytes
 * @calls 4 function(s)
 */
void Raceinfo_construct(void) {
    /* if (cr0 <=) goto 0x80534c90 */
    /* 0x80555bf8() */
    /* r3 = r31 */
    /* r31 = stack[0xc] */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80534c88: 40 81 00 08              ble      0x80534c90 */
/* 0x80534c8c: 48 02 0f 6d              bl       0x80555bf8 */
/* 0x80534c90: 7f e3 fb 78              mr       r3, r31 */
/* 0x80534c94: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80534c98: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534c9c: 7c 08 03 a6              mtlr     r0 */
/* 0x80534ca0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534ca4: 4e 80 00 20              blr       */
/* 0x80534ca8: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80534cac: 7c 08 02 a6              mflr     r0 */
/* 0x80534cb0: 38 a0 00 00              li       r5, 0 */
/* 0x80534cb4: 3c 80 00 00              lis      r4, 0 */
/* 0x80534cb8: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80534cbc: 38 00 00 01              li       r0, 1 */
/* 0x80534cc0: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80534cc4: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80534cc8: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80534ccc: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80534cd0: 98 a3 00 1c              stb      r5, 0x1c(r3) */
/* 0x80534cd4: 98 a3 00 1d              stb      r5, 0x1d(r3) */
/* 0x80534cd8: 90 a3 00 20              stw      r5, 0x20(r3) */
/* 0x80534cdc: 98 03 00 30              stb      r0, 0x30(r3) */
/* 0x80534ce0: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80534ce4: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x80534ce8: 2c 00 00 04              cmpwi    r0, 4 */
/* 0x80534cec: 40 82 00 20              bne      0x80534d0c */
/* 0x80534cf0: 3c 60 00 00              lis      r3, 0 */
/* 0x80534cf4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534cf8: 4b fe 62 75              bl       0x8051af6c */
/* 0x80534cfc: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534d00: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x80534d04: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80534d08: 41 82 00 24              beq      0x80534d2c */
/* 0x80534d0c: 3c 60 00 00              lis      r3, 0 */
/* 0x80534d10: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534d14: 80 03 0b 90              lwz      r0, 0xb90(r3) */
/* 0x80534d18: 54 00 07 7b              rlwinm.  r0, r0, 0, 0x1d, 0x1d */
/* 0x80534d1c: 41 82 00 18              beq      0x80534d34 */
/* 0x80534d20: 88 03 0b 8d              lbz      r0, 0xb8d(r3) */
/* 0x80534d24: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80534d28: 40 82 00 0c              bne      0x80534d34 */
/* 0x80534d2c: 38 00 00 00              li       r0, 0 */
/* 0x80534d30: 98 1f 00 30              stb      r0, 0x30(r31) */
/* 0x80534d34: 3c 00 80 00              lis      r0, -0x8000 */
/* 0x80534d38: 90 1f 00 38              stw      r0, 0x38(r31) */
/* 0x80534d3c: 3c 60 00 00              lis      r3, 0 */
/* 0x80534d40: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534d44: 4b ff 1c 19              bl       0x8052695c */
/* 0x80534d48: 3b a0 00 00              li       r29, 0 */
/* 0x80534d4c: 3f c0 00 00              lis      r30, 0 */
/* 0x80534d50: 48 00 00 18              b        0x80534d68 */
/* 0x80534d54: 80 7f 00 0c              lwz      r3, 0xc(r31) */
/* 0x80534d58: 57 a0 15 ba              rlwinm   r0, r29, 2, 0x16, 0x1d */
/* 0x80534d5c: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80534d60: 48 00 11 55              bl       0x80535eb4 */
/* 0x80534d64: 3b bd 00 01              addi     r29, r29, 1 */
/* 0x80534d68: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x80534d6c: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x80534d70: 88 03 00 24              lbz      r0, 0x24(r3) */
/* 0x80534d74: 7c 04 00 40              cmplw    r4, r0 */
/* 0x80534d78: 41 80 ff dc              blt      0x80534d54 */
/* 0x80534d7c: 80 7f 00 10              lwz      r3, 0x10(r31) */
/* 0x80534d80: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x80534d84: 81 8c 00 1c              lwz      r12, 0x1c(r12) */
/* 0x80534d88: 7d 89 03 a6              mtctr    r12 */
/* 0x80534d8c: 4e 80 04 21              bctrl     */
/* 0x80534d90: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80534d94: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80534d98: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80534d9c: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80534da0: 7c 08 03 a6              mtlr     r0 */
/* 0x80534da4: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80534da8: 4e 80 00 20              blr       */
/* 0x80534dac: 4e 80 00 20              blr       */
/* 0x80534db0: 3c 80 00 00              lis      r4, 0 */
/* 0x80534db4: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x80534db8: 80 04 0b 70              lwz      r0, 0xb70(r4) */
/* 0x80534dbc: 2c 00 00 0b              cmpwi    r0, 0xb */
/* 0x80534dc0: 41 80 00 14              blt      0x80534dd4 */
/* 0x80534dc4: 2c 00 00 0c              cmpwi    r0, 0xc */
/* 0x80534dc8: 41 81 00 0c              bgt      0x80534dd4 */
/* 0x80534dcc: 38 60 00 00              li       r3, 0 */
/* 0x80534dd0: 4e 80 00 20              blr       */
/* 0x80534dd4: 80 03 00 20              lwz      r0, 0x20(r3) */
/* 0x80534dd8: 20 60 00 f0              subfic   r3, r0, 0xf0 */
/* 0x80534ddc: 4e 80 00 20              blr       */
/* 0x80534de0: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x80534de4: 7c 08 02 a6              mflr     r0 */
/* 0x80534de8: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x80534dec: db e1 00 20              stfd     f31, 0x20(r1) */
#endif


/* === DISASSEMBLY === */

; Function: Raceinfo_construct
; Demangled: Raceinfo_construct
; Address: 0x80534c88  (.text+0x223ec)
; Size: 1444 bytes

  0x80534c88:  ble      0x80534c90
  0x80534c8c:  bl       0x80555bf8
  0x80534c90:  mr       r3, r31
  0x80534c94:  lwz      r31, 0xc(r1)
  0x80534c98:  lwz      r0, 0x14(r1)
  0x80534c9c:  mtlr     r0
  0x80534ca0:  addi     r1, r1, 0x10
  0x80534ca4:  blr      
  0x80534ca8:  stwu     r1, -0x20(r1)
  0x80534cac:  mflr     r0
  0x80534cb0:  li       r5, 0
  0x80534cb4:  lis      r4, 0
  0x80534cb8:  stw      r0, 0x24(r1)
  0x80534cbc:  li       r0, 1
  0x80534cc0:  stw      r31, 0x1c(r1)
  0x80534cc4:  mr       r31, r3
  0x80534cc8:  stw      r30, 0x18(r1)
  0x80534ccc:  stw      r29, 0x14(r1)
  0x80534cd0:  stb      r5, 0x1c(r3)
  0x80534cd4:  stb      r5, 0x1d(r3)
  0x80534cd8:  stw      r5, 0x20(r3)
  0x80534cdc:  stb      r0, 0x30(r3)
  0x80534ce0:  lwz      r3, 0(r4)
  0x80534ce4:  lwz      r0, 0xb70(r3)
  0x80534ce8:  cmpwi    r0, 4
  0x80534cec:  bne      0x80534d0c
  0x80534cf0:  lis      r3, 0
  0x80534cf4:  lwz      r3, 0(r3)
  0x80534cf8:  bl       0x8051af6c
  0x80534cfc:  lwz      r3, 0(r3)
  0x80534d00:  lbz      r0, 0(r3)
  0x80534d04:  cmpwi    r0, 0
  0x80534d08:  beq      0x80534d2c
  0x80534d0c:  lis      r3, 0
  0x80534d10:  lwz      r3, 0(r3)
  0x80534d14:  lwz      r0, 0xb90(r3)
  0x80534d18:  rlwinm.  r0, r0, 0, 0x1d, 0x1d
  0x80534d1c:  beq      0x80534d34
  0x80534d20:  lbz      r0, 0xb8d(r3)
  0x80534d24:  cmpwi    r0, 0
  0x80534d28:  bne      0x80534d34
  0x80534d2c:  li       r0, 0
  0x80534d30:  stb      r0, 0x30(r31)
  0x80534d34:  lis      r0, -0x8000
  0x80534d38:  stw      r0, 0x38(r31)
  0x80534d3c:  lis      r3, 0
  0x80534d40:  lwz      r3, 0(r3)
  0x80534d44:  bl       0x8052695c
  0x80534d48:  li       r29, 0
  0x80534d4c:  lis      r30, 0
  0x80534d50:  b        0x80534d68
  0x80534d54:  lwz      r3, 0xc(r31)
  0x80534d58:  rlwinm   r0, r29, 2, 0x16, 0x1d
  0x80534d5c:  lwzx     r3, r3, r0
  0x80534d60:  bl       0x80535eb4
  0x80534d64:  addi     r29, r29, 1
  0x80534d68:  lwz      r3, 0(r30)
  0x80534d6c:  clrlwi   r4, r29, 0x18
  0x80534d70:  lbz      r0, 0x24(r3)
  0x80534d74:  cmplw    r4, r0
  0x80534d78:  blt      0x80534d54
  0x80534d7c:  lwz      r3, 0x10(r31)
  0x80534d80:  lwz      r12, 0(r3)
  0x80534d84:  lwz      r12, 0x1c(r12)
  0x80534d88:  mtctr    r12
  0x80534d8c:  bctrl    
  0x80534d90:  lwz      r0, 0x24(r1)
  0x80534d94:  lwz      r31, 0x1c(r1)
  0x80534d98:  lwz      r30, 0x18(r1)
  0x80534d9c:  lwz      r29, 0x14(r1)
  0x80534da0:  mtlr     r0
  0x80534da4:  addi     r1, r1, 0x20
  0x80534da8:  blr      
  0x80534dac:  blr      
  0x80534db0:  lis      r4, 0
  0x80534db4:  lwz      r4, 0(r4)
  0x80534db8:  lwz      r0, 0xb70(r4)
  0x80534dbc:  cmpwi    r0, 0xb
  0x80534dc0:  blt      0x80534dd4
  0x80534dc4:  cmpwi    r0, 0xc
  0x80534dc8:  bgt      0x80534dd4
  0x80534dcc:  li       r3, 0
  0x80534dd0:  blr      
  0x80534dd4:  lwz      r0, 0x20(r3)
  0x80534dd8:  subfic   r3, r0, 0xf0
  0x80534ddc:  blr      
  0x80534de0:  stwu     r1, -0x30(r1)
  0x80534de4:  mflr     r0
  0x80534de8:  stw      r0, 0x34(r1)
  0x80534dec:  stfd     f31, 0x20(r1)
