/**
 * CtrlRaceLap_load
 * @addr 0x807f1db8
 * @size 172 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void CtrlRaceLap_load(void) {
    /* addi r3, r3, 0x6667 */
    /* mulhw r0, r3, r0 */
    /* srawi r0, r0, 2 */
    /* srwi r3, r0, 0x1f */
    /* add r0, r0, r3 */
    /* cmpw r0, r28 */
    /* if (cr0 >=) goto 0x807f1de0 */
    /* f0 = *(f32*)(r31+0x128) */
    /* r28 = r0 */
    /* *(f32*)(r30+0x180) = f0 */
    /* r31, 0  (load upper immediate) */
    /* r29, 0  (load upper immediate) */
    /* addi r29, r29, 0 */
    /* r31+0x0 = r28 */
    /* r3 = r30 */
    /* addi r6, r31, 0 */
    /* addi r4, r29, 0x121 */
    /* li r5, 0x522 */
    /* 0x80613104() */
    /* r5 = r30+0x190 */
    /* r3 = r30 */
    /* addi r4, r29, 0x12d */
    /* addi r6, r31, 0 */
    /* 0x80613104() */
    /* goto 0x807f1f44 */
    /* cmpwi r6, 0 */
    /* if (cr0 !=) goto 0x807f1f44 */
    /* f2 = *(f32*)(r3+0x180) */
    /* f0 = *(f32*)(r31+0x148) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807f1db8: 38 63 66 67              addi     r3, r3, 0x6667 */
/* 0x807f1dbc: 7c 03 00 96              mulhw    r0, r3, r0 */
/* 0x807f1dc0: 7c 00 16 70              srawi    r0, r0, 2 */
/* 0x807f1dc4: 54 03 0f fe              srwi     r3, r0, 0x1f */
/* 0x807f1dc8: 7c 00 1a 14              add      r0, r0, r3 */
/* 0x807f1dcc: 7c 00 e0 00              cmpw     r0, r28 */
/* 0x807f1dd0: 40 80 00 10              bge      0x807f1de0 */
/* 0x807f1dd4: c0 1f 01 28              lfs      f0, 0x128(r31) */
/* 0x807f1dd8: 7c 1c 03 78              mr       r28, r0 */
/* 0x807f1ddc: d0 1e 01 80              stfs     f0, 0x180(r30) */
/* 0x807f1de0: 3f e0 00 00              lis      r31, 0 */
/* 0x807f1de4: 3f a0 00 00              lis      r29, 0 */
/* 0x807f1de8: 3b bd 00 00              addi     r29, r29, 0 */
/* 0x807f1dec: 93 9f 00 00              stw      r28, 0(r31) */
/* 0x807f1df0: 7f c3 f3 78              mr       r3, r30 */
/* 0x807f1df4: 38 df 00 00              addi     r6, r31, 0 */
/* 0x807f1df8: 38 9d 01 21              addi     r4, r29, 0x121 */
/* 0x807f1dfc: 38 a0 05 22              li       r5, 0x522 */
/* 0x807f1e00: 4b e2 13 05              bl       0x80613104 */
/* 0x807f1e04: 80 be 01 90              lwz      r5, 0x190(r30) */
/* 0x807f1e08: 7f c3 f3 78              mr       r3, r30 */
/* 0x807f1e0c: 38 9d 01 2d              addi     r4, r29, 0x12d */
/* 0x807f1e10: 38 df 00 00              addi     r6, r31, 0 */
/* 0x807f1e14: 4b e2 12 f1              bl       0x80613104 */
/* 0x807f1e18: 48 00 01 2c              b        0x807f1f44 */
/* 0x807f1e1c: 2c 06 00 00              cmpwi    r6, 0 */
/* 0x807f1e20: 40 82 01 24              bne      0x807f1f44 */
/* 0x807f1e24: c0 43 01 80              lfs      f2, 0x180(r3) */
/* 0x807f1e28: c0 1f 01 48              lfs      f0, 0x148(r31) */
#endif


/* === DISASSEMBLY === */

; Function: CtrlRaceLap_load
; Demangled: CtrlRaceLap_load
; Address: 0x807f1db8  (.text+0x2df51c)
; Size: 172 bytes

  0x807f1db8:  addi     r3, r3, 0x6667
  0x807f1dbc:  mulhw    r0, r3, r0
  0x807f1dc0:  srawi    r0, r0, 2
  0x807f1dc4:  srwi     r3, r0, 0x1f
  0x807f1dc8:  add      r0, r0, r3
  0x807f1dcc:  cmpw     r0, r28
  0x807f1dd0:  bge      0x807f1de0
  0x807f1dd4:  lfs      f0, 0x128(r31)
  0x807f1dd8:  mr       r28, r0
  0x807f1ddc:  stfs     f0, 0x180(r30)
  0x807f1de0:  lis      r31, 0
  0x807f1de4:  lis      r29, 0
  0x807f1de8:  addi     r29, r29, 0
  0x807f1dec:  stw      r28, 0(r31)
  0x807f1df0:  mr       r3, r30
  0x807f1df4:  addi     r6, r31, 0
  0x807f1df8:  addi     r4, r29, 0x121
  0x807f1dfc:  li       r5, 0x522
  0x807f1e00:  bl       0x80613104
  0x807f1e04:  lwz      r5, 0x190(r30)
  0x807f1e08:  mr       r3, r30
  0x807f1e0c:  addi     r4, r29, 0x12d
  0x807f1e10:  addi     r6, r31, 0
  0x807f1e14:  bl       0x80613104
  0x807f1e18:  b        0x807f1f44
  0x807f1e1c:  cmpwi    r6, 0
  0x807f1e20:  bne      0x807f1f44
  0x807f1e24:  lfs      f2, 0x180(r3)
  0x807f1e28:  lfs      f0, 0x148(r31)
