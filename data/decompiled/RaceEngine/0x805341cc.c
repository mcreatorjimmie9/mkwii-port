/**
 * update__System10RaceConfigFv
 * @addr 0x805341cc
 * @size 256 bytes
 * @frame 16 bytes
 * @calls 4 function(s)
 */
void System10RaceConfig(void* self) {
    /* cmpwi r3, 0 */
    /* r1+0x14 = r0 */
    /* r1+0xc = r31 */
    /* r31 = r3 */
    /* if (cr0 ==) goto 0x805341f4 */
    /* cmpwi r4, 0 */
    /* if (cr0 <=) goto 0x805341f4 */
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
/* 0x805341cc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x805341d0: 7c 08 02 a6              mflr     r0 */
/* 0x805341d4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805341d8: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x805341dc: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x805341e0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x805341e4: 41 82 00 10              beq      0x805341f4 */
/* 0x805341e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x805341ec: 40 81 00 08              ble      0x805341f4 */
/* 0x805341f0: 48 02 1a 09              bl       0x80555bf8 */
/* 0x805341f4: 7f e3 fb 78              mr       r3, r31 */
/* 0x805341f8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805341fc: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534200: 7c 08 03 a6              mtlr     r0 */
/* 0x80534204: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534208: 4e 80 00 20              blr       */
/* 0x8053420c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534210: 7c 08 02 a6              mflr     r0 */
/* 0x80534214: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534218: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053421c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80534220: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80534224: 41 82 00 10              beq      0x80534234 */
/* 0x80534228: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8053422c: 40 81 00 08              ble      0x80534234 */
/* 0x80534230: 48 02 19 c9              bl       0x80555bf8 */
/* 0x80534234: 7f e3 fb 78              mr       r3, r31 */
/* 0x80534238: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8053423c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534240: 7c 08 03 a6              mtlr     r0 */
/* 0x80534244: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534248: 4e 80 00 20              blr       */
/* 0x8053424c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534250: 7c 08 02 a6              mflr     r0 */
/* 0x80534254: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534258: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053425c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80534260: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80534264: 41 82 00 10              beq      0x80534274 */
/* 0x80534268: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8053426c: 40 81 00 08              ble      0x80534274 */
/* 0x80534270: 48 02 19 89              bl       0x80555bf8 */
/* 0x80534274: 7f e3 fb 78              mr       r3, r31 */
/* 0x80534278: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8053427c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80534280: 7c 08 03 a6              mtlr     r0 */
/* 0x80534284: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80534288: 4e 80 00 20              blr       */
/* 0x8053428c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80534290: 7c 08 02 a6              mflr     r0 */
/* 0x80534294: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80534298: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8053429c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x805342a0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x805342a4: 41 82 00 10              beq      0x805342b4 */
/* 0x805342a8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x805342ac: 40 81 00 08              ble      0x805342b4 */
/* 0x805342b0: 48 02 19 49              bl       0x80555bf8 */
/* 0x805342b4: 7f e3 fb 78              mr       r3, r31 */
/* 0x805342b8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805342bc: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x805342c0: 7c 08 03 a6              mtlr     r0 */
/* 0x805342c4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x805342c8: 4e 80 00 20              blr       */
#endif


/* === DISASSEMBLY === */

; Function: update__Q26System10RaceConfigFv
; Demangled: update__System10RaceConfigFv
; Address: 0x805341cc  (.text+0x21930)
; Size: 256 bytes

  0x805341cc:  stwu     r1, -0x10(r1)
  0x805341d0:  mflr     r0
  0x805341d4:  cmpwi    r3, 0
  0x805341d8:  stw      r0, 0x14(r1)
  0x805341dc:  stw      r31, 0xc(r1)
  0x805341e0:  mr       r31, r3
  0x805341e4:  beq      0x805341f4
  0x805341e8:  cmpwi    r4, 0
  0x805341ec:  ble      0x805341f4
  0x805341f0:  bl       0x80555bf8
  0x805341f4:  mr       r3, r31
  0x805341f8:  lwz      r31, 0xc(r1)
  0x805341fc:  lwz      r0, 0x14(r1)
  0x80534200:  mtlr     r0
  0x80534204:  addi     r1, r1, 0x10
  0x80534208:  blr      
  0x8053420c:  stwu     r1, -0x10(r1)
  0x80534210:  mflr     r0
  0x80534214:  cmpwi    r3, 0
  0x80534218:  stw      r0, 0x14(r1)
  0x8053421c:  stw      r31, 0xc(r1)
  0x80534220:  mr       r31, r3
  0x80534224:  beq      0x80534234
  0x80534228:  cmpwi    r4, 0
  0x8053422c:  ble      0x80534234
  0x80534230:  bl       0x80555bf8
  0x80534234:  mr       r3, r31
  0x80534238:  lwz      r31, 0xc(r1)
  0x8053423c:  lwz      r0, 0x14(r1)
  0x80534240:  mtlr     r0
  0x80534244:  addi     r1, r1, 0x10
  0x80534248:  blr      
  0x8053424c:  stwu     r1, -0x10(r1)
  0x80534250:  mflr     r0
  0x80534254:  cmpwi    r3, 0
  0x80534258:  stw      r0, 0x14(r1)
  0x8053425c:  stw      r31, 0xc(r1)
  0x80534260:  mr       r31, r3
  0x80534264:  beq      0x80534274
  0x80534268:  cmpwi    r4, 0
  0x8053426c:  ble      0x80534274
  0x80534270:  bl       0x80555bf8
  0x80534274:  mr       r3, r31
  0x80534278:  lwz      r31, 0xc(r1)
  0x8053427c:  lwz      r0, 0x14(r1)
  0x80534280:  mtlr     r0
  0x80534284:  addi     r1, r1, 0x10
  0x80534288:  blr      
  0x8053428c:  stwu     r1, -0x10(r1)
  0x80534290:  mflr     r0
  0x80534294:  cmpwi    r3, 0
  0x80534298:  stw      r0, 0x14(r1)
  0x8053429c:  stw      r31, 0xc(r1)
  0x805342a0:  mr       r31, r3
  0x805342a4:  beq      0x805342b4
  0x805342a8:  cmpwi    r4, 0
  0x805342ac:  ble      0x805342b4
  0x805342b0:  bl       0x80555bf8
  0x805342b4:  mr       r3, r31
  0x805342b8:  lwz      r31, 0xc(r1)
  0x805342bc:  lwz      r0, 0x14(r1)
  0x805342c0:  mtlr     r0
  0x805342c4:  addi     r1, r1, 0x10
  0x805342c8:  blr      
