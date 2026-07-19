/**
 * postInitControllers__System10RaceConfig8ScenarioFPSystem10RaceConfig8Scenario
 * @addr 0x80531210
 * @size 456 bytes
 * @frame 0 bytes
 * @calls 5 function(s)
 */
void System10RaceConfig8ScenarioFPSystem10RaceConfig8Scenario(void) {
    /* r1+0x114 = r0 */
    /* stmw r21, 0xe4(r1) */
    /* li r29, -1 */
    /* r24 = r3 */
    /* r25 = r4 */
    /* li r28, 0 */
    /* li r27, 0 */
    /* li r26, 0 */
    /* r31, 0  (load upper immediate) */
    /* r22, 0  (load upper immediate) */
    /* li r23, 5 */
    /* stb r29, 0xb64(r3) */
    /* stb r29, 0xb65(r3) */
    /* stb r29, 0xb66(r3) */
    /* stb r29, 0xb67(r3) */
    /* clrlwi r0, r26, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r30, r24, r0 */
    /* r0 = r30+0x18 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x80531278 */
    /* cmpwi r0, 3 */
    /* if (cr0 ==) goto 0x805312e0 */
    /* cmpwi r0, 1 */
    /* if (cr0 ==) goto 0x80531384 */
    /* goto 0x80531388 */
    /* stb r28, 0xd(r30) */
    /* clrlwi r0, r27, 0x18 */
    /* mulli r0, r0, 0xec */
    /* stb r27, 0xe(r30) */
    /* r3 = r31+0x0 */
    /* add r3, r3, r0 */
    /* r3 = r3+0x8 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x805312b0 */
    /* r12 = r3+0x0 */
    /* r12 = r12+0x10 */
    /* mtctr r12 */
    /* indirect call via CTR */
    /* goto 0x805312b4 */
    /* li r3, -1 */
    /* extsb r0, r28 */
    /* r30+0xd8 = r3 */
    /* add r3, r24, r0 */
    /* r0 = r3+0xb64 */
    /* extsb r0, r0 */
    /* cmpwi r0, -1 */
    /* if (cr0 !=) goto 0x805312d4 */
    /* stb r26, 0xb64(r3) */
    /* addi r28, r28, 1 */
    /* addi r27, r27, 1 */
    /* goto 0x80531388 */
    /* r3 = r24+0xbec */
    /* li r21, 0 */
    /* 0x8051e514() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80531368 */
    /* addi r3, r1, 8 */
    /* 0x8051e664() */
    /* r4 = r24+0xbec */
    /* addi r3, r1, 8 */
    /* 0x8051eb84() */
    /* r3 = stack[0xc0] */
    /* r0 = r24+0xb48 */
    /* cmpw r3, r0 */
    /* if (cr0 !=) goto 0x80531354 */
    /* extsb. r0, r27 */
    /* if (cr0 <) goto 0x80531334 */
    /* r3 = r31+0x0 */
    /* clrlwi r4, r27, 0x18 */
    /* r5 = stack[0xdc] */
    /* r6 = stack[0xd0] */
    /* 0x80526930() */
    /* r0 = stack[0xb8] */
    /* li r21, 1 */
    /* r30+0x14 = r0 */
    /* r0 = stack[0xbc] */
    /* r30+0x10 = r0 */
    /* stb r27, 0xe(r30) */
    /* r0 = stack[0xc4] */
    /* r30+0xd8 = r0 */
    /* addi r3, r1, 0x70 */
    /* addi r4, r22, 0 */
    /* li r5, 0xc */
    /* li r6, 5 */
    /* 0x80555bf8() */
    /* cmpwi r21, 0 */
    /* if (cr0 ==) goto 0x80531378 */
    /* addi r27, r27, 1 */
    /* goto 0x80531388 */
    /* r30+0x18 = r23 */
    /* r30+0xd8 = r29 */
    /* goto 0x80531388 */
    /* r30+0xd8 = r29 */
    /* addi r26, r26, 1 */
    /* cmplwi r26, 0xc */
    /* if (cr0 <) goto 0x8053124c */
    /* extsb r0, r28 */
    /* cmpw r0, r25 */
    /* if (cr0 >=) goto 0x80531494 */
    /* li r0, 4 */
    /* li r5, 0 */
    /* mtctr r0 */
    /* clrlwi r0, r5, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r4, r24, r0 */
    /* r0 = r4+0x18 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x805313f4 */
    /* r0 = r4+0xd */
    /* extsb r0, r0 */
    /* cmpwi r0, -1 */
    /* if (cr0 !=) goto 0x805313f4 */
    /* extsb r3, r28 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80531210: 90 01 01 14              stw      r0, 0x114(r1) */
/* 0x80531214: be a1 00 e4              stmw     r21, 0xe4(r1) */
/* 0x80531218: 3b a0 ff ff              li       r29, -1 */
/* 0x8053121c: 7c 78 1b 78              mr       r24, r3 */
/* 0x80531220: 7c 99 23 78              mr       r25, r4 */
/* 0x80531224: 3b 80 00 00              li       r28, 0 */
/* 0x80531228: 3b 60 00 00              li       r27, 0 */
/* 0x8053122c: 3b 40 00 00              li       r26, 0 */
/* 0x80531230: 3f e0 00 00              lis      r31, 0 */
/* 0x80531234: 3e c0 00 00              lis      r22, 0 */
/* 0x80531238: 3a e0 00 05              li       r23, 5 */
/* 0x8053123c: 9b a3 0b 64              stb      r29, 0xb64(r3) */
/* 0x80531240: 9b a3 0b 65              stb      r29, 0xb65(r3) */
/* 0x80531244: 9b a3 0b 66              stb      r29, 0xb66(r3) */
/* 0x80531248: 9b a3 0b 67              stb      r29, 0xb67(r3) */
/* 0x8053124c: 57 40 06 3e              clrlwi   r0, r26, 0x18 */
/* 0x80531250: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80531254: 7f d8 02 14              add      r30, r24, r0 */
/* 0x80531258: 80 1e 00 18              lwz      r0, 0x18(r30) */
/* 0x8053125c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80531260: 41 82 00 18              beq      0x80531278 */
/* 0x80531264: 2c 00 00 03              cmpwi    r0, 3 */
/* 0x80531268: 41 82 00 78              beq      0x805312e0 */
/* 0x8053126c: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x80531270: 41 82 01 14              beq      0x80531384 */
/* 0x80531274: 48 00 01 14              b        0x80531388 */
/* 0x80531278: 9b 9e 00 0d              stb      r28, 0xd(r30) */
/* 0x8053127c: 57 60 06 3e              clrlwi   r0, r27, 0x18 */
/* 0x80531280: 1c 00 00 ec              mulli    r0, r0, 0xec */
/* 0x80531284: 9b 7e 00 0e              stb      r27, 0xe(r30) */
/* 0x80531288: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x8053128c: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80531290: 80 63 00 08              lwz      r3, 8(r3) */
/* 0x80531294: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80531298: 41 82 00 18              beq      0x805312b0 */
/* 0x8053129c: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x805312a0: 81 8c 00 10              lwz      r12, 0x10(r12) */
/* 0x805312a4: 7d 89 03 a6              mtctr    r12 */
/* 0x805312a8: 4e 80 04 21              bctrl     */
/* 0x805312ac: 48 00 00 08              b        0x805312b4 */
/* 0x805312b0: 38 60 ff ff              li       r3, -1 */
/* 0x805312b4: 7f 80 07 74              extsb    r0, r28 */
/* 0x805312b8: 90 7e 00 d8              stw      r3, 0xd8(r30) */
/* 0x805312bc: 7c 78 02 14              add      r3, r24, r0 */
/* 0x805312c0: 88 03 0b 64              lbz      r0, 0xb64(r3) */
/* 0x805312c4: 7c 00 07 74              extsb    r0, r0 */
/* 0x805312c8: 2c 00 ff ff              cmpwi    r0, -1 */
/* 0x805312cc: 40 82 00 08              bne      0x805312d4 */
/* 0x805312d0: 9b 43 0b 64              stb      r26, 0xb64(r3) */
/* 0x805312d4: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x805312d8: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x805312dc: 48 00 00 ac              b        0x80531388 */
/* 0x805312e0: 80 78 0b ec              lwz      r3, 0xbec(r24) */
/* 0x805312e4: 3a a0 00 00              li       r21, 0 */
/* 0x805312e8: 4b fe d2 2d              bl       0x8051e514 */
/* 0x805312ec: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805312f0: 41 82 00 78              beq      0x80531368 */
/* 0x805312f4: 38 61 00 08              addi     r3, r1, 8 */
/* 0x805312f8: 4b fe d3 6d              bl       0x8051e664 */
/* 0x805312fc: 80 98 0b ec              lwz      r4, 0xbec(r24) */
/* 0x80531300: 38 61 00 08              addi     r3, r1, 8 */
/* 0x80531304: 4b fe d8 81              bl       0x8051eb84 */
/* 0x80531308: 80 61 00 c0              lwz      r3, 0xc0(r1) */
/* 0x8053130c: 80 18 0b 48              lwz      r0, 0xb48(r24) */
/* 0x80531310: 7c 03 00 00              cmpw     r3, r0 */
/* 0x80531314: 40 82 00 40              bne      0x80531354 */
/* 0x80531318: 7f 60 07 75              extsb.   r0, r27 */
/* 0x8053131c: 41 80 00 18              blt      0x80531334 */
/* 0x80531320: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80531324: 57 64 06 3e              clrlwi   r4, r27, 0x18 */
/* 0x80531328: 80 a1 00 dc              lwz      r5, 0xdc(r1) */
/* 0x8053132c: 88 c1 00 d0              lbz      r6, 0xd0(r1) */
/* 0x80531330: 4b ff 56 01              bl       0x80526930 */
/* 0x80531334: 80 01 00 b8              lwz      r0, 0xb8(r1) */
/* 0x80531338: 3a a0 00 01              li       r21, 1 */
/* 0x8053133c: 90 1e 00 14              stw      r0, 0x14(r30) */
/* 0x80531340: 80 01 00 bc              lwz      r0, 0xbc(r1) */
/* 0x80531344: 90 1e 00 10              stw      r0, 0x10(r30) */
/* 0x80531348: 9b 7e 00 0e              stb      r27, 0xe(r30) */
/* 0x8053134c: 80 01 00 c4              lwz      r0, 0xc4(r1) */
/* 0x80531350: 90 1e 00 d8              stw      r0, 0xd8(r30) */
/* 0x80531354: 38 61 00 70              addi     r3, r1, 0x70 */
/* 0x80531358: 38 96 00 00              addi     r4, r22, 0 */
/* 0x8053135c: 38 a0 00 0c              li       r5, 0xc */
/* 0x80531360: 38 c0 00 05              li       r6, 5 */
/* 0x80531364: 48 02 48 95              bl       0x80555bf8 */
/* 0x80531368: 2c 15 00 00              cmpwi    r21, 0 */
/* 0x8053136c: 41 82 00 0c              beq      0x80531378 */
/* 0x80531370: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x80531374: 48 00 00 14              b        0x80531388 */
/* 0x80531378: 92 fe 00 18              stw      r23, 0x18(r30) */
/* 0x8053137c: 93 be 00 d8              stw      r29, 0xd8(r30) */
/* 0x80531380: 48 00 00 08              b        0x80531388 */
/* 0x80531384: 93 be 00 d8              stw      r29, 0xd8(r30) */
/* 0x80531388: 3b 5a 00 01              addi     r26, r26, 1 */
/* 0x8053138c: 28 1a 00 0c              cmplwi   r26, 0xc */
/* 0x80531390: 41 80 fe bc              blt      0x8053124c */
/* 0x80531394: 7f 80 07 74              extsb    r0, r28 */
/* 0x80531398: 7c 00 c8 00              cmpw     r0, r25 */
/* 0x8053139c: 40 80 00 f8              bge      0x80531494 */
/* 0x805313a0: 38 00 00 04              li       r0, 4 */
/* 0x805313a4: 38 a0 00 00              li       r5, 0 */
/* 0x805313a8: 7c 09 03 a6              mtctr    r0 */
/* 0x805313ac: 54 a0 06 3e              clrlwi   r0, r5, 0x18 */
/* 0x805313b0: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x805313b4: 7c 98 02 14              add      r4, r24, r0 */
/* 0x805313b8: 80 04 00 18              lwz      r0, 0x18(r4) */
/* 0x805313bc: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x805313c0: 41 82 00 34              beq      0x805313f4 */
/* 0x805313c4: 88 04 00 0d              lbz      r0, 0xd(r4) */
/* 0x805313c8: 7c 00 07 74              extsb    r0, r0 */
/* 0x805313cc: 2c 00 ff ff              cmpwi    r0, -1 */
/* 0x805313d0: 40 82 00 24              bne      0x805313f4 */
/* 0x805313d4: 7f 83 07 74              extsb    r3, r28 */
#endif


/* === DISASSEMBLY === */

; Function: postInitControllers__Q36System10RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario
; Demangled: postInitControllers__System10RaceConfig8ScenarioFPSystem10RaceConfig8Scenario
; Address: 0x80531210  (.text+0x1e974)
; Size: 456 bytes

  0x80531210:  stw      r0, 0x114(r1)
  0x80531214:  stmw     r21, 0xe4(r1)
  0x80531218:  li       r29, -1
  0x8053121c:  mr       r24, r3
  0x80531220:  mr       r25, r4
  0x80531224:  li       r28, 0
  0x80531228:  li       r27, 0
  0x8053122c:  li       r26, 0
  0x80531230:  lis      r31, 0
  0x80531234:  lis      r22, 0
  0x80531238:  li       r23, 5
  0x8053123c:  stb      r29, 0xb64(r3)
  0x80531240:  stb      r29, 0xb65(r3)
  0x80531244:  stb      r29, 0xb66(r3)
  0x80531248:  stb      r29, 0xb67(r3)
  0x8053124c:  clrlwi   r0, r26, 0x18
  0x80531250:  mulli    r0, r0, 0xf0
  0x80531254:  add      r30, r24, r0
  0x80531258:  lwz      r0, 0x18(r30)
  0x8053125c:  cmpwi    r0, 0
  0x80531260:  beq      0x80531278
  0x80531264:  cmpwi    r0, 3
  0x80531268:  beq      0x805312e0
  0x8053126c:  cmpwi    r0, 1
  0x80531270:  beq      0x80531384
  0x80531274:  b        0x80531388
  0x80531278:  stb      r28, 0xd(r30)
  0x8053127c:  clrlwi   r0, r27, 0x18
  0x80531280:  mulli    r0, r0, 0xec
  0x80531284:  stb      r27, 0xe(r30)
  0x80531288:  lwz      r3, 0(r31)
  0x8053128c:  add      r3, r3, r0
  0x80531290:  lwz      r3, 8(r3)
  0x80531294:  cmpwi    r3, 0
  0x80531298:  beq      0x805312b0
  0x8053129c:  lwz      r12, 0(r3)
  0x805312a0:  lwz      r12, 0x10(r12)
  0x805312a4:  mtctr    r12
  0x805312a8:  bctrl    
  0x805312ac:  b        0x805312b4
  0x805312b0:  li       r3, -1
  0x805312b4:  extsb    r0, r28
  0x805312b8:  stw      r3, 0xd8(r30)
  0x805312bc:  add      r3, r24, r0
  0x805312c0:  lbz      r0, 0xb64(r3)
  0x805312c4:  extsb    r0, r0
  0x805312c8:  cmpwi    r0, -1
  0x805312cc:  bne      0x805312d4
  0x805312d0:  stb      r26, 0xb64(r3)
  0x805312d4:  addi     r28, r28, 1
  0x805312d8:  addi     r27, r27, 1
  0x805312dc:  b        0x80531388
  0x805312e0:  lwz      r3, 0xbec(r24)
  0x805312e4:  li       r21, 0
  0x805312e8:  bl       0x8051e514
  0x805312ec:  cmpwi    r3, 0
  0x805312f0:  beq      0x80531368
  0x805312f4:  addi     r3, r1, 8
  0x805312f8:  bl       0x8051e664
  0x805312fc:  lwz      r4, 0xbec(r24)
  0x80531300:  addi     r3, r1, 8
  0x80531304:  bl       0x8051eb84
  0x80531308:  lwz      r3, 0xc0(r1)
  0x8053130c:  lwz      r0, 0xb48(r24)
  0x80531310:  cmpw     r3, r0
  0x80531314:  bne      0x80531354
  0x80531318:  extsb.   r0, r27
  0x8053131c:  blt      0x80531334
  0x80531320:  lwz      r3, 0(r31)
  0x80531324:  clrlwi   r4, r27, 0x18
  0x80531328:  lwz      r5, 0xdc(r1)
  0x8053132c:  lbz      r6, 0xd0(r1)
  0x80531330:  bl       0x80526930
  0x80531334:  lwz      r0, 0xb8(r1)
  0x80531338:  li       r21, 1
  0x8053133c:  stw      r0, 0x14(r30)
  0x80531340:  lwz      r0, 0xbc(r1)
  0x80531344:  stw      r0, 0x10(r30)
  0x80531348:  stb      r27, 0xe(r30)
  0x8053134c:  lwz      r0, 0xc4(r1)
  0x80531350:  stw      r0, 0xd8(r30)
  0x80531354:  addi     r3, r1, 0x70
  0x80531358:  addi     r4, r22, 0
  0x8053135c:  li       r5, 0xc
  0x80531360:  li       r6, 5
  0x80531364:  bl       0x80555bf8
  0x80531368:  cmpwi    r21, 0
  0x8053136c:  beq      0x80531378
  0x80531370:  addi     r27, r27, 1
  0x80531374:  b        0x80531388
  0x80531378:  stw      r23, 0x18(r30)
  0x8053137c:  stw      r29, 0xd8(r30)
  0x80531380:  b        0x80531388
  0x80531384:  stw      r29, 0xd8(r30)
  0x80531388:  addi     r26, r26, 1
  0x8053138c:  cmplwi   r26, 0xc
  0x80531390:  blt      0x8053124c
  0x80531394:  extsb    r0, r28
  0x80531398:  cmpw     r0, r25
  0x8053139c:  bge      0x80531494
  0x805313a0:  li       r0, 4
  0x805313a4:  li       r5, 0
  0x805313a8:  mtctr    r0
  0x805313ac:  clrlwi   r0, r5, 0x18
  0x805313b0:  mulli    r0, r0, 0xf0
  0x805313b4:  add      r4, r24, r0
  0x805313b8:  lwz      r0, 0x18(r4)
  0x805313bc:  cmpwi    r0, 5
  0x805313c0:  beq      0x805313f4
  0x805313c4:  lbz      r0, 0xd(r4)
  0x805313c8:  extsb    r0, r0
  0x805313cc:  cmpwi    r0, -1
  0x805313d0:  bne      0x805313f4
  0x805313d4:  extsb    r3, r28
