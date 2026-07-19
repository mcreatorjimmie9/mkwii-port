/**
 * ItemObjBlue_makeArray
 * @addr 0x807adec8
 * @size 564 bytes
 * @frame 0 bytes
 */
void ItemObjBlue_makeArray(void) {
    /* f0 = *(f32*)(r31+0x5c) */
    /* f1 = *(f32*)(r3+0x1d0) */
    /* f4 = *(f32*)(r31+0x58) */
    /* fadds f0, f1, f0 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807adec8: c0 1f 00 5c              lfs      f0, 0x5c(r31) */
/* 0x807adecc: c0 23 01 d0              lfs      f1, 0x1d0(r3) */
/* 0x807aded0: c0 9f 00 58              lfs      f4, 0x58(r31) */
/* 0x807aded4: ec 01 00 2a              fadds    f0, f1, f0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjBlue_makeArray
; Demangled: ItemObjBlue_makeArray
; Address: 0x807adec8  (.text+0x29b62c)
; Size: 564 bytes

  0x807adec8:  lfs      f0, 0x5c(r31)
  0x807adecc:  lfs      f1, 0x1d0(r3)
  0x807aded0:  lfs      f4, 0x58(r31)
  0x807aded4:  fadds    f0, f1, f0
