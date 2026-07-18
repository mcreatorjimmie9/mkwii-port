/**
 * initItemObjProperties
 * @addr 0x80792fe4
 * @size 800 bytes
 * @frame 112 bytes
 * @calls 3 function(s)
 */
void initItemObjProperties(void) {
    /* r3 = r26+0x0 */
    /* r4 = r31+0x10 */
    /* 0x80664af8() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x8079300c */
    /* r3 = r26+0x0 */
    /* r4 = r31+0x10 */
    /* 0x806643b0() */
    /* r25 = r3 */
    /* goto 0x80793010 */
    /* li r25, 0 */
    /* r26, 0  (load upper immediate) */
    /* li r27, 0x10 */
    /* li r28, 0x14 */
    /* li r29, 4 */
    /* li r30, 0 */
    /* goto 0x80793084 */
    /* r3 = r31+0x50 */
    /* addi r0, r3, -1 */
    /* r31+0x50 = r0 */
    /* slwi r0, r0, 2 */
    /* add r4, r31, r0 */
    /* r3 = r26+0x0 */
    /* r4 = r4+0x20 */
    /* r0 = r4+0x4 */
    /* mulli r0, r0, 0x24 */
    /* add r3, r3, r0 */
    /* addi r3, r3, 0x48 */
    /* 0x807937c4() */
    /* r0 = r31+0x50 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80793084 */
    /* r31+0x14 = r27 */
    /* r31+0x18 = r28 */
    /* r31+0x1c = r29 */
    /* r31+0x20 = r30 */
    /* r31+0x24 = r30 */
    /* r31+0x28 = r30 */
    /* r31+0x50 = r30 */
    /* r31+0x54 = r30 */
    /* r0 = r31+0x50 */
    /* cmplw r0, r25 */
    /* if (cr0 >) goto 0x80793028 */
    /* lmw r25, 0x14(r1) */
    /* r0 = stack[0x34] */
    /* mtlr r0 */
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80792fe4: 80 7a 00 00              lwz      r3, 0(r26) */
/* 0x80792fe8: 88 9f 00 10              lbz      r4, 0x10(r31) */
/* 0x80792fec: 4b ed 1b 0d              bl       0x80664af8 */
/* 0x80792ff0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80792ff4: 41 82 00 18              beq      0x8079300c */
/* 0x80792ff8: 80 7a 00 00              lwz      r3, 0(r26) */
/* 0x80792ffc: 88 9f 00 10              lbz      r4, 0x10(r31) */
/* 0x80793000: 4b ed 13 b1              bl       0x806643b0 */
/* 0x80793004: 7c 79 1b 78              mr       r25, r3 */
/* 0x80793008: 48 00 00 08              b        0x80793010 */
/* 0x8079300c: 3b 20 00 00              li       r25, 0 */
/* 0x80793010: 3f 40 00 00              lis      r26, 0 */
/* 0x80793014: 3b 60 00 10              li       r27, 0x10 */
/* 0x80793018: 3b 80 00 14              li       r28, 0x14 */
/* 0x8079301c: 3b a0 00 04              li       r29, 4 */
/* 0x80793020: 3b c0 00 00              li       r30, 0 */
/* 0x80793024: 48 00 00 60              b        0x80793084 */
/* 0x80793028: 80 7f 00 50              lwz      r3, 0x50(r31) */
/* 0x8079302c: 38 03 ff ff              addi     r0, r3, -1 */
/* 0x80793030: 90 1f 00 50              stw      r0, 0x50(r31) */
/* 0x80793034: 54 00 10 3a              slwi     r0, r0, 2 */
/* 0x80793038: 7c 9f 02 14              add      r4, r31, r0 */
/* 0x8079303c: 80 7a 00 00              lwz      r3, 0(r26) */
/* 0x80793040: 80 84 00 20              lwz      r4, 0x20(r4) */
/* 0x80793044: 80 04 00 04              lwz      r0, 4(r4) */
/* 0x80793048: 1c 00 00 24              mulli    r0, r0, 0x24 */
/* 0x8079304c: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80793050: 38 63 00 48              addi     r3, r3, 0x48 */
/* 0x80793054: 48 00 07 71              bl       0x807937c4 */
/* 0x80793058: 80 1f 00 50              lwz      r0, 0x50(r31) */
/* 0x8079305c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793060: 40 82 00 24              bne      0x80793084 */
/* 0x80793064: 93 7f 00 14              stw      r27, 0x14(r31) */
/* 0x80793068: 93 9f 00 18              stw      r28, 0x18(r31) */
/* 0x8079306c: 93 bf 00 1c              stw      r29, 0x1c(r31) */
/* 0x80793070: 93 df 00 20              stw      r30, 0x20(r31) */
/* 0x80793074: 93 df 00 24              stw      r30, 0x24(r31) */
/* 0x80793078: 93 df 00 28              stw      r30, 0x28(r31) */
/* 0x8079307c: 93 df 00 50              stw      r30, 0x50(r31) */
/* 0x80793080: 93 df 00 54              stw      r30, 0x54(r31) */
/* 0x80793084: 80 1f 00 50              lwz      r0, 0x50(r31) */
/* 0x80793088: 7c 00 c8 40              cmplw    r0, r25 */
/* 0x8079308c: 41 81 ff 9c              bgt      0x80793028 */
/* 0x80793090: bb 21 00 14              lmw      r25, 0x14(r1) */
/* 0x80793094: 80 01 00 34              lwz      r0, 0x34(r1) */
/* 0x80793098: 7c 08 03 a6              mtlr     r0 */
/* 0x8079309c: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x807930a0: 4e 80 00 20              blr       */
/* 0x807930a4: 94 21 ff 90              stwu     r1, -0x70(r1) */
/* 0x807930a8: 7c 08 02 a6              mflr     r0 */
/* 0x807930ac: 90 01 00 74              stw      r0, 0x74(r1) */
/* 0x807930b0: db e1 00 60              stfd     f31, 0x60(r1) */
#endif


/* === DISASSEMBLY === */

; Function: initItemObjProperties
; Demangled: initItemObjProperties
; Address: 0x80792fe4  (.text+0x280748)
; Size: 800 bytes

  0x80792fe4:  lwz      r3, 0(r26)
  0x80792fe8:  lbz      r4, 0x10(r31)
  0x80792fec:  bl       0x80664af8
  0x80792ff0:  cmpwi    r3, 0
  0x80792ff4:  beq      0x8079300c
  0x80792ff8:  lwz      r3, 0(r26)
  0x80792ffc:  lbz      r4, 0x10(r31)
  0x80793000:  bl       0x806643b0
  0x80793004:  mr       r25, r3
  0x80793008:  b        0x80793010
  0x8079300c:  li       r25, 0
  0x80793010:  lis      r26, 0
  0x80793014:  li       r27, 0x10
  0x80793018:  li       r28, 0x14
  0x8079301c:  li       r29, 4
  0x80793020:  li       r30, 0
  0x80793024:  b        0x80793084
  0x80793028:  lwz      r3, 0x50(r31)
  0x8079302c:  addi     r0, r3, -1
  0x80793030:  stw      r0, 0x50(r31)
  0x80793034:  slwi     r0, r0, 2
  0x80793038:  add      r4, r31, r0
  0x8079303c:  lwz      r3, 0(r26)
  0x80793040:  lwz      r4, 0x20(r4)
  0x80793044:  lwz      r0, 4(r4)
  0x80793048:  mulli    r0, r0, 0x24
  0x8079304c:  add      r3, r3, r0
  0x80793050:  addi     r3, r3, 0x48
  0x80793054:  bl       0x807937c4
  0x80793058:  lwz      r0, 0x50(r31)
  0x8079305c:  cmpwi    r0, 0
  0x80793060:  bne      0x80793084
  0x80793064:  stw      r27, 0x14(r31)
  0x80793068:  stw      r28, 0x18(r31)
  0x8079306c:  stw      r29, 0x1c(r31)
  0x80793070:  stw      r30, 0x20(r31)
  0x80793074:  stw      r30, 0x24(r31)
  0x80793078:  stw      r30, 0x28(r31)
  0x8079307c:  stw      r30, 0x50(r31)
  0x80793080:  stw      r30, 0x54(r31)
  0x80793084:  lwz      r0, 0x50(r31)
  0x80793088:  cmplw    r0, r25
  0x8079308c:  bgt      0x80793028
  0x80793090:  lmw      r25, 0x14(r1)
  0x80793094:  lwz      r0, 0x34(r1)
  0x80793098:  mtlr     r0
  0x8079309c:  addi     r1, r1, 0x30
  0x807930a0:  blr      
  0x807930a4:  stwu     r1, -0x70(r1)
  0x807930a8:  mflr     r0
  0x807930ac:  stw      r0, 0x74(r1)
  0x807930b0:  stfd     f31, 0x60(r1)
