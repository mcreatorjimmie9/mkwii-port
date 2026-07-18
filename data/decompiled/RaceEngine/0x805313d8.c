/**
 * initGhost__System10RaceConfig8ScenarioFUcSc
 * @addr 0x805313d8
 * @size 228 bytes
 * @frame 0 bytes
 */
void System10RaceConfig8ScenarioFUcSc(void) {
    /* stb r28, 0xd(r4) */
    /* addi r28, r28, 1 */
    /* extsb r0, r28 */
    /* add r3, r24, r3 */
    /* cmpw r0, r25 */
    /* stb r5, 0xb64(r3) */
    /* if (cr0 >=) goto 0x80531494 */
    /* addi r5, r5, 1 */
    /* clrlwi r0, r5, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r4, r24, r0 */
    /* r0 = r4+0x18 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x80531440 */
    /* r0 = r4+0xd */
    /* extsb r0, r0 */
    /* cmpwi r0, -1 */
    /* if (cr0 !=) goto 0x80531440 */
    /* extsb r3, r28 */
    /* stb r28, 0xd(r4) */
    /* addi r28, r28, 1 */
    /* extsb r0, r28 */
    /* add r3, r24, r3 */
    /* cmpw r0, r25 */
    /* stb r5, 0xb64(r3) */
    /* if (cr0 >=) goto 0x80531494 */
    /* addi r5, r5, 1 */
    /* clrlwi r0, r5, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r4, r24, r0 */
    /* r0 = r4+0x18 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x8053148c */
    /* r0 = r4+0xd */
    /* extsb r0, r0 */
    /* cmpwi r0, -1 */
    /* if (cr0 !=) goto 0x8053148c */
    /* extsb r3, r28 */
    /* stb r28, 0xd(r4) */
    /* addi r28, r28, 1 */
    /* extsb r0, r28 */
    /* add r3, r24, r3 */
    /* cmpw r0, r25 */
    /* stb r5, 0xb64(r3) */
    /* if (cr0 >=) goto 0x80531494 */
    /* addi r5, r5, 1 */
    /* bdnz 0x805313ac */
    /* lmw r21, 0xe4(r1) */
    /* r0 = stack[0x114] */
    /* mtlr r0 */
    /* addi r1, r1, 0x110 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805313d8: 9b 84 00 0d              stb      r28, 0xd(r4) */
/* 0x805313dc: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x805313e0: 7f 80 07 74              extsb    r0, r28 */
/* 0x805313e4: 7c 78 1a 14              add      r3, r24, r3 */
/* 0x805313e8: 7c 00 c8 00              cmpw     r0, r25 */
/* 0x805313ec: 98 a3 0b 64              stb      r5, 0xb64(r3) */
/* 0x805313f0: 40 80 00 a4              bge      0x80531494 */
/* 0x805313f4: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x805313f8: 54 a0 06 3e              clrlwi   r0, r5, 0x18 */
/* 0x805313fc: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80531400: 7c 98 02 14              add      r4, r24, r0 */
/* 0x80531404: 80 04 00 18              lwz      r0, 0x18(r4) */
/* 0x80531408: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x8053140c: 41 82 00 34              beq      0x80531440 */
/* 0x80531410: 88 04 00 0d              lbz      r0, 0xd(r4) */
/* 0x80531414: 7c 00 07 74              extsb    r0, r0 */
/* 0x80531418: 2c 00 ff ff              cmpwi    r0, -1 */
/* 0x8053141c: 40 82 00 24              bne      0x80531440 */
/* 0x80531420: 7f 83 07 74              extsb    r3, r28 */
/* 0x80531424: 9b 84 00 0d              stb      r28, 0xd(r4) */
/* 0x80531428: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x8053142c: 7f 80 07 74              extsb    r0, r28 */
/* 0x80531430: 7c 78 1a 14              add      r3, r24, r3 */
/* 0x80531434: 7c 00 c8 00              cmpw     r0, r25 */
/* 0x80531438: 98 a3 0b 64              stb      r5, 0xb64(r3) */
/* 0x8053143c: 40 80 00 58              bge      0x80531494 */
/* 0x80531440: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80531444: 54 a0 06 3e              clrlwi   r0, r5, 0x18 */
/* 0x80531448: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x8053144c: 7c 98 02 14              add      r4, r24, r0 */
/* 0x80531450: 80 04 00 18              lwz      r0, 0x18(r4) */
/* 0x80531454: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x80531458: 41 82 00 34              beq      0x8053148c */
/* 0x8053145c: 88 04 00 0d              lbz      r0, 0xd(r4) */
/* 0x80531460: 7c 00 07 74              extsb    r0, r0 */
/* 0x80531464: 2c 00 ff ff              cmpwi    r0, -1 */
/* 0x80531468: 40 82 00 24              bne      0x8053148c */
/* 0x8053146c: 7f 83 07 74              extsb    r3, r28 */
/* 0x80531470: 9b 84 00 0d              stb      r28, 0xd(r4) */
/* 0x80531474: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x80531478: 7f 80 07 74              extsb    r0, r28 */
/* 0x8053147c: 7c 78 1a 14              add      r3, r24, r3 */
/* 0x80531480: 7c 00 c8 00              cmpw     r0, r25 */
/* 0x80531484: 98 a3 0b 64              stb      r5, 0xb64(r3) */
/* 0x80531488: 40 80 00 0c              bge      0x80531494 */
/* 0x8053148c: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80531490: 42 00 ff 1c              bdnz     0x805313ac */
/* 0x80531494: ba a1 00 e4              lmw      r21, 0xe4(r1) */
/* 0x80531498: 80 01 01 14              lwz      r0, 0x114(r1) */
/* 0x8053149c: 7c 08 03 a6              mtlr     r0 */
/* 0x805314a0: 38 21 01 10              addi     r1, r1, 0x110 */
/* 0x805314a4: 4e 80 00 20              blr       */
/* 0x805314a8: 38 00 00 03              li       r0, 3 */
/* 0x805314ac: 39 00 00 00              li       r8, 0 */
/* 0x805314b0: 39 20 00 00              li       r9, 0 */
/* 0x805314b4: 39 40 00 00              li       r10, 0 */
/* 0x805314b8: 39 60 00 00              li       r11, 0 */
#endif


/* === DISASSEMBLY === */

; Function: initGhost__Q36System10RaceConfig8ScenarioFUcSc
; Demangled: initGhost__System10RaceConfig8ScenarioFUcSc
; Address: 0x805313d8  (.text+0x1eb3c)
; Size: 228 bytes

  0x805313d8:  stb      r28, 0xd(r4)
  0x805313dc:  addi     r28, r28, 1
  0x805313e0:  extsb    r0, r28
  0x805313e4:  add      r3, r24, r3
  0x805313e8:  cmpw     r0, r25
  0x805313ec:  stb      r5, 0xb64(r3)
  0x805313f0:  bge      0x80531494
  0x805313f4:  addi     r5, r5, 1
  0x805313f8:  clrlwi   r0, r5, 0x18
  0x805313fc:  mulli    r0, r0, 0xf0
  0x80531400:  add      r4, r24, r0
  0x80531404:  lwz      r0, 0x18(r4)
  0x80531408:  cmpwi    r0, 5
  0x8053140c:  beq      0x80531440
  0x80531410:  lbz      r0, 0xd(r4)
  0x80531414:  extsb    r0, r0
  0x80531418:  cmpwi    r0, -1
  0x8053141c:  bne      0x80531440
  0x80531420:  extsb    r3, r28
  0x80531424:  stb      r28, 0xd(r4)
  0x80531428:  addi     r28, r28, 1
  0x8053142c:  extsb    r0, r28
  0x80531430:  add      r3, r24, r3
  0x80531434:  cmpw     r0, r25
  0x80531438:  stb      r5, 0xb64(r3)
  0x8053143c:  bge      0x80531494
  0x80531440:  addi     r5, r5, 1
  0x80531444:  clrlwi   r0, r5, 0x18
  0x80531448:  mulli    r0, r0, 0xf0
  0x8053144c:  add      r4, r24, r0
  0x80531450:  lwz      r0, 0x18(r4)
  0x80531454:  cmpwi    r0, 5
  0x80531458:  beq      0x8053148c
  0x8053145c:  lbz      r0, 0xd(r4)
  0x80531460:  extsb    r0, r0
  0x80531464:  cmpwi    r0, -1
  0x80531468:  bne      0x8053148c
  0x8053146c:  extsb    r3, r28
  0x80531470:  stb      r28, 0xd(r4)
  0x80531474:  addi     r28, r28, 1
  0x80531478:  extsb    r0, r28
  0x8053147c:  add      r3, r24, r3
  0x80531480:  cmpw     r0, r25
  0x80531484:  stb      r5, 0xb64(r3)
  0x80531488:  bge      0x80531494
  0x8053148c:  addi     r5, r5, 1
  0x80531490:  bdnz     0x805313ac
  0x80531494:  lmw      r21, 0xe4(r1)
  0x80531498:  lwz      r0, 0x114(r1)
  0x8053149c:  mtlr     r0
  0x805314a0:  addi     r1, r1, 0x110
  0x805314a4:  blr      
  0x805314a8:  li       r0, 3
  0x805314ac:  li       r8, 0
  0x805314b0:  li       r9, 0
  0x805314b4:  li       r10, 0
  0x805314b8:  li       r11, 0
