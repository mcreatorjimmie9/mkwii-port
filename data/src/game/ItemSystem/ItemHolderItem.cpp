// ItemHolderItem implementation — 4 functions
#include "ItemHolderItem.hpp"

// Address: 0x80798958 — ItemHolderItem_update (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 1308 bytes
/**
 * ItemHolderItem_update
 * @addr 0x80798958
 * @size 1308 bytes
 * @frame 0 bytes
 */
void ItemHolderItem_update(void) {
    /* f0 = *(f32*)(r7+0x24) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80798958: c0 07 00 24              lfs      f0, 0x24(r7) */
#endif


/* === DISASSEMBLY === */


  0x80798958:  lfs      f0, 0x24(r7)

// Address: 0x80798450 — ItemHolderItem_despawn (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 648 bytes
/**
 * ItemHolderItem_despawn
 * @addr 0x80798450
 * @size 648 bytes
 * @frame 16 bytes
 * @calls 3 function(s)
 */
void ItemHolderItem_despawn(void) {
    /* li r4, 0 */
    /* 0x80555bf8() */
    /* r3 = r31 */
    /* 0x80555bf8() */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* r30 = stack[0x8] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80798450: 38 80 00 00              li       r4, 0 */
/* 0x80798454: 4b db d7 a5              bl       0x80555bf8 */
/* 0x80798458: 7f e3 fb 78              mr       r3, r31 */
/* 0x8079845c: 4b db d7 9d              bl       0x80555bf8 */
/* 0x80798460: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80798464: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80798468: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x8079846c: 7c 08 03 a6              mtlr     r0 */
/* 0x80798470: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80798474: 4e 80 00 20              blr       */
/* 0x80798478: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079847c: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80798480: 41 82 00 1c              beq      0x8079849c */
/* 0x80798484: c0 04 00 00              lfs      f0, 0(r4) */
/* 0x80798488: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x8079848c: d8 01 00 10              stfd     f0, 0x10(r1) */
/* 0x80798490: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80798494: 7c 00 0e 70              srawi    r0, r0, 1 */
/* 0x80798498: 98 01 00 08              stb      r0, 8(r1) */
/* 0x8079849c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807984a0: 41 82 00 14              beq      0x807984b4 */
/* 0x807984a4: 88 01 00 08              lbz      r0, 8(r1) */
/* 0x807984a8: 60 00 00 01              ori      r0, r0, 1 */
/* 0x807984ac: 7c 00 07 74              extsb    r0, r0 */
/* 0x807984b0: 48 00 00 10              b        0x807984c0 */
/* 0x807984b4: 88 01 00 08              lbz      r0, 8(r1) */
/* 0x807984b8: 54 00 00 3c              rlwinm   r0, r0, 0, 0, 0x1e */
/* 0x807984bc: 7c 00 07 74              extsb    r0, r0 */
/* 0x807984c0: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807984c4: 41 82 00 34              beq      0x807984f8 */
/* 0x807984c8: 54 03 06 3e              clrlwi   r3, r0, 0x18 */
/* 0x807984cc: 3c 00 43 30              lis      r0, 0x4330 */
/* 0x807984d0: 7c 65 07 74              extsb    r5, r3 */
/* 0x807984d4: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807984d8: 54 a5 08 3c              slwi     r5, r5, 1 */
/* 0x807984dc: 3c 60 00 00              lis      r3, 0 */
/* 0x807984e0: 6c a0 80 00              xoris    r0, r5, 0x8000 */
/* 0x807984e4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807984e8: c8 23 00 00              lfd      f1, 0(r3) */
/* 0x807984ec: c8 01 00 10              lfd      f0, 0x10(r1) */
/* 0x807984f0: ec 00 08 28              fsubs    f0, f0, f1 */
/* 0x807984f4: d0 04 00 00              stfs     f0, 0(r4) */
/* 0x807984f8: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807984fc: 4e 80 00 20              blr       */
/* 0x80798500: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80798504: fc 00 08 1e              fctiwz   f0, f1 */
/* 0x80798508: d8 01 00 08              stfd     f0, 8(r1) */
/* 0x8079850c: 80 01 00 0c              lwz      r0, 0xc(r1) */
/* 0x80798510: 54 03 ff fe              rlwinm   r3, r0, 0x1f, 0x1f, 0x1f */
/* 0x80798514: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80798518: 4e 80 00 20              blr       */
/* 0x8079851c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80798520: 7c 08 02 a6              mflr     r0 */
/* 0x80798524: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80798528: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079852c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80798530: 8b e3 00 6c              lbz      r31, 0x6c(r3) */
/* 0x80798534: 41 82 00 0c              beq      0x80798540 */
/* 0x80798538: 38 60 00 80              li       r3, 0x80 */
/* 0x8079853c: 48 00 00 30              b        0x8079856c */
/* 0x80798540: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x80798544: 2c 00 00 0e              cmpwi    r0, 0xe */
/* 0x80798548: 40 82 00 0c              bne      0x80798554 */
/* 0x8079854c: 38 60 00 00              li       r3, 0 */
/* 0x80798550: 48 00 00 1c              b        0x8079856c */
/* 0x80798554: 3c 60 00 00              lis      r3, 0 */
/* 0x80798558: 1c 00 00 24              mulli    r0, r0, 0x24 */
/* 0x8079855c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80798560: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80798564: 38 63 00 48              addi     r3, r3, 0x48 */
/* 0x80798568: 4b ff c8 19              bl       0x80794d80 */
/* 0x8079856c: 57 e0 42 2e              rlwinm   r0, r31, 8, 8, 0x17 */
/* 0x80798570: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80798574: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80798578: 54 03 04 3e              clrlwi   r3, r0, 0x10 */
/* 0x8079857c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80798580: 7c 08 03 a6              mtlr     r0 */
/* 0x80798584: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80798588: 4e 80 00 20              blr       */
/* 0x8079858c: 54 63 c7 3e              rlwinm   r3, r3, 0x18, 0x1c, 0x1f */
/* 0x80798590: 4e 80 00 20              blr       */
/* 0x80798594: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80798598: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079859c: 41 82 00 0c              beq      0x807985a8 */
/* 0x807985a0: 7c 80 23 78              mr       r0, r4 */
/* 0x807985a4: 48 00 00 08              b        0x807985ac */
/* 0x807985a8: 38 00 00 00              li       r0, 0 */
/* 0x807985ac: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807985b0: 41 82 00 7c              beq      0x8079862c */
/* 0x807985b4: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x807985b8: 41 82 00 34              beq      0x807985ec */
/* 0x807985bc: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807985c0: 41 82 00 0c              beq      0x807985cc */
/* 0x807985c4: 7c 86 23 78              mr       r6, r4 */
/* 0x807985c8: 48 00 00 08              b        0x807985d0 */
/* 0x807985cc: 38 c0 00 00              li       r6, 0 */
/* 0x807985d0: c0 06 00 00              lfs      f0, 0(r6) */
/* 0x807985d4: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x807985d8: d8 01 00 08              stfd     f0, 8(r1) */
/* 0x807985dc: 80 01 00 0c              lwz      r0, 0xc(r1) */
/* 0x807985e0: 7c 00 16 70              srawi    r0, r0, 2 */
/* 0x807985e4: b0 03 00 00              sth      r0, 0(r3) */
/* 0x807985e8: 48 00 00 44              b        0x8079862c */
/* 0x807985ec: a8 e3 00 00              lha      r7, 0(r3) */
/* 0x807985f0: 3c 00 43 30              lis      r0, 0x4330 */
/* 0x807985f4: 90 01 00 08              stw      r0, 8(r1) */
/* 0x807985f8: 3c c0 00 00              lis      r6, 0 */
/* 0x807985fc: 54 e0 10 3a              slwi     r0, r7, 2 */
/* 0x80798600: c8 26 00 00              lfd      f1, 0(r6) */
/* 0x80798604: 6c 00 80 00              xoris    r0, r0, 0x8000 */
/* 0x80798608: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x8079860c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80798610: c8 01 00 08              lfd      f0, 8(r1) */
/* 0x80798614: ec 00 08 28              fsubs    f0, f0, f1 */
/* 0x80798618: 41 82 00 0c              beq      0x80798624 */
/* 0x8079861c: 7c 86 23 78              mr       r6, r4 */
/* 0x80798620: 48 00 00 08              b        0x80798628 */
/* 0x80798624: 38 c0 00 00              li       r6, 0 */
/* 0x80798628: d0 06 00 00              stfs     f0, 0(r6) */
/* 0x8079862c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80798630: 41 82 00 0c              beq      0x8079863c */
/* 0x80798634: 38 04 00 04              addi     r0, r4, 4 */
/* 0x80798638: 48 00 00 08              b        0x80798640 */
/* 0x8079863c: 38 00 00 00              li       r0, 0 */
/* 0x80798640: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80798644: 41 82 00 7c              beq      0x807986c0 */
/* 0x80798648: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x8079864c: 41 82 00 34              beq      0x80798680 */
/* 0x80798650: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80798654: 41 82 00 0c              beq      0x80798660 */
/* 0x80798658: 38 c4 00 04              addi     r6, r4, 4 */
/* 0x8079865c: 48 00 00 08              b        0x80798664 */
/* 0x80798660: 38 c0 00 00              li       r6, 0 */
/* 0x80798664: c0 06 00 00              lfs      f0, 0(r6) */
/* 0x80798668: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x8079866c: d8 01 00 08              stfd     f0, 8(r1) */
/* 0x80798670: 80 01 00 0c              lwz      r0, 0xc(r1) */
/* 0x80798674: 7c 00 16 70              srawi    r0, r0, 2 */
/* 0x80798678: b0 03 00 02              sth      r0, 2(r3) */
/* 0x8079867c: 48 00 00 44              b        0x807986c0 */
/* 0x80798680: a8 e3 00 02              lha      r7, 2(r3) */
/* 0x80798684: 3c 00 43 30              lis      r0, 0x4330 */
/* 0x80798688: 90 01 00 08              stw      r0, 8(r1) */
/* 0x8079868c: 3c c0 00 00              lis      r6, 0 */
/* 0x80798690: 54 e0 10 3a              slwi     r0, r7, 2 */
/* 0x80798694: c8 26 00 00              lfd      f1, 0(r6) */
/* 0x80798698: 6c 00 80 00              xoris    r0, r0, 0x8000 */
/* 0x8079869c: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x807986a0: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807986a4: c8 01 00 08              lfd      f0, 8(r1) */
/* 0x807986a8: ec 00 08 28              fsubs    f0, f0, f1 */
/* 0x807986ac: 41 82 00 0c              beq      0x807986b8 */
/* 0x807986b0: 38 c4 00 04              addi     r6, r4, 4 */
/* 0x807986b4: 48 00 00 08              b        0x807986bc */
/* 0x807986b8: 38 c0 00 00              li       r6, 0 */
/* 0x807986bc: d0 06 00 00              stfs     f0, 0(r6) */
/* 0x807986c0: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807986c4: 38 c3 00 04              addi     r6, r3, 4 */
/* 0x807986c8: 41 82 00 0c              beq      0x807986d4 */
/* 0x807986cc: 38 04 00 08              addi     r0, r4, 8 */
/* 0x807986d0: 48 00 00 08              b        0x807986d8 */
/* 0x807986d4: 38 00 00 00              li       r0, 0 */
#endif


/* === DISASSEMBLY === */


  0x80798450:  li       r4, 0
  0x80798454:  bl       0x80555bf8
  0x80798458:  mr       r3, r31
  0x8079845c:  bl       0x80555bf8
  0x80798460:  lwz      r0, 0x14(r1)
  0x80798464:  lwz      r31, 0xc(r1)
  0x80798468:  lwz      r30, 8(r1)
  0x8079846c:  mtlr     r0
  0x80798470:  addi     r1, r1, 0x10
  0x80798474:  blr      
  0x80798478:  cmpwi    r4, 0
  0x8079847c:  stwu     r1, -0x20(r1)
  0x80798480:  beq      0x8079849c
  0x80798484:  lfs      f0, 0(r4)
  0x80798488:  fctiwz   f0, f0
  0x8079848c:  stfd     f0, 0x10(r1)
  0x80798490:  lwz      r0, 0x14(r1)
  0x80798494:  srawi    r0, r0, 1
  0x80798498:  stb      r0, 8(r1)
  0x8079849c:  cmpwi    r3, 0
  0x807984a0:  beq      0x807984b4
  0x807984a4:  lbz      r0, 8(r1)
  0x807984a8:  ori      r0, r0, 1
  0x807984ac:  extsb    r0, r0
  0x807984b0:  b        0x807984c0
  0x807984b4:  lbz      r0, 8(r1)
  0x807984b8:  rlwinm   r0, r0, 0, 0, 0x1e
  0x807984bc:  extsb    r0, r0
  0x807984c0:  cmpwi    r4, 0
  0x807984c4:  beq      0x807984f8
  0x807984c8:  clrlwi   r3, r0, 0x18
  0x807984cc:  lis      r0, 0x4330
  0x807984d0:  extsb    r5, r3
  0x807984d4:  stw      r0, 0x10(r1)
  0x807984d8:  slwi     r5, r5, 1
  0x807984dc:  lis      r3, 0
  0x807984e0:  xoris    r0, r5, 0x8000
  0x807984e4:  stw      r0, 0x14(r1)
  0x807984e8:  lfd      f1, 0(r3)
  0x807984ec:  lfd      f0, 0x10(r1)
  0x807984f0:  fsubs    f0, f0, f1
  0x807984f4:  stfs     f0, 0(r4)
  0x807984f8:  addi     r1, r1, 0x20
  0x807984fc:  blr      
  0x80798500:  stwu     r1, -0x10(r1)
  0x80798504:  fctiwz   f0, f1
  0x80798508:  stfd     f0, 8(r1)
  0x8079850c:  lwz      r0, 0xc(r1)
  0x80798510:  rlwinm   r3, r0, 0x1f, 0x1f, 0x1f
  0x80798514:  addi     r1, r1, 0x10
  0x80798518:  blr      
  0x8079851c:  stwu     r1, -0x10(r1)
  0x80798520:  mflr     r0
  0x80798524:  cmpwi    r4, 0
  0x80798528:  stw      r0, 0x14(r1)
  0x8079852c:  stw      r31, 0xc(r1)
  0x80798530:  lbz      r31, 0x6c(r3)
  0x80798534:  beq      0x80798540
  0x80798538:  li       r3, 0x80
  0x8079853c:  b        0x8079856c
  0x80798540:  lwz      r0, 4(r3)
  0x80798544:  cmpwi    r0, 0xe
  0x80798548:  bne      0x80798554
  0x8079854c:  li       r3, 0
  0x80798550:  b        0x8079856c
  0x80798554:  lis      r3, 0
  0x80798558:  mulli    r0, r0, 0x24
  0x8079855c:  lwz      r3, 0(r3)
  0x80798560:  add      r3, r3, r0
  0x80798564:  addi     r3, r3, 0x48
  0x80798568:  bl       0x80794d80
  0x8079856c:  rlwinm   r0, r31, 8, 8, 0x17
  0x80798570:  lwz      r31, 0xc(r1)
  0x80798574:  or       r0, r0, r3
  0x80798578:  clrlwi   r3, r0, 0x10
  0x8079857c:  lwz      r0, 0x14(r1)
  0x80798580:  mtlr     r0
  0x80798584:  addi     r1, r1, 0x10
  0x80798588:  blr      
  0x8079858c:  rlwinm   r3, r3, 0x18, 0x1c, 0x1f
  0x80798590:  blr      
  0x80798594:  cmpwi    r4, 0
  0x80798598:  stwu     r1, -0x10(r1)
  0x8079859c:  beq      0x807985a8
  0x807985a0:  mr       r0, r4
  0x807985a4:  b        0x807985ac
  0x807985a8:  li       r0, 0
  0x807985ac:  cmpwi    r0, 0
  0x807985b0:  beq      0x8079862c
  0x807985b4:  cmpwi    r5, 0
  0x807985b8:  beq      0x807985ec
  0x807985bc:  cmpwi    r4, 0
  0x807985c0:  beq      0x807985cc
  0x807985c4:  mr       r6, r4
  0x807985c8:  b        0x807985d0
  0x807985cc:  li       r6, 0
  0x807985d0:  lfs      f0, 0(r6)
  0x807985d4:  fctiwz   f0, f0
  0x807985d8:  stfd     f0, 8(r1)
  0x807985dc:  lwz      r0, 0xc(r1)
  0x807985e0:  srawi    r0, r0, 2
  0x807985e4:  sth      r0, 0(r3)
  0x807985e8:  b        0x8079862c
  0x807985ec:  lha      r7, 0(r3)
  0x807985f0:  lis      r0, 0x4330
  0x807985f4:  stw      r0, 8(r1)
  0x807985f8:  lis      r6, 0
  0x807985fc:  slwi     r0, r7, 2
  0x80798600:  lfd      f1, 0(r6)
  0x80798604:  xoris    r0, r0, 0x8000
  0x80798608:  stw      r0, 0xc(r1)
  0x8079860c:  cmpwi    r4, 0
  0x80798610:  lfd      f0, 8(r1)
  0x80798614:  fsubs    f0, f0, f1
  0x80798618:  beq      0x80798624
  0x8079861c:  mr       r6, r4
  0x80798620:  b        0x80798628
  0x80798624:  li       r6, 0
  0x80798628:  stfs     f0, 0(r6)
  0x8079862c:  cmpwi    r4, 0
  0x80798630:  beq      0x8079863c
  0x80798634:  addi     r0, r4, 4
  0x80798638:  b        0x80798640
  0x8079863c:  li       r0, 0
  0x80798640:  cmpwi    r0, 0
  0x80798644:  beq      0x807986c0
  0x80798648:  cmpwi    r5, 0
  0x8079864c:  beq      0x80798680
  0x80798650:  cmpwi    r4, 0
  0x80798654:  beq      0x80798660
  0x80798658:  addi     r6, r4, 4
  0x8079865c:  b        0x80798664
  0x80798660:  li       r6, 0
  0x80798664:  lfs      f0, 0(r6)
  0x80798668:  fctiwz   f0, f0
  0x8079866c:  stfd     f0, 8(r1)
  0x80798670:  lwz      r0, 0xc(r1)
  0x80798674:  srawi    r0, r0, 2
  0x80798678:  sth      r0, 2(r3)
  0x8079867c:  b        0x807986c0
  0x80798680:  lha      r7, 2(r3)
  0x80798684:  lis      r0, 0x4330
  0x80798688:  stw      r0, 8(r1)
  0x8079868c:  lis      r6, 0
  0x80798690:  slwi     r0, r7, 2
  0x80798694:  lfd      f1, 0(r6)
  0x80798698:  xoris    r0, r0, 0x8000
  0x8079869c:  stw      r0, 0xc(r1)
  0x807986a0:  cmpwi    r4, 0
  0x807986a4:  lfd      f0, 8(r1)
  0x807986a8:  fsubs    f0, f0, f1
  0x807986ac:  beq      0x807986b8
  0x807986b0:  addi     r6, r4, 4
  0x807986b4:  b        0x807986bc
  0x807986b8:  li       r6, 0
  0x807986bc:  stfs     f0, 0(r6)
  0x807986c0:  cmpwi    r4, 0
  0x807986c4:  addi     r6, r3, 4
  0x807986c8:  beq      0x807986d4
  0x807986cc:  addi     r0, r4, 8
  0x807986d0:  b        0x807986d8
  0x807986d4:  li       r0, 0

// Address: 0x807982ec — ItemHolderItem_spawn (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 292 bytes
/**
 * ItemHolderItem_spawn
 * @addr 0x807982ec
 * @size 292 bytes
 * @frame 16 bytes
 * @calls 2 function(s)
 */
void ItemHolderItem_spawn(void) {
    /* stb r3, 0x18(r12) */
    /* addi r3, r10, 0xf */
    /* stb r0, 0x1c(r12) */
    /* addi r0, r10, 0x10 */
    /* stb r9, 0x20(r12) */
    /* addi r9, r10, 0x11 */
    /* stb r8, 0x24(r12) */
    /* addi r8, r10, 0x12 */
    /* stb r7, 0x28(r12) */
    /* addi r7, r10, 0x13 */
    /* stb r6, 0x2c(r12) */
    /* addi r6, r10, 0x14 */
    /* stb r5, 0x30(r12) */
    /* addi r5, r10, 0x15 */
    /* stb r4, 0x34(r12) */
    /* addi r4, r10, 0x16 */
    /* stb r3, 0x38(r12) */
    /* addi r3, r10, 0x17 */
    /* stb r0, 0x3c(r12) */
    /* addi r0, r10, 0x18 */
    /* addi r10, r10, 0x18 */
    /* stb r9, 0x40(r12) */
    /* stb r8, 0x44(r12) */
    /* stb r7, 0x48(r12) */
    /* stb r6, 0x4c(r12) */
    /* stb r5, 0x50(r12) */
    /* stb r4, 0x54(r12) */
    /* stb r3, 0x58(r12) */
    /* stb r0, 0x5c(r12) */
    /* addi r12, r12, 0x60 */
    /* bdnz 0x8079829c */
    /* li r0, 0xff */
    /* stb r0, 0x11c(r11) */
    /* li r3, 0 */
    /* li r4, 0 */
    /* li r5, 0 */
    /* li r6, 1 */
    /* 0x80798b94() */
    /* li r4, 0 */
    /* li r5, 0 */
    /* li r6, 1 */
    /* addi r3, r3, 0xa */
    /* 0x80798764() */
    /* li r0, 0 */
    /* r31+0x1c = r0 */
    /* r3, 0  (load upper immediate) */
    /* r3+0x0 = r31 */
    /* r31 = stack[0xc] */
    /* r3, 0  (load upper immediate) */
    /* r0 = stack[0x14] */
    /* r3 = r3+0x0 */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807982ec: 98 6c 00 18              stb      r3, 0x18(r12) */
/* 0x807982f0: 38 6a 00 0f              addi     r3, r10, 0xf */
/* 0x807982f4: 98 0c 00 1c              stb      r0, 0x1c(r12) */
/* 0x807982f8: 38 0a 00 10              addi     r0, r10, 0x10 */
/* 0x807982fc: 99 2c 00 20              stb      r9, 0x20(r12) */
/* 0x80798300: 39 2a 00 11              addi     r9, r10, 0x11 */
/* 0x80798304: 99 0c 00 24              stb      r8, 0x24(r12) */
/* 0x80798308: 39 0a 00 12              addi     r8, r10, 0x12 */
/* 0x8079830c: 98 ec 00 28              stb      r7, 0x28(r12) */
/* 0x80798310: 38 ea 00 13              addi     r7, r10, 0x13 */
/* 0x80798314: 98 cc 00 2c              stb      r6, 0x2c(r12) */
/* 0x80798318: 38 ca 00 14              addi     r6, r10, 0x14 */
/* 0x8079831c: 98 ac 00 30              stb      r5, 0x30(r12) */
/* 0x80798320: 38 aa 00 15              addi     r5, r10, 0x15 */
/* 0x80798324: 98 8c 00 34              stb      r4, 0x34(r12) */
/* 0x80798328: 38 8a 00 16              addi     r4, r10, 0x16 */
/* 0x8079832c: 98 6c 00 38              stb      r3, 0x38(r12) */
/* 0x80798330: 38 6a 00 17              addi     r3, r10, 0x17 */
/* 0x80798334: 98 0c 00 3c              stb      r0, 0x3c(r12) */
/* 0x80798338: 38 0a 00 18              addi     r0, r10, 0x18 */
/* 0x8079833c: 39 4a 00 18              addi     r10, r10, 0x18 */
/* 0x80798340: 99 2c 00 40              stb      r9, 0x40(r12) */
/* 0x80798344: 99 0c 00 44              stb      r8, 0x44(r12) */
/* 0x80798348: 98 ec 00 48              stb      r7, 0x48(r12) */
/* 0x8079834c: 98 cc 00 4c              stb      r6, 0x4c(r12) */
/* 0x80798350: 98 ac 00 50              stb      r5, 0x50(r12) */
/* 0x80798354: 98 8c 00 54              stb      r4, 0x54(r12) */
/* 0x80798358: 98 6c 00 58              stb      r3, 0x58(r12) */
/* 0x8079835c: 98 0c 00 5c              stb      r0, 0x5c(r12) */
/* 0x80798360: 39 8c 00 60              addi     r12, r12, 0x60 */
/* 0x80798364: 42 00 ff 38              bdnz     0x8079829c */
/* 0x80798368: 38 00 00 ff              li       r0, 0xff */
/* 0x8079836c: 98 0b 01 1c              stb      r0, 0x11c(r11) */
/* 0x80798370: 38 60 00 00              li       r3, 0 */
/* 0x80798374: 38 80 00 00              li       r4, 0 */
/* 0x80798378: 38 a0 00 00              li       r5, 0 */
/* 0x8079837c: 38 c0 00 01              li       r6, 1 */
/* 0x80798380: 48 00 08 15              bl       0x80798b94 */
/* 0x80798384: 38 80 00 00              li       r4, 0 */
/* 0x80798388: 38 a0 00 00              li       r5, 0 */
/* 0x8079838c: 38 c0 00 01              li       r6, 1 */
/* 0x80798390: 38 63 00 0a              addi     r3, r3, 0xa */
/* 0x80798394: 48 00 03 d1              bl       0x80798764 */
/* 0x80798398: 38 00 00 00              li       r0, 0 */
/* 0x8079839c: 90 1f 00 1c              stw      r0, 0x1c(r31) */
/* 0x807983a0: 3c 60 00 00              lis      r3, 0 */
/* 0x807983a4: 93 e3 00 00              stw      r31, 0(r3) */
/* 0x807983a8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807983ac: 3c 60 00 00              lis      r3, 0 */
/* 0x807983b0: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807983b4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807983b8: 7c 08 03 a6              mtlr     r0 */
/* 0x807983bc: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807983c0: 4e 80 00 20              blr       */
/* 0x807983c4: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807983c8: 7c 08 02 a6              mflr     r0 */
/* 0x807983cc: 3c 80 00 00              lis      r4, 0 */
/* 0x807983d0: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807983d4: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807983d8: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x807983dc: 83 e4 00 00              lwz      r31, 0(r4) */
/* 0x807983e0: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807983e4: 41 82 00 7c              beq      0x80798460 */
/* 0x807983e8: 38 00 00 00              li       r0, 0 */
/* 0x807983ec: 90 04 00 00              stw      r0, 0(r4) */
/* 0x807983f0: 41 82 00 70              beq      0x80798460 */
/* 0x807983f4: 41 82 00 64              beq      0x80798458 */
/* 0x807983f8: 3c 60 00 00              lis      r3, 0 */
/* 0x807983fc: 38 63 00 00              addi     r3, r3, 0 */
/* 0x80798400: 90 7f 00 00              stw      r3, 0(r31) */
/* 0x80798404: 83 c4 00 00              lwz      r30, 0(r4) */
/* 0x80798408: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x8079840c: 41 82 00 40              beq      0x8079844c */
#endif


/* === DISASSEMBLY === */


  0x807982ec:  stb      r3, 0x18(r12)
  0x807982f0:  addi     r3, r10, 0xf
  0x807982f4:  stb      r0, 0x1c(r12)
  0x807982f8:  addi     r0, r10, 0x10
  0x807982fc:  stb      r9, 0x20(r12)
  0x80798300:  addi     r9, r10, 0x11
  0x80798304:  stb      r8, 0x24(r12)
  0x80798308:  addi     r8, r10, 0x12
  0x8079830c:  stb      r7, 0x28(r12)
  0x80798310:  addi     r7, r10, 0x13
  0x80798314:  stb      r6, 0x2c(r12)
  0x80798318:  addi     r6, r10, 0x14
  0x8079831c:  stb      r5, 0x30(r12)
  0x80798320:  addi     r5, r10, 0x15
  0x80798324:  stb      r4, 0x34(r12)
  0x80798328:  addi     r4, r10, 0x16
  0x8079832c:  stb      r3, 0x38(r12)
  0x80798330:  addi     r3, r10, 0x17
  0x80798334:  stb      r0, 0x3c(r12)
  0x80798338:  addi     r0, r10, 0x18
  0x8079833c:  addi     r10, r10, 0x18
  0x80798340:  stb      r9, 0x40(r12)
  0x80798344:  stb      r8, 0x44(r12)
  0x80798348:  stb      r7, 0x48(r12)
  0x8079834c:  stb      r6, 0x4c(r12)
  0x80798350:  stb      r5, 0x50(r12)
  0x80798354:  stb      r4, 0x54(r12)
  0x80798358:  stb      r3, 0x58(r12)
  0x8079835c:  stb      r0, 0x5c(r12)
  0x80798360:  addi     r12, r12, 0x60
  0x80798364:  bdnz     0x8079829c
  0x80798368:  li       r0, 0xff
  0x8079836c:  stb      r0, 0x11c(r11)
  0x80798370:  li       r3, 0
  0x80798374:  li       r4, 0
  0x80798378:  li       r5, 0
  0x8079837c:  li       r6, 1
  0x80798380:  bl       0x80798b94
  0x80798384:  li       r4, 0
  0x80798388:  li       r5, 0
  0x8079838c:  li       r6, 1
  0x80798390:  addi     r3, r3, 0xa
  0x80798394:  bl       0x80798764
  0x80798398:  li       r0, 0
  0x8079839c:  stw      r0, 0x1c(r31)
  0x807983a0:  lis      r3, 0
  0x807983a4:  stw      r31, 0(r3)
  0x807983a8:  lwz      r31, 0xc(r1)
  0x807983ac:  lis      r3, 0
  0x807983b0:  lwz      r0, 0x14(r1)
  0x807983b4:  lwz      r3, 0(r3)
  0x807983b8:  mtlr     r0
  0x807983bc:  addi     r1, r1, 0x10
  0x807983c0:  blr      
  0x807983c4:  stwu     r1, -0x10(r1)
  0x807983c8:  mflr     r0
  0x807983cc:  lis      r4, 0
  0x807983d0:  stw      r0, 0x14(r1)
  0x807983d4:  stw      r31, 0xc(r1)
  0x807983d8:  stw      r30, 8(r1)
  0x807983dc:  lwz      r31, 0(r4)
  0x807983e0:  cmpwi    r31, 0
  0x807983e4:  beq      0x80798460
  0x807983e8:  li       r0, 0
  0x807983ec:  stw      r0, 0(r4)
  0x807983f0:  beq      0x80798460
  0x807983f4:  beq      0x80798458
  0x807983f8:  lis      r3, 0
  0x807983fc:  addi     r3, r3, 0
  0x80798400:  stw      r3, 0(r31)
  0x80798404:  lwz      r30, 0(r4)
  0x80798408:  cmpwi    r30, 0
  0x8079840c:  beq      0x8079844c

// Address: 0x807981b4 — ItemHolderItem_initObjs (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 200 bytes
/**
 * ItemHolderItem_initObjs
 * @addr 0x807981b4
 * @size 200 bytes
 * @frame 0 bytes
 */
void ItemHolderItem_initObjs(void) {
    /* addi r7, r10, 3 */
    /* stb r8, 4(r12) */
    /* addi r6, r10, 4 */
    /* addi r5, r10, 5 */
    /* addi r4, r10, 6 */
    /* stb r7, 8(r12) */
    /* addi r3, r10, 7 */
    /* addi r0, r10, 8 */
    /* addi r9, r10, 9 */
    /* stb r6, 0xc(r12) */
    /* addi r8, r10, 0xa */
    /* addi r7, r10, 0xb */
    /* addi r6, r10, 0xc */
    /* stb r5, 0x10(r12) */
    /* addi r5, r10, 0xd */
    /* stb r4, 0x14(r12) */
    /* addi r4, r10, 0xe */
    /* stb r3, 0x18(r12) */
    /* addi r3, r10, 0xf */
    /* stb r0, 0x1c(r12) */
    /* addi r0, r10, 0x10 */
    /* stb r9, 0x20(r12) */
    /* addi r9, r10, 0x11 */
    /* stb r8, 0x24(r12) */
    /* addi r8, r10, 0x12 */
    /* stb r7, 0x28(r12) */
    /* addi r7, r10, 0x13 */
    /* stb r6, 0x2c(r12) */
    /* addi r6, r10, 0x14 */
    /* stb r5, 0x30(r12) */
    /* addi r5, r10, 0x15 */
    /* stb r4, 0x34(r12) */
    /* addi r4, r10, 0x16 */
    /* stb r3, 0x38(r12) */
    /* addi r3, r10, 0x17 */
    /* stb r0, 0x3c(r12) */
    /* addi r0, r10, 0x18 */
    /* addi r10, r10, 0x18 */
    /* stb r9, 0x40(r12) */
    /* stb r8, 0x44(r12) */
    /* stb r7, 0x48(r12) */
    /* stb r6, 0x4c(r12) */
    /* stb r5, 0x50(r12) */
    /* stb r4, 0x54(r12) */
    /* stb r3, 0x58(r12) */
    /* stb r0, 0x5c(r12) */
    /* addi r12, r12, 0x60 */
    /* bdnz 0x807981a8 */
    /* li r4, 0xff */
    /* stb r4, 0x11c(r11) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807981b4: 38 ea 00 03              addi     r7, r10, 3 */
/* 0x807981b8: 99 0c 00 04              stb      r8, 4(r12) */
/* 0x807981bc: 38 ca 00 04              addi     r6, r10, 4 */
/* 0x807981c0: 38 aa 00 05              addi     r5, r10, 5 */
/* 0x807981c4: 38 8a 00 06              addi     r4, r10, 6 */
/* 0x807981c8: 98 ec 00 08              stb      r7, 8(r12) */
/* 0x807981cc: 38 6a 00 07              addi     r3, r10, 7 */
/* 0x807981d0: 38 0a 00 08              addi     r0, r10, 8 */
/* 0x807981d4: 39 2a 00 09              addi     r9, r10, 9 */
/* 0x807981d8: 98 cc 00 0c              stb      r6, 0xc(r12) */
/* 0x807981dc: 39 0a 00 0a              addi     r8, r10, 0xa */
/* 0x807981e0: 38 ea 00 0b              addi     r7, r10, 0xb */
/* 0x807981e4: 38 ca 00 0c              addi     r6, r10, 0xc */
/* 0x807981e8: 98 ac 00 10              stb      r5, 0x10(r12) */
/* 0x807981ec: 38 aa 00 0d              addi     r5, r10, 0xd */
/* 0x807981f0: 98 8c 00 14              stb      r4, 0x14(r12) */
/* 0x807981f4: 38 8a 00 0e              addi     r4, r10, 0xe */
/* 0x807981f8: 98 6c 00 18              stb      r3, 0x18(r12) */
/* 0x807981fc: 38 6a 00 0f              addi     r3, r10, 0xf */
/* 0x80798200: 98 0c 00 1c              stb      r0, 0x1c(r12) */
/* 0x80798204: 38 0a 00 10              addi     r0, r10, 0x10 */
/* 0x80798208: 99 2c 00 20              stb      r9, 0x20(r12) */
/* 0x8079820c: 39 2a 00 11              addi     r9, r10, 0x11 */
/* 0x80798210: 99 0c 00 24              stb      r8, 0x24(r12) */
/* 0x80798214: 39 0a 00 12              addi     r8, r10, 0x12 */
/* 0x80798218: 98 ec 00 28              stb      r7, 0x28(r12) */
/* 0x8079821c: 38 ea 00 13              addi     r7, r10, 0x13 */
/* 0x80798220: 98 cc 00 2c              stb      r6, 0x2c(r12) */
/* 0x80798224: 38 ca 00 14              addi     r6, r10, 0x14 */
/* 0x80798228: 98 ac 00 30              stb      r5, 0x30(r12) */
/* 0x8079822c: 38 aa 00 15              addi     r5, r10, 0x15 */
/* 0x80798230: 98 8c 00 34              stb      r4, 0x34(r12) */
/* 0x80798234: 38 8a 00 16              addi     r4, r10, 0x16 */
/* 0x80798238: 98 6c 00 38              stb      r3, 0x38(r12) */
/* 0x8079823c: 38 6a 00 17              addi     r3, r10, 0x17 */
/* 0x80798240: 98 0c 00 3c              stb      r0, 0x3c(r12) */
/* 0x80798244: 38 0a 00 18              addi     r0, r10, 0x18 */
/* 0x80798248: 39 4a 00 18              addi     r10, r10, 0x18 */
/* 0x8079824c: 99 2c 00 40              stb      r9, 0x40(r12) */
/* 0x80798250: 99 0c 00 44              stb      r8, 0x44(r12) */
/* 0x80798254: 98 ec 00 48              stb      r7, 0x48(r12) */
/* 0x80798258: 98 cc 00 4c              stb      r6, 0x4c(r12) */
/* 0x8079825c: 98 ac 00 50              stb      r5, 0x50(r12) */
/* 0x80798260: 98 8c 00 54              stb      r4, 0x54(r12) */
/* 0x80798264: 98 6c 00 58              stb      r3, 0x58(r12) */
/* 0x80798268: 98 0c 00 5c              stb      r0, 0x5c(r12) */
/* 0x8079826c: 39 8c 00 60              addi     r12, r12, 0x60 */
/* 0x80798270: 42 00 ff 38              bdnz     0x807981a8 */
/* 0x80798274: 38 80 00 ff              li       r4, 0xff */
/* 0x80798278: 98 8b 01 1c              stb      r4, 0x11c(r11) */
#endif


/* === DISASSEMBLY === */


  0x807981b4:  addi     r7, r10, 3
  0x807981b8:  stb      r8, 4(r12)
  0x807981bc:  addi     r6, r10, 4
  0x807981c0:  addi     r5, r10, 5
  0x807981c4:  addi     r4, r10, 6
  0x807981c8:  stb      r7, 8(r12)
  0x807981cc:  addi     r3, r10, 7
  0x807981d0:  addi     r0, r10, 8
  0x807981d4:  addi     r9, r10, 9
  0x807981d8:  stb      r6, 0xc(r12)
  0x807981dc:  addi     r8, r10, 0xa
  0x807981e0:  addi     r7, r10, 0xb
  0x807981e4:  addi     r6, r10, 0xc
  0x807981e8:  stb      r5, 0x10(r12)
  0x807981ec:  addi     r5, r10, 0xd
  0x807981f0:  stb      r4, 0x14(r12)
  0x807981f4:  addi     r4, r10, 0xe
  0x807981f8:  stb      r3, 0x18(r12)
  0x807981fc:  addi     r3, r10, 0xf
  0x80798200:  stb      r0, 0x1c(r12)
  0x80798204:  addi     r0, r10, 0x10
  0x80798208:  stb      r9, 0x20(r12)
  0x8079820c:  addi     r9, r10, 0x11
  0x80798210:  stb      r8, 0x24(r12)
  0x80798214:  addi     r8, r10, 0x12
  0x80798218:  stb      r7, 0x28(r12)
  0x8079821c:  addi     r7, r10, 0x13
  0x80798220:  stb      r6, 0x2c(r12)
  0x80798224:  addi     r6, r10, 0x14
  0x80798228:  stb      r5, 0x30(r12)
  0x8079822c:  addi     r5, r10, 0x15
  0x80798230:  stb      r4, 0x34(r12)
  0x80798234:  addi     r4, r10, 0x16
  0x80798238:  stb      r3, 0x38(r12)
  0x8079823c:  addi     r3, r10, 0x17
  0x80798240:  stb      r0, 0x3c(r12)
  0x80798244:  addi     r0, r10, 0x18
  0x80798248:  addi     r10, r10, 0x18
  0x8079824c:  stb      r9, 0x40(r12)
  0x80798250:  stb      r8, 0x44(r12)
  0x80798254:  stb      r7, 0x48(r12)
  0x80798258:  stb      r6, 0x4c(r12)
  0x8079825c:  stb      r5, 0x50(r12)
  0x80798260:  stb      r4, 0x54(r12)
  0x80798264:  stb      r3, 0x58(r12)
  0x80798268:  stb      r0, 0x5c(r12)
  0x8079826c:  addi     r12, r12, 0x60
  0x80798270:  bdnz     0x807981a8
  0x80798274:  li       r4, 0xff
  0x80798278:  stb      r4, 0x11c(r11)
