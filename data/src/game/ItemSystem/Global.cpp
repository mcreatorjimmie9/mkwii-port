// Global implementation — 3 functions
#include "Global.hpp"

// Address: 0x80792fe4 — initItemObjProperties (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 800 bytes
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

// Address: 0x8059e600 — cancelBullet (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 388 bytes
/**
 * cancelBullet
 * @addr 0x8059e600
 * @size 388 bytes
 * @frame 0 bytes
 * @calls 4 function(s)
 */
bool cancelBullet(void) {
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* li r4, 1 */
    /* f29 = *(f32*)(r5+0xc) */
    /* 0x80537f50() */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x8059e650 */
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* r0 = r3+0xb70 */
    /* cmpwi r0, 4 */
    /* if (cr0 !=) goto 0x8059e638 */
    /* f2 = *(f32*)(r31+0x120) */
    /* goto 0x8059e63c */
    /* f2 = *(f32*)(r31+0x12c) */
    /* f1 = *(f32*)(r28+0x344) */
    /* fsubs f0, f29, f1 */
    /* fmuls f0, f2, f0 */
    /* fadds f29, f1, f0 */
    /* *(f32*)(r28+0x344) = f29 */
    /* r3 = r30 */
    /* 0x80590a0c() */
    /* fsubs f31, f29, f1 */
    /* r3 = r30 */
    /* 0x805907c0() */
    /* r6, 0  (load upper immediate) */
    /* f30 = *(f32*)(r31+0x0) */
    /* addi r5, r6, 0 */
    /* f3 = *(f32*)(r3+0x80) */
    /* f2 = *(f32*)(r6+0x0) */
    /* fmr f29, f30 */
    /* f1 = *(f32*)(r3+0x84) */
    /* f0 = *(f32*)(r5+0x4) */
    /* fmuls f2, f3, f2 */
    /* f3 = *(f32*)(r3+0x88) */
    /* fmuls f0, f1, f0 */
    /* f1 = *(f32*)(r5+0x8) */
    /* r4 = r30+0x0 */
    /* fmuls f1, f3, f1 */
    /* fadds f0, f2, f0 */
    /* r3 = r4+0x4 */
    /* r0 = r3+0x8 */
    /* fadds f0, f1, f0 */
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */
    /* fabs f0, f0 */
    /* fmuls f27, f27, f0 */
    /* if (cr0 ==) goto 0x8059e6e4 */
    /* f30 = *(f32*)(r31+0x140) */
    /* r3 = r30 */
    /* 0x80590d4c() */
    /* fmr f0, f29 */
    /* f1 = *(f32*)(r3+0x4) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8059e600: 3c 60 00 00              lis      r3, 0 */
/* 0x8059e604: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8059e608: 38 80 00 01              li       r4, 1 */
/* 0x8059e60c: c3 a5 00 0c              lfs      f29, 0xc(r5) */
/* 0x8059e610: 4b f9 99 41              bl       0x80537f50 */
/* 0x8059e614: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8059e618: 40 82 00 38              bne      0x8059e650 */
/* 0x8059e61c: 3c 60 00 00              lis      r3, 0 */
/* 0x8059e620: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8059e624: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x8059e628: 2c 00 00 04              cmpwi    r0, 4 */
/* 0x8059e62c: 40 82 00 0c              bne      0x8059e638 */
/* 0x8059e630: c0 5f 01 20              lfs      f2, 0x120(r31) */
/* 0x8059e634: 48 00 00 08              b        0x8059e63c */
/* 0x8059e638: c0 5f 01 2c              lfs      f2, 0x12c(r31) */
/* 0x8059e63c: c0 3c 03 44              lfs      f1, 0x344(r28) */
/* 0x8059e640: ec 1d 08 28              fsubs    f0, f29, f1 */
/* 0x8059e644: ec 02 00 32              fmuls    f0, f2, f0 */
/* 0x8059e648: ef a1 00 2a              fadds    f29, f1, f0 */
/* 0x8059e64c: d3 bc 03 44              stfs     f29, 0x344(r28) */
/* 0x8059e650: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e654: 4b ff 23 b9              bl       0x80590a0c */
/* 0x8059e658: ef fd 08 28              fsubs    f31, f29, f1 */
/* 0x8059e65c: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e660: 4b ff 21 61              bl       0x805907c0 */
/* 0x8059e664: 3c c0 00 00              lis      r6, 0 */
/* 0x8059e668: c3 df 00 00              lfs      f30, 0(r31) */
/* 0x8059e66c: 38 a6 00 00              addi     r5, r6, 0 */
/* 0x8059e670: c0 63 00 80              lfs      f3, 0x80(r3) */
/* 0x8059e674: c0 46 00 00              lfs      f2, 0(r6) */
/* 0x8059e678: ff a0 f0 90              fmr      f29, f30 */
/* 0x8059e67c: c0 23 00 84              lfs      f1, 0x84(r3) */
/* 0x8059e680: c0 05 00 04              lfs      f0, 4(r5) */
/* 0x8059e684: ec 43 00 b2              fmuls    f2, f3, f2 */
/* 0x8059e688: c0 63 00 88              lfs      f3, 0x88(r3) */
/* 0x8059e68c: ec 01 00 32              fmuls    f0, f1, f0 */
/* 0x8059e690: c0 25 00 08              lfs      f1, 8(r5) */
/* 0x8059e694: 80 9e 00 00              lwz      r4, 0(r30) */
/* 0x8059e698: ec 23 00 72              fmuls    f1, f3, f1 */
/* 0x8059e69c: ec 02 00 2a              fadds    f0, f2, f0 */
/* 0x8059e6a0: 80 64 00 04              lwz      r3, 4(r4) */
/* 0x8059e6a4: 80 03 00 08              lwz      r0, 8(r3) */
/* 0x8059e6a8: ec 01 00 2a              fadds    f0, f1, f0 */
/* 0x8059e6ac: 54 00 05 6b              rlwinm.  r0, r0, 0, 0x15, 0x15 */
/* 0x8059e6b0: fc 00 02 10              fabs     f0, f0 */
/* 0x8059e6b4: ef 7b 00 32              fmuls    f27, f27, f0 */
/* 0x8059e6b8: 41 82 00 2c              beq      0x8059e6e4 */
/* 0x8059e6bc: c3 df 01 40              lfs      f30, 0x140(r31) */
/* 0x8059e6c0: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e6c4: 4b ff 26 89              bl       0x80590d4c */
/* 0x8059e6c8: fc 00 e8 90              fmr      f0, f29 */
/* 0x8059e6cc: c0 23 00 04              lfs      f1, 4(r3) */
#endif


/* === DISASSEMBLY === */

; Function: cancelBullet
; Demangled: cancelBullet
; Address: 0x8059e600  (.text+0x8bd64)
; Size: 388 bytes

  0x8059e600:  lis      r3, 0
  0x8059e604:  lwz      r3, 0(r3)
  0x8059e608:  li       r4, 1
  0x8059e60c:  lfs      f29, 0xc(r5)
  0x8059e610:  bl       0x80537f50
  0x8059e614:  cmpwi    r3, 0
  0x8059e618:  bne      0x8059e650
  0x8059e61c:  lis      r3, 0
  0x8059e620:  lwz      r3, 0(r3)
  0x8059e624:  lwz      r0, 0xb70(r3)
  0x8059e628:  cmpwi    r0, 4
  0x8059e62c:  bne      0x8059e638
  0x8059e630:  lfs      f2, 0x120(r31)
  0x8059e634:  b        0x8059e63c
  0x8059e638:  lfs      f2, 0x12c(r31)
  0x8059e63c:  lfs      f1, 0x344(r28)
  0x8059e640:  fsubs    f0, f29, f1
  0x8059e644:  fmuls    f0, f2, f0
  0x8059e648:  fadds    f29, f1, f0
  0x8059e64c:  stfs     f29, 0x344(r28)
  0x8059e650:  mr       r3, r30
  0x8059e654:  bl       0x80590a0c
  0x8059e658:  fsubs    f31, f29, f1
  0x8059e65c:  mr       r3, r30
  0x8059e660:  bl       0x805907c0
  0x8059e664:  lis      r6, 0
  0x8059e668:  lfs      f30, 0(r31)
  0x8059e66c:  addi     r5, r6, 0
  0x8059e670:  lfs      f3, 0x80(r3)
  0x8059e674:  lfs      f2, 0(r6)
  0x8059e678:  fmr      f29, f30
  0x8059e67c:  lfs      f1, 0x84(r3)
  0x8059e680:  lfs      f0, 4(r5)
  0x8059e684:  fmuls    f2, f3, f2
  0x8059e688:  lfs      f3, 0x88(r3)
  0x8059e68c:  fmuls    f0, f1, f0
  0x8059e690:  lfs      f1, 8(r5)
  0x8059e694:  lwz      r4, 0(r30)
  0x8059e698:  fmuls    f1, f3, f1
  0x8059e69c:  fadds    f0, f2, f0
  0x8059e6a0:  lwz      r3, 4(r4)
  0x8059e6a4:  lwz      r0, 8(r3)
  0x8059e6a8:  fadds    f0, f1, f0
  0x8059e6ac:  rlwinm.  r0, r0, 0, 0x15, 0x15
  0x8059e6b0:  fabs     f0, f0
  0x8059e6b4:  fmuls    f27, f27, f0
  0x8059e6b8:  beq      0x8059e6e4
  0x8059e6bc:  lfs      f30, 0x140(r31)
  0x8059e6c0:  mr       r3, r30
  0x8059e6c4:  bl       0x80590d4c
  0x8059e6c8:  fmr      f0, f29
  0x8059e6cc:  lfs      f1, 4(r3)

// Address: 0x80793364 — copyItemObjProperties (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 316 bytes
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
