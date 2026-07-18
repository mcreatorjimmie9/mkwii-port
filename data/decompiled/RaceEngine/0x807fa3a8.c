/**
 * CtrlRaceTime_calcSelf
 * @addr 0x807fa3a8
 * @size 940 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void CtrlRaceTime_calcSelf(void) {
    /* if (cr0 !=) goto 0x807fa3b4 */
    /* li r3, 0 */
    /* goto 0x807fa45c */
    /* r3 = r28 */
    /* r4 = r27 */
    /* 0x807f9cac() */
    /* addi r3, r1, 8 */
    /* addi r4, r28, 0x134 */
    /* 0x8051aeac() */
    /* r3, 0  (load upper immediate) */
    /* f3 = *(f32*)(r1+0x8) */
    /* r3 = r3+0x0 */
    /* f2 = *(f32*)(r1+0xc) */
    /* f4 = *(f32*)(r3+0x8) */
    /* f0 = *(f32*)(r30+0x50) */
    /* f1 = *(f32*)(r1+0x10) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807fa3a8: 40 82 00 0c              bne      0x807fa3b4 */
/* 0x807fa3ac: 38 60 00 00              li       r3, 0 */
/* 0x807fa3b0: 48 00 00 ac              b        0x807fa45c */
/* 0x807fa3b4: 7f 83 e3 78              mr       r3, r28 */
/* 0x807fa3b8: 7f 64 db 78              mr       r4, r27 */
/* 0x807fa3bc: 4b ff f8 f1              bl       0x807f9cac */
/* 0x807fa3c0: 38 61 00 08              addi     r3, r1, 8 */
/* 0x807fa3c4: 38 9c 01 34              addi     r4, r28, 0x134 */
/* 0x807fa3c8: 4b d2 0a e5              bl       0x8051aeac */
/* 0x807fa3cc: 3c 60 00 00              lis      r3, 0 */
/* 0x807fa3d0: c0 61 00 08              lfs      f3, 8(r1) */
/* 0x807fa3d4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807fa3d8: c0 41 00 0c              lfs      f2, 0xc(r1) */
/* 0x807fa3dc: c0 83 00 08              lfs      f4, 8(r3) */
/* 0x807fa3e0: c0 1e 00 50              lfs      f0, 0x50(r30) */
/* 0x807fa3e4: c0 21 00 10              lfs      f1, 0x10(r1) */
#endif


/* === DISASSEMBLY === */

; Function: CtrlRaceTime_calcSelf
; Demangled: CtrlRaceTime_calcSelf
; Address: 0x807fa3a8  (.text+0x2e7b0c)
; Size: 940 bytes

  0x807fa3a8:  bne      0x807fa3b4
  0x807fa3ac:  li       r3, 0
  0x807fa3b0:  b        0x807fa45c
  0x807fa3b4:  mr       r3, r28
  0x807fa3b8:  mr       r4, r27
  0x807fa3bc:  bl       0x807f9cac
  0x807fa3c0:  addi     r3, r1, 8
  0x807fa3c4:  addi     r4, r28, 0x134
  0x807fa3c8:  bl       0x8051aeac
  0x807fa3cc:  lis      r3, 0
  0x807fa3d0:  lfs      f3, 8(r1)
  0x807fa3d4:  lwz      r3, 0(r3)
  0x807fa3d8:  lfs      f2, 0xc(r1)
  0x807fa3dc:  lfs      f4, 8(r3)
  0x807fa3e0:  lfs      f0, 0x50(r30)
  0x807fa3e4:  lfs      f1, 0x10(r1)
