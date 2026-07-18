/**
 * ItemObjBlue_loadModel
 * @addr 0x807ae4f0
 * @size 416 bytes
 * @frame 48 bytes
 * @calls 1 function(s)
 */
void ItemObjBlue_loadModel(void) {
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807ae4f0: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x807ae4f4: 4e 80 00 20              blr       */
/* 0x807ae4f8: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x807ae4fc: 7c 08 02 a6              mflr     r0 */
/* 0x807ae500: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x807ae504: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x807ae508: 7c df 33 78              mr       r31, r6 */
/* 0x807ae50c: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x807ae510: 7c be 2b 78              mr       r30, r5 */
/* 0x807ae514: 93 a1 00 24              stw      r29, 0x24(r1) */
/* 0x807ae518: 7c 9d 23 78              mr       r29, r4 */
/* 0x807ae51c: 38 81 00 08              addi     r4, r1, 8 */
/* 0x807ae520: 93 81 00 20              stw      r28, 0x20(r1) */
/* 0x807ae524: 7c 7c 1b 78              mr       r28, r3 */
/* 0x807ae528: 80 e3 00 50              lwz      r7, 0x50(r3) */
/* 0x807ae52c: 80 03 00 54              lwz      r0, 0x54(r3) */
/* 0x807ae530: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x807ae534: 90 e1 00 08              stw      r7, 8(r1) */
/* 0x807ae538: 80 03 00 58              lwz      r0, 0x58(r3) */
/* 0x807ae53c: 38 63 01 a4              addi     r3, r3, 0x1a4 */
/* 0x807ae540: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807ae544: 4b fe 32 1d              bl       0x80791760 */
/* 0x807ae548: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x807ae54c: d0 3c 01 a0              stfs     f1, 0x1a0(r28) */
/* 0x807ae550: 41 82 00 30              beq      0x807ae580 */
/* 0x807ae554: 3c 60 00 00              lis      r3, 0 */
/* 0x807ae558: fc 00 08 18              frsp     f0, f1 */
/* 0x807ae55c: c0 23 00 00              lfs      f1, 0(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjBlue_loadModel
; Demangled: ItemObjBlue_loadModel
; Address: 0x807ae4f0  (.text+0x29bc54)
; Size: 416 bytes

  0x807ae4f0:  addi     r1, r1, 0x30
  0x807ae4f4:  blr      
  0x807ae4f8:  stwu     r1, -0x30(r1)
  0x807ae4fc:  mflr     r0
  0x807ae500:  stw      r0, 0x34(r1)
  0x807ae504:  stw      r31, 0x2c(r1)
  0x807ae508:  mr       r31, r6
  0x807ae50c:  stw      r30, 0x28(r1)
  0x807ae510:  mr       r30, r5
  0x807ae514:  stw      r29, 0x24(r1)
  0x807ae518:  mr       r29, r4
  0x807ae51c:  addi     r4, r1, 8
  0x807ae520:  stw      r28, 0x20(r1)
  0x807ae524:  mr       r28, r3
  0x807ae528:  lwz      r7, 0x50(r3)
  0x807ae52c:  lwz      r0, 0x54(r3)
  0x807ae530:  stw      r0, 0xc(r1)
  0x807ae534:  stw      r7, 8(r1)
  0x807ae538:  lwz      r0, 0x58(r3)
  0x807ae53c:  addi     r3, r3, 0x1a4
  0x807ae540:  stw      r0, 0x10(r1)
  0x807ae544:  bl       0x80791760
  0x807ae548:  cmpwi    r30, 0
  0x807ae54c:  stfs     f1, 0x1a0(r28)
  0x807ae550:  beq      0x807ae580
  0x807ae554:  lis      r3, 0
  0x807ae558:  frsp     f0, f1
  0x807ae55c:  lfs      f1, 0(r3)
