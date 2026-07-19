/**
 * ItemHolder_update
 * @addr 0x8079bd38
 * @size 336 bytes
 * @frame 32 bytes
 * @calls 8 function(s)
 */
void ItemHolder_update(void) {
    /* if (cr0 >) goto 0x8079bd50 */
    /* li r0, 1 */
    /* slw r0, r0, r3 */
    /* andi. r0, r0, 0x19 */
    /* if (cr0 ==) goto 0x8079bd50 */
    /* li r4, 0 */
    /* cmpwi r4, 0 */
    /* if (cr0 !=) goto 0x8079bd94 */
    /* r3 = r29+0xa8 */
    /* li r4, 3 */
    /* 0x8055f1e0() */
    /* goto 0x8079bd94 */
    /* r3, 0  (load upper immediate) */
    /* li r25, 0 */
    /* r3 = r3+0x0 */
    /* r26 = r3+0x25 */
    /* goto 0x8079bd8c */
    /* r3 = r29+0xa8 */
    /* r4 = r25 */
    /* 0x8055f1e0() */
    /* addi r25, r25, 1 */
    /* cmpw r25, r26 */
    /* if (cr0 <) goto 0x8079bd7c */
    /* addi r11, r1, 0x30 */
    /* 0x80555bf8() */
    /* r0 = stack[0x34] */
    /* mtlr r0 */
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079bd38: 41 81 00 18              bgt      0x8079bd50 */
/* 0x8079bd3c: 38 00 00 01              li       r0, 1 */
/* 0x8079bd40: 7c 00 18 30              slw      r0, r0, r3 */
/* 0x8079bd44: 70 00 00 19              andi.    r0, r0, 0x19 */
/* 0x8079bd48: 41 82 00 08              beq      0x8079bd50 */
/* 0x8079bd4c: 38 80 00 00              li       r4, 0 */
/* 0x8079bd50: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079bd54: 40 82 00 40              bne      0x8079bd94 */
/* 0x8079bd58: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bd5c: 38 80 00 03              li       r4, 3 */
/* 0x8079bd60: 4b dc 34 81              bl       0x8055f1e0 */
/* 0x8079bd64: 48 00 00 30              b        0x8079bd94 */
/* 0x8079bd68: 3c 60 00 00              lis      r3, 0 */
/* 0x8079bd6c: 3b 20 00 00              li       r25, 0 */
/* 0x8079bd70: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079bd74: 8b 43 00 25              lbz      r26, 0x25(r3) */
/* 0x8079bd78: 48 00 00 14              b        0x8079bd8c */
/* 0x8079bd7c: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bd80: 7f 24 cb 78              mr       r4, r25 */
/* 0x8079bd84: 4b dc 34 5d              bl       0x8055f1e0 */
/* 0x8079bd88: 3b 39 00 01              addi     r25, r25, 1 */
/* 0x8079bd8c: 7c 19 d0 00              cmpw     r25, r26 */
/* 0x8079bd90: 41 80 ff ec              blt      0x8079bd7c */
/* 0x8079bd94: 39 61 00 30              addi     r11, r1, 0x30 */
/* 0x8079bd98: 4b db 9e 61              bl       0x80555bf8 */
/* 0x8079bd9c: 80 01 00 34              lwz      r0, 0x34(r1) */
/* 0x8079bda0: 7c 08 03 a6              mtlr     r0 */
/* 0x8079bda4: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x8079bda8: 4e 80 00 20              blr       */
/* 0x8079bdac: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079bdb0: 7c 08 02 a6              mflr     r0 */
/* 0x8079bdb4: c0 46 00 00              lfs      f2, 0(r6) */
/* 0x8079bdb8: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079bdbc: 38 00 00 0c              li       r0, 0xc */
/* 0x8079bdc0: c0 26 00 04              lfs      f1, 4(r6) */
/* 0x8079bdc4: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079bdc8: 7c ff 3b 78              mr       r31, r7 */
/* 0x8079bdcc: c0 06 00 08              lfs      f0, 8(r6) */
/* 0x8079bdd0: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x8079bdd4: 7c 7e 1b 78              mr       r30, r3 */
/* 0x8079bdd8: d0 43 00 44              stfs     f2, 0x44(r3) */
/* 0x8079bddc: d0 23 00 48              stfs     f1, 0x48(r3) */
/* 0x8079bde0: d0 03 00 4c              stfs     f0, 0x4c(r3) */
/* 0x8079bde4: 98 a3 00 6c              stb      r5, 0x6c(r3) */
/* 0x8079bde8: 98 03 00 6d              stb      r0, 0x6d(r3) */
/* 0x8079bdec: 48 00 00 65              bl       0x8079be50 */
/* 0x8079bdf0: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079bdf4: 4b ff fd f5              bl       0x8079bbe8 */
/* 0x8079bdf8: 80 1e 00 78              lwz      r0, 0x78(r30) */
/* 0x8079bdfc: 54 00 01 cf              rlwinm.  r0, r0, 0, 7, 7 */
/* 0x8079be00: 41 82 00 14              beq      0x8079be14 */
/* 0x8079be04: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be08: 38 80 00 00              li       r4, 0 */
/* 0x8079be0c: 48 00 27 25              bl       0x8079e530 */
/* 0x8079be10: 48 00 00 18              b        0x8079be28 */
/* 0x8079be14: 3c 80 00 00              lis      r4, 0 */
/* 0x8079be18: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be1c: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x8079be20: 38 80 00 00              li       r4, 0 */
/* 0x8079be24: 48 00 21 f1              bl       0x8079e014 */
/* 0x8079be28: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be2c: 7f e4 fb 78              mr       r4, r31 */
/* 0x8079be30: 4b ff c6 ed              bl       0x8079851c */
/* 0x8079be34: b0 7e 00 0c              sth      r3, 0xc(r30) */
/* 0x8079be38: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079be3c: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x8079be40: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079be44: 7c 08 03 a6              mtlr     r0 */
/* 0x8079be48: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079be4c: 4e 80 00 20              blr       */
/* 0x8079be50: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x8079be54: 7c 08 02 a6              mflr     r0 */
/* 0x8079be58: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x8079be5c: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x8079be60: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079be64: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x8079be68: 3b c0 00 00              li       r30, 0 */
/* 0x8079be6c: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x8079be70: 3f a0 00 00              lis      r29, 0 */
/* 0x8079be74: 3b bd 00 00              addi     r29, r29, 0 */
/* 0x8079be78: c0 5d 00 1c              lfs      f2, 0x1c(r29) */
/* 0x8079be7c: c0 1d 00 20              lfs      f0, 0x20(r29) */
/* 0x8079be80: c0 3d 00 00              lfs      f1, 0(r29) */
/* 0x8079be84: 90 83 00 04              stw      r4, 4(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolder_update
; Demangled: ItemHolder_update
; Address: 0x8079bd38  (.text+0x28949c)
; Size: 336 bytes

  0x8079bd38:  bgt      0x8079bd50
  0x8079bd3c:  li       r0, 1
  0x8079bd40:  slw      r0, r0, r3
  0x8079bd44:  andi.    r0, r0, 0x19
  0x8079bd48:  beq      0x8079bd50
  0x8079bd4c:  li       r4, 0
  0x8079bd50:  cmpwi    r4, 0
  0x8079bd54:  bne      0x8079bd94
  0x8079bd58:  lwz      r3, 0xa8(r29)
  0x8079bd5c:  li       r4, 3
  0x8079bd60:  bl       0x8055f1e0
  0x8079bd64:  b        0x8079bd94
  0x8079bd68:  lis      r3, 0
  0x8079bd6c:  li       r25, 0
  0x8079bd70:  lwz      r3, 0(r3)
  0x8079bd74:  lbz      r26, 0x25(r3)
  0x8079bd78:  b        0x8079bd8c
  0x8079bd7c:  lwz      r3, 0xa8(r29)
  0x8079bd80:  mr       r4, r25
  0x8079bd84:  bl       0x8055f1e0
  0x8079bd88:  addi     r25, r25, 1
  0x8079bd8c:  cmpw     r25, r26
  0x8079bd90:  blt      0x8079bd7c
  0x8079bd94:  addi     r11, r1, 0x30
  0x8079bd98:  bl       0x80555bf8
  0x8079bd9c:  lwz      r0, 0x34(r1)
  0x8079bda0:  mtlr     r0
  0x8079bda4:  addi     r1, r1, 0x30
  0x8079bda8:  blr      
  0x8079bdac:  stwu     r1, -0x10(r1)
  0x8079bdb0:  mflr     r0
  0x8079bdb4:  lfs      f2, 0(r6)
  0x8079bdb8:  stw      r0, 0x14(r1)
  0x8079bdbc:  li       r0, 0xc
  0x8079bdc0:  lfs      f1, 4(r6)
  0x8079bdc4:  stw      r31, 0xc(r1)
  0x8079bdc8:  mr       r31, r7
  0x8079bdcc:  lfs      f0, 8(r6)
  0x8079bdd0:  stw      r30, 8(r1)
  0x8079bdd4:  mr       r30, r3
  0x8079bdd8:  stfs     f2, 0x44(r3)
  0x8079bddc:  stfs     f1, 0x48(r3)
  0x8079bde0:  stfs     f0, 0x4c(r3)
  0x8079bde4:  stb      r5, 0x6c(r3)
  0x8079bde8:  stb      r0, 0x6d(r3)
  0x8079bdec:  bl       0x8079be50
  0x8079bdf0:  mr       r3, r30
  0x8079bdf4:  bl       0x8079bbe8
  0x8079bdf8:  lwz      r0, 0x78(r30)
  0x8079bdfc:  rlwinm.  r0, r0, 0, 7, 7
  0x8079be00:  beq      0x8079be14
  0x8079be04:  mr       r3, r30
  0x8079be08:  li       r4, 0
  0x8079be0c:  bl       0x8079e530
  0x8079be10:  b        0x8079be28
  0x8079be14:  lis      r4, 0
  0x8079be18:  mr       r3, r30
  0x8079be1c:  lfs      f1, 0(r4)
  0x8079be20:  li       r4, 0
  0x8079be24:  bl       0x8079e014
  0x8079be28:  mr       r3, r30
  0x8079be2c:  mr       r4, r31
  0x8079be30:  bl       0x8079851c
  0x8079be34:  sth      r3, 0xc(r30)
  0x8079be38:  lwz      r31, 0xc(r1)
  0x8079be3c:  lwz      r30, 8(r1)
  0x8079be40:  lwz      r0, 0x14(r1)
  0x8079be44:  mtlr     r0
  0x8079be48:  addi     r1, r1, 0x10
  0x8079be4c:  blr      
  0x8079be50:  stwu     r1, -0x20(r1)
  0x8079be54:  mflr     r0
  0x8079be58:  stw      r0, 0x24(r1)
  0x8079be5c:  stw      r31, 0x1c(r1)
  0x8079be60:  mr       r31, r3
  0x8079be64:  stw      r30, 0x18(r1)
  0x8079be68:  li       r30, 0
  0x8079be6c:  stw      r29, 0x14(r1)
  0x8079be70:  lis      r29, 0
  0x8079be74:  addi     r29, r29, 0
  0x8079be78:  lfs      f2, 0x1c(r29)
  0x8079be7c:  lfs      f0, 0x20(r29)
  0x8079be80:  lfs      f1, 0(r29)
  0x8079be84:  stw      r4, 4(r3)
