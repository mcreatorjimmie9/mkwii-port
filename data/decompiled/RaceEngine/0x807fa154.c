/**
 * CtrlRaceTime_initSelf
 * @addr 0x807fa154
 * @size 504 bytes
 * @frame 0 bytes
 * @calls 1 function(s)
 */
void CtrlRaceTime_initSelf(void) {
    /* r0 = r31+0x0 */
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */
    /* if (cr0 !=) goto 0x807fa178 */
    /* r4, 0  (load upper immediate) */
    /* r3 = r31 */
    /* r5 = r4+0x0 */
    /* r4 = r28 */
    /* f1 = *(f32*)(r5+0x8) */
    /* 0x807b55e0() */
    /* li r3, 1 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807fa154: 80 1f 00 00              lwz      r0, 0(r31) */
/* 0x807fa158: 54 00 05 ef              rlwinm.  r0, r0, 0, 0x17, 0x17 */
/* 0x807fa15c: 40 82 00 1c              bne      0x807fa178 */
/* 0x807fa160: 3c 80 00 00              lis      r4, 0 */
/* 0x807fa164: 7f e3 fb 78              mr       r3, r31 */
/* 0x807fa168: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x807fa16c: 7f 84 e3 78              mr       r4, r28 */
/* 0x807fa170: c0 25 00 08              lfs      f1, 8(r5) */
/* 0x807fa174: 4b fb b4 6d              bl       0x807b55e0 */
/* 0x807fa178: 38 60 00 01              li       r3, 1 */
#endif


/* === DISASSEMBLY === */

; Function: CtrlRaceTime_initSelf
; Demangled: CtrlRaceTime_initSelf
; Address: 0x807fa154  (.text+0x2e78b8)
; Size: 504 bytes

  0x807fa154:  lwz      r0, 0(r31)
  0x807fa158:  rlwinm.  r0, r0, 0, 0x17, 0x17
  0x807fa15c:  bne      0x807fa178
  0x807fa160:  lis      r4, 0
  0x807fa164:  mr       r3, r31
  0x807fa168:  lwz      r5, 0(r4)
  0x807fa16c:  mr       r4, r28
  0x807fa170:  lfs      f1, 8(r5)
  0x807fa174:  bl       0x807b55e0
  0x807fa178:  li       r3, 1
