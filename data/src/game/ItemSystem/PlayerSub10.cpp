// PlayerSub10 implementation — 3 functions
#include "PlayerSub10.hpp"

// Address: 0x805818c0 — PlayerSub10_activateMushroom (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 600 bytes
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

// Address: 0x80582ffc — PlayerSub10_activateMega (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 456 bytes
/**
 * PlayerSub10_activateMega
 * @addr 0x80582ffc
 * @size 456 bytes
 * @frame 0 bytes
 * @calls 12 function(s)
 */
void PlayerSub10_activateMega(void) {
    /* r1+0xc = r3 */
    /* r4, 0  (load upper immediate) */
    /* f2 = *(f32*)(r4+0x0) */
    /* r3, 0  (load upper immediate) */
    /* r1+0x8 = r0 */
    /* f0 = *(f32*)(r3+0x0) */
    /* f1 = *(f32*)(r1+0x8) */
    /* fsubs f1, f1, f2 */
    /* fmuls f0, f1, f0 */
    /* fctiwz f0, f0 */
    /* *(f32*)(r1+0x10) = f0 */
    /* r31 = stack[0x14] */
    /* r4 = r29+0x0 */
    /* r3, 0x80c  (load upper immediate) */
    /* addi r0, r3, 0x100 */
    /* li r5, 1 */
    /* r7 = r4+0x4 */
    /* li r4, 1 */
    /* li r6, 1 */
    /* r3 = r7+0xc */
    /* and. r0, r3, r0 */
    /* if (cr0 !=) goto 0x80583064 */
    /* r0 = r7+0x4 */
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */
    /* if (cr0 !=) goto 0x80583064 */
    /* li r6, 0 */
    /* cmpwi r6, 0 */
    /* if (cr0 !=) goto 0x8058307c */
    /* r0 = r7+0x14 */
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */
    /* if (cr0 !=) goto 0x8058307c */
    /* li r4, 0 */
    /* cmpwi r4, 0 */
    /* if (cr0 !=) goto 0x80583094 */
    /* r0 = r7+0x8 */
    /* clrlwi. r0, r0, 0x1f */
    /* if (cr0 !=) goto 0x80583094 */
    /* li r5, 0 */
    /* cmpwi r5, 0 */
    /* if (cr0 !=) goto 0x8058325c */
    /* r0 = r7+0x4 */
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */
    /* if (cr0 ==) goto 0x805830b0 */
    /* cmpwi r30, 0 */
    /* if (cr0 ==) goto 0x8058325c */
    /* r3 = r29 */
    /* 0x80590aa0() */
    /* r4, 0  (load upper immediate) */
    /* rlwinm r0, r3, 2, 0x16, 0x1d */
    /* r3 = r4+0x0 */
    /* r3 = r3+0x68 */
    /* lwzx r3, r3, r0 */
    /* 0x806a5d28() */
    /* r3 = r29 */
    /* 0x805907d8() */
    /* 0x80708a70() */
    /* r0 = r29+0x118 */
    /* li r4, 0 */
    /* clrlwi. r0, r0, 0x1f */
    /* if (cr0 ==) goto 0x805830fc */
    /* r0 = r29+0x10c */
    /* extsh r3, r31 */
    /* cmpw r3, r0 */
    /* if (cr0 <=) goto 0x8058311c */
    /* r0 = r29+0x118 */
    /* r3, 0  (load upper immediate) */
    /* sth r31, 0x10c(r29) */
    /* li r4, 1 */
    /* ori r0, r0, 1 */
    /* sth r0, 0x118(r29) */
    /* f0 = *(f32*)(r3+0x0) */
    /* *(f32*)(r29+0x124) = f0 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80583194 */
    /* r4 = r29+0x0 */
    /* r3 = r29 */
    /* r4 = r4+0x4 */
    /* r0 = r4+0x4 */
    /* oris r0, r0, 0x10 */
    /* r4+0x4 = r0 */
    /* f1 = *(f32*)(r29+0x124) */
    /* 0x80590e84() */
    /* r3 = r29 */
    /* li r4, 6 */
    /* 0x805907f4() */
    /* r3 = r29 */
    /* 0x80590aa0() */
    /* r4, 0  (load upper immediate) */
    /* rlwinm r0, r3, 2, 0x16, 0x1d */
    /* r3 = r4+0x0 */
    /* clrlwi r4, r31, 0x10 */
    /* r3 = r3+0x68 */
    /* lwzx r3, r3, r0 */
    /* 0x806a5ea4() */
    /* r3 = r29 */
    /* 0x80590a84() */
    /* 0x807cbb60() */
    /* r3 = r29 */
    /* li r4, 4 */
    /* li r5, 0 */
    /* li r6, 1 */
    /* 0x80591088() */
    /* r4 = r29+0x0 */
    /* r3, 0  (load upper immediate) */
    /* f1 = *(f32*)(r3+0x0) */
    /* r3 = r29 */
    /* r6 = r4+0x4 */
    /* li r4, 5 */
    /* li r5, 1 */
    /* r0 = r6+0x8 */
    /* oris r0, r0, 0x10 */
    /* r6+0x8 = r0 */
    /* sth r31, 0x102(r29) */
    /* 0x80590460() */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80582ffc: 90 61 00 0c              stw      r3, 0xc(r1) */
/* 0x80583000: 3c 80 00 00              lis      r4, 0 */
/* 0x80583004: c8 44 00 00              lfd      f2, 0(r4) */
/* 0x80583008: 3c 60 00 00              lis      r3, 0 */
/* 0x8058300c: 90 01 00 08              stw      r0, 8(r1) */
/* 0x80583010: c0 03 00 00              lfs      f0, 0(r3) */
/* 0x80583014: c8 21 00 08              lfd      f1, 8(r1) */
/* 0x80583018: ec 21 10 28              fsubs    f1, f1, f2 */
/* 0x8058301c: ec 01 00 32              fmuls    f0, f1, f0 */
/* 0x80583020: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x80583024: d8 01 00 10              stfd     f0, 0x10(r1) */
/* 0x80583028: 83 e1 00 14              lwz      r31, 0x14(r1) */
/* 0x8058302c: 80 9d 00 00              lwz      r4, 0(r29) */
/* 0x80583030: 3c 60 08 0c              lis      r3, 0x80c */
/* 0x80583034: 38 03 01 00              addi     r0, r3, 0x100 */
/* 0x80583038: 38 a0 00 01              li       r5, 1 */
/* 0x8058303c: 80 e4 00 04              lwz      r7, 4(r4) */
/* 0x80583040: 38 80 00 01              li       r4, 1 */
/* 0x80583044: 38 c0 00 01              li       r6, 1 */
/* 0x80583048: 80 67 00 0c              lwz      r3, 0xc(r7) */
/* 0x8058304c: 7c 60 00 39              and.     r0, r3, r0 */
/* 0x80583050: 40 82 00 14              bne      0x80583064 */
/* 0x80583054: 80 07 00 04              lwz      r0, 4(r7) */
/* 0x80583058: 54 00 06 f7              rlwinm.  r0, r0, 0, 0x1b, 0x1b */
/* 0x8058305c: 40 82 00 08              bne      0x80583064 */
/* 0x80583060: 38 c0 00 00              li       r6, 0 */
/* 0x80583064: 2c 06 00 00              cmpwi    r6, 0 */
/* 0x80583068: 40 82 00 14              bne      0x8058307c */
/* 0x8058306c: 80 07 00 14              lwz      r0, 0x14(r7) */
/* 0x80583070: 54 00 06 31              rlwinm.  r0, r0, 0, 0x18, 0x18 */
/* 0x80583074: 40 82 00 08              bne      0x8058307c */
/* 0x80583078: 38 80 00 00              li       r4, 0 */
/* 0x8058307c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80583080: 40 82 00 14              bne      0x80583094 */
/* 0x80583084: 80 07 00 08              lwz      r0, 8(r7) */
/* 0x80583088: 54 00 07 ff              clrlwi.  r0, r0, 0x1f */
/* 0x8058308c: 40 82 00 08              bne      0x80583094 */
/* 0x80583090: 38 a0 00 00              li       r5, 0 */
/* 0x80583094: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x80583098: 40 82 01 c4              bne      0x8058325c */
/* 0x8058309c: 80 07 00 04              lwz      r0, 4(r7) */
/* 0x805830a0: 54 00 07 bd              rlwinm.  r0, r0, 0, 0x1e, 0x1e */
/* 0x805830a4: 41 82 00 0c              beq      0x805830b0 */
/* 0x805830a8: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x805830ac: 41 82 01 b0              beq      0x8058325c */
/* 0x805830b0: 7f a3 eb 78              mr       r3, r29 */
/* 0x805830b4: 48 00 d9 ed              bl       0x80590aa0 */
/* 0x805830b8: 3c 80 00 00              lis      r4, 0 */
/* 0x805830bc: 54 60 15 ba              rlwinm   r0, r3, 2, 0x16, 0x1d */
/* 0x805830c0: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x805830c4: 80 63 00 68              lwz      r3, 0x68(r3) */
/* 0x805830c8: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x805830cc: 48 12 2c 5d              bl       0x806a5d28 */
/* 0x805830d0: 7f a3 eb 78              mr       r3, r29 */
/* 0x805830d4: 48 00 d7 05              bl       0x805907d8 */
/* 0x805830d8: 48 18 59 99              bl       0x80708a70 */
/* 0x805830dc: a0 1d 01 18              lhz      r0, 0x118(r29) */
/* 0x805830e0: 38 80 00 00              li       r4, 0 */
/* 0x805830e4: 54 00 07 ff              clrlwi.  r0, r0, 0x1f */
/* 0x805830e8: 41 82 00 14              beq      0x805830fc */
/* 0x805830ec: a8 1d 01 0c              lha      r0, 0x10c(r29) */
/* 0x805830f0: 7f e3 07 34              extsh    r3, r31 */
/* 0x805830f4: 7c 03 00 00              cmpw     r3, r0 */
/* 0x805830f8: 40 81 00 24              ble      0x8058311c */
/* 0x805830fc: a0 1d 01 18              lhz      r0, 0x118(r29) */
/* 0x80583100: 3c 60 00 00              lis      r3, 0 */
/* 0x80583104: b3 fd 01 0c              sth      r31, 0x10c(r29) */
/* 0x80583108: 38 80 00 01              li       r4, 1 */
/* 0x8058310c: 60 00 00 01              ori      r0, r0, 1 */
/* 0x80583110: b0 1d 01 18              sth      r0, 0x118(r29) */
/* 0x80583114: c0 03 00 00              lfs      f0, 0(r3) */
/* 0x80583118: d0 1d 01 24              stfs     f0, 0x124(r29) */
/* 0x8058311c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80583120: 41 82 00 74              beq      0x80583194 */
/* 0x80583124: 80 9d 00 00              lwz      r4, 0(r29) */
/* 0x80583128: 7f a3 eb 78              mr       r3, r29 */
/* 0x8058312c: 80 84 00 04              lwz      r4, 4(r4) */
/* 0x80583130: 80 04 00 04              lwz      r0, 4(r4) */
/* 0x80583134: 64 00 00 10              oris     r0, r0, 0x10 */
/* 0x80583138: 90 04 00 04              stw      r0, 4(r4) */
/* 0x8058313c: c0 3d 01 24              lfs      f1, 0x124(r29) */
/* 0x80583140: 48 00 dd 45              bl       0x80590e84 */
/* 0x80583144: 7f a3 eb 78              mr       r3, r29 */
/* 0x80583148: 38 80 00 06              li       r4, 6 */
/* 0x8058314c: 48 00 d6 a9              bl       0x805907f4 */
/* 0x80583150: 7f a3 eb 78              mr       r3, r29 */
/* 0x80583154: 48 00 d9 4d              bl       0x80590aa0 */
/* 0x80583158: 3c 80 00 00              lis      r4, 0 */
/* 0x8058315c: 54 60 15 ba              rlwinm   r0, r3, 2, 0x16, 0x1d */
/* 0x80583160: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80583164: 57 e4 04 3e              clrlwi   r4, r31, 0x10 */
/* 0x80583168: 80 63 00 68              lwz      r3, 0x68(r3) */
/* 0x8058316c: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80583170: 48 12 2d 35              bl       0x806a5ea4 */
/* 0x80583174: 7f a3 eb 78              mr       r3, r29 */
/* 0x80583178: 48 00 d9 0d              bl       0x80590a84 */
/* 0x8058317c: 48 24 89 e5              bl       0x807cbb60 */
/* 0x80583180: 7f a3 eb 78              mr       r3, r29 */
/* 0x80583184: 38 80 00 04              li       r4, 4 */
/* 0x80583188: 38 a0 00 00              li       r5, 0 */
/* 0x8058318c: 38 c0 00 01              li       r6, 1 */
/* 0x80583190: 48 00 de f9              bl       0x80591088 */
/* 0x80583194: 80 9d 00 00              lwz      r4, 0(r29) */
/* 0x80583198: 3c 60 00 00              lis      r3, 0 */
/* 0x8058319c: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x805831a0: 7f a3 eb 78              mr       r3, r29 */
/* 0x805831a4: 80 c4 00 04              lwz      r6, 4(r4) */
/* 0x805831a8: 38 80 00 05              li       r4, 5 */
/* 0x805831ac: 38 a0 00 01              li       r5, 1 */
/* 0x805831b0: 80 06 00 08              lwz      r0, 8(r6) */
/* 0x805831b4: 64 00 00 10              oris     r0, r0, 0x10 */
/* 0x805831b8: 90 06 00 08              stw      r0, 8(r6) */
/* 0x805831bc: b3 fd 01 02              sth      r31, 0x102(r29) */
/* 0x805831c0: 48 00 d2 a1              bl       0x80590460 */
#endif


/* === DISASSEMBLY === */


  0x80582ffc:  stw      r3, 0xc(r1)
  0x80583000:  lis      r4, 0
  0x80583004:  lfd      f2, 0(r4)
  0x80583008:  lis      r3, 0
  0x8058300c:  stw      r0, 8(r1)
  0x80583010:  lfs      f0, 0(r3)
  0x80583014:  lfd      f1, 8(r1)
  0x80583018:  fsubs    f1, f1, f2
  0x8058301c:  fmuls    f0, f1, f0
  0x80583020:  fctiwz   f0, f0
  0x80583024:  stfd     f0, 0x10(r1)
  0x80583028:  lwz      r31, 0x14(r1)
  0x8058302c:  lwz      r4, 0(r29)
  0x80583030:  lis      r3, 0x80c
  0x80583034:  addi     r0, r3, 0x100
  0x80583038:  li       r5, 1
  0x8058303c:  lwz      r7, 4(r4)
  0x80583040:  li       r4, 1
  0x80583044:  li       r6, 1
  0x80583048:  lwz      r3, 0xc(r7)
  0x8058304c:  and.     r0, r3, r0
  0x80583050:  bne      0x80583064
  0x80583054:  lwz      r0, 4(r7)
  0x80583058:  rlwinm.  r0, r0, 0, 0x1b, 0x1b
  0x8058305c:  bne      0x80583064
  0x80583060:  li       r6, 0
  0x80583064:  cmpwi    r6, 0
  0x80583068:  bne      0x8058307c
  0x8058306c:  lwz      r0, 0x14(r7)
  0x80583070:  rlwinm.  r0, r0, 0, 0x18, 0x18
  0x80583074:  bne      0x8058307c
  0x80583078:  li       r4, 0
  0x8058307c:  cmpwi    r4, 0
  0x80583080:  bne      0x80583094
  0x80583084:  lwz      r0, 8(r7)
  0x80583088:  clrlwi.  r0, r0, 0x1f
  0x8058308c:  bne      0x80583094
  0x80583090:  li       r5, 0
  0x80583094:  cmpwi    r5, 0
  0x80583098:  bne      0x8058325c
  0x8058309c:  lwz      r0, 4(r7)
  0x805830a0:  rlwinm.  r0, r0, 0, 0x1e, 0x1e
  0x805830a4:  beq      0x805830b0
  0x805830a8:  cmpwi    r30, 0
  0x805830ac:  beq      0x8058325c
  0x805830b0:  mr       r3, r29
  0x805830b4:  bl       0x80590aa0
  0x805830b8:  lis      r4, 0
  0x805830bc:  rlwinm   r0, r3, 2, 0x16, 0x1d
  0x805830c0:  lwz      r3, 0(r4)
  0x805830c4:  lwz      r3, 0x68(r3)
  0x805830c8:  lwzx     r3, r3, r0
  0x805830cc:  bl       0x806a5d28
  0x805830d0:  mr       r3, r29
  0x805830d4:  bl       0x805907d8
  0x805830d8:  bl       0x80708a70
  0x805830dc:  lhz      r0, 0x118(r29)
  0x805830e0:  li       r4, 0
  0x805830e4:  clrlwi.  r0, r0, 0x1f
  0x805830e8:  beq      0x805830fc
  0x805830ec:  lha      r0, 0x10c(r29)
  0x805830f0:  extsh    r3, r31
  0x805830f4:  cmpw     r3, r0
  0x805830f8:  ble      0x8058311c
  0x805830fc:  lhz      r0, 0x118(r29)
  0x80583100:  lis      r3, 0
  0x80583104:  sth      r31, 0x10c(r29)
  0x80583108:  li       r4, 1
  0x8058310c:  ori      r0, r0, 1
  0x80583110:  sth      r0, 0x118(r29)
  0x80583114:  lfs      f0, 0(r3)
  0x80583118:  stfs     f0, 0x124(r29)
  0x8058311c:  cmpwi    r4, 0
  0x80583120:  beq      0x80583194
  0x80583124:  lwz      r4, 0(r29)
  0x80583128:  mr       r3, r29
  0x8058312c:  lwz      r4, 4(r4)
  0x80583130:  lwz      r0, 4(r4)
  0x80583134:  oris     r0, r0, 0x10
  0x80583138:  stw      r0, 4(r4)
  0x8058313c:  lfs      f1, 0x124(r29)
  0x80583140:  bl       0x80590e84
  0x80583144:  mr       r3, r29
  0x80583148:  li       r4, 6
  0x8058314c:  bl       0x805907f4
  0x80583150:  mr       r3, r29
  0x80583154:  bl       0x80590aa0
  0x80583158:  lis      r4, 0
  0x8058315c:  rlwinm   r0, r3, 2, 0x16, 0x1d
  0x80583160:  lwz      r3, 0(r4)
  0x80583164:  clrlwi   r4, r31, 0x10
  0x80583168:  lwz      r3, 0x68(r3)
  0x8058316c:  lwzx     r3, r3, r0
  0x80583170:  bl       0x806a5ea4
  0x80583174:  mr       r3, r29
  0x80583178:  bl       0x80590a84
  0x8058317c:  bl       0x807cbb60
  0x80583180:  mr       r3, r29
  0x80583184:  li       r4, 4
  0x80583188:  li       r5, 0
  0x8058318c:  li       r6, 1
  0x80583190:  bl       0x80591088
  0x80583194:  lwz      r4, 0(r29)
  0x80583198:  lis      r3, 0
  0x8058319c:  lfs      f1, 0(r3)
  0x805831a0:  mr       r3, r29
  0x805831a4:  lwz      r6, 4(r4)
  0x805831a8:  li       r4, 5
  0x805831ac:  li       r5, 1
  0x805831b0:  lwz      r0, 8(r6)
  0x805831b4:  oris     r0, r0, 0x10
  0x805831b8:  stw      r0, 8(r6)
  0x805831bc:  sth      r31, 0x102(r29)
  0x805831c0:  bl       0x80590460

// Address: 0x80587d94 — PlayerSub10_activateBullet (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 344 bytes
/**
 * PlayerSub10_activateBullet
 * @addr 0x80587d94
 * @size 344 bytes
 * @frame 160 bytes
 */
void PlayerSub10_activateBullet(void) {
    /* r31 = stack[0xc] */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80587d94: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80587d98: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80587d9c: 7c 08 03 a6              mtlr     r0 */
/* 0x80587da0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80587da4: 4e 80 00 20              blr       */
/* 0x80587da8: 48 00 06 90              b        0x80588438 */
/* 0x80587dac: 94 21 ff 60              stwu     r1, -0xa0(r1) */
/* 0x80587db0: 7c 08 02 a6              mflr     r0 */
/* 0x80587db4: 90 01 00 a4              stw      r0, 0xa4(r1) */
/* 0x80587db8: db e1 00 90              stfd     f31, 0x90(r1) */
/* 0x80587dbc: f3 e1 00 98              xscmpgedp vs31, f1, f0 */
/* 0x80587dc0: db c1 00 80              stfd     f30, 0x80(r1) */
/* 0x80587dc4: f3 c1 00 88              xsmsubasp f30, f1, f0 */
/* 0x80587dc8: db a1 00 70              stfd     f29, 0x70(r1) */
/* 0x80587dcc: f3 a1 00 78              xxsel    vs29, vs1, vs0, v1 */
/* 0x80587dd0: db 81 00 60              stfd     f28, 0x60(r1) */
#endif


/* === DISASSEMBLY === */


  0x80587d94:  lwz      r31, 0xc(r1)
  0x80587d98:  lwz      r0, 0x14(r1)
  0x80587d9c:  mtlr     r0
  0x80587da0:  addi     r1, r1, 0x10
  0x80587da4:  blr      
  0x80587da8:  b        0x80588438
  0x80587dac:  stwu     r1, -0xa0(r1)
  0x80587db0:  mflr     r0
  0x80587db4:  stw      r0, 0xa4(r1)
  0x80587db8:  stfd     f31, 0x90(r1)
  0x80587dbc:  xscmpgedp vs31, f1, f0
  0x80587dc0:  stfd     f30, 0x80(r1)
  0x80587dc4:  xsmsubasp f30, f1, f0
  0x80587dc8:  stfd     f29, 0x70(r1)
  0x80587dcc:  xxsel    vs29, vs1, vs0, v1
  0x80587dd0:  stfd     f28, 0x60(r1)
