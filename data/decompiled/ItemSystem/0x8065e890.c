/**
 * ITEMHandler_construct
 * @addr 0x8065e890
 * @size 572 bytes
 * @frame 64 bytes
 * @calls 5 function(s)
 */
void ITEMHandler_construct(void) {
    /* r1+0x14 = r0 */
    /* r1+0xc = r31 */
    /* r31, 0  (load upper immediate) */
    /* r3 = r31+0x0 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x8065e8bc */
    /* li r4, 1 */
    /* 0x8065f120() */
    /* li r0, 0 */
    /* r31+0x0 = r0 */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8065e890: 7c 08 02 a6              mflr     r0 */
/* 0x8065e894: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8065e898: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8065e89c: 3f e0 00 00              lis      r31, 0 */
/* 0x8065e8a0: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x8065e8a4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8065e8a8: 41 82 00 14              beq      0x8065e8bc */
/* 0x8065e8ac: 38 80 00 01              li       r4, 1 */
/* 0x8065e8b0: 48 00 08 71              bl       0x8065f120 */
/* 0x8065e8b4: 38 00 00 00              li       r0, 0 */
/* 0x8065e8b8: 90 1f 00 00              stw      r0, 0(r31) */
/* 0x8065e8bc: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8065e8c0: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8065e8c4: 7c 08 03 a6              mtlr     r0 */
/* 0x8065e8c8: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8065e8cc: 4e 80 00 20              blr       */
/* 0x8065e8d0: 94 21 ff c0              stwu     r1, -0x40(r1) */
/* 0x8065e8d4: 7c 08 02 a6              mflr     r0 */
/* 0x8065e8d8: 3c 80 00 00              lis      r4, 0 */
/* 0x8065e8dc: 90 01 00 44              stw      r0, 0x44(r1) */
/* 0x8065e8e0: be 61 00 0c              stmw     r19, 0xc(r1) */
/* 0x8065e8e4: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8065e8e8: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x8065e8ec: 4b ff aa 35              bl       0x80659320 */
/* 0x8065e8f0: 7f f4 fb 78              mr       r20, r31 */
/* 0x8065e8f4: 3a 7f 00 18              addi     r19, r31, 0x18 */
/* 0x8065e8f8: 3b a0 00 00              li       r29, 0 */
/* 0x8065e8fc: 3b 80 00 30              li       r28, 0x30 */
/* 0x8065e900: 3b 60 00 24              li       r27, 0x24 */
/* 0x8065e904: 3b 40 00 43              li       r26, 0x43 */
/* 0x8065e908: 3b 20 00 00              li       r25, 0 */
/* 0x8065e90c: 7e 63 9b 78              mr       r3, r19 */
/* 0x8065e910: 38 80 00 00              li       r4, 0 */
/* 0x8065e914: 38 a0 00 04              li       r5, 4 */
/* 0x8065e918: 4b ef 72 e1              bl       0x80555bf8 */
/* 0x8065e91c: 9b 94 00 1c              stb      r28, 0x1c(r20) */
/* 0x8065e920: 3b bd 00 01              addi     r29, r29, 1 */
/* 0x8065e924: 28 1d 00 02              cmplwi   r29, 2 */
/* 0x8065e928: 3a 73 00 08              addi     r19, r19, 8 */
/* 0x8065e92c: 9b 74 00 1d              stb      r27, 0x1d(r20) */
/* 0x8065e930: 9b 54 00 1e              stb      r26, 0x1e(r20) */
/* 0x8065e934: 9b 34 00 1f              stb      r25, 0x1f(r20) */
/* 0x8065e938: 3a 94 00 08              addi     r20, r20, 8 */
/* 0x8065e93c: 41 80 ff d0              blt      0x8065e90c */
/* 0x8065e940: 3b 60 00 00              li       r27, 0 */
/* 0x8065e944: 38 60 ff ff              li       r3, -1 */
/* 0x8065e948: 38 00 00 ff              li       r0, 0xff */
/* 0x8065e94c: 98 7f 00 3c              stb      r3, 0x3c(r31) */
/* 0x8065e950: 7f f3 fb 78              mr       r19, r31 */
/* 0x8065e954: 3b 80 00 00              li       r28, 0 */
/* 0x8065e958: 93 7f 00 28              stw      r27, 0x28(r31) */
/* 0x8065e95c: 3f 40 00 00              lis      r26, 0 */
/* 0x8065e960: 3f 20 00 00              lis      r25, 0 */
/* 0x8065e964: 93 7f 00 2c              stw      r27, 0x2c(r31) */
/* 0x8065e968: 9b 7f 00 3d              stb      r27, 0x3d(r31) */
/* 0x8065e96c: 9b 7f 00 3f              stb      r27, 0x3f(r31) */
/* 0x8065e970: 93 7f 00 0c              stw      r27, 0xc(r31) */
/* 0x8065e974: 93 7f 00 08              stw      r27, 8(r31) */
/* 0x8065e978: 93 7f 00 14              stw      r27, 0x14(r31) */
/* 0x8065e97c: 93 7f 00 10              stw      r27, 0x10(r31) */
/* 0x8065e980: 98 1f 00 3e              stb      r0, 0x3e(r31) */
/* 0x8065e984: 98 1f 00 30              stb      r0, 0x30(r31) */
/* 0x8065e988: 98 1f 00 31              stb      r0, 0x31(r31) */
/* 0x8065e98c: 98 1f 00 32              stb      r0, 0x32(r31) */
/* 0x8065e990: 98 1f 00 33              stb      r0, 0x33(r31) */
/* 0x8065e994: 98 1f 00 34              stb      r0, 0x34(r31) */
/* 0x8065e998: 98 1f 00 35              stb      r0, 0x35(r31) */
/* 0x8065e99c: 98 1f 00 36              stb      r0, 0x36(r31) */
/* 0x8065e9a0: 98 1f 00 37              stb      r0, 0x37(r31) */
/* 0x8065e9a4: 98 1f 00 38              stb      r0, 0x38(r31) */
/* 0x8065e9a8: 98 1f 00 39              stb      r0, 0x39(r31) */
/* 0x8065e9ac: 98 1f 00 3a              stb      r0, 0x3a(r31) */
/* 0x8065e9b0: 98 1f 00 3b              stb      r0, 0x3b(r31) */
/* 0x8065e9b4: 48 00 00 48              b        0x8065e9fc */
/* 0x8065e9b8: 7f 84 e3 78              mr       r4, r28 */
/* 0x8065e9bc: 4b ff d7 7d              bl       0x8065c138 */
/* 0x8065e9c0: 28 03 00 0b              cmplwi   r3, 0xb */
/* 0x8065e9c4: 41 81 00 28              bgt      0x8065e9ec */
/* 0x8065e9c8: 54 60 06 3e              clrlwi   r0, r3, 0x18 */
/* 0x8065e9cc: 80 7a 00 00              lwz      r3, 0(r26) */
/* 0x8065e9d0: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x8065e9d4: 7c 63 02 14              add      r3, r3, r0 */
/* 0x8065e9d8: 88 03 0c f9              lbz      r0, 0xcf9(r3) */
/* 0x8065e9dc: b0 13 00 18              sth      r0, 0x18(r19) */
/* 0x8065e9e0: a0 03 0c f0              lhz      r0, 0xcf0(r3) */
/* 0x8065e9e4: b0 13 00 1a              sth      r0, 0x1a(r19) */
/* 0x8065e9e8: 48 00 00 0c              b        0x8065e9f4 */
/* 0x8065e9ec: b3 73 00 18              sth      r27, 0x18(r19) */
/* 0x8065e9f0: b3 73 00 1a              sth      r27, 0x1a(r19) */
/* 0x8065e9f4: 3a 73 00 08              addi     r19, r19, 8 */
/* 0x8065e9f8: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x8065e9fc: 80 79 00 00              lwz      r3, 0(r25) */
/* 0x8065ea00: 80 03 29 1c              lwz      r0, 0x291c(r3) */
/* 0x8065ea04: 1c 00 00 58              mulli    r0, r0, 0x58 */
/* 0x8065ea08: 7c 83 02 14              add      r4, r3, r0 */
/* 0x8065ea0c: 88 04 00 58              lbz      r0, 0x58(r4) */
/* 0x8065ea10: 7c 1c 00 40              cmplw    r28, r0 */
/* 0x8065ea14: 41 80 ff a4              blt      0x8065e9b8 */
/* 0x8065ea18: 7f f5 fb 78              mr       r21, r31 */
/* 0x8065ea1c: 3a df 00 40              addi     r22, r31, 0x40 */
/* 0x8065ea20: 3a e0 00 00              li       r23, 0 */
/* 0x8065ea24: 3b a0 00 ff              li       r29, 0xff */
/* 0x8065ea28: 3b 20 00 30              li       r25, 0x30 */
/* 0x8065ea2c: 3b 40 00 24              li       r26, 0x24 */
/* 0x8065ea30: 3b 60 00 43              li       r27, 0x43 */
/* 0x8065ea34: 3b 80 00 00              li       r28, 0 */
/* 0x8065ea38: 3b c0 ff ff              li       r30, -1 */
/* 0x8065ea3c: 7e b3 ab 78              mr       r19, r21 */
/* 0x8065ea40: 3a 96 00 10              addi     r20, r22, 0x10 */
/* 0x8065ea44: 3b 00 00 00              li       r24, 0 */
/* 0x8065ea48: 7e 83 a3 78              mr       r3, r20 */
/* 0x8065ea4c: 38 80 00 00              li       r4, 0 */
/* 0x8065ea50: 38 a0 00 04              li       r5, 4 */
/* 0x8065ea54: 4b ef 71 a5              bl       0x80555bf8 */
/* 0x8065ea58: 9b 33 00 54              stb      r25, 0x54(r19) */
/* 0x8065ea5c: 3b 18 00 01              addi     r24, r24, 1 */
/* 0x8065ea60: 28 18 00 02              cmplwi   r24, 2 */
/* 0x8065ea64: 3a 94 00 08              addi     r20, r20, 8 */
/* 0x8065ea68: 9b 53 00 55              stb      r26, 0x55(r19) */
/* 0x8065ea6c: 9b 73 00 56              stb      r27, 0x56(r19) */
/* 0x8065ea70: 9b 93 00 57              stb      r28, 0x57(r19) */
/* 0x8065ea74: 3a 73 00 08              addi     r19, r19, 8 */
/* 0x8065ea78: 41 80 ff d0              blt      0x8065ea48 */
/* 0x8065ea7c: 9b d5 00 74              stb      r30, 0x74(r21) */
/* 0x8065ea80: 3a f7 00 01              addi     r23, r23, 1 */
/* 0x8065ea84: 28 17 00 0c              cmplwi   r23, 0xc */
/* 0x8065ea88: 3a d6 00 38              addi     r22, r22, 0x38 */
/* 0x8065ea8c: 93 95 00 60              stw      r28, 0x60(r21) */
/* 0x8065ea90: 93 95 00 64              stw      r28, 0x64(r21) */
/* 0x8065ea94: 9b 95 00 75              stb      r28, 0x75(r21) */
/* 0x8065ea98: 9b b5 00 76              stb      r29, 0x76(r21) */
/* 0x8065ea9c: 9b 95 00 77              stb      r28, 0x77(r21) */
/* 0x8065eaa0: 93 95 00 44              stw      r28, 0x44(r21) */
/* 0x8065eaa4: 93 95 00 40              stw      r28, 0x40(r21) */
/* 0x8065eaa8: 93 95 00 4c              stw      r28, 0x4c(r21) */
/* 0x8065eaac: 93 95 00 48              stw      r28, 0x48(r21) */
/* 0x8065eab0: 9b b5 00 68              stb      r29, 0x68(r21) */
/* 0x8065eab4: 9b b5 00 69              stb      r29, 0x69(r21) */
/* 0x8065eab8: 9b b5 00 6a              stb      r29, 0x6a(r21) */
/* 0x8065eabc: 9b b5 00 6b              stb      r29, 0x6b(r21) */
/* 0x8065eac0: 9b b5 00 6c              stb      r29, 0x6c(r21) */
/* 0x8065eac4: 9b b5 00 6d              stb      r29, 0x6d(r21) */
/* 0x8065eac8: 9b b5 00 6e              stb      r29, 0x6e(r21) */
#endif


/* === DISASSEMBLY === */

; Function: ITEMHandler_construct
; Demangled: ITEMHandler_construct
; Address: 0x8065e890  (.text+0x14bff4)
; Size: 572 bytes

  0x8065e890:  mflr     r0
  0x8065e894:  stw      r0, 0x14(r1)
  0x8065e898:  stw      r31, 0xc(r1)
  0x8065e89c:  lis      r31, 0
  0x8065e8a0:  lwz      r3, 0(r31)
  0x8065e8a4:  cmpwi    r3, 0
  0x8065e8a8:  beq      0x8065e8bc
  0x8065e8ac:  li       r4, 1
  0x8065e8b0:  bl       0x8065f120
  0x8065e8b4:  li       r0, 0
  0x8065e8b8:  stw      r0, 0(r31)
  0x8065e8bc:  lwz      r0, 0x14(r1)
  0x8065e8c0:  lwz      r31, 0xc(r1)
  0x8065e8c4:  mtlr     r0
  0x8065e8c8:  addi     r1, r1, 0x10
  0x8065e8cc:  blr      
  0x8065e8d0:  stwu     r1, -0x40(r1)
  0x8065e8d4:  mflr     r0
  0x8065e8d8:  lis      r4, 0
  0x8065e8dc:  stw      r0, 0x44(r1)
  0x8065e8e0:  stmw     r19, 0xc(r1)
  0x8065e8e4:  mr       r31, r3
  0x8065e8e8:  lwz      r3, 0(r4)
  0x8065e8ec:  bl       0x80659320
  0x8065e8f0:  mr       r20, r31
  0x8065e8f4:  addi     r19, r31, 0x18
  0x8065e8f8:  li       r29, 0
  0x8065e8fc:  li       r28, 0x30
  0x8065e900:  li       r27, 0x24
  0x8065e904:  li       r26, 0x43
  0x8065e908:  li       r25, 0
  0x8065e90c:  mr       r3, r19
  0x8065e910:  li       r4, 0
  0x8065e914:  li       r5, 4
  0x8065e918:  bl       0x80555bf8
  0x8065e91c:  stb      r28, 0x1c(r20)
  0x8065e920:  addi     r29, r29, 1
  0x8065e924:  cmplwi   r29, 2
  0x8065e928:  addi     r19, r19, 8
  0x8065e92c:  stb      r27, 0x1d(r20)
  0x8065e930:  stb      r26, 0x1e(r20)
  0x8065e934:  stb      r25, 0x1f(r20)
  0x8065e938:  addi     r20, r20, 8
  0x8065e93c:  blt      0x8065e90c
  0x8065e940:  li       r27, 0
  0x8065e944:  li       r3, -1
  0x8065e948:  li       r0, 0xff
  0x8065e94c:  stb      r3, 0x3c(r31)
  0x8065e950:  mr       r19, r31
  0x8065e954:  li       r28, 0
  0x8065e958:  stw      r27, 0x28(r31)
  0x8065e95c:  lis      r26, 0
  0x8065e960:  lis      r25, 0
  0x8065e964:  stw      r27, 0x2c(r31)
  0x8065e968:  stb      r27, 0x3d(r31)
  0x8065e96c:  stb      r27, 0x3f(r31)
  0x8065e970:  stw      r27, 0xc(r31)
  0x8065e974:  stw      r27, 8(r31)
  0x8065e978:  stw      r27, 0x14(r31)
  0x8065e97c:  stw      r27, 0x10(r31)
  0x8065e980:  stb      r0, 0x3e(r31)
  0x8065e984:  stb      r0, 0x30(r31)
  0x8065e988:  stb      r0, 0x31(r31)
  0x8065e98c:  stb      r0, 0x32(r31)
  0x8065e990:  stb      r0, 0x33(r31)
  0x8065e994:  stb      r0, 0x34(r31)
  0x8065e998:  stb      r0, 0x35(r31)
  0x8065e99c:  stb      r0, 0x36(r31)
  0x8065e9a0:  stb      r0, 0x37(r31)
  0x8065e9a4:  stb      r0, 0x38(r31)
  0x8065e9a8:  stb      r0, 0x39(r31)
  0x8065e9ac:  stb      r0, 0x3a(r31)
  0x8065e9b0:  stb      r0, 0x3b(r31)
  0x8065e9b4:  b        0x8065e9fc
  0x8065e9b8:  mr       r4, r28
  0x8065e9bc:  bl       0x8065c138
  0x8065e9c0:  cmplwi   r3, 0xb
  0x8065e9c4:  bgt      0x8065e9ec
  0x8065e9c8:  clrlwi   r0, r3, 0x18
  0x8065e9cc:  lwz      r3, 0(r26)
  0x8065e9d0:  mulli    r0, r0, 0xf0
  0x8065e9d4:  add      r3, r3, r0
  0x8065e9d8:  lbz      r0, 0xcf9(r3)
  0x8065e9dc:  sth      r0, 0x18(r19)
  0x8065e9e0:  lhz      r0, 0xcf0(r3)
  0x8065e9e4:  sth      r0, 0x1a(r19)
  0x8065e9e8:  b        0x8065e9f4
  0x8065e9ec:  sth      r27, 0x18(r19)
  0x8065e9f0:  sth      r27, 0x1a(r19)
  0x8065e9f4:  addi     r19, r19, 8
  0x8065e9f8:  addi     r28, r28, 1
  0x8065e9fc:  lwz      r3, 0(r25)
  0x8065ea00:  lwz      r0, 0x291c(r3)
  0x8065ea04:  mulli    r0, r0, 0x58
  0x8065ea08:  add      r4, r3, r0
  0x8065ea0c:  lbz      r0, 0x58(r4)
  0x8065ea10:  cmplw    r28, r0
  0x8065ea14:  blt      0x8065e9b8
  0x8065ea18:  mr       r21, r31
  0x8065ea1c:  addi     r22, r31, 0x40
  0x8065ea20:  li       r23, 0
  0x8065ea24:  li       r29, 0xff
  0x8065ea28:  li       r25, 0x30
  0x8065ea2c:  li       r26, 0x24
  0x8065ea30:  li       r27, 0x43
  0x8065ea34:  li       r28, 0
  0x8065ea38:  li       r30, -1
  0x8065ea3c:  mr       r19, r21
  0x8065ea40:  addi     r20, r22, 0x10
  0x8065ea44:  li       r24, 0
  0x8065ea48:  mr       r3, r20
  0x8065ea4c:  li       r4, 0
  0x8065ea50:  li       r5, 4
  0x8065ea54:  bl       0x80555bf8
  0x8065ea58:  stb      r25, 0x54(r19)
  0x8065ea5c:  addi     r24, r24, 1
  0x8065ea60:  cmplwi   r24, 2
  0x8065ea64:  addi     r20, r20, 8
  0x8065ea68:  stb      r26, 0x55(r19)
  0x8065ea6c:  stb      r27, 0x56(r19)
  0x8065ea70:  stb      r28, 0x57(r19)
  0x8065ea74:  addi     r19, r19, 8
  0x8065ea78:  blt      0x8065ea48
  0x8065ea7c:  stb      r30, 0x74(r21)
  0x8065ea80:  addi     r23, r23, 1
  0x8065ea84:  cmplwi   r23, 0xc
  0x8065ea88:  addi     r22, r22, 0x38
  0x8065ea8c:  stw      r28, 0x60(r21)
  0x8065ea90:  stw      r28, 0x64(r21)
  0x8065ea94:  stb      r28, 0x75(r21)
  0x8065ea98:  stb      r29, 0x76(r21)
  0x8065ea9c:  stb      r28, 0x77(r21)
  0x8065eaa0:  stw      r28, 0x44(r21)
  0x8065eaa4:  stw      r28, 0x40(r21)
  0x8065eaa8:  stw      r28, 0x4c(r21)
  0x8065eaac:  stw      r28, 0x48(r21)
  0x8065eab0:  stb      r29, 0x68(r21)
  0x8065eab4:  stb      r29, 0x69(r21)
  0x8065eab8:  stb      r29, 0x6a(r21)
  0x8065eabc:  stb      r29, 0x6b(r21)
  0x8065eac0:  stb      r29, 0x6c(r21)
  0x8065eac4:  stb      r29, 0x6d(r21)
  0x8065eac8:  stb      r29, 0x6e(r21)
