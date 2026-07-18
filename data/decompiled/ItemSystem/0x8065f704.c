/**
 * ITEMHandler_getPlayerStoredItem
 * @addr 0x8065f704
 * @size 148 bytes
 * @frame 0 bytes
 */
u32 ITEMHandler_getPlayerStoredItem(void) {
    /* li r3, 0 */
    return /* r3 */;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8065f704: 38 60 00 00              li       r3, 0 */
/* 0x8065f708: 4e 80 00 20              blr       */
/* 0x8065f70c: 88 03 00 1e              lbz      r0, 0x1e(r3) */
/* 0x8065f710: 2c 00 00 43              cmpwi    r0, 0x43 */
/* 0x8065f714: 41 82 00 28              beq      0x8065f73c */
/* 0x8065f718: 3c 60 00 00              lis      r3, 0 */
/* 0x8065f71c: 38 80 00 01              li       r4, 1 */
/* 0x8065f720: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8065f724: 80 03 29 1c              lwz      r0, 0x291c(r3) */
/* 0x8065f728: 1c 00 00 58              mulli    r0, r0, 0x58 */
/* 0x8065f72c: 7c 63 02 14              add      r3, r3, r0 */
/* 0x8065f730: 88 03 00 59              lbz      r0, 0x59(r3) */
/* 0x8065f734: 7c 80 00 30              slw      r0, r4, r0 */
/* 0x8065f738: 7c a5 03 78              or       r5, r5, r0 */
/* 0x8065f73c: 3c 60 00 00              lis      r3, 0 */
/* 0x8065f740: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8065f744: 80 03 29 1c              lwz      r0, 0x291c(r3) */
/* 0x8065f748: 1c 00 00 58              mulli    r0, r0, 0x58 */
/* 0x8065f74c: 7c 63 02 14              add      r3, r3, r0 */
/* 0x8065f750: 80 63 00 48              lwz      r3, 0x48(r3) */
/* 0x8065f754: 7c 60 28 38              and      r0, r3, r5 */
/* 0x8065f758: 7c 03 00 50              subf     r0, r3, r0 */
/* 0x8065f75c: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x8065f760: 54 03 d9 7e              srwi     r3, r0, 5 */
/* 0x8065f764: 4e 80 00 20              blr       */
/* 0x8065f768: 80 a3 03 ec              lwz      r5, 0x3ec(r3) */
/* 0x8065f76c: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x8065f770: 40 82 00 0c              bne      0x8065f77c */
/* 0x8065f774: 38 60 00 00              li       r3, 0 */
/* 0x8065f778: 4e 80 00 20              blr       */
/* 0x8065f77c: 88 03 00 3c              lbz      r0, 0x3c(r3) */
/* 0x8065f780: 7c 00 07 74              extsb    r0, r0 */
/* 0x8065f784: 2c 00 ff ff              cmpwi    r0, -1 */
/* 0x8065f788: 41 82 00 28              beq      0x8065f7b0 */
/* 0x8065f78c: 3c 60 00 00              lis      r3, 0 */
/* 0x8065f790: 38 80 00 01              li       r4, 1 */
/* 0x8065f794: 80 63 00 00              lwz      r3, 0(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ITEMHandler_getPlayerStoredItem
; Demangled: ITEMHandler_getPlayerStoredItem
; Address: 0x8065f704  (.text+0x14ce68)
; Size: 148 bytes

  0x8065f704:  li       r3, 0
  0x8065f708:  blr      
  0x8065f70c:  lbz      r0, 0x1e(r3)
  0x8065f710:  cmpwi    r0, 0x43
  0x8065f714:  beq      0x8065f73c
  0x8065f718:  lis      r3, 0
  0x8065f71c:  li       r4, 1
  0x8065f720:  lwz      r3, 0(r3)
  0x8065f724:  lwz      r0, 0x291c(r3)
  0x8065f728:  mulli    r0, r0, 0x58
  0x8065f72c:  add      r3, r3, r0
  0x8065f730:  lbz      r0, 0x59(r3)
  0x8065f734:  slw      r0, r4, r0
  0x8065f738:  or       r5, r5, r0
  0x8065f73c:  lis      r3, 0
  0x8065f740:  lwz      r3, 0(r3)
  0x8065f744:  lwz      r0, 0x291c(r3)
  0x8065f748:  mulli    r0, r0, 0x58
  0x8065f74c:  add      r3, r3, r0
  0x8065f750:  lwz      r3, 0x48(r3)
  0x8065f754:  and      r0, r3, r5
  0x8065f758:  subf     r0, r3, r0
  0x8065f75c:  cntlzw   r0, r0
  0x8065f760:  srwi     r3, r0, 5
  0x8065f764:  blr      
  0x8065f768:  lwz      r5, 0x3ec(r3)
  0x8065f76c:  cmpwi    r5, 0
  0x8065f770:  bne      0x8065f77c
  0x8065f774:  li       r3, 0
  0x8065f778:  blr      
  0x8065f77c:  lbz      r0, 0x3c(r3)
  0x8065f780:  extsb    r0, r0
  0x8065f784:  cmpwi    r0, -1
  0x8065f788:  beq      0x8065f7b0
  0x8065f78c:  lis      r3, 0
  0x8065f790:  li       r4, 1
  0x8065f794:  lwz      r3, 0(r3)
