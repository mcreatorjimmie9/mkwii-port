/**
 * appendParamFile__System10RaceConfig8ScenarioFPSystem10RaceConfig
 * @addr 0x805342cc
 * @size 308 bytes
 * @frame 16 bytes
 * @calls 5 function(s)
 */
void System10RaceConfig8ScenarioFPSystem10RaceConfig(void) {
    /* cmpwi r3, 0 */
    /* r1+0x14 = r0 */
    /* r1+0xc = r31 */
    /* r31 = r3 */
    /* if (cr0 ==) goto 0x805342f4 */
    /* cmpwi r4, 0 */
    /* if (cr0 <=) goto 0x805342f4 */
    /* 0x80555bf8() */
    /* r3 = r31 */
    /* r31 = stack[0xc] */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805342cc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x805342d0: 7c 08 02 a6              mflr     r0 */
/* 0x805342d4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805342d8: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x805342dc: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x805342e0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x805342e4: 41 82 00 10              beq      0x805342f4 */
/* 0x805342e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x805342ec: 40 81 00 08              ble      0x805342f4 */
/* 0x805342f0: 48 02 19 09              bl       0x80555bf8 */
/* 0x805342f4: 7f e3 fb 78              mr       r3, r31 */
/* 0x805342f8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805342fc: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534300: 7c 08 03 a6              mtlr     r0 */
/* 0x80534304: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534308: 4e 80 00 20              blr       */
/* 0x8053430c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534310: 7c 08 02 a6              mflr     r0 */
/* 0x80534314: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534318: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053431c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80534320: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80534324: 41 82 00 10              beq      0x80534334 */
/* 0x80534328: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8053432c: 40 81 00 08              ble      0x80534334 */
/* 0x80534330: 48 02 18 c9              bl       0x80555bf8 */
/* 0x80534334: 7f e3 fb 78              mr       r3, r31 */
/* 0x80534338: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8053433c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534340: 7c 08 03 a6              mtlr     r0 */
/* 0x80534344: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534348: 4e 80 00 20              blr       */
/* 0x8053434c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534350: 7c 08 02 a6              mflr     r0 */
/* 0x80534354: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534358: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053435c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80534360: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80534364: 41 82 00 10              beq      0x80534374 */
/* 0x80534368: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8053436c: 40 81 00 08              ble      0x80534374 */
/* 0x80534370: 48 02 18 89              bl       0x80555bf8 */
/* 0x80534374: 7f e3 fb 78              mr       r3, r31 */
/* 0x80534378: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8053437c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534380: 7c 08 03 a6              mtlr     r0 */
/* 0x80534384: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534388: 4e 80 00 20              blr       */
/* 0x8053438c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534390: 7c 08 02 a6              mflr     r0 */
/* 0x80534394: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534398: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053439c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x805343a0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x805343a4: 41 82 00 10              beq      0x805343b4 */
/* 0x805343a8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x805343ac: 40 81 00 08              ble      0x805343b4 */
/* 0x805343b0: 48 02 18 49              bl       0x80555bf8 */
/* 0x805343b4: 7f e3 fb 78              mr       r3, r31 */
/* 0x805343b8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805343bc: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x805343c0: 7c 08 03 a6              mtlr     r0 */
/* 0x805343c4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x805343c8: 4e 80 00 20              blr       */
/* 0x805343cc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x805343d0: 7c 08 02 a6              mflr     r0 */
/* 0x805343d4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805343d8: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x805343dc: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x805343e0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x805343e4: 41 82 00 10              beq      0x805343f4 */
/* 0x805343e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x805343ec: 40 81 00 08              ble      0x805343f4 */
/* 0x805343f0: 48 02 18 09              bl       0x80555bf8 */
/* 0x805343f4: 7f e3 fb 78              mr       r3, r31 */
/* 0x805343f8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805343fc: 80 01 00 14              lwz      r0, 0x14(r1) */
#endif


/* === DISASSEMBLY === */

; Function: appendParamFile__Q36System10RaceConfig8ScenarioFPQ26System10RaceConfig
; Demangled: appendParamFile__System10RaceConfig8ScenarioFPSystem10RaceConfig
; Address: 0x805342cc  (.text+0x21a30)
; Size: 308 bytes

  0x805342cc:  stwu     r1, -0x10(r1)
  0x805342d0:  mflr     r0
  0x805342d4:  cmpwi    r3, 0
  0x805342d8:  stw      r0, 0x14(r1)
  0x805342dc:  stw      r31, 0xc(r1)
  0x805342e0:  mr       r31, r3
  0x805342e4:  beq      0x805342f4
  0x805342e8:  cmpwi    r4, 0
  0x805342ec:  ble      0x805342f4
  0x805342f0:  bl       0x80555bf8
  0x805342f4:  mr       r3, r31
  0x805342f8:  lwz      r31, 0xc(r1)
  0x805342fc:  lwz      r0, 0x14(r1)
  0x80534300:  mtlr     r0
  0x80534304:  addi     r1, r1, 0x10
  0x80534308:  blr      
  0x8053430c:  stwu     r1, -0x10(r1)
  0x80534310:  mflr     r0
  0x80534314:  cmpwi    r3, 0
  0x80534318:  stw      r0, 0x14(r1)
  0x8053431c:  stw      r31, 0xc(r1)
  0x80534320:  mr       r31, r3
  0x80534324:  beq      0x80534334
  0x80534328:  cmpwi    r4, 0
  0x8053432c:  ble      0x80534334
  0x80534330:  bl       0x80555bf8
  0x80534334:  mr       r3, r31
  0x80534338:  lwz      r31, 0xc(r1)
  0x8053433c:  lwz      r0, 0x14(r1)
  0x80534340:  mtlr     r0
  0x80534344:  addi     r1, r1, 0x10
  0x80534348:  blr      
  0x8053434c:  stwu     r1, -0x10(r1)
  0x80534350:  mflr     r0
  0x80534354:  cmpwi    r3, 0
  0x80534358:  stw      r0, 0x14(r1)
  0x8053435c:  stw      r31, 0xc(r1)
  0x80534360:  mr       r31, r3
  0x80534364:  beq      0x80534374
  0x80534368:  cmpwi    r4, 0
  0x8053436c:  ble      0x80534374
  0x80534370:  bl       0x80555bf8
  0x80534374:  mr       r3, r31
  0x80534378:  lwz      r31, 0xc(r1)
  0x8053437c:  lwz      r0, 0x14(r1)
  0x80534380:  mtlr     r0
  0x80534384:  addi     r1, r1, 0x10
  0x80534388:  blr      
  0x8053438c:  stwu     r1, -0x10(r1)
  0x80534390:  mflr     r0
  0x80534394:  cmpwi    r3, 0
  0x80534398:  stw      r0, 0x14(r1)
  0x8053439c:  stw      r31, 0xc(r1)
  0x805343a0:  mr       r31, r3
  0x805343a4:  beq      0x805343b4
  0x805343a8:  cmpwi    r4, 0
  0x805343ac:  ble      0x805343b4
  0x805343b0:  bl       0x80555bf8
  0x805343b4:  mr       r3, r31
  0x805343b8:  lwz      r31, 0xc(r1)
  0x805343bc:  lwz      r0, 0x14(r1)
  0x805343c0:  mtlr     r0
  0x805343c4:  addi     r1, r1, 0x10
  0x805343c8:  blr      
  0x805343cc:  stwu     r1, -0x10(r1)
  0x805343d0:  mflr     r0
  0x805343d4:  cmpwi    r3, 0
  0x805343d8:  stw      r0, 0x14(r1)
  0x805343dc:  stw      r31, 0xc(r1)
  0x805343e0:  mr       r31, r3
  0x805343e4:  beq      0x805343f4
  0x805343e8:  cmpwi    r4, 0
  0x805343ec:  ble      0x805343f4
  0x805343f0:  bl       0x80555bf8
  0x805343f4:  mr       r3, r31
  0x805343f8:  lwz      r31, 0xc(r1)
  0x805343fc:  lwz      r0, 0x14(r1)
