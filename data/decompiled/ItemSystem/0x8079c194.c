/**
 * ItemHolder_checkPlayerCollision
 * @addr 0x8079c194
 * @size 420 bytes
 * @frame 16 bytes
 * @calls 2 function(s)
 */
void ItemHolder_checkPlayerCollision(void) {
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c1b0 */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c1b0 */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c1c0 */
    /* r3 = r3+0x0 */
    /* goto 0x8079c1c4 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* r0 = r29+0xa8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c218 */
    /* add r3, r0, r31 */
    /* li r0, 1 */
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c1fc */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c1fc */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c20c */
    /* r3 = r3+0x0 */
    /* goto 0x8079c210 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* addi r30, r30, 1 */
    /* addi r31, r31, 4 */
    /* cmpwi r30, 2 */
    /* if (cr0 <) goto 0x8079c180 */
    /* r0 = stack[0x24] */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079c194: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c198: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c19c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c1a0: 41 82 00 10              beq      0x8079c1b0 */
/* 0x8079c1a4: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c1a8: 41 82 00 08              beq      0x8079c1b0 */
/* 0x8079c1ac: 38 00 00 00              li       r0, 0 */
/* 0x8079c1b0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c1b4: 41 82 00 0c              beq      0x8079c1c0 */
/* 0x8079c1b8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c1bc: 48 00 00 08              b        0x8079c1c4 */
/* 0x8079c1c0: 38 60 00 00              li       r3, 0 */
/* 0x8079c1c4: 38 80 00 02              li       r4, 2 */
/* 0x8079c1c8: 4b db 9a 31              bl       0x80555bf8 */
/* 0x8079c1cc: 80 1d 00 a8              lwz      r0, 0xa8(r29) */
/* 0x8079c1d0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c1d4: 41 82 00 44              beq      0x8079c218 */
/* 0x8079c1d8: 7c 60 fa 14              add      r3, r0, r31 */
/* 0x8079c1dc: 38 00 00 01              li       r0, 1 */
/* 0x8079c1e0: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c1e4: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c1e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c1ec: 41 82 00 10              beq      0x8079c1fc */
/* 0x8079c1f0: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c1f4: 41 82 00 08              beq      0x8079c1fc */
/* 0x8079c1f8: 38 00 00 00              li       r0, 0 */
/* 0x8079c1fc: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c200: 41 82 00 0c              beq      0x8079c20c */
/* 0x8079c204: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c208: 48 00 00 08              b        0x8079c210 */
/* 0x8079c20c: 38 60 00 00              li       r3, 0 */
/* 0x8079c210: 38 80 00 02              li       r4, 2 */
/* 0x8079c214: 4b db 99 e5              bl       0x80555bf8 */
/* 0x8079c218: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8079c21c: 3b ff 00 04              addi     r31, r31, 4 */
/* 0x8079c220: 2c 1e 00 02              cmpwi    r30, 2 */
/* 0x8079c224: 41 80 ff 5c              blt      0x8079c180 */
/* 0x8079c228: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8079c22c: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x8079c230: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x8079c234: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x8079c238: 7c 08 03 a6              mtlr     r0 */
/* 0x8079c23c: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8079c240: 4e 80 00 20              blr       */
/* 0x8079c244: 80 e3 00 a8              lwz      r7, 0xa8(r3) */
/* 0x8079c248: 3c c0 00 00              lis      r6, 0 */
/* 0x8079c24c: 80 03 00 78              lwz      r0, 0x78(r3) */
/* 0x8079c250: 3c a0 00 00              lis      r5, 0 */
/* 0x8079c254: c0 26 00 00              lfs      f1, 0(r6) */
/* 0x8079c258: 2c 07 00 00              cmpwi    r7, 0 */
/* 0x8079c25c: c0 84 00 00              lfs      f4, 0(r4) */
/* 0x8079c260: 64 00 02 00              oris     r0, r0, 0x200 */
/* 0x8079c264: c0 64 00 04              lfs      f3, 4(r4) */
/* 0x8079c268: c0 44 00 08              lfs      f2, 8(r4) */
/* 0x8079c26c: c0 05 00 00              lfs      f0, 0(r5) */
/* 0x8079c270: d0 83 00 bc              stfs     f4, 0xbc(r3) */
/* 0x8079c274: d0 63 00 c0              stfs     f3, 0xc0(r3) */
/* 0x8079c278: d0 43 00 c4              stfs     f2, 0xc4(r3) */
/* 0x8079c27c: d0 23 00 c8              stfs     f1, 0xc8(r3) */
/* 0x8079c280: d0 03 00 cc              stfs     f0, 0xcc(r3) */
/* 0x8079c284: d0 23 00 d0              stfs     f1, 0xd0(r3) */
/* 0x8079c288: 90 03 00 78              stw      r0, 0x78(r3) */
/* 0x8079c28c: 4d 82 00 20              beqlr     */
/* 0x8079c290: 81 87 00 00              lwz      r12, 0(r7) */
/* 0x8079c294: 54 00 03 de              rlwinm   r0, r0, 0, 0xf, 0xf */
/* 0x8079c298: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x8079c29c: 7c e3 3b 78              mr       r3, r7 */
/* 0x8079c2a0: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079c2a4: 54 04 d9 7e              srwi     r4, r0, 5 */
/* 0x8079c2a8: 7d 89 03 a6              mtctr    r12 */
/* 0x8079c2ac: 4e 80 04 20              bctr      */
/* 0x8079c2b0: 4e 80 00 20              blr       */
/* 0x8079c2b4: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079c2b8: 7c 08 02 a6              mflr     r0 */
/* 0x8079c2bc: 3c c0 00 00              lis      r6, 0 */
/* 0x8079c2c0: 39 20 00 00              li       r9, 0 */
/* 0x8079c2c4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079c2c8: 38 c6 00 00              addi     r6, r6, 0 */
/* 0x8079c2cc: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079c2d0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079c2d4: c0 43 00 44              lfs      f2, 0x44(r3) */
/* 0x8079c2d8: c0 23 00 48              lfs      f1, 0x48(r3) */
/* 0x8079c2dc: c0 03 00 4c              lfs      f0, 0x4c(r3) */
/* 0x8079c2e0: d0 43 00 bc              stfs     f2, 0xbc(r3) */
/* 0x8079c2e4: 80 a3 00 74              lwz      r5, 0x74(r3) */
/* 0x8079c2e8: 91 23 01 64              stw      r9, 0x164(r3) */
/* 0x8079c2ec: 60 a8 00 40              ori      r8, r5, 0x40 */
/* 0x8079c2f0: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079c2f4: d0 23 00 c0              stfs     f1, 0xc0(r3) */
/* 0x8079c2f8: 1c a0 00 74              mulli    r5, r0, 0x74 */
/* 0x8079c2fc: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079c300: d0 03 00 c4              stfs     f0, 0xc4(r3) */
/* 0x8079c304: c0 43 00 68              lfs      f2, 0x68(r3) */
/* 0x8079c308: c0 04 00 88              lfs      f0, 0x88(r4) */
/* 0x8079c30c: 7c e6 2a 14              add      r7, r6, r5 */
/* 0x8079c310: d0 03 00 50              stfs     f0, 0x50(r3) */
/* 0x8079c314: 1c 00 00 74              mulli    r0, r0, 0x74 */
/* 0x8079c318: 80 a3 00 a4              lwz      r5, 0xa4(r3) */
/* 0x8079c31c: c0 04 00 8c              lfs      f0, 0x8c(r4) */
/* 0x8079c320: d0 03 00 54              stfs     f0, 0x54(r3) */
/* 0x8079c324: 7c c6 02 14              add      r6, r6, r0 */
/* 0x8079c328: c0 04 00 90              lfs      f0, 0x90(r4) */
/* 0x8079c32c: d0 03 00 58              stfs     f0, 0x58(r3) */
/* 0x8079c330: 91 03 00 74              stw      r8, 0x74(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolder_checkPlayerCollision
; Demangled: ItemHolder_checkPlayerCollision
; Address: 0x8079c194  (.text+0x2898f8)
; Size: 420 bytes

  0x8079c194:  lwz      r3, 0x14(r3)
  0x8079c198:  lwz      r4, 4(r3)
  0x8079c19c:  cmpwi    r4, 0
  0x8079c1a0:  beq      0x8079c1b0
  0x8079c1a4:  cmpwi    r4, 1
  0x8079c1a8:  beq      0x8079c1b0
  0x8079c1ac:  li       r0, 0
  0x8079c1b0:  cmpwi    r0, 0
  0x8079c1b4:  beq      0x8079c1c0
  0x8079c1b8:  lwz      r3, 0(r3)
  0x8079c1bc:  b        0x8079c1c4
  0x8079c1c0:  li       r3, 0
  0x8079c1c4:  li       r4, 2
  0x8079c1c8:  bl       0x80555bf8
  0x8079c1cc:  lwz      r0, 0xa8(r29)
  0x8079c1d0:  cmpwi    r0, 0
  0x8079c1d4:  beq      0x8079c218
  0x8079c1d8:  add      r3, r0, r31
  0x8079c1dc:  li       r0, 1
  0x8079c1e0:  lwz      r3, 0x14(r3)
  0x8079c1e4:  lwz      r4, 4(r3)
  0x8079c1e8:  cmpwi    r4, 0
  0x8079c1ec:  beq      0x8079c1fc
  0x8079c1f0:  cmpwi    r4, 1
  0x8079c1f4:  beq      0x8079c1fc
  0x8079c1f8:  li       r0, 0
  0x8079c1fc:  cmpwi    r0, 0
  0x8079c200:  beq      0x8079c20c
  0x8079c204:  lwz      r3, 0(r3)
  0x8079c208:  b        0x8079c210
  0x8079c20c:  li       r3, 0
  0x8079c210:  li       r4, 2
  0x8079c214:  bl       0x80555bf8
  0x8079c218:  addi     r30, r30, 1
  0x8079c21c:  addi     r31, r31, 4
  0x8079c220:  cmpwi    r30, 2
  0x8079c224:  blt      0x8079c180
  0x8079c228:  lwz      r0, 0x24(r1)
  0x8079c22c:  lwz      r31, 0x1c(r1)
  0x8079c230:  lwz      r30, 0x18(r1)
  0x8079c234:  lwz      r29, 0x14(r1)
  0x8079c238:  mtlr     r0
  0x8079c23c:  addi     r1, r1, 0x20
  0x8079c240:  blr      
  0x8079c244:  lwz      r7, 0xa8(r3)
  0x8079c248:  lis      r6, 0
  0x8079c24c:  lwz      r0, 0x78(r3)
  0x8079c250:  lis      r5, 0
  0x8079c254:  lfs      f1, 0(r6)
  0x8079c258:  cmpwi    r7, 0
  0x8079c25c:  lfs      f4, 0(r4)
  0x8079c260:  oris     r0, r0, 0x200
  0x8079c264:  lfs      f3, 4(r4)
  0x8079c268:  lfs      f2, 8(r4)
  0x8079c26c:  lfs      f0, 0(r5)
  0x8079c270:  stfs     f4, 0xbc(r3)
  0x8079c274:  stfs     f3, 0xc0(r3)
  0x8079c278:  stfs     f2, 0xc4(r3)
  0x8079c27c:  stfs     f1, 0xc8(r3)
  0x8079c280:  stfs     f0, 0xcc(r3)
  0x8079c284:  stfs     f1, 0xd0(r3)
  0x8079c288:  stw      r0, 0x78(r3)
  0x8079c28c:  beqlr    
  0x8079c290:  lwz      r12, 0(r7)
  0x8079c294:  rlwinm   r0, r0, 0, 0xf, 0xf
  0x8079c298:  cntlzw   r0, r0
  0x8079c29c:  mr       r3, r7
  0x8079c2a0:  lwz      r12, 0xc(r12)
  0x8079c2a4:  srwi     r4, r0, 5
  0x8079c2a8:  mtctr    r12
  0x8079c2ac:  bctr     
  0x8079c2b0:  blr      
  0x8079c2b4:  stwu     r1, -0x10(r1)
  0x8079c2b8:  mflr     r0
  0x8079c2bc:  lis      r6, 0
  0x8079c2c0:  li       r9, 0
  0x8079c2c4:  stw      r0, 0x14(r1)
  0x8079c2c8:  addi     r6, r6, 0
  0x8079c2cc:  stw      r31, 0xc(r1)
  0x8079c2d0:  mr       r31, r3
  0x8079c2d4:  lfs      f2, 0x44(r3)
  0x8079c2d8:  lfs      f1, 0x48(r3)
  0x8079c2dc:  lfs      f0, 0x4c(r3)
  0x8079c2e0:  stfs     f2, 0xbc(r3)
  0x8079c2e4:  lwz      r5, 0x74(r3)
  0x8079c2e8:  stw      r9, 0x164(r3)
  0x8079c2ec:  ori      r8, r5, 0x40
  0x8079c2f0:  lwz      r0, 4(r3)
  0x8079c2f4:  stfs     f1, 0xc0(r3)
  0x8079c2f8:  mulli    r5, r0, 0x74
  0x8079c2fc:  lwz      r0, 4(r3)
  0x8079c300:  stfs     f0, 0xc4(r3)
  0x8079c304:  lfs      f2, 0x68(r3)
  0x8079c308:  lfs      f0, 0x88(r4)
  0x8079c30c:  add      r7, r6, r5
  0x8079c310:  stfs     f0, 0x50(r3)
  0x8079c314:  mulli    r0, r0, 0x74
  0x8079c318:  lwz      r5, 0xa4(r3)
  0x8079c31c:  lfs      f0, 0x8c(r4)
  0x8079c320:  stfs     f0, 0x54(r3)
  0x8079c324:  add      r6, r6, r0
  0x8079c328:  lfs      f0, 0x90(r4)
  0x8079c32c:  stfs     f0, 0x58(r3)
  0x8079c330:  stw      r8, 0x74(r3)
