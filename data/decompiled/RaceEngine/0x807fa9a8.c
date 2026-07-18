/**
 * CtrlRaceTime_refresh
 * @addr 0x807fa9a8
 * @size 680 bytes
 * @frame 0 bytes
 */
void CtrlRaceTime_refresh(void) {
    /* f2 = *(f32*)(r31+0xa8) */
    /* f0 = *(f32*)(r31+0x0) */
    /* fsubs f1, f2, f1 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807fa9a8: c0 5f 00 a8              lfs      f2, 0xa8(r31) */
/* 0x807fa9ac: c0 1f 00 00              lfs      f0, 0(r31) */
/* 0x807fa9b0: ec 22 08 28              fsubs    f1, f2, f1 */
#endif


/* === DISASSEMBLY === */

; Function: CtrlRaceTime_refresh
; Demangled: CtrlRaceTime_refresh
; Address: 0x807fa9a8  (.text+0x2e810c)
; Size: 680 bytes

  0x807fa9a8:  lfs      f2, 0xa8(r31)
  0x807fa9ac:  lfs      f0, 0(r31)
  0x807fa9b0:  fsubs    f1, f2, f1
