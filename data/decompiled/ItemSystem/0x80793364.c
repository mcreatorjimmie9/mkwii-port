/**
 * copyItemObjProperties
 * @addr 0x80793364
 * @size 316 bytes
 * @frame 0 bytes
 */
void copyItemObjProperties(void) {
    /* if (cr0 !=) goto 0x80793388 */
    /* r27+0x14 = r23 */
    /* r27+0x18 = r24 */
    /* r27+0x1c = r25 */
    /* r27+0x20 = r26 */
    /* r27+0x24 = r26 */
    /* r27+0x28 = r26 */
    /* r27+0x50 = r26 */
    /* r27+0x54 = r26 */
    /* r4 = r27+0x50 */
    /* cmpw r4, r29 */
    /* if (cr0 >) goto 0x8079324c */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80793364: 40 82 00 24              bne      0x80793388 */
/* 0x80793368: 92 fb 00 14              stw      r23, 0x14(r27) */
/* 0x8079336c: 93 1b 00 18              stw      r24, 0x18(r27) */
/* 0x80793370: 93 3b 00 1c              stw      r25, 0x1c(r27) */
/* 0x80793374: 93 5b 00 20              stw      r26, 0x20(r27) */
/* 0x80793378: 93 5b 00 24              stw      r26, 0x24(r27) */
/* 0x8079337c: 93 5b 00 28              stw      r26, 0x28(r27) */
/* 0x80793380: 93 5b 00 50              stw      r26, 0x50(r27) */
/* 0x80793384: 93 5b 00 54              stw      r26, 0x54(r27) */
/* 0x80793388: 80 9b 00 50              lwz      r4, 0x50(r27) */
/* 0x8079338c: 7c 04 e8 00              cmpw     r4, r29 */
/* 0x80793390: 41 81 fe bc              bgt      0x8079324c */
#endif


/* === DISASSEMBLY === */

; Function: copyItemObjProperties
; Demangled: copyItemObjProperties
; Address: 0x80793364  (.text+0x280ac8)
; Size: 316 bytes

  0x80793364:  bne      0x80793388
  0x80793368:  stw      r23, 0x14(r27)
  0x8079336c:  stw      r24, 0x18(r27)
  0x80793370:  stw      r25, 0x1c(r27)
  0x80793374:  stw      r26, 0x20(r27)
  0x80793378:  stw      r26, 0x24(r27)
  0x8079337c:  stw      r26, 0x28(r27)
  0x80793380:  stw      r26, 0x50(r27)
  0x80793384:  stw      r26, 0x54(r27)
  0x80793388:  lwz      r4, 0x50(r27)
  0x8079338c:  cmpw     r4, r29
  0x80793390:  bgt      0x8079324c
