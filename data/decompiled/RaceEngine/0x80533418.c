/**
 * setMii__System10RaceConfig6PlayerFRCSystem3Mii
 * @addr 0x80533418
 * @size 312 bytes
 * @frame 0 bytes
 */
void System10RaceConfig6PlayerFRCSystem3Mii(void) {
    /* addi r11, r5, 0x4b */
    /* add r4, r31, r4 */
    /* r4+0xc24 = r9 */
    /* addi r12, r4, 0xc3b */
    /* r9 = r5+0x30 */
    /* r4+0xc20 = r9 */
    /* stb r10, 0xcf9(r4) */
    /* stb r10, 0xcf8(r4) */
    /* r4+0xc28 = r3 */
    /* r9 = r5+0x40 */
    /* r4+0xc30 = r9 */
    /* r9 = r5+0x44 */
    /* stb r9, 0xc34(r4) */
    /* r9 = r5+0x45 */
    /* stb r9, 0xc35(r4) */
    /* r9 = r5+0x48 */
    /* r4+0xc38 = r9 */
    /* mtctr r0 */
    /* r10 = r11+0x1 */
    /* lbzu r9, 2(r11) */
    /* stb r10, 1(r12) */
    /* stbu r9, 2(r12) */
    /* bdnz 0x80533460 */
    /* r9 = r5+0x98 */
    /* addi r8, r8, 1 */
    /* r4+0xc88 = r9 */
    /* r9 = r5+0x9c */
    /* stb r9, 0xc8c(r4) */
    /* r9 = r5+0x9d */
    /* stb r9, 0xc8d(r4) */
    /* r9 = r5+0x9e */
    /* stb r9, 0xc8e(r4) */
    /* r9 = r5+0x9f */
    /* stb r9, 0xc8f(r4) */
    /* r9 = r5+0xa0 */
    /* r4+0xc90 = r9 */
    /* r9 = r5+0xa8 */
    /* r10 = r5+0xa4 */
    /* r4+0xc94 = r10 */
    /* r4+0xc98 = r9 */
    /* r9 = r5+0xb0 */
    /* r10 = r5+0xac */
    /* r4+0xc9c = r10 */
    /* r4+0xca0 = r9 */
    /* r9 = r5+0xb8 */
    /* r10 = r5+0xb4 */
    /* r4+0xca4 = r10 */
    /* r4+0xca8 = r9 */
    /* r9 = r5+0xc0 */
    /* r10 = r5+0xbc */
    /* r4+0xcac = r10 */
    /* r4+0xcb0 = r9 */
    /* r9 = r5+0xc8 */
    /* r10 = r5+0xc4 */
    /* r4+0xcb4 = r10 */
    /* r4+0xcb8 = r9 */
    /* r9 = r5+0xd0 */
    /* r10 = r5+0xcc */
    /* r4+0xcbc = r10 */
    /* r4+0xcc0 = r9 */
    /* r9 = r5+0xd8 */
    /* r10 = r5+0xd4 */
    /* r4+0xcc4 = r10 */
    /* r4+0xcc8 = r9 */
    /* r9 = r5+0xdc */
    /* r4+0xccc = r9 */
    /* r9 = r5+0xe0 */
    /* stb r9, 0xcd0(r4) */
    /* r9 = r5+0xe1 */
    /* stb r9, 0xcd1(r4) */
    /* r9 = r5+0xe2 */
    /* stb r9, 0xcd2(r4) */
    /* r9 = r5+0xe4 */
    /* r4+0xcd4 = r9 */
    /* r9 = r5+0xe8 */
    /* stb r9, 0xcd8(r4) */
    /* r9 = r5+0xe9 */
    /* stb r9, 0xcd9(r4) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80533418: 39 65 00 4b              addi     r11, r5, 0x4b */
/* 0x8053341c: 7c 9f 22 14              add      r4, r31, r4 */
/* 0x80533420: 91 24 0c 24              stw      r9, 0xc24(r4) */
/* 0x80533424: 39 84 0c 3b              addi     r12, r4, 0xc3b */
/* 0x80533428: 81 25 00 30              lwz      r9, 0x30(r5) */
/* 0x8053342c: 91 24 0c 20              stw      r9, 0xc20(r4) */
/* 0x80533430: 99 44 0c f9              stb      r10, 0xcf9(r4) */
/* 0x80533434: 99 44 0c f8              stb      r10, 0xcf8(r4) */
/* 0x80533438: 90 64 0c 28              stw      r3, 0xc28(r4) */
/* 0x8053343c: 81 25 00 40              lwz      r9, 0x40(r5) */
/* 0x80533440: 91 24 0c 30              stw      r9, 0xc30(r4) */
/* 0x80533444: 89 25 00 44              lbz      r9, 0x44(r5) */
/* 0x80533448: 99 24 0c 34              stb      r9, 0xc34(r4) */
/* 0x8053344c: 89 25 00 45              lbz      r9, 0x45(r5) */
/* 0x80533450: 99 24 0c 35              stb      r9, 0xc35(r4) */
/* 0x80533454: 81 25 00 48              lwz      r9, 0x48(r5) */
/* 0x80533458: 91 24 0c 38              stw      r9, 0xc38(r4) */
/* 0x8053345c: 7c 09 03 a6              mtctr    r0 */
/* 0x80533460: 89 4b 00 01              lbz      r10, 1(r11) */
/* 0x80533464: 8d 2b 00 02              lbzu     r9, 2(r11) */
/* 0x80533468: 99 4c 00 01              stb      r10, 1(r12) */
/* 0x8053346c: 9d 2c 00 02              stbu     r9, 2(r12) */
/* 0x80533470: 42 00 ff f0              bdnz     0x80533460 */
/* 0x80533474: 81 25 00 98              lwz      r9, 0x98(r5) */
/* 0x80533478: 39 08 00 01              addi     r8, r8, 1 */
/* 0x8053347c: 91 24 0c 88              stw      r9, 0xc88(r4) */
/* 0x80533480: 89 25 00 9c              lbz      r9, 0x9c(r5) */
/* 0x80533484: 99 24 0c 8c              stb      r9, 0xc8c(r4) */
/* 0x80533488: 89 25 00 9d              lbz      r9, 0x9d(r5) */
/* 0x8053348c: 99 24 0c 8d              stb      r9, 0xc8d(r4) */
/* 0x80533490: 89 25 00 9e              lbz      r9, 0x9e(r5) */
/* 0x80533494: 99 24 0c 8e              stb      r9, 0xc8e(r4) */
/* 0x80533498: 89 25 00 9f              lbz      r9, 0x9f(r5) */
/* 0x8053349c: 99 24 0c 8f              stb      r9, 0xc8f(r4) */
/* 0x805334a0: 81 25 00 a0              lwz      r9, 0xa0(r5) */
/* 0x805334a4: 91 24 0c 90              stw      r9, 0xc90(r4) */
/* 0x805334a8: 81 25 00 a8              lwz      r9, 0xa8(r5) */
/* 0x805334ac: 81 45 00 a4              lwz      r10, 0xa4(r5) */
/* 0x805334b0: 91 44 0c 94              stw      r10, 0xc94(r4) */
/* 0x805334b4: 91 24 0c 98              stw      r9, 0xc98(r4) */
/* 0x805334b8: 81 25 00 b0              lwz      r9, 0xb0(r5) */
/* 0x805334bc: 81 45 00 ac              lwz      r10, 0xac(r5) */
/* 0x805334c0: 91 44 0c 9c              stw      r10, 0xc9c(r4) */
/* 0x805334c4: 91 24 0c a0              stw      r9, 0xca0(r4) */
/* 0x805334c8: 81 25 00 b8              lwz      r9, 0xb8(r5) */
/* 0x805334cc: 81 45 00 b4              lwz      r10, 0xb4(r5) */
/* 0x805334d0: 91 44 0c a4              stw      r10, 0xca4(r4) */
/* 0x805334d4: 91 24 0c a8              stw      r9, 0xca8(r4) */
/* 0x805334d8: 81 25 00 c0              lwz      r9, 0xc0(r5) */
/* 0x805334dc: 81 45 00 bc              lwz      r10, 0xbc(r5) */
/* 0x805334e0: 91 44 0c ac              stw      r10, 0xcac(r4) */
/* 0x805334e4: 91 24 0c b0              stw      r9, 0xcb0(r4) */
/* 0x805334e8: 81 25 00 c8              lwz      r9, 0xc8(r5) */
/* 0x805334ec: 81 45 00 c4              lwz      r10, 0xc4(r5) */
/* 0x805334f0: 91 44 0c b4              stw      r10, 0xcb4(r4) */
/* 0x805334f4: 91 24 0c b8              stw      r9, 0xcb8(r4) */
/* 0x805334f8: 81 25 00 d0              lwz      r9, 0xd0(r5) */
/* 0x805334fc: 81 45 00 cc              lwz      r10, 0xcc(r5) */
/* 0x80533500: 91 44 0c bc              stw      r10, 0xcbc(r4) */
/* 0x80533504: 91 24 0c c0              stw      r9, 0xcc0(r4) */
/* 0x80533508: 81 25 00 d8              lwz      r9, 0xd8(r5) */
/* 0x8053350c: 81 45 00 d4              lwz      r10, 0xd4(r5) */
/* 0x80533510: 91 44 0c c4              stw      r10, 0xcc4(r4) */
/* 0x80533514: 91 24 0c c8              stw      r9, 0xcc8(r4) */
/* 0x80533518: 81 25 00 dc              lwz      r9, 0xdc(r5) */
/* 0x8053351c: 91 24 0c cc              stw      r9, 0xccc(r4) */
/* 0x80533520: 89 25 00 e0              lbz      r9, 0xe0(r5) */
/* 0x80533524: 99 24 0c d0              stb      r9, 0xcd0(r4) */
/* 0x80533528: 89 25 00 e1              lbz      r9, 0xe1(r5) */
/* 0x8053352c: 99 24 0c d1              stb      r9, 0xcd1(r4) */
/* 0x80533530: 89 25 00 e2              lbz      r9, 0xe2(r5) */
/* 0x80533534: 99 24 0c d2              stb      r9, 0xcd2(r4) */
/* 0x80533538: 81 25 00 e4              lwz      r9, 0xe4(r5) */
/* 0x8053353c: 91 24 0c d4              stw      r9, 0xcd4(r4) */
/* 0x80533540: 89 25 00 e8              lbz      r9, 0xe8(r5) */
/* 0x80533544: 99 24 0c d8              stb      r9, 0xcd8(r4) */
/* 0x80533548: 89 25 00 e9              lbz      r9, 0xe9(r5) */
/* 0x8053354c: 99 24 0c d9              stb      r9, 0xcd9(r4) */
#endif


/* === DISASSEMBLY === */

; Function: setMii__Q36System10RaceConfig6PlayerFRCQ26System3Mii
; Demangled: setMii__System10RaceConfig6PlayerFRCSystem3Mii
; Address: 0x80533418  (.text+0x20b7c)
; Size: 312 bytes

  0x80533418:  addi     r11, r5, 0x4b
  0x8053341c:  add      r4, r31, r4
  0x80533420:  stw      r9, 0xc24(r4)
  0x80533424:  addi     r12, r4, 0xc3b
  0x80533428:  lwz      r9, 0x30(r5)
  0x8053342c:  stw      r9, 0xc20(r4)
  0x80533430:  stb      r10, 0xcf9(r4)
  0x80533434:  stb      r10, 0xcf8(r4)
  0x80533438:  stw      r3, 0xc28(r4)
  0x8053343c:  lwz      r9, 0x40(r5)
  0x80533440:  stw      r9, 0xc30(r4)
  0x80533444:  lbz      r9, 0x44(r5)
  0x80533448:  stb      r9, 0xc34(r4)
  0x8053344c:  lbz      r9, 0x45(r5)
  0x80533450:  stb      r9, 0xc35(r4)
  0x80533454:  lwz      r9, 0x48(r5)
  0x80533458:  stw      r9, 0xc38(r4)
  0x8053345c:  mtctr    r0
  0x80533460:  lbz      r10, 1(r11)
  0x80533464:  lbzu     r9, 2(r11)
  0x80533468:  stb      r10, 1(r12)
  0x8053346c:  stbu     r9, 2(r12)
  0x80533470:  bdnz     0x80533460
  0x80533474:  lwz      r9, 0x98(r5)
  0x80533478:  addi     r8, r8, 1
  0x8053347c:  stw      r9, 0xc88(r4)
  0x80533480:  lbz      r9, 0x9c(r5)
  0x80533484:  stb      r9, 0xc8c(r4)
  0x80533488:  lbz      r9, 0x9d(r5)
  0x8053348c:  stb      r9, 0xc8d(r4)
  0x80533490:  lbz      r9, 0x9e(r5)
  0x80533494:  stb      r9, 0xc8e(r4)
  0x80533498:  lbz      r9, 0x9f(r5)
  0x8053349c:  stb      r9, 0xc8f(r4)
  0x805334a0:  lwz      r9, 0xa0(r5)
  0x805334a4:  stw      r9, 0xc90(r4)
  0x805334a8:  lwz      r9, 0xa8(r5)
  0x805334ac:  lwz      r10, 0xa4(r5)
  0x805334b0:  stw      r10, 0xc94(r4)
  0x805334b4:  stw      r9, 0xc98(r4)
  0x805334b8:  lwz      r9, 0xb0(r5)
  0x805334bc:  lwz      r10, 0xac(r5)
  0x805334c0:  stw      r10, 0xc9c(r4)
  0x805334c4:  stw      r9, 0xca0(r4)
  0x805334c8:  lwz      r9, 0xb8(r5)
  0x805334cc:  lwz      r10, 0xb4(r5)
  0x805334d0:  stw      r10, 0xca4(r4)
  0x805334d4:  stw      r9, 0xca8(r4)
  0x805334d8:  lwz      r9, 0xc0(r5)
  0x805334dc:  lwz      r10, 0xbc(r5)
  0x805334e0:  stw      r10, 0xcac(r4)
  0x805334e4:  stw      r9, 0xcb0(r4)
  0x805334e8:  lwz      r9, 0xc8(r5)
  0x805334ec:  lwz      r10, 0xc4(r5)
  0x805334f0:  stw      r10, 0xcb4(r4)
  0x805334f4:  stw      r9, 0xcb8(r4)
  0x805334f8:  lwz      r9, 0xd0(r5)
  0x805334fc:  lwz      r10, 0xcc(r5)
  0x80533500:  stw      r10, 0xcbc(r4)
  0x80533504:  stw      r9, 0xcc0(r4)
  0x80533508:  lwz      r9, 0xd8(r5)
  0x8053350c:  lwz      r10, 0xd4(r5)
  0x80533510:  stw      r10, 0xcc4(r4)
  0x80533514:  stw      r9, 0xcc8(r4)
  0x80533518:  lwz      r9, 0xdc(r5)
  0x8053351c:  stw      r9, 0xccc(r4)
  0x80533520:  lbz      r9, 0xe0(r5)
  0x80533524:  stb      r9, 0xcd0(r4)
  0x80533528:  lbz      r9, 0xe1(r5)
  0x8053352c:  stb      r9, 0xcd1(r4)
  0x80533530:  lbz      r9, 0xe2(r5)
  0x80533534:  stb      r9, 0xcd2(r4)
  0x80533538:  lwz      r9, 0xe4(r5)
  0x8053353c:  stw      r9, 0xcd4(r4)
  0x80533540:  lbz      r9, 0xe8(r5)
  0x80533544:  stb      r9, 0xcd8(r4)
  0x80533548:  lbz      r9, 0xe9(r5)
  0x8053354c:  stb      r9, 0xcd9(r4)
