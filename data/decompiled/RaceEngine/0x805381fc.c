/**
 * TimeAttackGamemode_canEndRace
 * @addr 0x805381fc
 * @size 212 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
void TimeAttackGamemode_canEndRace(void) {
    /* goto 0x80538278 */
    /* li r31, 1 */
    /* li r29, 1 */
    /* li r24, 0 */
    /* goto 0x80538234 */
    /* clrlwi r4, r24, 0x18 */
    /* 0x80516f24() */
    /* r3 = r3+0x0 */
    /* r0 = r3+0x18 */
    /* cmpw r28, r0 */
    /* if (cr0 !=) goto 0x80538230 */
    /* r30 = r28 */
    /* goto 0x80538278 */
    /* addi r24, r24, 1 */
    /* r3 = r30+0x0 */
    /* clrlwi r5, r24, 0x18 */
    /* r4 = r3+0x8 */
    /* cmpwi r4, 0 */
    /* if (cr0 !=) goto 0x80538250 */
    /* li r0, 0 */
    /* goto 0x80538254 */
    /* r0 = r4+0x4 */
    /* cmpw r5, r0 */
    /* if (cr0 <) goto 0x80538210 */
    /* goto 0x80538278 */
    /* r3 = r3+0xc */
    /* rlwinm r0, r6, 2, 0x16, 0x1d */
    /* r29 = r7+0x24 */
    /* li r30, 0 */
    /* lwzx r3, r3, r0 */
    /* r31 = r3+0x20 */
    /* r3, 0  (load upper immediate) */
    /* clrlwi r4, r30, 0x18 */
    /* r3 = r3+0x0 */
    /* 0x80516f24() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x805382a8 */
    /* r4 = r26 */
    /* r5 = r27 */
    /* r6 = r31 */
    /* clrlwi r7, r29, 0x18 */
    /* 0x80516f18() */
    /* goto 0x805382d0 */
    /* r4, 0  (load upper immediate) */
    /* r3, 0  (load upper immediate) */
    /* f1 = *(f32*)(r4+0x0) */
    /* *(f32*)(r26+0x8) = f1 */
    /* f0 = *(f32*)(r3+0x0) */
    /* *(f32*)(r26+0x4) = f1 */
    /* *(f32*)(r26+0x0) = f1 */
    /* *(f32*)(r27+0x0) = f0 */
    /* *(f32*)(r27+0x4) = f1 */
    /* *(f32*)(r27+0x8) = f1 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805381fc: 48 00 00 7c              b        0x80538278 */
