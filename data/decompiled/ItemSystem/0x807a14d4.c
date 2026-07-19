/**
 * ItemObj_update
 * @addr 0x807a14d4
 * @size 2248 bytes
 * @frame 64 bytes
 */
void ItemObj_update(void) {
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a14d4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a14d8: 4e 80 00 20              blr       */
/* 0x807a14dc: 94 21 ff c0              stwu     r1, -0x40(r1) */
/* 0x807a14e0: 7c 08 02 a6              mflr     r0 */
/* 0x807a14e4: 90 01 00 44              stw      r0, 0x44(r1) */
/* 0x807a14e8: db e1 00 30              stfd     f31, 0x30(r1) */
/* 0x807a14ec: f3 e1 00 38              xxsel    vs31, vs1, vs0, v0 */
/* 0x807a14f0: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x807a14f4: 3f e0 00 00              lis      r31, 0 */
/* 0x807a14f8: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x807a14fc: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x807a1500: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807a1504: c0 1f 00 c0              lfs      f0, 0xc0(r31) */
/* 0x807a1508: c0 23 00 54              lfs      f1, 0x54(r3) */
/* 0x807a150c: 88 03 01 98              lbz      r0, 0x198(r3) */
/* 0x807a1510: ec 01 00 28              fsubs    f0, f1, f0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_update
; Demangled: ItemObj_update
; Address: 0x807a14d4  (.text+0x28ec38)
; Size: 2248 bytes

  0x807a14d4:  addi     r1, r1, 0x10
  0x807a14d8:  blr      
  0x807a14dc:  stwu     r1, -0x40(r1)
  0x807a14e0:  mflr     r0
  0x807a14e4:  stw      r0, 0x44(r1)
  0x807a14e8:  stfd     f31, 0x30(r1)
  0x807a14ec:  xxsel    vs31, vs1, vs0, v0
  0x807a14f0:  stw      r31, 0x2c(r1)
  0x807a14f4:  lis      r31, 0
  0x807a14f8:  addi     r31, r31, 0
  0x807a14fc:  stw      r30, 0x28(r1)
  0x807a1500:  mr       r30, r3
  0x807a1504:  lfs      f0, 0xc0(r31)
  0x807a1508:  lfs      f1, 0x54(r3)
  0x807a150c:  lbz      r0, 0x198(r3)
  0x807a1510:  fsubs    f0, f1, f0
