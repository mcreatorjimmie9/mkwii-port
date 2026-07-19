/**
 * ITEMHandler_update
 * @addr 0x8065ead0
 * @size 216 bytes
 * @frame 0 bytes
 */
void ITEMHandler_update(void) {
    /* stb r29, 0x70(r21) */
    /* stb r29, 0x71(r21) */
    /* stb r29, 0x72(r21) */
    /* stb r29, 0x73(r21) */
    /* addi r21, r21, 0x38 */
    /* if (cr0 <) goto 0x8065ea3c */
    /* li r0, 2 */
    /* li r8, 0 */
    /* li r3, 0xff */
    /* r9 = r31 */
    /* r10 = r31 */
    /* stb r3, 0x2e0(r31) */
    /* li r11, 0 */
    /* r31+0x2ec = r8 */
    /* r31+0x2e8 = r8 */
    /* mtctr r0 */
    /* rlwinm r0, r11, 3, 0x15, 0x1c */
    /* addi r3, r11, 1 */
    /* add r4, r31, r0 */
    /* r4+0x2f4 = r8 */
    /* rlwinm r6, r3, 3, 0x15, 0x1c */
    /* addi r0, r11, 2 */
    /* addi r3, r11, 4 */
    /* r4+0x2f0 = r8 */
    /* rlwinm r5, r0, 3, 0x15, 0x1c */
    /* add r7, r31, r6 */
    /* addi r0, r11, 3 */
    /* r9+0x354 = r8 */
    /* rlwinm r4, r0, 3, 0x15, 0x1c */
    /* addi r0, r11, 5 */
    /* add r6, r31, r5 */
    /* r9+0x350 = r8 */
    /* add r5, r31, r4 */
    /* rlwinm r3, r3, 3, 0x15, 0x1c */
    /* rlwinm r0, r0, 3, 0x15, 0x1c */
    /* r10+0x3b0 = r8 */
    /* add r4, r31, r3 */
    /* add r3, r31, r0 */
    /* addi r11, r11, 6 */
    /* r7+0x2f4 = r8 */
    /* r7+0x2f0 = r8 */
    /* r9+0x35c = r8 */
    /* r9+0x358 = r8 */
    /* r10+0x3b4 = r8 */
    /* r6+0x2f4 = r8 */
    /* r6+0x2f0 = r8 */
    /* r9+0x364 = r8 */
    /* r9+0x360 = r8 */
    /* r10+0x3b8 = r8 */
    /* r5+0x2f4 = r8 */
    /* r5+0x2f0 = r8 */
    /* r9+0x36c = r8 */
    /* r9+0x368 = r8 */
    /* r10+0x3bc = r8 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8065ead0: 9b b5 00 70              stb      r29, 0x70(r21) */
/* 0x8065ead4: 9b b5 00 71              stb      r29, 0x71(r21) */
/* 0x8065ead8: 9b b5 00 72              stb      r29, 0x72(r21) */
/* 0x8065eadc: 9b b5 00 73              stb      r29, 0x73(r21) */
/* 0x8065eae0: 3a b5 00 38              addi     r21, r21, 0x38 */
/* 0x8065eae4: 41 80 ff 58              blt      0x8065ea3c */
/* 0x8065eae8: 38 00 00 02              li       r0, 2 */
/* 0x8065eaec: 39 00 00 00              li       r8, 0 */
/* 0x8065eaf0: 38 60 00 ff              li       r3, 0xff */
/* 0x8065eaf4: 7f e9 fb 78              mr       r9, r31 */
/* 0x8065eaf8: 7f ea fb 78              mr       r10, r31 */
/* 0x8065eafc: 98 7f 02 e0              stb      r3, 0x2e0(r31) */
/* 0x8065eb00: 39 60 00 00              li       r11, 0 */
/* 0x8065eb04: 91 1f 02 ec              stw      r8, 0x2ec(r31) */
/* 0x8065eb08: 91 1f 02 e8              stw      r8, 0x2e8(r31) */
/* 0x8065eb0c: 7c 09 03 a6              mtctr    r0 */
/* 0x8065eb10: 55 60 1d 78              rlwinm   r0, r11, 3, 0x15, 0x1c */
/* 0x8065eb14: 38 6b 00 01              addi     r3, r11, 1 */
/* 0x8065eb18: 7c 9f 02 14              add      r4, r31, r0 */
/* 0x8065eb1c: 91 04 02 f4              stw      r8, 0x2f4(r4) */
/* 0x8065eb20: 54 66 1d 78              rlwinm   r6, r3, 3, 0x15, 0x1c */
/* 0x8065eb24: 38 0b 00 02              addi     r0, r11, 2 */
/* 0x8065eb28: 38 6b 00 04              addi     r3, r11, 4 */
/* 0x8065eb2c: 91 04 02 f0              stw      r8, 0x2f0(r4) */
/* 0x8065eb30: 54 05 1d 78              rlwinm   r5, r0, 3, 0x15, 0x1c */
/* 0x8065eb34: 7c ff 32 14              add      r7, r31, r6 */
/* 0x8065eb38: 38 0b 00 03              addi     r0, r11, 3 */
/* 0x8065eb3c: 91 09 03 54              stw      r8, 0x354(r9) */
/* 0x8065eb40: 54 04 1d 78              rlwinm   r4, r0, 3, 0x15, 0x1c */
/* 0x8065eb44: 38 0b 00 05              addi     r0, r11, 5 */
/* 0x8065eb48: 7c df 2a 14              add      r6, r31, r5 */
/* 0x8065eb4c: 91 09 03 50              stw      r8, 0x350(r9) */
/* 0x8065eb50: 7c bf 22 14              add      r5, r31, r4 */
/* 0x8065eb54: 54 63 1d 78              rlwinm   r3, r3, 3, 0x15, 0x1c */
/* 0x8065eb58: 54 00 1d 78              rlwinm   r0, r0, 3, 0x15, 0x1c */
/* 0x8065eb5c: 91 0a 03 b0              stw      r8, 0x3b0(r10) */
/* 0x8065eb60: 7c 9f 1a 14              add      r4, r31, r3 */
/* 0x8065eb64: 7c 7f 02 14              add      r3, r31, r0 */
/* 0x8065eb68: 39 6b 00 06              addi     r11, r11, 6 */
/* 0x8065eb6c: 91 07 02 f4              stw      r8, 0x2f4(r7) */
/* 0x8065eb70: 91 07 02 f0              stw      r8, 0x2f0(r7) */
/* 0x8065eb74: 91 09 03 5c              stw      r8, 0x35c(r9) */
/* 0x8065eb78: 91 09 03 58              stw      r8, 0x358(r9) */
/* 0x8065eb7c: 91 0a 03 b4              stw      r8, 0x3b4(r10) */
/* 0x8065eb80: 91 06 02 f4              stw      r8, 0x2f4(r6) */
/* 0x8065eb84: 91 06 02 f0              stw      r8, 0x2f0(r6) */
/* 0x8065eb88: 91 09 03 64              stw      r8, 0x364(r9) */
/* 0x8065eb8c: 91 09 03 60              stw      r8, 0x360(r9) */
/* 0x8065eb90: 91 0a 03 b8              stw      r8, 0x3b8(r10) */
/* 0x8065eb94: 91 05 02 f4              stw      r8, 0x2f4(r5) */
/* 0x8065eb98: 91 05 02 f0              stw      r8, 0x2f0(r5) */
/* 0x8065eb9c: 91 09 03 6c              stw      r8, 0x36c(r9) */
/* 0x8065eba0: 91 09 03 68              stw      r8, 0x368(r9) */
/* 0x8065eba4: 91 0a 03 bc              stw      r8, 0x3bc(r10) */
#endif


/* === DISASSEMBLY === */

; Function: ITEMHandler_update
; Demangled: ITEMHandler_update
; Address: 0x8065ead0  (.text+0x14c234)
; Size: 216 bytes

  0x8065ead0:  stb      r29, 0x70(r21)
  0x8065ead4:  stb      r29, 0x71(r21)
  0x8065ead8:  stb      r29, 0x72(r21)
  0x8065eadc:  stb      r29, 0x73(r21)
  0x8065eae0:  addi     r21, r21, 0x38
  0x8065eae4:  blt      0x8065ea3c
  0x8065eae8:  li       r0, 2
  0x8065eaec:  li       r8, 0
  0x8065eaf0:  li       r3, 0xff
  0x8065eaf4:  mr       r9, r31
  0x8065eaf8:  mr       r10, r31
  0x8065eafc:  stb      r3, 0x2e0(r31)
  0x8065eb00:  li       r11, 0
  0x8065eb04:  stw      r8, 0x2ec(r31)
  0x8065eb08:  stw      r8, 0x2e8(r31)
  0x8065eb0c:  mtctr    r0
  0x8065eb10:  rlwinm   r0, r11, 3, 0x15, 0x1c
  0x8065eb14:  addi     r3, r11, 1
  0x8065eb18:  add      r4, r31, r0
  0x8065eb1c:  stw      r8, 0x2f4(r4)
  0x8065eb20:  rlwinm   r6, r3, 3, 0x15, 0x1c
  0x8065eb24:  addi     r0, r11, 2
  0x8065eb28:  addi     r3, r11, 4
  0x8065eb2c:  stw      r8, 0x2f0(r4)
  0x8065eb30:  rlwinm   r5, r0, 3, 0x15, 0x1c
  0x8065eb34:  add      r7, r31, r6
  0x8065eb38:  addi     r0, r11, 3
  0x8065eb3c:  stw      r8, 0x354(r9)
  0x8065eb40:  rlwinm   r4, r0, 3, 0x15, 0x1c
  0x8065eb44:  addi     r0, r11, 5
  0x8065eb48:  add      r6, r31, r5
  0x8065eb4c:  stw      r8, 0x350(r9)
  0x8065eb50:  add      r5, r31, r4
  0x8065eb54:  rlwinm   r3, r3, 3, 0x15, 0x1c
  0x8065eb58:  rlwinm   r0, r0, 3, 0x15, 0x1c
  0x8065eb5c:  stw      r8, 0x3b0(r10)
  0x8065eb60:  add      r4, r31, r3
  0x8065eb64:  add      r3, r31, r0
  0x8065eb68:  addi     r11, r11, 6
  0x8065eb6c:  stw      r8, 0x2f4(r7)
  0x8065eb70:  stw      r8, 0x2f0(r7)
  0x8065eb74:  stw      r8, 0x35c(r9)
  0x8065eb78:  stw      r8, 0x358(r9)
  0x8065eb7c:  stw      r8, 0x3b4(r10)
  0x8065eb80:  stw      r8, 0x2f4(r6)
  0x8065eb84:  stw      r8, 0x2f0(r6)
  0x8065eb88:  stw      r8, 0x364(r9)
  0x8065eb8c:  stw      r8, 0x360(r9)
  0x8065eb90:  stw      r8, 0x3b8(r10)
  0x8065eb94:  stw      r8, 0x2f4(r5)
  0x8065eb98:  stw      r8, 0x2f0(r5)
  0x8065eb9c:  stw      r8, 0x36c(r9)
  0x8065eba0:  stw      r8, 0x368(r9)
  0x8065eba4:  stw      r8, 0x3bc(r10)
