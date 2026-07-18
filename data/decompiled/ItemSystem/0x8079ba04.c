/**
 * ItemHolderPlayer_destroy
 * @addr 0x8079ba04
 * @size 148 bytes
 * @frame 16 bytes
 * @calls 3 function(s)
 */
void ItemHolderPlayer_destroy(void) {
    /* f1 = *(f32*)(r4+0x48) */
    /* r6 = r30 */
    /* r3 = r3+0x0 */
    /* addi r4, r30, 0x44 */
    /* fmuls f1, f1, f0 */
    /* f2 = *(f32*)(r31+0x18) */
    /* li r5, 1 */
    /* 0x8078849c() */
    /* r0 = r30+0x7c */
    /* r30+0xb0 = r3 */
    /* ori r0, r0, 0x1000 */
    /* r30+0x7c = r0 */
    /* r0 = stack[0x44] */
    /* r31 = stack[0x3c] */
    /* r30 = stack[0x38] */
    /* mtlr r0 */
    /* addi r1, r1, 0x40 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079ba04: c0 24 00 48              lfs      f1, 0x48(r4) */
/* 0x8079ba08: 7f c6 f3 78              mr       r6, r30 */
/* 0x8079ba0c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079ba10: 38 9e 00 44              addi     r4, r30, 0x44 */
/* 0x8079ba14: ec 21 00 32              fmuls    f1, f1, f0 */
/* 0x8079ba18: c0 5f 00 18              lfs      f2, 0x18(r31) */
/* 0x8079ba1c: 38 a0 00 01              li       r5, 1 */
/* 0x8079ba20: 4b fe ca 7d              bl       0x8078849c */
/* 0x8079ba24: 80 1e 00 7c              lwz      r0, 0x7c(r30) */
/* 0x8079ba28: 90 7e 00 b0              stw      r3, 0xb0(r30) */
/* 0x8079ba2c: 60 00 10 00              ori      r0, r0, 0x1000 */
/* 0x8079ba30: 90 1e 00 7c              stw      r0, 0x7c(r30) */
/* 0x8079ba34: 80 01 00 44              lwz      r0, 0x44(r1) */
/* 0x8079ba38: 83 e1 00 3c              lwz      r31, 0x3c(r1) */
/* 0x8079ba3c: 83 c1 00 38              lwz      r30, 0x38(r1) */
/* 0x8079ba40: 7c 08 03 a6              mtlr     r0 */
/* 0x8079ba44: 38 21 00 40              addi     r1, r1, 0x40 */
/* 0x8079ba48: 4e 80 00 20              blr       */
/* 0x8079ba4c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079ba50: 7c 08 02 a6              mflr     r0 */
/* 0x8079ba54: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079ba58: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079ba5c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079ba60: 4b ff fc e1              bl       0x8079b740 */
/* 0x8079ba64: 7f e3 fb 78              mr       r3, r31 */
/* 0x8079ba68: 48 00 8f d9              bl       0x807a4a40 */
/* 0x8079ba6c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079ba70: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079ba74: 7c 08 03 a6              mtlr     r0 */
/* 0x8079ba78: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079ba7c: 4e 80 00 20              blr       */
/* 0x8079ba80: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079ba84: 7c 08 02 a6              mflr     r0 */
/* 0x8079ba88: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079ba8c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079ba90: 7c df 33 78              mr       r31, r6 */
/* 0x8079ba94: 93 c1 00 08              stw      r30, 8(r1) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderPlayer_destroy
; Demangled: ItemHolderPlayer_destroy
; Address: 0x8079ba04  (.text+0x289168)
; Size: 148 bytes

  0x8079ba04:  lfs      f1, 0x48(r4)
  0x8079ba08:  mr       r6, r30
  0x8079ba0c:  lwz      r3, 0(r3)
  0x8079ba10:  addi     r4, r30, 0x44
  0x8079ba14:  fmuls    f1, f1, f0
  0x8079ba18:  lfs      f2, 0x18(r31)
  0x8079ba1c:  li       r5, 1
  0x8079ba20:  bl       0x8078849c
  0x8079ba24:  lwz      r0, 0x7c(r30)
  0x8079ba28:  stw      r3, 0xb0(r30)
  0x8079ba2c:  ori      r0, r0, 0x1000
  0x8079ba30:  stw      r0, 0x7c(r30)
  0x8079ba34:  lwz      r0, 0x44(r1)
  0x8079ba38:  lwz      r31, 0x3c(r1)
  0x8079ba3c:  lwz      r30, 0x38(r1)
  0x8079ba40:  mtlr     r0
  0x8079ba44:  addi     r1, r1, 0x40
  0x8079ba48:  blr      
  0x8079ba4c:  stwu     r1, -0x10(r1)
  0x8079ba50:  mflr     r0
  0x8079ba54:  stw      r0, 0x14(r1)
  0x8079ba58:  stw      r31, 0xc(r1)
  0x8079ba5c:  mr       r31, r3
  0x8079ba60:  bl       0x8079b740
  0x8079ba64:  mr       r3, r31
  0x8079ba68:  bl       0x807a4a40
  0x8079ba6c:  lwz      r0, 0x14(r1)
  0x8079ba70:  lwz      r31, 0xc(r1)
  0x8079ba74:  mtlr     r0
  0x8079ba78:  addi     r1, r1, 0x10
  0x8079ba7c:  blr      
  0x8079ba80:  stwu     r1, -0x10(r1)
  0x8079ba84:  mflr     r0
  0x8079ba88:  stw      r0, 0x14(r1)
  0x8079ba8c:  stw      r31, 0xc(r1)
  0x8079ba90:  mr       r31, r6
  0x8079ba94:  stw      r30, 8(r1)
