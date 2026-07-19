/**
 * computeGpRank__System10RaceConfig6PlayerCFv
 * @addr 0x8052ffd8
 * @size 216 bytes
 * @frame 0 bytes
 */
s32 System10RaceConfig6PlayerC(const void* self) {
    /* stb r6, 0xb9(r3) */
    /* r6 = r4+0xba */
    /* stb r6, 0xba(r3) */
    /* r6 = r4+0xbc */
    /* r3+0xbc = r6 */
    /* r6 = r4+0xc0 */
    /* stb r6, 0xc0(r3) */
    /* r6 = r4+0xc1 */
    /* stb r6, 0xc1(r3) */
    /* r6 = r4+0xc2 */
    /* stb r6, 0xc2(r3) */
    /* r6 = r4+0xc4 */
    /* r3+0xc4 = r6 */
    /* r6 = r4+0xc8 */
    /* r3+0xc8 = r6 */
    /* r6 = r4+0xcc */
    /* r3+0xcc = r6 */
    /* r6 = r4+0xd0 */
    /* r3+0xd0 = r6 */
    /* r6 = r4+0xd4 */
    /* r3+0xd4 = r6 */
    /* r6 = r4+0xd8 */
    /* sth r6, 0xd8(r3) */
    /* r6 = r4+0xda */
    /* sth r6, 0xda(r3) */
    /* r6 = r4+0xdc */
    /* sth r6, 0xdc(r3) */
    /* r6 = r4+0xde */
    /* sth r6, 0xde(r3) */
    /* r6 = r4+0xe0 */
    /* stb r6, 0xe0(r3) */
    /* r6 = r4+0xe1 */
    /* stb r6, 0xe1(r3) */
    /* r6 = r4+0xe2 */
    /* stb r6, 0xe2(r3) */
    /* r6 = r4+0xe8 */
    /* sth r6, 0xe8(r3) */
    /* r6 = r4+0xec */
    /* addi r4, r4, 0xf0 */
    /* stb r6, 0xec(r3) */
    /* addi r3, r3, 0xf0 */
    /* cmplw r3, r5 */
    /* if (cr0 <) goto 0x8052feb4 */
    /* r22 = r31+0x1758 */
    /* li r0, 0xe */
    /* r23 = r31+0x175c */
    /* addi r5, r31, 0xb98 */
    /* r24 = r31+0x1760 */
    /* addi r4, r31, 0x1788 */
    /* r25 = r31+0x1764 */
    /* r26 = r31+0x1768 */
    /* r27 = r31+0x176c */
    /* r28 = r31+0x1770 */
    /* r29 = r31+0x1774 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8052ffd8: 98 c3 00 b9              stb      r6, 0xb9(r3) */
/* 0x8052ffdc: 88 c4 00 ba              lbz      r6, 0xba(r4) */
/* 0x8052ffe0: 98 c3 00 ba              stb      r6, 0xba(r3) */
/* 0x8052ffe4: 80 c4 00 bc              lwz      r6, 0xbc(r4) */
/* 0x8052ffe8: 90 c3 00 bc              stw      r6, 0xbc(r3) */
/* 0x8052ffec: 88 c4 00 c0              lbz      r6, 0xc0(r4) */
/* 0x8052fff0: 98 c3 00 c0              stb      r6, 0xc0(r3) */
/* 0x8052fff4: 88 c4 00 c1              lbz      r6, 0xc1(r4) */
/* 0x8052fff8: 98 c3 00 c1              stb      r6, 0xc1(r3) */
/* 0x8052fffc: 88 c4 00 c2              lbz      r6, 0xc2(r4) */
/* 0x80530000: 98 c3 00 c2              stb      r6, 0xc2(r3) */
/* 0x80530004: 80 c4 00 c4              lwz      r6, 0xc4(r4) */
/* 0x80530008: 90 c3 00 c4              stw      r6, 0xc4(r3) */
/* 0x8053000c: 80 c4 00 c8              lwz      r6, 0xc8(r4) */
/* 0x80530010: 90 c3 00 c8              stw      r6, 0xc8(r3) */
/* 0x80530014: 80 c4 00 cc              lwz      r6, 0xcc(r4) */
/* 0x80530018: 90 c3 00 cc              stw      r6, 0xcc(r3) */
/* 0x8053001c: 80 c4 00 d0              lwz      r6, 0xd0(r4) */
/* 0x80530020: 90 c3 00 d0              stw      r6, 0xd0(r3) */
/* 0x80530024: 80 c4 00 d4              lwz      r6, 0xd4(r4) */
/* 0x80530028: 90 c3 00 d4              stw      r6, 0xd4(r3) */
/* 0x8053002c: a0 c4 00 d8              lhz      r6, 0xd8(r4) */
/* 0x80530030: b0 c3 00 d8              sth      r6, 0xd8(r3) */
/* 0x80530034: a0 c4 00 da              lhz      r6, 0xda(r4) */
/* 0x80530038: b0 c3 00 da              sth      r6, 0xda(r3) */
/* 0x8053003c: a0 c4 00 dc              lhz      r6, 0xdc(r4) */
/* 0x80530040: b0 c3 00 dc              sth      r6, 0xdc(r3) */
/* 0x80530044: a8 c4 00 de              lha      r6, 0xde(r4) */
/* 0x80530048: b0 c3 00 de              sth      r6, 0xde(r3) */
/* 0x8053004c: 88 c4 00 e0              lbz      r6, 0xe0(r4) */
/* 0x80530050: 98 c3 00 e0              stb      r6, 0xe0(r3) */
/* 0x80530054: 88 c4 00 e1              lbz      r6, 0xe1(r4) */
/* 0x80530058: 98 c3 00 e1              stb      r6, 0xe1(r3) */
/* 0x8053005c: 88 c4 00 e2              lbz      r6, 0xe2(r4) */
/* 0x80530060: 98 c3 00 e2              stb      r6, 0xe2(r3) */
/* 0x80530064: a0 c4 00 e8              lhz      r6, 0xe8(r4) */
/* 0x80530068: b0 c3 00 e8              sth      r6, 0xe8(r3) */
/* 0x8053006c: 88 c4 00 ec              lbz      r6, 0xec(r4) */
/* 0x80530070: 38 84 00 f0              addi     r4, r4, 0xf0 */
/* 0x80530074: 98 c3 00 ec              stb      r6, 0xec(r3) */
/* 0x80530078: 38 63 00 f0              addi     r3, r3, 0xf0 */
/* 0x8053007c: 7c 03 28 40              cmplw    r3, r5 */
/* 0x80530080: 41 80 fe 34              blt      0x8052feb4 */
/* 0x80530084: 82 df 17 58              lwz      r22, 0x1758(r31) */
/* 0x80530088: 38 00 00 0e              li       r0, 0xe */
/* 0x8053008c: 82 ff 17 5c              lwz      r23, 0x175c(r31) */
/* 0x80530090: 38 bf 0b 98              addi     r5, r31, 0xb98 */
/* 0x80530094: 83 1f 17 60              lwz      r24, 0x1760(r31) */
/* 0x80530098: 38 9f 17 88              addi     r4, r31, 0x1788 */
/* 0x8053009c: 83 3f 17 64              lwz      r25, 0x1764(r31) */
/* 0x805300a0: 83 5f 17 68              lwz      r26, 0x1768(r31) */
/* 0x805300a4: 83 7f 17 6c              lwz      r27, 0x176c(r31) */
/* 0x805300a8: 83 9f 17 70              lwz      r28, 0x1770(r31) */
/* 0x805300ac: 8b bf 17 74              lbz      r29, 0x1774(r31) */
#endif


/* === DISASSEMBLY === */

; Function: computeGpRank__Q36System10RaceConfig6PlayerCFv
; Demangled: computeGpRank__System10RaceConfig6PlayerCFv
; Address: 0x8052ffd8  (.text+0x1d73c)
; Size: 216 bytes

  0x8052ffd8:  stb      r6, 0xb9(r3)
  0x8052ffdc:  lbz      r6, 0xba(r4)
  0x8052ffe0:  stb      r6, 0xba(r3)
  0x8052ffe4:  lwz      r6, 0xbc(r4)
  0x8052ffe8:  stw      r6, 0xbc(r3)
  0x8052ffec:  lbz      r6, 0xc0(r4)
  0x8052fff0:  stb      r6, 0xc0(r3)
  0x8052fff4:  lbz      r6, 0xc1(r4)
  0x8052fff8:  stb      r6, 0xc1(r3)
  0x8052fffc:  lbz      r6, 0xc2(r4)
  0x80530000:  stb      r6, 0xc2(r3)
  0x80530004:  lwz      r6, 0xc4(r4)
  0x80530008:  stw      r6, 0xc4(r3)
  0x8053000c:  lwz      r6, 0xc8(r4)
  0x80530010:  stw      r6, 0xc8(r3)
  0x80530014:  lwz      r6, 0xcc(r4)
  0x80530018:  stw      r6, 0xcc(r3)
  0x8053001c:  lwz      r6, 0xd0(r4)
  0x80530020:  stw      r6, 0xd0(r3)
  0x80530024:  lwz      r6, 0xd4(r4)
  0x80530028:  stw      r6, 0xd4(r3)
  0x8053002c:  lhz      r6, 0xd8(r4)
  0x80530030:  sth      r6, 0xd8(r3)
  0x80530034:  lhz      r6, 0xda(r4)
  0x80530038:  sth      r6, 0xda(r3)
  0x8053003c:  lhz      r6, 0xdc(r4)
  0x80530040:  sth      r6, 0xdc(r3)
  0x80530044:  lha      r6, 0xde(r4)
  0x80530048:  sth      r6, 0xde(r3)
  0x8053004c:  lbz      r6, 0xe0(r4)
  0x80530050:  stb      r6, 0xe0(r3)
  0x80530054:  lbz      r6, 0xe1(r4)
  0x80530058:  stb      r6, 0xe1(r3)
  0x8053005c:  lbz      r6, 0xe2(r4)
  0x80530060:  stb      r6, 0xe2(r3)
  0x80530064:  lhz      r6, 0xe8(r4)
  0x80530068:  sth      r6, 0xe8(r3)
  0x8053006c:  lbz      r6, 0xec(r4)
  0x80530070:  addi     r4, r4, 0xf0
  0x80530074:  stb      r6, 0xec(r3)
  0x80530078:  addi     r3, r3, 0xf0
  0x8053007c:  cmplw    r3, r5
  0x80530080:  blt      0x8052feb4
  0x80530084:  lwz      r22, 0x1758(r31)
  0x80530088:  li       r0, 0xe
  0x8053008c:  lwz      r23, 0x175c(r31)
  0x80530090:  addi     r5, r31, 0xb98
  0x80530094:  lwz      r24, 0x1760(r31)
  0x80530098:  addi     r4, r31, 0x1788
  0x8053009c:  lwz      r25, 0x1764(r31)
  0x805300a0:  lwz      r26, 0x1768(r31)
  0x805300a4:  lwz      r27, 0x176c(r31)
  0x805300a8:  lwz      r28, 0x1770(r31)
  0x805300ac:  lbz      r29, 0x1774(r31)
