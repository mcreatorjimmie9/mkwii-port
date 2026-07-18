/**
 * TimeAttackBackPage_onReady
 * @addr 0x8063b8b0
 * @size 548 bytes
 * @frame 16 bytes
 * @calls 9 function(s)
 */
void TimeAttackBackPage_onReady(void) {
    /* if (cr0 ==) goto 0x8063b8d0 */
    /* cmpwi r0, 3 */
    /* if (cr0 ==) goto 0x8063b8e0 */
    /* cmpwi r0, 4 */
    /* if (cr0 ==) goto 0x8063b8f0 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x8063b900 */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8063b8b0: 41 82 00 20              beq      0x8063b8d0 */
/* 0x8063b8b4: 2c 00 00 03              cmpwi    r0, 3 */
/* 0x8063b8b8: 41 82 00 28              beq      0x8063b8e0 */
/* 0x8063b8bc: 2c 00 00 04              cmpwi    r0, 4 */
/* 0x8063b8c0: 41 82 00 30              beq      0x8063b8f0 */
/* 0x8063b8c4: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x8063b8c8: 41 82 00 38              beq      0x8063b900 */
/* 0x8063b8cc: 4e 80 00 20              blr       */
/* 0x8063b8d0: 38 80 08 49              li       r4, 0x849 */
/* 0x8063b8d4: 38 a0 00 00              li       r5, 0 */
/* 0x8063b8d8: 38 63 0f 28              addi     r3, r3, 0xf28 */
/* 0x8063b8dc: 48 20 c8 ec              b        0x808481c8 */
/* 0x8063b8e0: 38 80 08 4a              li       r4, 0x84a */
/* 0x8063b8e4: 38 a0 00 00              li       r5, 0 */
/* 0x8063b8e8: 38 63 0f 28              addi     r3, r3, 0xf28 */
/* 0x8063b8ec: 48 20 c8 dc              b        0x808481c8 */
/* 0x8063b8f0: 38 80 08 50              li       r4, 0x850 */
/* 0x8063b8f4: 38 a0 00 00              li       r5, 0 */
/* 0x8063b8f8: 38 63 0f 28              addi     r3, r3, 0xf28 */
/* 0x8063b8fc: 48 20 c8 cc              b        0x808481c8 */
/* 0x8063b900: 38 80 00 00              li       r4, 0 */
/* 0x8063b904: 38 a0 00 00              li       r5, 0 */
/* 0x8063b908: 38 63 0f 28              addi     r3, r3, 0xf28 */
/* 0x8063b90c: 48 20 c8 bc              b        0x808481c8 */
/* 0x8063b910: 4e 80 00 20              blr       */
/* 0x8063b914: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8063b918: 3c 80 00 00              lis      r4, 0 */
/* 0x8063b91c: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x8063b920: 38 80 00 41              li       r4, 0x41 */
/* 0x8063b924: 81 8c 00 1c              lwz      r12, 0x1c(r12) */
/* 0x8063b928: 38 a0 00 01              li       r5, 1 */
/* 0x8063b92c: 7d 89 03 a6              mtctr    r12 */
/* 0x8063b930: 4e 80 04 20              bctr      */
/* 0x8063b934: 94 21 ff b0              stwu     r1, -0x50(r1) */
/* 0x8063b938: 7c 08 02 a6              mflr     r0 */
/* 0x8063b93c: 90 01 00 54              stw      r0, 0x54(r1) */
/* 0x8063b940: 39 61 00 50              addi     r11, r1, 0x50 */
/* 0x8063b944: 4b f1 a2 b5              bl       0x80555bf8 */
/* 0x8063b948: 3f e0 00 00              lis      r31, 0 */
/* 0x8063b94c: 7c 7e 1b 78              mr       r30, r3 */
/* 0x8063b950: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x8063b954: 4b fa 7f b1              bl       0x805e3904 */
/* 0x8063b958: 3c 60 00 00              lis      r3, 0 */
/* 0x8063b95c: 3d 20 00 00              lis      r9, 0 */
/* 0x8063b960: 38 63 00 00              addi     r3, r3, 0 */
/* 0x8063b964: 90 7e 00 00              stw      r3, 0(r30) */
/* 0x8063b968: 38 7f 00 cc              addi     r3, r31, 0xcc */
/* 0x8063b96c: 3c c0 00 00              lis      r6, 0 */
/* 0x8063b970: 83 5f 00 cc              lwz      r26, 0xcc(r31) */
/* 0x8063b974: 3c 80 00 00              lis      r4, 0 */
/* 0x8063b978: 83 63 00 04              lwz      r27, 4(r3) */
/* 0x8063b97c: 39 29 00 00              addi     r9, r9, 0 */
/* 0x8063b980: 83 83 00 08              lwz      r28, 8(r3) */
/* 0x8063b984: 39 1f 00 d8              addi     r8, r31, 0xd8 */
/* 0x8063b988: 93 9e 00 54              stw      r28, 0x54(r30) */
/* 0x8063b98c: 38 ff 00 e4              addi     r7, r31, 0xe4 */
/* 0x8063b990: 38 c6 00 00              addi     r6, r6, 0 */
/* 0x8063b994: 38 bf 00 f0              addi     r5, r31, 0xf0 */
/* 0x8063b998: 91 3e 00 44              stw      r9, 0x44(r30) */
/* 0x8063b99c: 38 84 00 00              addi     r4, r4, 0 */
/* 0x8063b9a0: 38 7e 00 94              addi     r3, r30, 0x94 */
/* 0x8063b9a4: 93 de 00 48              stw      r30, 0x48(r30) */
/* 0x8063b9a8: 93 5e 00 4c              stw      r26, 0x4c(r30) */
/* 0x8063b9ac: 93 7e 00 50              stw      r27, 0x50(r30) */
/* 0x8063b9b0: 83 bf 00 d8              lwz      r29, 0xd8(r31) */
/* 0x8063b9b4: 81 88 00 04              lwz      r12, 4(r8) */
/* 0x8063b9b8: 81 68 00 08              lwz      r11, 8(r8) */
/* 0x8063b9bc: 91 7e 00 68              stw      r11, 0x68(r30) */
/* 0x8063b9c0: 91 3e 00 58              stw      r9, 0x58(r30) */
/* 0x8063b9c4: 93 de 00 5c              stw      r30, 0x5c(r30) */
/* 0x8063b9c8: 93 be 00 60              stw      r29, 0x60(r30) */
/* 0x8063b9cc: 91 9e 00 64              stw      r12, 0x64(r30) */
/* 0x8063b9d0: 81 5f 00 e4              lwz      r10, 0xe4(r31) */
/* 0x8063b9d4: 81 27 00 04              lwz      r9, 4(r7) */
/* 0x8063b9d8: 81 07 00 08              lwz      r8, 8(r7) */
/* 0x8063b9dc: 91 1e 00 7c              stw      r8, 0x7c(r30) */
/* 0x8063b9e0: 90 de 00 6c              stw      r6, 0x6c(r30) */
/* 0x8063b9e4: 93 de 00 70              stw      r30, 0x70(r30) */
/* 0x8063b9e8: 91 5e 00 74              stw      r10, 0x74(r30) */
/* 0x8063b9ec: 91 3e 00 78              stw      r9, 0x78(r30) */
/* 0x8063b9f0: 80 ff 00 f0              lwz      r7, 0xf0(r31) */
/* 0x8063b9f4: 80 c5 00 04              lwz      r6, 4(r5) */
/* 0x8063b9f8: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x8063b9fc: 93 41 00 2c              stw      r26, 0x2c(r1) */
/* 0x8063ba00: 93 61 00 30              stw      r27, 0x30(r1) */
/* 0x8063ba04: 93 81 00 34              stw      r28, 0x34(r1) */
/* 0x8063ba08: 93 a1 00 20              stw      r29, 0x20(r1) */
/* 0x8063ba0c: 91 81 00 24              stw      r12, 0x24(r1) */
/* 0x8063ba10: 91 61 00 28              stw      r11, 0x28(r1) */
/* 0x8063ba14: 91 41 00 14              stw      r10, 0x14(r1) */
/* 0x8063ba18: 91 21 00 18              stw      r9, 0x18(r1) */
/* 0x8063ba1c: 91 01 00 1c              stw      r8, 0x1c(r1) */
/* 0x8063ba20: 90 e1 00 08              stw      r7, 8(r1) */
/* 0x8063ba24: 90 c1 00 0c              stw      r6, 0xc(r1) */
/* 0x8063ba28: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x8063ba2c: 90 9e 00 80              stw      r4, 0x80(r30) */
/* 0x8063ba30: 93 de 00 84              stw      r30, 0x84(r30) */
/* 0x8063ba34: 90 fe 00 88              stw      r7, 0x88(r30) */
/* 0x8063ba38: 90 de 00 8c              stw      r6, 0x8c(r30) */
/* 0x8063ba3c: 90 1e 00 90              stw      r0, 0x90(r30) */
/* 0x8063ba40: 4b fa 0c fd              bl       0x805dc73c */
/* 0x8063ba44: 3b 5e 02 b8              addi     r26, r30, 0x2b8 */
/* 0x8063ba48: 7f 43 d3 78              mr       r3, r26 */
/* 0x8063ba4c: 4b fd 71 95              bl       0x80612be0 */
/* 0x8063ba50: 3c 80 00 00              lis      r4, 0 */
/* 0x8063ba54: 38 7e 04 2c              addi     r3, r30, 0x42c */
/* 0x8063ba58: 38 84 00 00              addi     r4, r4, 0 */
/* 0x8063ba5c: 90 9a 00 00              stw      r4, 0(r26) */
/* 0x8063ba60: 4b fa 3c 25              bl       0x805df684 */
/* 0x8063ba64: 38 7e 05 a0              addi     r3, r30, 0x5a0 */
/* 0x8063ba68: 4b f8 05 05              bl       0x805bbf6c */
/* 0x8063ba6c: 38 7e 07 f4              addi     r3, r30, 0x7f4 */
/* 0x8063ba70: 4b f8 04 fd              bl       0x805bbf6c */
/* 0x8063ba74: 3b 5e 0a 48              addi     r26, r30, 0xa48 */
/* 0x8063ba78: 7f 43 d3 78              mr       r3, r26 */
/* 0x8063ba7c: 4b f8 04 f1              bl       0x805bbf6c */
/* 0x8063ba80: 3c 60 00 00              lis      r3, 0 */
/* 0x8063ba84: 3c a0 00 00              lis      r5, 0 */
/* 0x8063ba88: c0 03 00 00              lfs      f0, 0(r3) */
/* 0x8063ba8c: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x8063ba90: 38 80 07 d1              li       r4, 0x7d1 */
/* 0x8063ba94: 38 00 00 00              li       r0, 0 */
/* 0x8063ba98: 90 ba 00 00              stw      r5, 0(r26) */
/* 0x8063ba9c: 39 61 00 50              addi     r11, r1, 0x50 */
/* 0x8063baa0: 7f c3 f3 78              mr       r3, r30 */
/* 0x8063baa4: 90 9a 02 54              stw      r4, 0x254(r26) */
/* 0x8063baa8: 90 1a 02 58              stw      r0, 0x258(r26) */
/* 0x8063baac: d0 1a 02 5c              stfs     f0, 0x25c(r26) */
/* 0x8063bab0: 4b f1 a1 49              bl       0x80555bf8 */
/* 0x8063bab4: 80 01 00 54              lwz      r0, 0x54(r1) */
/* 0x8063bab8: 7c 08 03 a6              mtlr     r0 */
/* 0x8063babc: 38 21 00 50              addi     r1, r1, 0x50 */
/* 0x8063bac0: 4e 80 00 20              blr       */
/* 0x8063bac4: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063bac8: 7c 08 02 a6              mflr     r0 */
/* 0x8063bacc: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8063bad0: 90 01 00 14              stw      r0, 0x14(r1) */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackBackPage_onReady
; Demangled: TimeAttackBackPage_onReady
; Address: 0x8063b8b0  (.text+0x129014)
; Size: 548 bytes

  0x8063b8b0:  beq      0x8063b8d0
  0x8063b8b4:  cmpwi    r0, 3
  0x8063b8b8:  beq      0x8063b8e0
  0x8063b8bc:  cmpwi    r0, 4
  0x8063b8c0:  beq      0x8063b8f0
  0x8063b8c4:  cmpwi    r0, 5
  0x8063b8c8:  beq      0x8063b900
  0x8063b8cc:  blr      
  0x8063b8d0:  li       r4, 0x849
  0x8063b8d4:  li       r5, 0
  0x8063b8d8:  addi     r3, r3, 0xf28
  0x8063b8dc:  b        0x808481c8
  0x8063b8e0:  li       r4, 0x84a
  0x8063b8e4:  li       r5, 0
  0x8063b8e8:  addi     r3, r3, 0xf28
  0x8063b8ec:  b        0x808481c8
  0x8063b8f0:  li       r4, 0x850
  0x8063b8f4:  li       r5, 0
  0x8063b8f8:  addi     r3, r3, 0xf28
  0x8063b8fc:  b        0x808481c8
  0x8063b900:  li       r4, 0
  0x8063b904:  li       r5, 0
  0x8063b908:  addi     r3, r3, 0xf28
  0x8063b90c:  b        0x808481c8
  0x8063b910:  blr      
  0x8063b914:  lwz      r12, 0(r3)
  0x8063b918:  lis      r4, 0
  0x8063b91c:  lfs      f1, 0(r4)
  0x8063b920:  li       r4, 0x41
  0x8063b924:  lwz      r12, 0x1c(r12)
  0x8063b928:  li       r5, 1
  0x8063b92c:  mtctr    r12
  0x8063b930:  bctr     
  0x8063b934:  stwu     r1, -0x50(r1)
  0x8063b938:  mflr     r0
  0x8063b93c:  stw      r0, 0x54(r1)
  0x8063b940:  addi     r11, r1, 0x50
  0x8063b944:  bl       0x80555bf8
  0x8063b948:  lis      r31, 0
  0x8063b94c:  mr       r30, r3
  0x8063b950:  addi     r31, r31, 0
  0x8063b954:  bl       0x805e3904
  0x8063b958:  lis      r3, 0
  0x8063b95c:  lis      r9, 0
  0x8063b960:  addi     r3, r3, 0
  0x8063b964:  stw      r3, 0(r30)
  0x8063b968:  addi     r3, r31, 0xcc
  0x8063b96c:  lis      r6, 0
  0x8063b970:  lwz      r26, 0xcc(r31)
  0x8063b974:  lis      r4, 0
  0x8063b978:  lwz      r27, 4(r3)
  0x8063b97c:  addi     r9, r9, 0
  0x8063b980:  lwz      r28, 8(r3)
  0x8063b984:  addi     r8, r31, 0xd8
  0x8063b988:  stw      r28, 0x54(r30)
  0x8063b98c:  addi     r7, r31, 0xe4
  0x8063b990:  addi     r6, r6, 0
  0x8063b994:  addi     r5, r31, 0xf0
  0x8063b998:  stw      r9, 0x44(r30)
  0x8063b99c:  addi     r4, r4, 0
  0x8063b9a0:  addi     r3, r30, 0x94
  0x8063b9a4:  stw      r30, 0x48(r30)
  0x8063b9a8:  stw      r26, 0x4c(r30)
  0x8063b9ac:  stw      r27, 0x50(r30)
  0x8063b9b0:  lwz      r29, 0xd8(r31)
  0x8063b9b4:  lwz      r12, 4(r8)
  0x8063b9b8:  lwz      r11, 8(r8)
  0x8063b9bc:  stw      r11, 0x68(r30)
  0x8063b9c0:  stw      r9, 0x58(r30)
  0x8063b9c4:  stw      r30, 0x5c(r30)
  0x8063b9c8:  stw      r29, 0x60(r30)
  0x8063b9cc:  stw      r12, 0x64(r30)
  0x8063b9d0:  lwz      r10, 0xe4(r31)
  0x8063b9d4:  lwz      r9, 4(r7)
  0x8063b9d8:  lwz      r8, 8(r7)
  0x8063b9dc:  stw      r8, 0x7c(r30)
  0x8063b9e0:  stw      r6, 0x6c(r30)
  0x8063b9e4:  stw      r30, 0x70(r30)
  0x8063b9e8:  stw      r10, 0x74(r30)
  0x8063b9ec:  stw      r9, 0x78(r30)
  0x8063b9f0:  lwz      r7, 0xf0(r31)
  0x8063b9f4:  lwz      r6, 4(r5)
  0x8063b9f8:  lwz      r0, 8(r5)
  0x8063b9fc:  stw      r26, 0x2c(r1)
  0x8063ba00:  stw      r27, 0x30(r1)
  0x8063ba04:  stw      r28, 0x34(r1)
  0x8063ba08:  stw      r29, 0x20(r1)
  0x8063ba0c:  stw      r12, 0x24(r1)
  0x8063ba10:  stw      r11, 0x28(r1)
  0x8063ba14:  stw      r10, 0x14(r1)
  0x8063ba18:  stw      r9, 0x18(r1)
  0x8063ba1c:  stw      r8, 0x1c(r1)
  0x8063ba20:  stw      r7, 8(r1)
  0x8063ba24:  stw      r6, 0xc(r1)
  0x8063ba28:  stw      r0, 0x10(r1)
  0x8063ba2c:  stw      r4, 0x80(r30)
  0x8063ba30:  stw      r30, 0x84(r30)
  0x8063ba34:  stw      r7, 0x88(r30)
  0x8063ba38:  stw      r6, 0x8c(r30)
  0x8063ba3c:  stw      r0, 0x90(r30)
  0x8063ba40:  bl       0x805dc73c
  0x8063ba44:  addi     r26, r30, 0x2b8
  0x8063ba48:  mr       r3, r26
  0x8063ba4c:  bl       0x80612be0
  0x8063ba50:  lis      r4, 0
  0x8063ba54:  addi     r3, r30, 0x42c
  0x8063ba58:  addi     r4, r4, 0
  0x8063ba5c:  stw      r4, 0(r26)
  0x8063ba60:  bl       0x805df684
  0x8063ba64:  addi     r3, r30, 0x5a0
  0x8063ba68:  bl       0x805bbf6c
  0x8063ba6c:  addi     r3, r30, 0x7f4
  0x8063ba70:  bl       0x805bbf6c
  0x8063ba74:  addi     r26, r30, 0xa48
  0x8063ba78:  mr       r3, r26
  0x8063ba7c:  bl       0x805bbf6c
  0x8063ba80:  lis      r3, 0
  0x8063ba84:  lis      r5, 0
  0x8063ba88:  lfs      f0, 0(r3)
  0x8063ba8c:  addi     r5, r5, 0
  0x8063ba90:  li       r4, 0x7d1
  0x8063ba94:  li       r0, 0
  0x8063ba98:  stw      r5, 0(r26)
  0x8063ba9c:  addi     r11, r1, 0x50
  0x8063baa0:  mr       r3, r30
  0x8063baa4:  stw      r4, 0x254(r26)
  0x8063baa8:  stw      r0, 0x258(r26)
  0x8063baac:  stfs     f0, 0x25c(r26)
  0x8063bab0:  bl       0x80555bf8
  0x8063bab4:  lwz      r0, 0x54(r1)
  0x8063bab8:  mtlr     r0
  0x8063babc:  addi     r1, r1, 0x50
  0x8063bac0:  blr      
  0x8063bac4:  stwu     r1, -0x10(r1)
  0x8063bac8:  mflr     r0
  0x8063bacc:  cmpwi    r3, 0
  0x8063bad0:  stw      r0, 0x14(r1)
