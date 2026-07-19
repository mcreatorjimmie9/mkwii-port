// ItemObjRed implementation — 1 functions
#include "ItemObjRed.hpp"

// Address: 0x807ac4d8 — ItemObjRed_makeArray (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 456 bytes
/**
 * ItemObjRed_makeArray
 * @addr 0x807ac4d8
 * @size 456 bytes
 * @frame 0 bytes
 */
void ItemObjRed_makeArray(void) {
    /* if (cr0 >=) goto 0x807ac4ec */
    /* cmplw r4, r30 */
    /* if (cr0 ==) goto 0x807ac4ec */
    /* li r3, 0 */
    /* goto 0x807ac600 */
    /* addi r30, r1, 0x14 */
    /* f0 = *(f32*)(r28+0x34) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807ac4d8: 40 80 00 14              bge      0x807ac4ec */
/* 0x807ac4dc: 7c 04 f0 40              cmplw    r4, r30 */
/* 0x807ac4e0: 41 82 00 0c              beq      0x807ac4ec */
/* 0x807ac4e4: 38 60 00 00              li       r3, 0 */
/* 0x807ac4e8: 48 00 01 18              b        0x807ac600 */
/* 0x807ac4ec: 3b c1 00 14              addi     r30, r1, 0x14 */
/* 0x807ac4f0: c0 1c 00 34              lfs      f0, 0x34(r28) */
#endif


/* === DISASSEMBLY === */


  0x807ac4d8:  bge      0x807ac4ec
  0x807ac4dc:  cmplw    r4, r30
  0x807ac4e0:  beq      0x807ac4ec
  0x807ac4e4:  li       r3, 0
  0x807ac4e8:  b        0x807ac600
  0x807ac4ec:  addi     r30, r1, 0x14
  0x807ac4f0:  lfs      f0, 0x34(r28)
