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

; Function: ItemHolderItem_initObjs
; Demangled: ItemHolderItem_initObjs
; Address: 0x807981b4  (.text+0x285918)
; Size: 200 bytes

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
