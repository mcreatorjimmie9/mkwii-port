/**
 * initControllers__System10RaceConfig8ScenarioFUc
 * @addr 0x805319d0
 * @size 672 bytes
 * @frame 32 bytes
 * @calls 8 function(s)
 */
void System10RaceConfig8Scenario(void) {
    /* if (cr0 <) goto 0x805319e0 */
    /* cmpwi r4, 0xa */
    /* if (cr0 >) goto 0x805319e0 */
    /* li r0, 1 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80531b1c */
    /* cmpwi r3, 0 */
    /* li r4, 0 */
    /* if (cr0 ==) goto 0x80531b1c */
    /* cmplwi r3, 8 */
    /* addi r0, r3, 0xf8 */
    /* if (cr0 <=) goto 0x80531ae8 */
    /* clrlwi r5, r0, 0x18 */
    /* li r11, 0 */
    /* addi r0, r5, 7 */
    /* srwi r0, r0, 3 */
    /* mtctr r0 */
    /* cmplwi r5, 0 */
    /* if (cr0 <=) goto 0x80531ae8 */
    /* clrlwi r7, r4, 0x18 */
    /* addi r5, r4, 1 */
    /* mulli r6, r7, 0xf0 */
    /* addi r0, r4, 2 */
    /* clrlwi r10, r5, 0x18 */
    /* clrlwi r9, r0, 0x18 */
    /* add r12, r29, r6 */
    /* addi r0, r4, 3 */
    /* sth r11, 0xe0(r12) */
    /* clrlwi r8, r0, 0x18 */
    /* subf r28, r7, r3 */
    /* addi r0, r4, 4 */
    /* stb r28, 0xe9(r12) */
    /* clrlwi r7, r0, 0x18 */
    /* addi r6, r4, 5 */
    /* addi r5, r4, 6 */
    /* stb r28, 0xe8(r12) */
    /* addi r0, r4, 7 */
    /* clrlwi r6, r6, 0x18 */
    /* clrlwi r5, r5, 0x18 */
    /* sth r11, 0x1d0(r12) */
    /* subf r10, r10, r3 */
    /* clrlwi r0, r0, 0x18 */
    /* subf r9, r9, r3 */
    /* stb r10, 0x1d9(r12) */
    /* subf r8, r8, r3 */
    /* subf r7, r7, r3 */
    /* subf r6, r6, r3 */
    /* stb r10, 0x1d8(r12) */
    /* subf r5, r5, r3 */
    /* subf r0, r0, r3 */
    /* addi r4, r4, 8 */
    /* sth r11, 0x2c0(r12) */
    /* stb r9, 0x2c9(r12) */
    /* stb r9, 0x2c8(r12) */
    /* sth r11, 0x3b0(r12) */
    /* stb r8, 0x3b9(r12) */
    /* stb r8, 0x3b8(r12) */
    /* sth r11, 0x4a0(r12) */
    /* stb r7, 0x4a9(r12) */
    /* stb r7, 0x4a8(r12) */
    /* sth r11, 0x590(r12) */
    /* stb r6, 0x599(r12) */
    /* stb r6, 0x598(r12) */
    /* sth r11, 0x680(r12) */
    /* stb r5, 0x689(r12) */
    /* stb r5, 0x688(r12) */
    /* sth r11, 0x770(r12) */
    /* stb r0, 0x779(r12) */
    /* stb r0, 0x778(r12) */
    /* bdnz 0x80531a1c */
    /* li r5, 0 */
    /* goto 0x80531b10 */
    /* clrlwi r6, r4, 0x18 */
    /* addi r4, r4, 1 */
    /* mulli r0, r6, 0xf0 */
    /* subf r7, r6, r3 */
    /* add r6, r29, r0 */
    /* sth r5, 0xe0(r6) */
    /* stb r7, 0xe9(r6) */
    /* stb r7, 0xe8(r6) */
    /* clrlwi r0, r4, 0x18 */
    /* cmplw r0, r3 */
    /* if (cr0 <) goto 0x80531af0 */
    /* r4 = stack[0x9] */
    /* r3 = r29 */
    /* 0x80531208() */
    /* r3 = r29 */
    /* r4 = r30 */
    /* 0x80530a48() */
    /* r3 = r29 */
    /* 0x80531644() */
    /* r0 = stack[0xa] */
    /* stb r0, 4(r29) */
    /* r0 = stack[0x9] */
    /* stb r0, 5(r29) */
    /* stb r31, 7(r29) */
    /* r0 = stack[0x8] */
    /* stb r0, 6(r29) */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* r28 = stack[0x10] */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805319d0: 41 80 00 10              blt      0x805319e0 */
/* 0x805319d4: 2c 04 00 0a              cmpwi    r4, 0xa */
/* 0x805319d8: 41 81 00 08              bgt      0x805319e0 */
/* 0x805319dc: 38 00 00 01              li       r0, 1 */
/* 0x805319e0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805319e4: 40 82 01 38              bne      0x80531b1c */
/* 0x805319e8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805319ec: 38 80 00 00              li       r4, 0 */
/* 0x805319f0: 41 82 01 2c              beq      0x80531b1c */
/* 0x805319f4: 28 03 00 08              cmplwi   r3, 8 */
/* 0x805319f8: 38 03 00 f8              addi     r0, r3, 0xf8 */
/* 0x805319fc: 40 81 00 ec              ble      0x80531ae8 */
/* 0x80531a00: 54 05 06 3e              clrlwi   r5, r0, 0x18 */
/* 0x80531a04: 39 60 00 00              li       r11, 0 */
/* 0x80531a08: 38 05 00 07              addi     r0, r5, 7 */
/* 0x80531a0c: 54 00 e8 fe              srwi     r0, r0, 3 */
/* 0x80531a10: 7c 09 03 a6              mtctr    r0 */
/* 0x80531a14: 28 05 00 00              cmplwi   r5, 0 */
/* 0x80531a18: 40 81 00 d0              ble      0x80531ae8 */
/* 0x80531a1c: 54 87 06 3e              clrlwi   r7, r4, 0x18 */
/* 0x80531a20: 38 a4 00 01              addi     r5, r4, 1 */
/* 0x80531a24: 1c c7 00 f0              mulli    r6, r7, 0xf0 */
/* 0x80531a28: 38 04 00 02              addi     r0, r4, 2 */
/* 0x80531a2c: 54 aa 06 3e              clrlwi   r10, r5, 0x18 */
/* 0x80531a30: 54 09 06 3e              clrlwi   r9, r0, 0x18 */
/* 0x80531a34: 7d 9d 32 14              add      r12, r29, r6 */
/* 0x80531a38: 38 04 00 03              addi     r0, r4, 3 */
/* 0x80531a3c: b1 6c 00 e0              sth      r11, 0xe0(r12) */
/* 0x80531a40: 54 08 06 3e              clrlwi   r8, r0, 0x18 */
/* 0x80531a44: 7f 87 18 50              subf     r28, r7, r3 */
/* 0x80531a48: 38 04 00 04              addi     r0, r4, 4 */
/* 0x80531a4c: 9b 8c 00 e9              stb      r28, 0xe9(r12) */
/* 0x80531a50: 54 07 06 3e              clrlwi   r7, r0, 0x18 */
/* 0x80531a54: 38 c4 00 05              addi     r6, r4, 5 */
/* 0x80531a58: 38 a4 00 06              addi     r5, r4, 6 */
/* 0x80531a5c: 9b 8c 00 e8              stb      r28, 0xe8(r12) */
/* 0x80531a60: 38 04 00 07              addi     r0, r4, 7 */
/* 0x80531a64: 54 c6 06 3e              clrlwi   r6, r6, 0x18 */
/* 0x80531a68: 54 a5 06 3e              clrlwi   r5, r5, 0x18 */
/* 0x80531a6c: b1 6c 01 d0              sth      r11, 0x1d0(r12) */
/* 0x80531a70: 7d 4a 18 50              subf     r10, r10, r3 */
/* 0x80531a74: 54 00 06 3e              clrlwi   r0, r0, 0x18 */
/* 0x80531a78: 7d 29 18 50              subf     r9, r9, r3 */
/* 0x80531a7c: 99 4c 01 d9              stb      r10, 0x1d9(r12) */
/* 0x80531a80: 7d 08 18 50              subf     r8, r8, r3 */
/* 0x80531a84: 7c e7 18 50              subf     r7, r7, r3 */
/* 0x80531a88: 7c c6 18 50              subf     r6, r6, r3 */
/* 0x80531a8c: 99 4c 01 d8              stb      r10, 0x1d8(r12) */
/* 0x80531a90: 7c a5 18 50              subf     r5, r5, r3 */
/* 0x80531a94: 7c 00 18 50              subf     r0, r0, r3 */
/* 0x80531a98: 38 84 00 08              addi     r4, r4, 8 */
/* 0x80531a9c: b1 6c 02 c0              sth      r11, 0x2c0(r12) */
/* 0x80531aa0: 99 2c 02 c9              stb      r9, 0x2c9(r12) */
/* 0x80531aa4: 99 2c 02 c8              stb      r9, 0x2c8(r12) */
/* 0x80531aa8: b1 6c 03 b0              sth      r11, 0x3b0(r12) */
/* 0x80531aac: 99 0c 03 b9              stb      r8, 0x3b9(r12) */
/* 0x80531ab0: 99 0c 03 b8              stb      r8, 0x3b8(r12) */
/* 0x80531ab4: b1 6c 04 a0              sth      r11, 0x4a0(r12) */
/* 0x80531ab8: 98 ec 04 a9              stb      r7, 0x4a9(r12) */
/* 0x80531abc: 98 ec 04 a8              stb      r7, 0x4a8(r12) */
/* 0x80531ac0: b1 6c 05 90              sth      r11, 0x590(r12) */
/* 0x80531ac4: 98 cc 05 99              stb      r6, 0x599(r12) */
/* 0x80531ac8: 98 cc 05 98              stb      r6, 0x598(r12) */
/* 0x80531acc: b1 6c 06 80              sth      r11, 0x680(r12) */
/* 0x80531ad0: 98 ac 06 89              stb      r5, 0x689(r12) */
/* 0x80531ad4: 98 ac 06 88              stb      r5, 0x688(r12) */
/* 0x80531ad8: b1 6c 07 70              sth      r11, 0x770(r12) */
/* 0x80531adc: 98 0c 07 79              stb      r0, 0x779(r12) */
/* 0x80531ae0: 98 0c 07 78              stb      r0, 0x778(r12) */
/* 0x80531ae4: 42 00 ff 38              bdnz     0x80531a1c */
/* 0x80531ae8: 38 a0 00 00              li       r5, 0 */
/* 0x80531aec: 48 00 00 24              b        0x80531b10 */
/* 0x80531af0: 54 86 06 3e              clrlwi   r6, r4, 0x18 */
/* 0x80531af4: 38 84 00 01              addi     r4, r4, 1 */
/* 0x80531af8: 1c 06 00 f0              mulli    r0, r6, 0xf0 */
/* 0x80531afc: 7c e6 18 50              subf     r7, r6, r3 */
/* 0x80531b00: 7c dd 02 14              add      r6, r29, r0 */
/* 0x80531b04: b0 a6 00 e0              sth      r5, 0xe0(r6) */
/* 0x80531b08: 98 e6 00 e9              stb      r7, 0xe9(r6) */
/* 0x80531b0c: 98 e6 00 e8              stb      r7, 0xe8(r6) */
/* 0x80531b10: 54 80 06 3e              clrlwi   r0, r4, 0x18 */
/* 0x80531b14: 7c 00 18 40              cmplw    r0, r3 */
/* 0x80531b18: 41 80 ff d8              blt      0x80531af0 */
/* 0x80531b1c: 88 81 00 09              lbz      r4, 9(r1) */
/* 0x80531b20: 7f a3 eb 78              mr       r3, r29 */
/* 0x80531b24: 4b ff f6 e5              bl       0x80531208 */
/* 0x80531b28: 7f a3 eb 78              mr       r3, r29 */
/* 0x80531b2c: 7f c4 f3 78              mr       r4, r30 */
/* 0x80531b30: 4b ff ef 19              bl       0x80530a48 */
/* 0x80531b34: 7f a3 eb 78              mr       r3, r29 */
/* 0x80531b38: 4b ff fb 0d              bl       0x80531644 */
/* 0x80531b3c: 88 01 00 0a              lbz      r0, 0xa(r1) */
/* 0x80531b40: 98 1d 00 04              stb      r0, 4(r29) */
/* 0x80531b44: 88 01 00 09              lbz      r0, 9(r1) */
/* 0x80531b48: 98 1d 00 05              stb      r0, 5(r29) */
/* 0x80531b4c: 9b fd 00 07              stb      r31, 7(r29) */
/* 0x80531b50: 88 01 00 08              lbz      r0, 8(r1) */
/* 0x80531b54: 98 1d 00 06              stb      r0, 6(r29) */
/* 0x80531b58: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x80531b5c: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x80531b60: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x80531b64: 83 81 00 10              lwz      r28, 0x10(r1) */
/* 0x80531b68: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x80531b6c: 7c 08 03 a6              mtlr     r0 */
/* 0x80531b70: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x80531b74: 4e 80 00 20              blr       */
/* 0x80531b78: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80531b7c: 7c 08 02 a6              mflr     r0 */
/* 0x80531b80: 3c 60 00 00              lis      r3, 0 */
/* 0x80531b84: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80531b88: bf 41 00 08              stmw     r26, 8(r1) */
/* 0x80531b8c: 80 03 00 00              lwz      r0, 0(r3) */
/* 0x80531b90: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80531b94: 40 82 01 58              bne      0x80531cec */
/* 0x80531b98: 38 60 73 f0              li       r3, 0x73f0 */
/* 0x80531b9c: 48 02 40 5d              bl       0x80555bf8 */
/* 0x80531ba0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80531ba4: 7c 7a 1b 78              mr       r26, r3 */
/* 0x80531ba8: 41 82 01 3c              beq      0x80531ce4 */
/* 0x80531bac: 3c 80 00 00              lis      r4, 0 */
/* 0x80531bb0: 38 a0 00 00              li       r5, 0 */
/* 0x80531bb4: 38 84 00 00              addi     r4, r4, 0 */
/* 0x80531bb8: 48 02 40 41              bl       0x80555bf8 */
/* 0x80531bbc: 3c 60 00 00              lis      r3, 0 */
/* 0x80531bc0: 3f 60 00 00              lis      r27, 0 */
/* 0x80531bc4: 38 63 00 00              addi     r3, r3, 0 */
/* 0x80531bc8: 90 7a 00 1c              stw      r3, 0x1c(r26) */
/* 0x80531bcc: 38 03 00 08              addi     r0, r3, 8 */
/* 0x80531bd0: 3f a0 00 00              lis      r29, 0 */
/* 0x80531bd4: 90 1a 00 00              stw      r0, 0(r26) */
/* 0x80531bd8: 3b 7b 00 00              addi     r27, r27, 0 */
/* 0x80531bdc: 3f c0 00 00              lis      r30, 0 */
/* 0x80531be0: 3b 80 00 00              li       r28, 0 */
/* 0x80531be4: 93 7a 00 20              stw      r27, 0x20(r26) */
/* 0x80531be8: 38 7a 00 28              addi     r3, r26, 0x28 */
/* 0x80531bec: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531bf0: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531bf4: 9b 9a 00 24              stb      r28, 0x24(r26) */
/* 0x80531bf8: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531bfc: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531c00: 9b 9a 00 25              stb      r28, 0x25(r26) */
/* 0x80531c04: 48 02 3f f5              bl       0x80555bf8 */
/* 0x80531c08: 3b e0 00 11              li       r31, 0x11 */
/* 0x80531c0c: 93 fa 0b 68              stw      r31, 0xb68(r26) */
/* 0x80531c10: 38 7a 0b 9c              addi     r3, r26, 0xb9c */
/* 0x80531c14: 38 80 00 00              li       r4, 0 */
/* 0x80531c18: 93 9a 0b 70              stw      r28, 0xb70(r26) */
/* 0x80531c1c: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531c20: 93 9a 0b 74              stw      r28, 0xb74(r26) */
/* 0x80531c24: 93 9a 0b 88              stw      r28, 0xb88(r26) */
/* 0x80531c28: 48 02 3f d1              bl       0x80555bf8 */
/* 0x80531c2c: 38 1a 23 f0              addi     r0, r26, 0x23f0 */
/* 0x80531c30: 90 1a 0c 0c              stw      r0, 0xc0c(r26) */
/* 0x80531c34: 38 7a 0c 18              addi     r3, r26, 0xc18 */
/* 0x80531c38: 38 9d 00 00              addi     r4, r29, 0 */
/* 0x80531c3c: 93 7a 0c 10              stw      r27, 0xc10(r26) */
/* 0x80531c40: 38 be 00 00              addi     r5, r30, 0 */
/* 0x80531c44: 38 c0 00 f0              li       r6, 0xf0 */
/* 0x80531c48: 38 e0 00 0c              li       r7, 0xc */
/* 0x80531c4c: 9b 9a 0c 14              stb      r28, 0xc14(r26) */
/* 0x80531c50: 9b 9a 0c 15              stb      r28, 0xc15(r26) */
/* 0x80531c54: 48 02 3f a5              bl       0x80555bf8 */
/* 0x80531c58: 93 fa 17 58              stw      r31, 0x1758(r26) */
/* 0x80531c5c: 38 7a 17 8c              addi     r3, r26, 0x178c */
/* 0x80531c60: 38 80 00 00              li       r4, 0 */
/* 0x80531c64: 38 a0 00 70              li       r5, 0x70 */
/* 0x80531c68: 93 9a 17 60              stw      r28, 0x1760(r26) */
/* 0x80531c6c: 93 9a 17 64              stw      r28, 0x1764(r26) */
#endif


/* === DISASSEMBLY === */

; Function: initControllers__Q36System10RaceConfig8ScenarioFUc
; Demangled: initControllers__System10RaceConfig8ScenarioFUc
; Address: 0x805319d0  (.text+0x1f134)
; Size: 672 bytes

  0x805319d0:  blt      0x805319e0
  0x805319d4:  cmpwi    r4, 0xa
  0x805319d8:  bgt      0x805319e0
  0x805319dc:  li       r0, 1
  0x805319e0:  cmpwi    r0, 0
  0x805319e4:  bne      0x80531b1c
  0x805319e8:  cmpwi    r3, 0
  0x805319ec:  li       r4, 0
  0x805319f0:  beq      0x80531b1c
  0x805319f4:  cmplwi   r3, 8
  0x805319f8:  addi     r0, r3, 0xf8
  0x805319fc:  ble      0x80531ae8
  0x80531a00:  clrlwi   r5, r0, 0x18
  0x80531a04:  li       r11, 0
  0x80531a08:  addi     r0, r5, 7
  0x80531a0c:  srwi     r0, r0, 3
  0x80531a10:  mtctr    r0
  0x80531a14:  cmplwi   r5, 0
  0x80531a18:  ble      0x80531ae8
  0x80531a1c:  clrlwi   r7, r4, 0x18
  0x80531a20:  addi     r5, r4, 1
  0x80531a24:  mulli    r6, r7, 0xf0
  0x80531a28:  addi     r0, r4, 2
  0x80531a2c:  clrlwi   r10, r5, 0x18
  0x80531a30:  clrlwi   r9, r0, 0x18
  0x80531a34:  add      r12, r29, r6
  0x80531a38:  addi     r0, r4, 3
  0x80531a3c:  sth      r11, 0xe0(r12)
  0x80531a40:  clrlwi   r8, r0, 0x18
  0x80531a44:  subf     r28, r7, r3
  0x80531a48:  addi     r0, r4, 4
  0x80531a4c:  stb      r28, 0xe9(r12)
  0x80531a50:  clrlwi   r7, r0, 0x18
  0x80531a54:  addi     r6, r4, 5
  0x80531a58:  addi     r5, r4, 6
  0x80531a5c:  stb      r28, 0xe8(r12)
  0x80531a60:  addi     r0, r4, 7
  0x80531a64:  clrlwi   r6, r6, 0x18
  0x80531a68:  clrlwi   r5, r5, 0x18
  0x80531a6c:  sth      r11, 0x1d0(r12)
  0x80531a70:  subf     r10, r10, r3
  0x80531a74:  clrlwi   r0, r0, 0x18
  0x80531a78:  subf     r9, r9, r3
  0x80531a7c:  stb      r10, 0x1d9(r12)
  0x80531a80:  subf     r8, r8, r3
  0x80531a84:  subf     r7, r7, r3
  0x80531a88:  subf     r6, r6, r3
  0x80531a8c:  stb      r10, 0x1d8(r12)
  0x80531a90:  subf     r5, r5, r3
  0x80531a94:  subf     r0, r0, r3
  0x80531a98:  addi     r4, r4, 8
  0x80531a9c:  sth      r11, 0x2c0(r12)
  0x80531aa0:  stb      r9, 0x2c9(r12)
  0x80531aa4:  stb      r9, 0x2c8(r12)
  0x80531aa8:  sth      r11, 0x3b0(r12)
  0x80531aac:  stb      r8, 0x3b9(r12)
  0x80531ab0:  stb      r8, 0x3b8(r12)
  0x80531ab4:  sth      r11, 0x4a0(r12)
  0x80531ab8:  stb      r7, 0x4a9(r12)
  0x80531abc:  stb      r7, 0x4a8(r12)
  0x80531ac0:  sth      r11, 0x590(r12)
  0x80531ac4:  stb      r6, 0x599(r12)
  0x80531ac8:  stb      r6, 0x598(r12)
  0x80531acc:  sth      r11, 0x680(r12)
  0x80531ad0:  stb      r5, 0x689(r12)
  0x80531ad4:  stb      r5, 0x688(r12)
  0x80531ad8:  sth      r11, 0x770(r12)
  0x80531adc:  stb      r0, 0x779(r12)
  0x80531ae0:  stb      r0, 0x778(r12)
  0x80531ae4:  bdnz     0x80531a1c
  0x80531ae8:  li       r5, 0
  0x80531aec:  b        0x80531b10
  0x80531af0:  clrlwi   r6, r4, 0x18
  0x80531af4:  addi     r4, r4, 1
  0x80531af8:  mulli    r0, r6, 0xf0
  0x80531afc:  subf     r7, r6, r3
  0x80531b00:  add      r6, r29, r0
  0x80531b04:  sth      r5, 0xe0(r6)
  0x80531b08:  stb      r7, 0xe9(r6)
  0x80531b0c:  stb      r7, 0xe8(r6)
  0x80531b10:  clrlwi   r0, r4, 0x18
  0x80531b14:  cmplw    r0, r3
  0x80531b18:  blt      0x80531af0
  0x80531b1c:  lbz      r4, 9(r1)
  0x80531b20:  mr       r3, r29
  0x80531b24:  bl       0x80531208
  0x80531b28:  mr       r3, r29
  0x80531b2c:  mr       r4, r30
  0x80531b30:  bl       0x80530a48
  0x80531b34:  mr       r3, r29
  0x80531b38:  bl       0x80531644
  0x80531b3c:  lbz      r0, 0xa(r1)
  0x80531b40:  stb      r0, 4(r29)
  0x80531b44:  lbz      r0, 9(r1)
  0x80531b48:  stb      r0, 5(r29)
  0x80531b4c:  stb      r31, 7(r29)
  0x80531b50:  lbz      r0, 8(r1)
  0x80531b54:  stb      r0, 6(r29)
  0x80531b58:  lwz      r31, 0x1c(r1)
  0x80531b5c:  lwz      r30, 0x18(r1)
  0x80531b60:  lwz      r29, 0x14(r1)
  0x80531b64:  lwz      r28, 0x10(r1)
  0x80531b68:  lwz      r0, 0x24(r1)
  0x80531b6c:  mtlr     r0
  0x80531b70:  addi     r1, r1, 0x20
  0x80531b74:  blr      
  0x80531b78:  stwu     r1, -0x20(r1)
  0x80531b7c:  mflr     r0
  0x80531b80:  lis      r3, 0
  0x80531b84:  stw      r0, 0x24(r1)
  0x80531b88:  stmw     r26, 8(r1)
  0x80531b8c:  lwz      r0, 0(r3)
  0x80531b90:  cmpwi    r0, 0
  0x80531b94:  bne      0x80531cec
  0x80531b98:  li       r3, 0x73f0
  0x80531b9c:  bl       0x80555bf8
  0x80531ba0:  cmpwi    r3, 0
  0x80531ba4:  mr       r26, r3
  0x80531ba8:  beq      0x80531ce4
  0x80531bac:  lis      r4, 0
  0x80531bb0:  li       r5, 0
  0x80531bb4:  addi     r4, r4, 0
  0x80531bb8:  bl       0x80555bf8
  0x80531bbc:  lis      r3, 0
  0x80531bc0:  lis      r27, 0
  0x80531bc4:  addi     r3, r3, 0
  0x80531bc8:  stw      r3, 0x1c(r26)
  0x80531bcc:  addi     r0, r3, 8
  0x80531bd0:  lis      r29, 0
  0x80531bd4:  stw      r0, 0(r26)
  0x80531bd8:  addi     r27, r27, 0
  0x80531bdc:  lis      r30, 0
  0x80531be0:  li       r28, 0
  0x80531be4:  stw      r27, 0x20(r26)
  0x80531be8:  addi     r3, r26, 0x28
  0x80531bec:  addi     r4, r29, 0
  0x80531bf0:  addi     r5, r30, 0
  0x80531bf4:  stb      r28, 0x24(r26)
  0x80531bf8:  li       r6, 0xf0
  0x80531bfc:  li       r7, 0xc
  0x80531c00:  stb      r28, 0x25(r26)
  0x80531c04:  bl       0x80555bf8
  0x80531c08:  li       r31, 0x11
  0x80531c0c:  stw      r31, 0xb68(r26)
  0x80531c10:  addi     r3, r26, 0xb9c
  0x80531c14:  li       r4, 0
  0x80531c18:  stw      r28, 0xb70(r26)
  0x80531c1c:  li       r5, 0x70
  0x80531c20:  stw      r28, 0xb74(r26)
  0x80531c24:  stw      r28, 0xb88(r26)
  0x80531c28:  bl       0x80555bf8
  0x80531c2c:  addi     r0, r26, 0x23f0
  0x80531c30:  stw      r0, 0xc0c(r26)
  0x80531c34:  addi     r3, r26, 0xc18
  0x80531c38:  addi     r4, r29, 0
  0x80531c3c:  stw      r27, 0xc10(r26)
  0x80531c40:  addi     r5, r30, 0
  0x80531c44:  li       r6, 0xf0
  0x80531c48:  li       r7, 0xc
  0x80531c4c:  stb      r28, 0xc14(r26)
  0x80531c50:  stb      r28, 0xc15(r26)
  0x80531c54:  bl       0x80555bf8
  0x80531c58:  stw      r31, 0x1758(r26)
  0x80531c5c:  addi     r3, r26, 0x178c
  0x80531c60:  li       r4, 0
  0x80531c64:  li       r5, 0x70
  0x80531c68:  stw      r28, 0x1760(r26)
  0x80531c6c:  stw      r28, 0x1764(r26)
