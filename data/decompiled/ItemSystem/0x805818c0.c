/**
 * PlayerSub10_activateMushroom
 * @addr 0x805818c0
 * @size 600 bytes
 * @frame 16 bytes
 * @calls 8 function(s)
 */
void PlayerSub10_activateMushroom(void) {
    /* if (cr0 !=) goto 0x80581958 */
    /* r0 = r3+0x4 */
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */
    /* if (cr0 !=) goto 0x80581958 */
    /* r0 = r3+0xc */
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */
    /* if (cr0 !=) goto 0x80581958 */
    /* r4 = r31+0x1ac */
    /* r3, 0  (load upper immediate) */
    /* addi r0, r4, 1 */
    /* sth r0, 0x1ac(r31) */
    /* extsh r4, r0 */
    /* r0 = r3+0x0 */
    /* cmpw r4, r0 */
    /* if (cr0 <) goto 0x80581958 */
    /* r3 = r5+0x4 */
    /* r0 = r3+0xc */
    /* rlwinm. r0, r0, 0, 0xc, 0xd */
    /* if (cr0 !=) goto 0x8058191c */
    /* r3 = r5+0x4 */
    /* r0 = r3+0xc */
    /* oris r0, r0, 4 */
    /* r3+0xc = r0 */
    /* r3 = r31 */
    /* li r4, 6 */
    /* 0x80591838() */
    /* li r0, 0 */
    /* sth r0, 0x1ac(r31) */
    /* r3 = r31+0x0 */
    /* r3 = r3+0x4 */
    /* r0 = r3+0x14 */
    /* rlwinm r0, r0, 0, 0x10, 0xe */
    /* r3+0x14 = r0 */
    /* r3 = r31+0x0 */
    /* r3 = r3+0x4 */
    /* r0 = r3+0x14 */
    /* oris r0, r0, 2 */
    /* r3+0x14 = r0 */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* r30 = stack[0x8] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805818c0: 40 82 00 98              bne      0x80581958 */
/* 0x805818c4: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x805818c8: 54 00 06 f7              rlwinm.  r0, r0, 0, 0x1b, 0x1b */
/* 0x805818cc: 40 82 00 8c              bne      0x80581958 */
/* 0x805818d0: 80 03 00 0c              lwz      r0, 0xc(r3) */
/* 0x805818d4: 54 00 04 65              rlwinm.  r0, r0, 0, 0x11, 0x12 */
/* 0x805818d8: 40 82 00 80              bne      0x80581958 */
/* 0x805818dc: a8 9f 01 ac              lha      r4, 0x1ac(r31) */
/* 0x805818e0: 3c 60 00 00              lis      r3, 0 */
/* 0x805818e4: 38 04 00 01              addi     r0, r4, 1 */
/* 0x805818e8: b0 1f 01 ac              sth      r0, 0x1ac(r31) */
/* 0x805818ec: 7c 04 07 34              extsh    r4, r0 */
/* 0x805818f0: a8 03 00 00              lha      r0, 0(r3) */
/* 0x805818f4: 7c 04 00 00              cmpw     r4, r0 */
/* 0x805818f8: 41 80 00 60              blt      0x80581958 */
/* 0x805818fc: 80 65 00 04              lwz      r3, 4(r5) */
/* 0x80581900: 80 03 00 0c              lwz      r0, 0xc(r3) */
/* 0x80581904: 54 00 03 1b              rlwinm.  r0, r0, 0, 0xc, 0xd */
/* 0x80581908: 40 82 00 14              bne      0x8058191c */
/* 0x8058190c: 80 65 00 04              lwz      r3, 4(r5) */
/* 0x80581910: 80 03 00 0c              lwz      r0, 0xc(r3) */
/* 0x80581914: 64 00 00 04              oris     r0, r0, 4 */
/* 0x80581918: 90 03 00 0c              stw      r0, 0xc(r3) */
/* 0x8058191c: 7f e3 fb 78              mr       r3, r31 */
/* 0x80581920: 38 80 00 06              li       r4, 6 */
/* 0x80581924: 48 00 ff 15              bl       0x80591838 */
/* 0x80581928: 38 00 00 00              li       r0, 0 */
/* 0x8058192c: b0 1f 01 ac              sth      r0, 0x1ac(r31) */
/* 0x80581930: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80581934: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x80581938: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x8058193c: 54 00 04 1c              rlwinm   r0, r0, 0, 0x10, 0xe */
/* 0x80581940: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x80581944: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80581948: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x8058194c: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x80581950: 64 00 00 02              oris     r0, r0, 2 */
/* 0x80581954: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x80581958: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8058195c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80581960: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x80581964: 7c 08 03 a6              mtlr     r0 */
/* 0x80581968: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8058196c: 4e 80 00 20              blr       */
/* 0x80581970: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80581974: 7c 08 02 a6              mflr     r0 */
/* 0x80581978: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8058197c: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80581980: 80 84 00 04              lwz      r4, 4(r4) */
/* 0x80581984: 80 04 00 08              lwz      r0, 8(r4) */
/* 0x80581988: 54 00 06 2c              rlwinm   r0, r0, 0, 0x18, 0x16 */
/* 0x8058198c: 90 04 00 08              stw      r0, 8(r4) */
/* 0x80581990: 48 00 f7 41              bl       0x805910d0 */
/* 0x80581994: 38 80 00 01              li       r4, 1 */
/* 0x80581998: 4b fe ae 51              bl       0x8056c7e8 */
/* 0x8058199c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x805819a0: 7c 08 03 a6              mtlr     r0 */
/* 0x805819a4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x805819a8: 4e 80 00 20              blr       */
/* 0x805819ac: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x805819b0: 7c 08 02 a6              mflr     r0 */
/* 0x805819b4: 3c 80 00 00              lis      r4, 0 */
/* 0x805819b8: 38 a0 00 00              li       r5, 0 */
/* 0x805819bc: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x805819c0: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x805819c4: 80 84 0b 70              lwz      r4, 0xb70(r4) */
/* 0x805819c8: 38 04 ff fd              addi     r0, r4, -3 */
/* 0x805819cc: 28 00 00 07              cmplwi   r0, 7 */
/* 0x805819d0: 41 81 00 18              bgt      0x805819e8 */
/* 0x805819d4: 38 80 00 01              li       r4, 1 */
/* 0x805819d8: 7c 80 00 30              slw      r0, r4, r0 */
/* 0x805819dc: 70 00 00 c1              andi.    r0, r0, 0xc1 */
/* 0x805819e0: 41 82 00 08              beq      0x805819e8 */
/* 0x805819e4: 7c 85 23 78              mr       r5, r4 */
/* 0x805819e8: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x805819ec: 41 82 00 2c              beq      0x80581a18 */
/* 0x805819f0: 80 a3 00 00              lwz      r5, 0(r3) */
/* 0x805819f4: 3c 80 00 00              lis      r4, 0 */
/* 0x805819f8: 80 a5 00 04              lwz      r5, 4(r5) */
/* 0x805819fc: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x80581a00: 60 00 01 00              ori      r0, r0, 0x100 */
/* 0x80581a04: 90 05 00 08              stw      r0, 8(r5) */
/* 0x80581a08: a8 04 00 00              lha      r0, 0(r4) */
/* 0x80581a0c: b0 03 01 a8              sth      r0, 0x1a8(r3) */
/* 0x80581a10: 48 00 f6 c1              bl       0x805910d0 */
/* 0x80581a14: 4b fe ad c5              bl       0x8056c7d8 */
/* 0x80581a18: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80581a1c: 7c 08 03 a6              mtlr     r0 */
/* 0x80581a20: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80581a24: 4e 80 00 20              blr       */
/* 0x80581a28: 4e 80 00 20              blr       */
/* 0x80581a2c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80581a30: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x80581a34: 80 03 00 0c              lwz      r0, 0xc(r3) */
/* 0x80581a38: 64 00 20 00              oris     r0, r0, 0x2000 */
/* 0x80581a3c: 90 03 00 0c              stw      r0, 0xc(r3) */
/* 0x80581a40: 4e 80 00 20              blr       */
/* 0x80581a44: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80581a48: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x80581a4c: 80 03 00 0c              lwz      r0, 0xc(r3) */
/* 0x80581a50: 54 00 00 c2              rlwinm   r0, r0, 0, 3, 1 */
/* 0x80581a54: 90 03 00 0c              stw      r0, 0xc(r3) */
/* 0x80581a58: 4e 80 00 20              blr       */
/* 0x80581a5c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80581a60: 7c 08 02 a6              mflr     r0 */
/* 0x80581a64: 38 c0 00 01              li       r6, 1 */
/* 0x80581a68: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80581a6c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80581a70: 7c 9f 23 78              mr       r31, r4 */
/* 0x80581a74: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x80581a78: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80581a7c: 80 e3 00 00              lwz      r7, 0(r3) */
/* 0x80581a80: 80 a7 00 04              lwz      r5, 4(r7) */
/* 0x80581a84: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x80581a88: 70 00 01 02              andi.    r0, r0, 0x102 */
/* 0x80581a8c: 40 82 00 1c              bne      0x80581aa8 */
/* 0x80581a90: 3c 80 02 0c              lis      r4, 0x20c */
/* 0x80581a94: 80 a5 00 0c              lwz      r5, 0xc(r5) */
/* 0x80581a98: 38 04 60 00              addi     r0, r4, 0x6000 */
/* 0x80581a9c: 7c a0 00 39              and.     r0, r5, r0 */
/* 0x80581aa0: 40 82 00 08              bne      0x80581aa8 */
/* 0x80581aa4: 38 c0 00 00              li       r6, 0 */
/* 0x80581aa8: 2c 06 00 00              cmpwi    r6, 0 */
/* 0x80581aac: 40 82 00 5c              bne      0x80581b08 */
/* 0x80581ab0: 81 07 00 04              lwz      r8, 4(r7) */
/* 0x80581ab4: 3c a0 00 00              lis      r5, 0 */
/* 0x80581ab8: c0 25 00 00              lfs      f1, 0(r5) */
/* 0x80581abc: 38 00 00 01              li       r0, 1 */
/* 0x80581ac0: 80 e8 00 0c              lwz      r7, 0xc(r8) */
/* 0x80581ac4: 3c c0 00 00              lis      r6, 0 */
/* 0x80581ac8: 38 80 00 1f              li       r4, 0x1f */
/* 0x80581acc: 38 a0 00 01              li       r5, 1 */
/* 0x80581ad0: 64 e7 10 00              oris     r7, r7, 0x1000 */
/* 0x80581ad4: 90 e8 00 0c              stw      r7, 0xc(r8) */
/* 0x80581ad8: 98 03 01 90              stb      r0, 0x190(r3) */
/* 0x80581adc: a8 06 00 00              lha      r0, 0(r6) */
/* 0x80581ae0: b0 03 01 8e              sth      r0, 0x18e(r3) */
/* 0x80581ae4: 7f c3 f3 78              mr       r3, r30 */
/* 0x80581ae8: 48 00 e9 79              bl       0x80590460 */
/* 0x80581aec: 7f c3 f3 78              mr       r3, r30 */
/* 0x80581af0: 38 80 00 15              li       r4, 0x15 */
/* 0x80581af4: 48 00 fd 11              bl       0x80591804 */
/* 0x80581af8: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x80581afc: 40 82 00 0c              bne      0x80581b08 */
/* 0x80581b00: 7f c3 f3 78              mr       r3, r30 */
/* 0x80581b04: 48 00 fe 21              bl       0x80591924 */
/* 0x80581b08: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80581b0c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80581b10: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x80581b14: 7c 08 03 a6              mtlr     r0 */
#endif


/* === DISASSEMBLY === */

; Function: PlayerSub10_activateMushroom
; Demangled: PlayerSub10_activateMushroom
; Address: 0x805818c0  (.text+0x6f024)
; Size: 600 bytes

  0x805818c0:  bne      0x80581958
  0x805818c4:  lwz      r0, 4(r3)
  0x805818c8:  rlwinm.  r0, r0, 0, 0x1b, 0x1b
  0x805818cc:  bne      0x80581958
  0x805818d0:  lwz      r0, 0xc(r3)
  0x805818d4:  rlwinm.  r0, r0, 0, 0x11, 0x12
  0x805818d8:  bne      0x80581958
  0x805818dc:  lha      r4, 0x1ac(r31)
  0x805818e0:  lis      r3, 0
  0x805818e4:  addi     r0, r4, 1
  0x805818e8:  sth      r0, 0x1ac(r31)
  0x805818ec:  extsh    r4, r0
  0x805818f0:  lha      r0, 0(r3)
  0x805818f4:  cmpw     r4, r0
  0x805818f8:  blt      0x80581958
  0x805818fc:  lwz      r3, 4(r5)
  0x80581900:  lwz      r0, 0xc(r3)
  0x80581904:  rlwinm.  r0, r0, 0, 0xc, 0xd
  0x80581908:  bne      0x8058191c
  0x8058190c:  lwz      r3, 4(r5)
  0x80581910:  lwz      r0, 0xc(r3)
  0x80581914:  oris     r0, r0, 4
  0x80581918:  stw      r0, 0xc(r3)
  0x8058191c:  mr       r3, r31
  0x80581920:  li       r4, 6
  0x80581924:  bl       0x80591838
  0x80581928:  li       r0, 0
  0x8058192c:  sth      r0, 0x1ac(r31)
  0x80581930:  lwz      r3, 0(r31)
  0x80581934:  lwz      r3, 4(r3)
  0x80581938:  lwz      r0, 0x14(r3)
  0x8058193c:  rlwinm   r0, r0, 0, 0x10, 0xe
  0x80581940:  stw      r0, 0x14(r3)
  0x80581944:  lwz      r3, 0(r31)
  0x80581948:  lwz      r3, 4(r3)
  0x8058194c:  lwz      r0, 0x14(r3)
  0x80581950:  oris     r0, r0, 2
  0x80581954:  stw      r0, 0x14(r3)
  0x80581958:  lwz      r0, 0x14(r1)
  0x8058195c:  lwz      r31, 0xc(r1)
  0x80581960:  lwz      r30, 8(r1)
  0x80581964:  mtlr     r0
  0x80581968:  addi     r1, r1, 0x10
  0x8058196c:  blr      
  0x80581970:  stwu     r1, -0x10(r1)
  0x80581974:  mflr     r0
  0x80581978:  stw      r0, 0x14(r1)
  0x8058197c:  lwz      r4, 0(r3)
  0x80581980:  lwz      r4, 4(r4)
  0x80581984:  lwz      r0, 8(r4)
  0x80581988:  rlwinm   r0, r0, 0, 0x18, 0x16
  0x8058198c:  stw      r0, 8(r4)
  0x80581990:  bl       0x805910d0
  0x80581994:  li       r4, 1
  0x80581998:  bl       0x8056c7e8
  0x8058199c:  lwz      r0, 0x14(r1)
  0x805819a0:  mtlr     r0
  0x805819a4:  addi     r1, r1, 0x10
  0x805819a8:  blr      
  0x805819ac:  stwu     r1, -0x10(r1)
  0x805819b0:  mflr     r0
  0x805819b4:  lis      r4, 0
  0x805819b8:  li       r5, 0
  0x805819bc:  stw      r0, 0x14(r1)
  0x805819c0:  lwz      r4, 0(r4)
  0x805819c4:  lwz      r4, 0xb70(r4)
  0x805819c8:  addi     r0, r4, -3
  0x805819cc:  cmplwi   r0, 7
  0x805819d0:  bgt      0x805819e8
  0x805819d4:  li       r4, 1
  0x805819d8:  slw      r0, r4, r0
  0x805819dc:  andi.    r0, r0, 0xc1
  0x805819e0:  beq      0x805819e8
  0x805819e4:  mr       r5, r4
  0x805819e8:  cmpwi    r5, 0
  0x805819ec:  beq      0x80581a18
  0x805819f0:  lwz      r5, 0(r3)
  0x805819f4:  lis      r4, 0
  0x805819f8:  lwz      r5, 4(r5)
  0x805819fc:  lwz      r0, 8(r5)
  0x80581a00:  ori      r0, r0, 0x100
  0x80581a04:  stw      r0, 8(r5)
  0x80581a08:  lha      r0, 0(r4)
  0x80581a0c:  sth      r0, 0x1a8(r3)
  0x80581a10:  bl       0x805910d0
  0x80581a14:  bl       0x8056c7d8
  0x80581a18:  lwz      r0, 0x14(r1)
  0x80581a1c:  mtlr     r0
  0x80581a20:  addi     r1, r1, 0x10
  0x80581a24:  blr      
  0x80581a28:  blr      
  0x80581a2c:  lwz      r3, 0(r3)
  0x80581a30:  lwz      r3, 4(r3)
  0x80581a34:  lwz      r0, 0xc(r3)
  0x80581a38:  oris     r0, r0, 0x2000
  0x80581a3c:  stw      r0, 0xc(r3)
  0x80581a40:  blr      
  0x80581a44:  lwz      r3, 0(r3)
  0x80581a48:  lwz      r3, 4(r3)
  0x80581a4c:  lwz      r0, 0xc(r3)
  0x80581a50:  rlwinm   r0, r0, 0, 3, 1
  0x80581a54:  stw      r0, 0xc(r3)
  0x80581a58:  blr      
  0x80581a5c:  stwu     r1, -0x10(r1)
  0x80581a60:  mflr     r0
  0x80581a64:  li       r6, 1
  0x80581a68:  stw      r0, 0x14(r1)
  0x80581a6c:  stw      r31, 0xc(r1)
  0x80581a70:  mr       r31, r4
  0x80581a74:  stw      r30, 8(r1)
  0x80581a78:  mr       r30, r3
  0x80581a7c:  lwz      r7, 0(r3)
  0x80581a80:  lwz      r5, 4(r7)
  0x80581a84:  lwz      r0, 8(r5)
  0x80581a88:  andi.    r0, r0, 0x102
  0x80581a8c:  bne      0x80581aa8
  0x80581a90:  lis      r4, 0x20c
  0x80581a94:  lwz      r5, 0xc(r5)
  0x80581a98:  addi     r0, r4, 0x6000
  0x80581a9c:  and.     r0, r5, r0
  0x80581aa0:  bne      0x80581aa8
  0x80581aa4:  li       r6, 0
  0x80581aa8:  cmpwi    r6, 0
  0x80581aac:  bne      0x80581b08
  0x80581ab0:  lwz      r8, 4(r7)
  0x80581ab4:  lis      r5, 0
  0x80581ab8:  lfs      f1, 0(r5)
  0x80581abc:  li       r0, 1
  0x80581ac0:  lwz      r7, 0xc(r8)
  0x80581ac4:  lis      r6, 0
  0x80581ac8:  li       r4, 0x1f
  0x80581acc:  li       r5, 1
  0x80581ad0:  oris     r7, r7, 0x1000
  0x80581ad4:  stw      r7, 0xc(r8)
  0x80581ad8:  stb      r0, 0x190(r3)
  0x80581adc:  lha      r0, 0(r6)
  0x80581ae0:  sth      r0, 0x18e(r3)
  0x80581ae4:  mr       r3, r30
  0x80581ae8:  bl       0x80590460
  0x80581aec:  mr       r3, r30
  0x80581af0:  li       r4, 0x15
  0x80581af4:  bl       0x80591804
  0x80581af8:  cmpwi    r31, 0
  0x80581afc:  bne      0x80581b08
  0x80581b00:  mr       r3, r30
  0x80581b04:  bl       0x80591924
  0x80581b08:  lwz      r0, 0x14(r1)
  0x80581b0c:  lwz      r31, 0xc(r1)
  0x80581b10:  lwz      r30, 8(r1)
  0x80581b14:  mtlr     r0