/* 0x80538200: 3b e0 00 01              li       r31, 1 */
/* 0x80538204: 3b a0 00 01              li       r29, 1 */
/* 0x80538208: 3b 00 00 00              li       r24, 0 */
/* 0x8053820c: 48 00 00 28              b        0x80538234 */
/* 0x80538210: 57 04 06 3e              clrlwi   r4, r24, 0x18 */
/* 0x80538214: 4b fd ed 11              bl       0x80516f24 */
/* 0x80538218: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8053821c: a8 03 00 18              lha      r0, 0x18(r3) */
/* 0x80538220: 7c 1c 00 00              cmpw     r28, r0 */
/* 0x80538224: 40 82 00 0c              bne      0x80538230 */
/* 0x80538228: 7f 9e e3 78              mr       r30, r28 */
/* 0x8053822c: 48 00 00 4c              b        0x80538278 */
/* 0x80538230: 3b 18 00 01              addi     r24, r24, 1 */
/* 0x80538234: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x80538238: 57 05 06 3e              clrlwi   r5, r24, 0x18 */
/* 0x8053823c: 80 83 00 08              lwz      r4, 8(r3) */
/* 0x80538240: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80538244: 40 82 00 0c              bne      0x80538250 */
/* 0x80538248: 38 00 00 00              li       r0, 0 */
/* 0x8053824c: 48 00 00 08              b        0x80538254 */
/* 0x80538250: a0 04 00 04              lhz      r0, 4(r4) */
/* 0x80538254: 7c 05 00 00              cmpw     r5, r0 */
/* 0x80538258: 41 80 ff b8              blt      0x80538210 */
/* 0x8053825c: 48 00 00 1c              b        0x80538278 */
/* 0x80538260: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80538264: 54 c0 15 ba              rlwinm   r0, r6, 2, 0x16, 0x1d */
/* 0x80538268: 8b a7 00 24              lbz      r29, 0x24(r7) */
/* 0x8053826c: 3b c0 00 00              li       r30, 0 */
/* 0x80538270: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80538274: 8b e3 00 20              lbz      r31, 0x20(r3) */
/* 0x80538278: 3c 60 00 00              lis      r3, 0 */
/* 0x8053827c: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x80538280: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538284: 4b fd ec a1              bl       0x80516f24 */
/* 0x80538288: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8053828c: 41 82 00 1c              beq      0x805382a8 */
/* 0x80538290: 7f 44 d3 78              mr       r4, r26 */
/* 0x80538294: 7f 65 db 78              mr       r5, r27 */
/* 0x80538298: 7f e6 fb 78              mr       r6, r31 */
/* 0x8053829c: 57 a7 06 3e              clrlwi   r7, r29, 0x18 */
/* 0x805382a0: 4b fd ec 79              bl       0x80516f18 */
/* 0x805382a4: 48 00 00 2c              b        0x805382d0 */
/* 0x805382a8: 3c 80 00 00              lis      r4, 0 */
/* 0x805382ac: 3c 60 00 00              lis      r3, 0 */
/* 0x805382b0: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x805382b4: d0 3a 00 08              stfs     f1, 8(r26) */
/* 0x805382b8: c0 03 00 00              lfs      f0, 0(r3) */
/* 0x805382bc: d0 3a 00 04              stfs     f1, 4(r26) */
/* 0x805382c0: d0 3a 00 00              stfs     f1, 0(r26) */
/* 0x805382c4: d0 1b 00 00              stfs     f0, 0(r27) */
/* 0x805382c8: d0 3b 00 04              stfs     f1, 4(r27) */
/* 0x805382cc: d0 3b 00 08              stfs     f1, 8(r27) */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackGamemode_canEndRace
; Demangled: TimeAttackGamemode_canEndRace
; Address: 0x805381fc  (.text+0x25960)
; Size: 212 bytes

  0x805381fc:  b        0x80538278
  0x80538200:  li       r31, 1
  0x80538204:  li       r29, 1
  0x80538208:  li       r24, 0
  0x8053820c:  b        0x80538234
  0x80538210:  clrlwi   r4, r24, 0x18
  0x80538214:  bl       0x80516f24
  0x80538218:  lwz      r3, 0(r3)
  0x8053821c:  lha      r0, 0x18(r3)
  0x80538220:  cmpw     r28, r0
  0x80538224:  bne      0x80538230
  0x80538228:  mr       r30, r28
  0x8053822c:  b        0x80538278
  0x80538230:  addi     r24, r24, 1
  0x80538234:  lwz      r3, 0(r30)
  0x80538238:  clrlwi   r5, r24, 0x18
  0x8053823c:  lwz      r4, 8(r3)
  0x80538240:  cmpwi    r4, 0
  0x80538244:  bne      0x80538250
  0x80538248:  li       r0, 0
  0x8053824c:  b        0x80538254
  0x80538250:  lhz      r0, 4(r4)
  0x80538254:  cmpw     r5, r0
  0x80538258:  blt      0x80538210
  0x8053825c:  b        0x80538278
  0x80538260:  lwz      r3, 0xc(r3)
  0x80538264:  rlwinm   r0, r6, 2, 0x16, 0x1d
  0x80538268:  lbz      r29, 0x24(r7)
  0x8053826c:  li       r30, 0
  0x80538270:  lwzx     r3, r3, r0
  0x80538274:  lbz      r31, 0x20(r3)
  0x80538278:  lis      r3, 0
  0x8053827c:  clrlwi   r4, r30, 0x18
  0x80538280:  lwz      r3, 0(r3)
  0x80538284:  bl       0x80516f24
  0x80538288:  cmpwi    r3, 0
  0x8053828c:  beq      0x805382a8
  0x80538290:  mr       r4, r26
  0x80538294:  mr       r5, r27
  0x80538298:  mr       r6, r31
  0x8053829c:  clrlwi   r7, r29, 0x18
  0x805382a0:  bl       0x80516f18
  0x805382a4:  b        0x805382d0
  0x805382a8:  lis      r4, 0
  0x805382ac:  lis      r3, 0
  0x805382b0:  lfs      f1, 0(r4)
  0x805382b4:  stfs     f1, 8(r26)
  0x805382b8:  lfs      f0, 0(r3)
  0x805382bc:  stfs     f1, 4(r26)
  0x805382c0:  stfs     f1, 0(r26)
  0x805382c4:  stfs     f0, 0(r27)
  0x805382c8:  stfs     f1, 4(r27)
  0x805382cc:  stfs     f1, 8(r27)
