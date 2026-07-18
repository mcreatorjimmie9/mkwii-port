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

; Function: ItemHolderItem_spawn
; Demangled: ItemHolderItem_spawn
; Address: 0x807982ec  (.text+0x285a50)
; Size: 292 bytes

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
