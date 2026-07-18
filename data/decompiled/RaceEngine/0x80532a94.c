/**
 * copy__System10RaceConfig8ScenarioFRCSystem10RaceConfig8Scenario
 * @addr 0x80532a94
 * @size 696 bytes
 * @frame 0 bytes
 * @calls 35 function(s)
 */
void System10RaceConfig8ScenarioFRCSystem10RaceConfig8Scenario(void) {
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* clrlwi r4, r25, 0x18 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x8053014c() */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r27, 0x18 */
    /* 0x8052fa40() */
    /* 0x80532c48() */
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* clrlwi r4, r25, 0x18 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x80530164() */
    /* addi r3, r31, 0xc10 */
    /* clrlwi r4, r25, 0x18 */
    /* 0x80530154() */
    /* li r4, 1 */
    /* 0x8053016c() */
    /* clrlwi r4, r25, 0x18 */
    /* addi r3, r31, 0xc10 */
    /* addi r30, r4, 1 */
    /* 0x80530154() */
    /* clrlwi r4, r30, 0x18 */
    /* 0x80530378() */
    /* addi r3, r31, 0xc10 */
    /* clrlwi r4, r25, 0x18 */
    /* 0x80530154() */
    /* clrlwi r4, r30, 0x18 */
    /* 0x80530380() */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r27, 0x18 */
    /* 0x8052fa40() */
    /* 0x80532d88() */
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* clrlwi r4, r25, 0x18 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x80532c50() */
    /* addi r25, r25, 1 */
    /* addi r27, r27, 1 */
    /* cmplwi r27, 0xc */
    /* if (cr0 <) goto 0x80532a50 */
    /* addi r26, r26, 1 */
    /* cmplwi r26, 0xc */
    /* if (cr0 <=) goto 0x80532a48 */
    /* goto 0x80532c10 */
    /* addi r3, r31, 0x20 */
    /* li r4, 0 */
    /* 0x8052fa40() */
    /* 0x80532c40() */
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x8053014c() */
    /* addi r3, r31, 0x20 */
    /* li r4, 0 */
    /* 0x8052fa40() */
    /* 0x80532c48() */
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x80530164() */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* li r4, 1 */
    /* 0x8053016c() */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* li r4, 1 */
    /* 0x80530378() */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* li r4, 1 */
    /* 0x80530380() */
    /* addi r3, r31, 0x20 */
    /* li r4, 0 */
    /* 0x8052fa40() */
    /* 0x80532d88() */
    /* r30 = r3 */
    /* addi r3, r31, 0xc10 */
    /* li r4, 0 */
    /* 0x80530154() */
    /* r4 = r30 */
    /* 0x80532c50() */
    /* r3 = r31 */
    /* 0x80531fe4() */
    /* lmw r25, 0x14(r1) */
    /* r0 = stack[0x34] */
    /* mtlr r0 */
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80532a94: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532a98: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532a9c: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532aa0: 4b ff d6 b5              bl       0x80530154 */
/* 0x80532aa4: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532aa8: 4b ff d6 a5              bl       0x8053014c */
/* 0x80532aac: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532ab0: 57 64 06 3e              clrlwi   r4, r27, 0x18 */
/* 0x80532ab4: 4b ff cf 8d              bl       0x8052fa40 */
/* 0x80532ab8: 48 00 01 91              bl       0x80532c48 */
/* 0x80532abc: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532ac0: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532ac4: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532ac8: 4b ff d6 8d              bl       0x80530154 */
/* 0x80532acc: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532ad0: 4b ff d6 95              bl       0x80530164 */
/* 0x80532ad4: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532ad8: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532adc: 4b ff d6 79              bl       0x80530154 */
/* 0x80532ae0: 38 80 00 01              li       r4, 1 */
/* 0x80532ae4: 4b ff d6 89              bl       0x8053016c */
/* 0x80532ae8: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532aec: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532af0: 3b c4 00 01              addi     r30, r4, 1 */
/* 0x80532af4: 4b ff d6 61              bl       0x80530154 */
/* 0x80532af8: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x80532afc: 4b ff d8 7d              bl       0x80530378 */
/* 0x80532b00: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532b04: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532b08: 4b ff d6 4d              bl       0x80530154 */
/* 0x80532b0c: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x80532b10: 4b ff d8 71              bl       0x80530380 */
/* 0x80532b14: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532b18: 57 64 06 3e              clrlwi   r4, r27, 0x18 */
/* 0x80532b1c: 4b ff cf 25              bl       0x8052fa40 */
/* 0x80532b20: 48 00 02 69              bl       0x80532d88 */
/* 0x80532b24: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532b28: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532b2c: 57 24 06 3e              clrlwi   r4, r25, 0x18 */
/* 0x80532b30: 4b ff d6 25              bl       0x80530154 */
/* 0x80532b34: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532b38: 48 00 01 19              bl       0x80532c50 */
/* 0x80532b3c: 3b 39 00 01              addi     r25, r25, 1 */
/* 0x80532b40: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x80532b44: 28 1b 00 0c              cmplwi   r27, 0xc */
/* 0x80532b48: 41 80 ff 08              blt      0x80532a50 */
/* 0x80532b4c: 3b 5a 00 01              addi     r26, r26, 1 */
/* 0x80532b50: 28 1a 00 0c              cmplwi   r26, 0xc */
/* 0x80532b54: 40 81 fe f4              ble      0x80532a48 */
/* 0x80532b58: 48 00 00 b8              b        0x80532c10 */
/* 0x80532b5c: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532b60: 38 80 00 00              li       r4, 0 */
/* 0x80532b64: 4b ff ce dd              bl       0x8052fa40 */
/* 0x80532b68: 48 00 00 d9              bl       0x80532c40 */
/* 0x80532b6c: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532b70: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532b74: 38 80 00 00              li       r4, 0 */
/* 0x80532b78: 4b ff d5 dd              bl       0x80530154 */
/* 0x80532b7c: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532b80: 4b ff d5 cd              bl       0x8053014c */
/* 0x80532b84: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532b88: 38 80 00 00              li       r4, 0 */
/* 0x80532b8c: 4b ff ce b5              bl       0x8052fa40 */
/* 0x80532b90: 48 00 00 b9              bl       0x80532c48 */
/* 0x80532b94: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532b98: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532b9c: 38 80 00 00              li       r4, 0 */
/* 0x80532ba0: 4b ff d5 b5              bl       0x80530154 */
/* 0x80532ba4: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532ba8: 4b ff d5 bd              bl       0x80530164 */
/* 0x80532bac: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532bb0: 38 80 00 00              li       r4, 0 */
/* 0x80532bb4: 4b ff d5 a1              bl       0x80530154 */
/* 0x80532bb8: 38 80 00 01              li       r4, 1 */
/* 0x80532bbc: 4b ff d5 b1              bl       0x8053016c */
/* 0x80532bc0: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532bc4: 38 80 00 00              li       r4, 0 */
/* 0x80532bc8: 4b ff d5 8d              bl       0x80530154 */
/* 0x80532bcc: 38 80 00 01              li       r4, 1 */
/* 0x80532bd0: 4b ff d7 a9              bl       0x80530378 */
/* 0x80532bd4: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532bd8: 38 80 00 00              li       r4, 0 */
/* 0x80532bdc: 4b ff d5 79              bl       0x80530154 */
/* 0x80532be0: 38 80 00 01              li       r4, 1 */
/* 0x80532be4: 4b ff d7 9d              bl       0x80530380 */
/* 0x80532be8: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532bec: 38 80 00 00              li       r4, 0 */
/* 0x80532bf0: 4b ff ce 51              bl       0x8052fa40 */
/* 0x80532bf4: 48 00 01 95              bl       0x80532d88 */
/* 0x80532bf8: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80532bfc: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532c00: 38 80 00 00              li       r4, 0 */
/* 0x80532c04: 4b ff d5 51              bl       0x80530154 */
/* 0x80532c08: 7f c4 f3 78              mr       r4, r30 */
/* 0x80532c0c: 48 00 00 45              bl       0x80532c50 */
/* 0x80532c10: 7f e3 fb 78              mr       r3, r31 */
/* 0x80532c14: 4b ff f3 d1              bl       0x80531fe4 */
/* 0x80532c18: bb 21 00 14              lmw      r25, 0x14(r1) */
/* 0x80532c1c: 80 01 00 34              lwz      r0, 0x34(r1) */
/* 0x80532c20: 7c 08 03 a6              mtlr     r0 */
/* 0x80532c24: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x80532c28: 4e 80 00 20              blr       */
/* 0x80532c2c: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x80532c30: 54 03 ff fe              rlwinm   r3, r0, 0x1f, 0x1f, 0x1f */
/* 0x80532c34: 4e 80 00 20              blr       */
/* 0x80532c38: 88 63 00 e0              lbz      r3, 0xe0(r3) */
/* 0x80532c3c: 4e 80 00 20              blr       */
/* 0x80532c40: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80532c44: 4e 80 00 20              blr       */
/* 0x80532c48: 80 63 00 08              lwz      r3, 8(r3) */
/* 0x80532c4c: 4e 80 00 20              blr       */
/* 0x80532c50: 80 a4 00 04              lwz      r5, 4(r4) */
/* 0x80532c54: 38 00 00 26              li       r0, 0x26 */
/* 0x80532c58: 90 a3 00 18              stw      r5, 0x18(r3) */
/* 0x80532c5c: 38 e3 00 23              addi     r7, r3, 0x23 */
/* 0x80532c60: 38 c4 00 0f              addi     r6, r4, 0xf */
/* 0x80532c64: 88 a4 00 08              lbz      r5, 8(r4) */
/* 0x80532c68: 98 a3 00 1c              stb      r5, 0x1c(r3) */
/* 0x80532c6c: 88 a4 00 09              lbz      r5, 9(r4) */
/* 0x80532c70: 98 a3 00 1d              stb      r5, 0x1d(r3) */
/* 0x80532c74: 80 a4 00 0c              lwz      r5, 0xc(r4) */
/* 0x80532c78: 90 a3 00 20              stw      r5, 0x20(r3) */
/* 0x80532c7c: 7c 09 03 a6              mtctr    r0 */
/* 0x80532c80: 88 a6 00 01              lbz      r5, 1(r6) */
/* 0x80532c84: 8c 06 00 02              lbzu     r0, 2(r6) */
/* 0x80532c88: 98 a7 00 01              stb      r5, 1(r7) */
/* 0x80532c8c: 9c 07 00 02              stbu     r0, 2(r7) */
/* 0x80532c90: 42 00 ff f0              bdnz     0x80532c80 */
/* 0x80532c94: 80 04 00 5c              lwz      r0, 0x5c(r4) */
/* 0x80532c98: 90 03 00 70              stw      r0, 0x70(r3) */
/* 0x80532c9c: 88 04 00 60              lbz      r0, 0x60(r4) */
/* 0x80532ca0: 98 03 00 74              stb      r0, 0x74(r3) */
/* 0x80532ca4: 88 04 00 61              lbz      r0, 0x61(r4) */
/* 0x80532ca8: 98 03 00 75              stb      r0, 0x75(r3) */
/* 0x80532cac: 88 04 00 62              lbz      r0, 0x62(r4) */
/* 0x80532cb0: 98 03 00 76              stb      r0, 0x76(r3) */
/* 0x80532cb4: 88 04 00 63              lbz      r0, 0x63(r4) */
/* 0x80532cb8: 98 03 00 77              stb      r0, 0x77(r3) */
/* 0x80532cbc: 80 04 00 64              lwz      r0, 0x64(r4) */
/* 0x80532cc0: 90 03 00 78              stw      r0, 0x78(r3) */
/* 0x80532cc4: 80 a4 00 68              lwz      r5, 0x68(r4) */
/* 0x80532cc8: 80 04 00 6c              lwz      r0, 0x6c(r4) */
/* 0x80532ccc: 90 03 00 80              stw      r0, 0x80(r3) */
/* 0x80532cd0: 90 a3 00 7c              stw      r5, 0x7c(r3) */
/* 0x80532cd4: 80 a4 00 70              lwz      r5, 0x70(r4) */
/* 0x80532cd8: 80 04 00 74              lwz      r0, 0x74(r4) */
/* 0x80532cdc: 90 03 00 88              stw      r0, 0x88(r3) */
/* 0x80532ce0: 90 a3 00 84              stw      r5, 0x84(r3) */
/* 0x80532ce4: 80 a4 00 78              lwz      r5, 0x78(r4) */
/* 0x80532ce8: 80 04 00 7c              lwz      r0, 0x7c(r4) */
/* 0x80532cec: 90 03 00 90              stw      r0, 0x90(r3) */
/* 0x80532cf0: 90 a3 00 8c              stw      r5, 0x8c(r3) */
/* 0x80532cf4: 80 a4 00 80              lwz      r5, 0x80(r4) */
/* 0x80532cf8: 80 04 00 84              lwz      r0, 0x84(r4) */
/* 0x80532cfc: 90 03 00 98              stw      r0, 0x98(r3) */
/* 0x80532d00: 90 a3 00 94              stw      r5, 0x94(r3) */
/* 0x80532d04: 80 a4 00 88              lwz      r5, 0x88(r4) */
/* 0x80532d08: 80 04 00 8c              lwz      r0, 0x8c(r4) */
/* 0x80532d0c: 90 03 00 a0              stw      r0, 0xa0(r3) */
/* 0x80532d10: 90 a3 00 9c              stw      r5, 0x9c(r3) */
/* 0x80532d14: 80 a4 00 90              lwz      r5, 0x90(r4) */
/* 0x80532d18: 80 04 00 94              lwz      r0, 0x94(r4) */
/* 0x80532d1c: 90 03 00 a8              stw      r0, 0xa8(r3) */
/* 0x80532d20: 90 a3 00 a4              stw      r5, 0xa4(r3) */
/* 0x80532d24: 80 a4 00 98              lwz      r5, 0x98(r4) */
/* 0x80532d28: 80 04 00 9c              lwz      r0, 0x9c(r4) */
/* 0x80532d2c: 90 03 00 b0              stw      r0, 0xb0(r3) */
/* 0x80532d30: 90 a3 00 ac              stw      r5, 0xac(r3) */
/* 0x80532d34: 80 04 00 a0              lwz      r0, 0xa0(r4) */
/* 0x80532d38: 90 03 00 b4              stw      r0, 0xb4(r3) */
/* 0x80532d3c: 88 04 00 a4              lbz      r0, 0xa4(r4) */
/* 0x80532d40: 98 03 00 b8              stb      r0, 0xb8(r3) */
/* 0x80532d44: 88 04 00 a5              lbz      r0, 0xa5(r4) */
/* 0x80532d48: 98 03 00 b9              stb      r0, 0xb9(r3) */
#endif


/* === DISASSEMBLY === */

; Function: copy__Q36System10RaceConfig8ScenarioFRCQ36System10RaceConfig8Scenario
; Demangled: copy__System10RaceConfig8ScenarioFRCSystem10RaceConfig8Scenario
; Address: 0x80532a94  (.text+0x201f8)
; Size: 696 bytes

  0x80532a94:  mr       r30, r3
  0x80532a98:  addi     r3, r31, 0xc10
  0x80532a9c:  clrlwi   r4, r25, 0x18
  0x80532aa0:  bl       0x80530154
  0x80532aa4:  mr       r4, r30
  0x80532aa8:  bl       0x8053014c
  0x80532aac:  addi     r3, r31, 0x20
  0x80532ab0:  clrlwi   r4, r27, 0x18
  0x80532ab4:  bl       0x8052fa40
  0x80532ab8:  bl       0x80532c48
  0x80532abc:  mr       r30, r3
  0x80532ac0:  addi     r3, r31, 0xc10
  0x80532ac4:  clrlwi   r4, r25, 0x18
  0x80532ac8:  bl       0x80530154
  0x80532acc:  mr       r4, r30
  0x80532ad0:  bl       0x80530164
  0x80532ad4:  addi     r3, r31, 0xc10
  0x80532ad8:  clrlwi   r4, r25, 0x18
  0x80532adc:  bl       0x80530154
  0x80532ae0:  li       r4, 1
  0x80532ae4:  bl       0x8053016c
  0x80532ae8:  clrlwi   r4, r25, 0x18
  0x80532aec:  addi     r3, r31, 0xc10
  0x80532af0:  addi     r30, r4, 1
  0x80532af4:  bl       0x80530154
  0x80532af8:  clrlwi   r4, r30, 0x18
  0x80532afc:  bl       0x80530378
  0x80532b00:  addi     r3, r31, 0xc10
  0x80532b04:  clrlwi   r4, r25, 0x18
  0x80532b08:  bl       0x80530154
  0x80532b0c:  clrlwi   r4, r30, 0x18
  0x80532b10:  bl       0x80530380
  0x80532b14:  addi     r3, r31, 0x20
  0x80532b18:  clrlwi   r4, r27, 0x18
  0x80532b1c:  bl       0x8052fa40
  0x80532b20:  bl       0x80532d88
  0x80532b24:  mr       r30, r3
  0x80532b28:  addi     r3, r31, 0xc10
  0x80532b2c:  clrlwi   r4, r25, 0x18
  0x80532b30:  bl       0x80530154
  0x80532b34:  mr       r4, r30
  0x80532b38:  bl       0x80532c50
  0x80532b3c:  addi     r25, r25, 1
  0x80532b40:  addi     r27, r27, 1
  0x80532b44:  cmplwi   r27, 0xc
  0x80532b48:  blt      0x80532a50
  0x80532b4c:  addi     r26, r26, 1
  0x80532b50:  cmplwi   r26, 0xc
  0x80532b54:  ble      0x80532a48
  0x80532b58:  b        0x80532c10
  0x80532b5c:  addi     r3, r31, 0x20
  0x80532b60:  li       r4, 0
  0x80532b64:  bl       0x8052fa40
  0x80532b68:  bl       0x80532c40
  0x80532b6c:  mr       r30, r3
  0x80532b70:  addi     r3, r31, 0xc10
  0x80532b74:  li       r4, 0
  0x80532b78:  bl       0x80530154
  0x80532b7c:  mr       r4, r30
  0x80532b80:  bl       0x8053014c
  0x80532b84:  addi     r3, r31, 0x20
  0x80532b88:  li       r4, 0
  0x80532b8c:  bl       0x8052fa40
  0x80532b90:  bl       0x80532c48
  0x80532b94:  mr       r30, r3
  0x80532b98:  addi     r3, r31, 0xc10
  0x80532b9c:  li       r4, 0
  0x80532ba0:  bl       0x80530154
  0x80532ba4:  mr       r4, r30
  0x80532ba8:  bl       0x80530164
  0x80532bac:  addi     r3, r31, 0xc10
  0x80532bb0:  li       r4, 0
  0x80532bb4:  bl       0x80530154
  0x80532bb8:  li       r4, 1
  0x80532bbc:  bl       0x8053016c
  0x80532bc0:  addi     r3, r31, 0xc10
  0x80532bc4:  li       r4, 0
  0x80532bc8:  bl       0x80530154
  0x80532bcc:  li       r4, 1
  0x80532bd0:  bl       0x80530378
  0x80532bd4:  addi     r3, r31, 0xc10
  0x80532bd8:  li       r4, 0
  0x80532bdc:  bl       0x80530154
  0x80532be0:  li       r4, 1
  0x80532be4:  bl       0x80530380
  0x80532be8:  addi     r3, r31, 0x20
  0x80532bec:  li       r4, 0
  0x80532bf0:  bl       0x8052fa40
  0x80532bf4:  bl       0x80532d88
  0x80532bf8:  mr       r30, r3
  0x80532bfc:  addi     r3, r31, 0xc10
  0x80532c00:  li       r4, 0
  0x80532c04:  bl       0x80530154
  0x80532c08:  mr       r4, r30
  0x80532c0c:  bl       0x80532c50
  0x80532c10:  mr       r3, r31
  0x80532c14:  bl       0x80531fe4
  0x80532c18:  lmw      r25, 0x14(r1)
  0x80532c1c:  lwz      r0, 0x34(r1)
  0x80532c20:  mtlr     r0
  0x80532c24:  addi     r1, r1, 0x30
  0x80532c28:  blr      
  0x80532c2c:  lwz      r0, 0xb70(r3)
  0x80532c30:  rlwinm   r3, r0, 0x1f, 0x1f, 0x1f
  0x80532c34:  blr      
  0x80532c38:  lbz      r3, 0xe0(r3)
  0x80532c3c:  blr      
  0x80532c40:  lwz      r3, 0xc(r3)
  0x80532c44:  blr      
  0x80532c48:  lwz      r3, 8(r3)
  0x80532c4c:  blr      
  0x80532c50:  lwz      r5, 4(r4)
  0x80532c54:  li       r0, 0x26
  0x80532c58:  stw      r5, 0x18(r3)
  0x80532c5c:  addi     r7, r3, 0x23
  0x80532c60:  addi     r6, r4, 0xf
  0x80532c64:  lbz      r5, 8(r4)
  0x80532c68:  stb      r5, 0x1c(r3)
  0x80532c6c:  lbz      r5, 9(r4)
  0x80532c70:  stb      r5, 0x1d(r3)
  0x80532c74:  lwz      r5, 0xc(r4)
  0x80532c78:  stw      r5, 0x20(r3)
  0x80532c7c:  mtctr    r0
  0x80532c80:  lbz      r5, 1(r6)
  0x80532c84:  lbzu     r0, 2(r6)
  0x80532c88:  stb      r5, 1(r7)
  0x80532c8c:  stbu     r0, 2(r7)
  0x80532c90:  bdnz     0x80532c80
  0x80532c94:  lwz      r0, 0x5c(r4)
  0x80532c98:  stw      r0, 0x70(r3)
  0x80532c9c:  lbz      r0, 0x60(r4)
  0x80532ca0:  stb      r0, 0x74(r3)
  0x80532ca4:  lbz      r0, 0x61(r4)
  0x80532ca8:  stb      r0, 0x75(r3)
  0x80532cac:  lbz      r0, 0x62(r4)
  0x80532cb0:  stb      r0, 0x76(r3)
  0x80532cb4:  lbz      r0, 0x63(r4)
  0x80532cb8:  stb      r0, 0x77(r3)
  0x80532cbc:  lwz      r0, 0x64(r4)
  0x80532cc0:  stw      r0, 0x78(r3)
  0x80532cc4:  lwz      r5, 0x68(r4)
  0x80532cc8:  lwz      r0, 0x6c(r4)
  0x80532ccc:  stw      r0, 0x80(r3)
  0x80532cd0:  stw      r5, 0x7c(r3)
  0x80532cd4:  lwz      r5, 0x70(r4)
  0x80532cd8:  lwz      r0, 0x74(r4)
  0x80532cdc:  stw      r0, 0x88(r3)
  0x80532ce0:  stw      r5, 0x84(r3)
  0x80532ce4:  lwz      r5, 0x78(r4)
  0x80532ce8:  lwz      r0, 0x7c(r4)
  0x80532cec:  stw      r0, 0x90(r3)
  0x80532cf0:  stw      r5, 0x8c(r3)
  0x80532cf4:  lwz      r5, 0x80(r4)
  0x80532cf8:  lwz      r0, 0x84(r4)
  0x80532cfc:  stw      r0, 0x98(r3)
  0x80532d00:  stw      r5, 0x94(r3)
  0x80532d04:  lwz      r5, 0x88(r4)
  0x80532d08:  lwz      r0, 0x8c(r4)
  0x80532d0c:  stw      r0, 0xa0(r3)
  0x80532d10:  stw      r5, 0x9c(r3)
  0x80532d14:  lwz      r5, 0x90(r4)
  0x80532d18:  lwz      r0, 0x94(r4)
  0x80532d1c:  stw      r0, 0xa8(r3)
  0x80532d20:  stw      r5, 0xa4(r3)
  0x80532d24:  lwz      r5, 0x98(r4)
  0x80532d28:  lwz      r0, 0x9c(r4)
  0x80532d2c:  stw      r0, 0xb0(r3)
  0x80532d30:  stw      r5, 0xac(r3)
  0x80532d34:  lwz      r0, 0xa0(r4)
  0x80532d38:  stw      r0, 0xb4(r3)
  0x80532d3c:  lbz      r0, 0xa4(r4)
  0x80532d40:  stb      r0, 0xb8(r3)
  0x80532d44:  lbz      r0, 0xa5(r4)
  0x80532d48:  stb      r0, 0xb9(r3)
