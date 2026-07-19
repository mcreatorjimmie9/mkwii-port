/**
 * RaceinfoPlayer_update
 * @addr 0x805377ec
 * @size 916 bytes
 * @frame 32 bytes
 * @calls 1 function(s)
 */
void RaceinfoPlayer_update(void) {
    /* fsubs f1, f1, f2 */
    /* fsubs f0, f0, f2 */
    /* fadds f0, f1, f0 */
    /* fctiwz f0, f0 */
    /* *(f32*)(r1+0x20) = f0 */
    /* r4 = stack[0x24] */
    /* clrlwi r0, r4, 0x10 */
    /* cmplwi r0, 0x3e7 */
    /* if (cr0 <=) goto 0x8053785c */
    /* clrlwi r3, r28, 0x18 */
    /* addi r4, r4, -0x3e8 */
    /* addi r8, r3, 1 */
    /* clrlwi r0, r8, 0x18 */
    /* clrlwi r4, r4, 0x10 */
    /* cmplwi r0, 0x3b */
    /* if (cr0 <=) goto 0x80537838 */
    /* addi r0, r8, -0x3c */
    /* li r7, 1 */
    /* clrlwi r8, r0, 0x18 */
    /* r0 = r29+0x8 */
    /* add r7, r7, r0 */
    /* clrlwi r0, r7, 0x10 */
    /* cmplwi r0, 0x3e7 */
    /* if (cr0 <=) goto 0x80537864 */
    /* li r7, 0x3e7 */
    /* li r8, 0x3b */
    /* li r4, 0x3e7 */
    /* goto 0x80537864 */
    /* clrlwi r7, r31, 0x10 */
    /* clrlwi r8, r28, 0x18 */
    /* r0 = r29+0x24 */
    /* clrlwi r3, r4, 0x10 */
    /* li r6, 0 */
    /* li r5, 0 */
    /* subf. r4, r3, r0 */
    /* if (cr0 >=) goto 0x80537884 */
    /* li r5, -1 */
    /* addi r4, r4, 0x3e8 */
    /* r0 = r29+0x22 */
    /* clrlwi r3, r8, 0x18 */
    /* subf r0, r3, r0 */
    /* add. r5, r5, r0 */
    /* if (cr0 >=) goto 0x805378a0 */
    /* li r6, -1 */
    /* addi r5, r5, 0x3c */
    /* r0 = r29+0x20 */
    /* clrlwi r3, r7, 0x10 */
    /* subf r0, r3, r0 */
    /* add. r6, r6, r0 */
    /* if (cr0 >=) goto 0x805378c0 */
    /* li r6, 0 */
    /* li r5, 0 */
    /* li r4, 0 */
    /* li r0, 1 */
    /* stb r0, 0x1a(r29) */
    /* sth r6, 0x14(r29) */
    /* stb r5, 0x16(r29) */
    /* sth r4, 0x18(r29) */
    /* goto 0x80537988 */
    /* r1+0x14 = r30 */
    /* r3, 0  (load upper immediate) */
    /* f2 = *(f32*)(r3+0x0) */
    /* li r6, 0 */
    /* r1+0xc = r5 */
    /* f1 = *(f32*)(r1+0x10) */
    /* f0 = *(f32*)(r1+0x8) */
    /* fsubs f1, f1, f2 */
    /* fsubs f0, f0, f2 */
    /* fadds f0, f1, f0 */
    /* fctiwz f0, f0 */
    /* *(f32*)(r1+0x20) = f0 */
    /* r5 = stack[0x24] */
    /* clrlwi r0, r5, 0x10 */
    /* cmplwi r0, 0x3e7 */
    /* if (cr0 <=) goto 0x80537978 */
    /* clrlwi r3, r28, 0x18 */
    /* addi r4, r5, -0x3e8 */
    /* addi r3, r3, 1 */
    /* clrlwi r0, r3, 0x18 */
    /* clrlwi r5, r4, 0x10 */
    /* cmplwi r0, 0x3b */
    /* if (cr0 <=) goto 0x80537940 */
    /* addi r0, r3, -0x3c */
    /* li r6, 1 */
    /* clrlwi r3, r0, 0x18 */
    /* r0 = r29+0x8 */
    /* add r6, r6, r0 */
    /* clrlwi r0, r6, 0x10 */
    /* cmplwi r0, 0x3e7 */
    /* if (cr0 <=) goto 0x80537960 */
    /* li r6, 0x3e7 */
    /* li r3, 0x3b */
    /* li r5, 0x3e7 */
    /* li r0, 1 */
    /* stb r0, 0x1a(r29) */
    /* sth r6, 0x14(r29) */
    /* stb r3, 0x16(r29) */
    /* sth r5, 0x18(r29) */
    /* goto 0x80537988 */
    /* stb r4, 0x1a(r29) */
    /* sth r31, 0x14(r29) */
    /* stb r28, 0x16(r29) */
    /* sth r5, 0x18(r29) */
    /* r0 = r29+0x40 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x805379a0 */
    /* r3 = r29+0x48 */
    /* addi r0, r3, 1 */
    /* r29+0x48 = r0 */
    /* r0 = stack[0x44] */
    /* r31 = stack[0x3c] */
    /* r30 = stack[0x38] */
    /* r29 = stack[0x34] */
    /* r28 = stack[0x30] */
    /* mtlr r0 */
    /* addi r1, r1, 0x40 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805377ec: ec 21 10 28              fsubs    f1, f1, f2 */
/* 0x805377f0: ec 00 10 28              fsubs    f0, f0, f2 */
/* 0x805377f4: ec 01 00 2a              fadds    f0, f1, f0 */
/* 0x805377f8: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x805377fc: d8 01 00 20              stfd     f0, 0x20(r1) */
/* 0x80537800: 80 81 00 24              lwz      r4, 0x24(r1) */
/* 0x80537804: 54 80 04 3e              clrlwi   r0, r4, 0x10 */
/* 0x80537808: 28 00 03 e7              cmplwi   r0, 0x3e7 */
/* 0x8053780c: 40 81 00 50              ble      0x8053785c */
/* 0x80537810: 57 83 06 3e              clrlwi   r3, r28, 0x18 */
/* 0x80537814: 38 84 fc 18              addi     r4, r4, -0x3e8 */
/* 0x80537818: 39 03 00 01              addi     r8, r3, 1 */
/* 0x8053781c: 55 00 06 3e              clrlwi   r0, r8, 0x18 */
/* 0x80537820: 54 84 04 3e              clrlwi   r4, r4, 0x10 */
/* 0x80537824: 28 00 00 3b              cmplwi   r0, 0x3b */
/* 0x80537828: 40 81 00 10              ble      0x80537838 */
/* 0x8053782c: 38 08 ff c4              addi     r0, r8, -0x3c */
/* 0x80537830: 38 e0 00 01              li       r7, 1 */
/* 0x80537834: 54 08 06 3e              clrlwi   r8, r0, 0x18 */
/* 0x80537838: a0 1d 00 08              lhz      r0, 8(r29) */
/* 0x8053783c: 7c e7 02 14              add      r7, r7, r0 */
/* 0x80537840: 54 e0 04 3e              clrlwi   r0, r7, 0x10 */
/* 0x80537844: 28 00 03 e7              cmplwi   r0, 0x3e7 */
/* 0x80537848: 40 81 00 1c              ble      0x80537864 */
/* 0x8053784c: 38 e0 03 e7              li       r7, 0x3e7 */
/* 0x80537850: 39 00 00 3b              li       r8, 0x3b */
/* 0x80537854: 38 80 03 e7              li       r4, 0x3e7 */
/* 0x80537858: 48 00 00 0c              b        0x80537864 */
/* 0x8053785c: 57 e7 04 3e              clrlwi   r7, r31, 0x10 */
/* 0x80537860: 57 88 06 3e              clrlwi   r8, r28, 0x18 */
/* 0x80537864: a0 1d 00 24              lhz      r0, 0x24(r29) */
/* 0x80537868: 54 83 04 3e              clrlwi   r3, r4, 0x10 */
/* 0x8053786c: 38 c0 00 00              li       r6, 0 */
/* 0x80537870: 38 a0 00 00              li       r5, 0 */
/* 0x80537874: 7c 83 00 51              subf.    r4, r3, r0 */
/* 0x80537878: 40 80 00 0c              bge      0x80537884 */
/* 0x8053787c: 38 a0 ff ff              li       r5, -1 */
/* 0x80537880: 38 84 03 e8              addi     r4, r4, 0x3e8 */
/* 0x80537884: 88 1d 00 22              lbz      r0, 0x22(r29) */
/* 0x80537888: 55 03 06 3e              clrlwi   r3, r8, 0x18 */
/* 0x8053788c: 7c 03 00 50              subf     r0, r3, r0 */
/* 0x80537890: 7c a5 02 15              add.     r5, r5, r0 */
/* 0x80537894: 40 80 00 0c              bge      0x805378a0 */
/* 0x80537898: 38 c0 ff ff              li       r6, -1 */
/* 0x8053789c: 38 a5 00 3c              addi     r5, r5, 0x3c */
/* 0x805378a0: a0 1d 00 20              lhz      r0, 0x20(r29) */
/* 0x805378a4: 54 e3 04 3e              clrlwi   r3, r7, 0x10 */
/* 0x805378a8: 7c 03 00 50              subf     r0, r3, r0 */
/* 0x805378ac: 7c c6 02 15              add.     r6, r6, r0 */
/* 0x805378b0: 40 80 00 10              bge      0x805378c0 */
/* 0x805378b4: 38 c0 00 00              li       r6, 0 */
/* 0x805378b8: 38 a0 00 00              li       r5, 0 */
/* 0x805378bc: 38 80 00 00              li       r4, 0 */
/* 0x805378c0: 38 00 00 01              li       r0, 1 */
/* 0x805378c4: 98 1d 00 1a              stb      r0, 0x1a(r29) */
/* 0x805378c8: b0 dd 00 14              sth      r6, 0x14(r29) */
/* 0x805378cc: 98 bd 00 16              stb      r5, 0x16(r29) */
/* 0x805378d0: b0 9d 00 18              sth      r4, 0x18(r29) */
/* 0x805378d4: 48 00 00 b4              b        0x80537988 */
/* 0x805378d8: 93 c1 00 14              stw      r30, 0x14(r1) */
/* 0x805378dc: 3c 60 00 00              lis      r3, 0 */
/* 0x805378e0: c8 43 00 00              lfd      f2, 0(r3) */
/* 0x805378e4: 38 c0 00 00              li       r6, 0 */
/* 0x805378e8: 90 a1 00 0c              stw      r5, 0xc(r1) */
/* 0x805378ec: c8 21 00 10              lfd      f1, 0x10(r1) */
/* 0x805378f0: c8 01 00 08              lfd      f0, 8(r1) */
/* 0x805378f4: ec 21 10 28              fsubs    f1, f1, f2 */
/* 0x805378f8: ec 00 10 28              fsubs    f0, f0, f2 */
/* 0x805378fc: ec 01 00 2a              fadds    f0, f1, f0 */
/* 0x80537900: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x80537904: d8 01 00 20              stfd     f0, 0x20(r1) */
/* 0x80537908: 80 a1 00 24              lwz      r5, 0x24(r1) */
/* 0x8053790c: 54 a0 04 3e              clrlwi   r0, r5, 0x10 */
/* 0x80537910: 28 00 03 e7              cmplwi   r0, 0x3e7 */
/* 0x80537914: 40 81 00 64              ble      0x80537978 */
/* 0x80537918: 57 83 06 3e              clrlwi   r3, r28, 0x18 */
/* 0x8053791c: 38 85 fc 18              addi     r4, r5, -0x3e8 */
/* 0x80537920: 38 63 00 01              addi     r3, r3, 1 */
/* 0x80537924: 54 60 06 3e              clrlwi   r0, r3, 0x18 */
/* 0x80537928: 54 85 04 3e              clrlwi   r5, r4, 0x10 */
/* 0x8053792c: 28 00 00 3b              cmplwi   r0, 0x3b */
/* 0x80537930: 40 81 00 10              ble      0x80537940 */
/* 0x80537934: 38 03 ff c4              addi     r0, r3, -0x3c */
/* 0x80537938: 38 c0 00 01              li       r6, 1 */
/* 0x8053793c: 54 03 06 3e              clrlwi   r3, r0, 0x18 */
/* 0x80537940: a0 1d 00 08              lhz      r0, 8(r29) */
/* 0x80537944: 7c c6 02 14              add      r6, r6, r0 */
/* 0x80537948: 54 c0 04 3e              clrlwi   r0, r6, 0x10 */
/* 0x8053794c: 28 00 03 e7              cmplwi   r0, 0x3e7 */
/* 0x80537950: 40 81 00 10              ble      0x80537960 */
/* 0x80537954: 38 c0 03 e7              li       r6, 0x3e7 */
/* 0x80537958: 38 60 00 3b              li       r3, 0x3b */
/* 0x8053795c: 38 a0 03 e7              li       r5, 0x3e7 */
/* 0x80537960: 38 00 00 01              li       r0, 1 */
/* 0x80537964: 98 1d 00 1a              stb      r0, 0x1a(r29) */
/* 0x80537968: b0 dd 00 14              sth      r6, 0x14(r29) */
/* 0x8053796c: 98 7d 00 16              stb      r3, 0x16(r29) */
/* 0x80537970: b0 bd 00 18              sth      r5, 0x18(r29) */
/* 0x80537974: 48 00 00 14              b        0x80537988 */
/* 0x80537978: 98 9d 00 1a              stb      r4, 0x1a(r29) */
/* 0x8053797c: b3 fd 00 14              sth      r31, 0x14(r29) */
/* 0x80537980: 9b 9d 00 16              stb      r28, 0x16(r29) */
/* 0x80537984: b0 bd 00 18              sth      r5, 0x18(r29) */
/* 0x80537988: 88 1d 00 40              lbz      r0, 0x40(r29) */
/* 0x8053798c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80537990: 40 82 00 10              bne      0x805379a0 */
/* 0x80537994: 80 7d 00 48              lwz      r3, 0x48(r29) */
/* 0x80537998: 38 03 00 01              addi     r0, r3, 1 */
/* 0x8053799c: 90 1d 00 48              stw      r0, 0x48(r29) */
/* 0x805379a0: 80 01 00 44              lwz      r0, 0x44(r1) */
/* 0x805379a4: 83 e1 00 3c              lwz      r31, 0x3c(r1) */
/* 0x805379a8: 83 c1 00 38              lwz      r30, 0x38(r1) */
/* 0x805379ac: 83 a1 00 34              lwz      r29, 0x34(r1) */
/* 0x805379b0: 83 81 00 30              lwz      r28, 0x30(r1) */
/* 0x805379b4: 7c 08 03 a6              mtlr     r0 */
/* 0x805379b8: 38 21 00 40              addi     r1, r1, 0x40 */
/* 0x805379bc: 4e 80 00 20              blr       */
/* 0x805379c0: 80 a3 00 14              lwz      r5, 0x14(r3) */
/* 0x805379c4: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x805379c8: 41 82 00 50              beq      0x80537a18 */
/* 0x805379cc: a0 05 00 14              lhz      r0, 0x14(r5) */
/* 0x805379d0: b0 04 00 04              sth      r0, 4(r4) */
/* 0x805379d4: 88 05 00 16              lbz      r0, 0x16(r5) */
/* 0x805379d8: 98 04 00 06              stb      r0, 6(r4) */
/* 0x805379dc: a0 05 00 18              lhz      r0, 0x18(r5) */
/* 0x805379e0: b0 04 00 08              sth      r0, 8(r4) */
/* 0x805379e4: 88 05 00 1a              lbz      r0, 0x1a(r5) */
/* 0x805379e8: 98 04 00 0a              stb      r0, 0xa(r4) */
/* 0x805379ec: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x805379f0: 88 03 00 40              lbz      r0, 0x40(r3) */
/* 0x805379f4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805379f8: 4d 82 00 20              beqlr     */
/* 0x805379fc: 3c 60 00 01              lis      r3, 1 */
/* 0x80537a00: 38 00 00 00              li       r0, 0 */
/* 0x80537a04: 38 63 ff ff              addi     r3, r3, -1 */
/* 0x80537a08: b0 64 00 04              sth      r3, 4(r4) */
/* 0x80537a0c: 98 04 00 06              stb      r0, 6(r4) */
/* 0x80537a10: b0 04 00 08              sth      r0, 8(r4) */
/* 0x80537a14: 4e 80 00 20              blr       */
/* 0x80537a18: 38 00 00 00              li       r0, 0 */
/* 0x80537a1c: 38 60 00 01              li       r3, 1 */
/* 0x80537a20: 98 64 00 0a              stb      r3, 0xa(r4) */
/* 0x80537a24: b0 04 00 04              sth      r0, 4(r4) */
/* 0x80537a28: 98 04 00 06              stb      r0, 6(r4) */
/* 0x80537a2c: b0 04 00 08              sth      r0, 8(r4) */
/* 0x80537a30: 4e 80 00 20              blr       */
/* 0x80537a34: 3c 60 00 00              lis      r3, 0 */
/* 0x80537a38: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80537a3c: 80 64 00 20              lwz      r3, 0x20(r4) */
/* 0x80537a40: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80537a44: 41 82 00 0c              beq      0x80537a50 */
/* 0x80537a48: a0 63 00 04              lhz      r3, 4(r3) */
/* 0x80537a4c: 48 00 00 08              b        0x80537a54 */
/* 0x80537a50: 38 60 00 00              li       r3, 0 */
/* 0x80537a54: 7c 03 00 d0              neg      r0, r3 */
/* 0x80537a58: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80537a5c: 54 00 0f ff              rlwinm.  r0, r0, 1, 0x1f, 0x1f */
/* 0x80537a60: 41 82 00 28              beq      0x80537a88 */
/* 0x80537a64: 80 64 00 1c              lwz      r3, 0x1c(r4) */
/* 0x80537a68: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80537a6c: 41 82 00 0c              beq      0x80537a78 */
/* 0x80537a70: a0 63 00 04              lhz      r3, 4(r3) */
/* 0x80537a74: 48 00 00 08              b        0x80537a7c */
/* 0x80537a78: 38 60 00 00              li       r3, 0 */
/* 0x80537a7c: 7c 03 00 d0              neg      r0, r3 */
/* 0x80537a80: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80537a84: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x80537a88: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80537a8c: 40 82 00 0c              bne      0x80537a98 */
/* 0x80537a90: 38 60 00 00              li       r3, 0 */
/* 0x80537a94: 4e 80 00 20              blr       */
/* 0x80537a98: 3c 80 00 00              lis      r4, 0 */
/* 0x80537a9c: 3c 60 00 00              lis      r3, 0 */
/* 0x80537aa0: 80 c4 00 00              lwz      r6, 0(r4) */
/* 0x80537aa4: 38 e0 00 00              li       r7, 0 */
/* 0x80537aa8: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80537aac: 88 a6 00 24              lbz      r5, 0x24(r6) */
/* 0x80537ab0: 38 c6 00 28              addi     r6, r6, 0x28 */
/* 0x80537ab4: 48 00 00 40              b        0x80537af4 */
/* 0x80537ab8: 54 e0 06 3e              clrlwi   r0, r7, 0x18 */
/* 0x80537abc: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80537ac0: 7c 66 02 14              add      r3, r6, r0 */
/* 0x80537ac4: 80 03 00 10              lwz      r0, 0x10(r3) */
/* 0x80537ac8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80537acc: 40 82 00 24              bne      0x80537af0 */
/* 0x80537ad0: 80 64 00 0c              lwz      r3, 0xc(r4) */
/* 0x80537ad4: 54 e0 15 ba              rlwinm   r0, r7, 2, 0x16, 0x1d */
/* 0x80537ad8: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80537adc: 80 03 00 38              lwz      r0, 0x38(r3) */
/* 0x80537ae0: 54 00 07 bd              rlwinm.  r0, r0, 0, 0x1e, 0x1e */
/* 0x80537ae4: 40 82 00 0c              bne      0x80537af0 */
/* 0x80537ae8: 38 60 00 00              li       r3, 0 */
/* 0x80537aec: 4e 80 00 20              blr       */
/* 0x80537af0: 38 e7 00 01              addi     r7, r7, 1 */
/* 0x80537af4: 54 e0 06 3e              clrlwi   r0, r7, 0x18 */
/* 0x80537af8: 7c 00 28 40              cmplw    r0, r5 */
/* 0x80537afc: 41 80 ff bc              blt      0x80537ab8 */
/* 0x80537b00: 38 60 00 01              li       r3, 1 */
/* 0x80537b04: 4e 80 00 20              blr       */
/* 0x80537b08: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x80537b0c: 7c 08 02 a6              mflr     r0 */
/* 0x80537b10: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x80537b14: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x80537b18: 3f e0 00 00              lis      r31, 0 */
/* 0x80537b1c: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x80537b20: 3f c0 00 00              lis      r30, 0 */
/* 0x80537b24: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x80537b28: 3b a0 00 00              li       r29, 0 */
/* 0x80537b2c: 93 81 00 10              stw      r28, 0x10(r1) */
/* 0x80537b30: 7c 7c 1b 78              mr       r28, r3 */
/* 0x80537b34: 48 00 00 3c              b        0x80537b70 */
/* 0x80537b38: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x80537b3c: 57 a6 15 ba              rlwinm   r6, r29, 2, 0x16, 0x1d */
/* 0x80537b40: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80537b44: 7c 63 30 2e              lwzx     r3, r3, r6 */
/* 0x80537b48: 80 03 00 38              lwz      r0, 0x38(r3) */
/* 0x80537b4c: 54 00 07 bd              rlwinm.  r0, r0, 0, 0x1e, 0x1e */
/* 0x80537b50: 40 82 00 1c              bne      0x80537b6c */
/* 0x80537b54: 80 7c 00 04              lwz      r3, 4(r28) */
/* 0x80537b58: 38 80 00 02              li       r4, 2 */
/* 0x80537b5c: 38 a0 00 01              li       r5, 1 */
/* 0x80537b60: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80537b64: 7c 63 30 2e              lwzx     r3, r3, r6 */
/* 0x80537b68: 4b ff e4 a1              bl       0x80536008 */
/* 0x80537b6c: 3b bd 00 01              addi     r29, r29, 1 */
/* 0x80537b70: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80537b74: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x80537b78: 88 03 00 24              lbz      r0, 0x24(r3) */
/* 0x80537b7c: 7c 04 00 40              cmplw    r4, r0 */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_update
; Demangled: RaceinfoPlayer_update
; Address: 0x805377ec  (.text+0x24f50)
; Size: 916 bytes

  0x805377ec:  fsubs    f1, f1, f2
  0x805377f0:  fsubs    f0, f0, f2
  0x805377f4:  fadds    f0, f1, f0
  0x805377f8:  fctiwz   f0, f0
  0x805377fc:  stfd     f0, 0x20(r1)
  0x80537800:  lwz      r4, 0x24(r1)
  0x80537804:  clrlwi   r0, r4, 0x10
  0x80537808:  cmplwi   r0, 0x3e7
  0x8053780c:  ble      0x8053785c
  0x80537810:  clrlwi   r3, r28, 0x18
  0x80537814:  addi     r4, r4, -0x3e8
  0x80537818:  addi     r8, r3, 1
  0x8053781c:  clrlwi   r0, r8, 0x18
  0x80537820:  clrlwi   r4, r4, 0x10
  0x80537824:  cmplwi   r0, 0x3b
  0x80537828:  ble      0x80537838
  0x8053782c:  addi     r0, r8, -0x3c
  0x80537830:  li       r7, 1
  0x80537834:  clrlwi   r8, r0, 0x18
  0x80537838:  lhz      r0, 8(r29)
  0x8053783c:  add      r7, r7, r0
  0x80537840:  clrlwi   r0, r7, 0x10
  0x80537844:  cmplwi   r0, 0x3e7
  0x80537848:  ble      0x80537864
  0x8053784c:  li       r7, 0x3e7
  0x80537850:  li       r8, 0x3b
  0x80537854:  li       r4, 0x3e7
  0x80537858:  b        0x80537864
  0x8053785c:  clrlwi   r7, r31, 0x10
  0x80537860:  clrlwi   r8, r28, 0x18
  0x80537864:  lhz      r0, 0x24(r29)
  0x80537868:  clrlwi   r3, r4, 0x10
  0x8053786c:  li       r6, 0
  0x80537870:  li       r5, 0
  0x80537874:  subf.    r4, r3, r0
  0x80537878:  bge      0x80537884
  0x8053787c:  li       r5, -1
  0x80537880:  addi     r4, r4, 0x3e8
  0x80537884:  lbz      r0, 0x22(r29)
  0x80537888:  clrlwi   r3, r8, 0x18
  0x8053788c:  subf     r0, r3, r0
  0x80537890:  add.     r5, r5, r0
  0x80537894:  bge      0x805378a0
  0x80537898:  li       r6, -1
  0x8053789c:  addi     r5, r5, 0x3c
  0x805378a0:  lhz      r0, 0x20(r29)
  0x805378a4:  clrlwi   r3, r7, 0x10
  0x805378a8:  subf     r0, r3, r0
  0x805378ac:  add.     r6, r6, r0
  0x805378b0:  bge      0x805378c0
  0x805378b4:  li       r6, 0
  0x805378b8:  li       r5, 0
  0x805378bc:  li       r4, 0
  0x805378c0:  li       r0, 1
  0x805378c4:  stb      r0, 0x1a(r29)
  0x805378c8:  sth      r6, 0x14(r29)
  0x805378cc:  stb      r5, 0x16(r29)
  0x805378d0:  sth      r4, 0x18(r29)
  0x805378d4:  b        0x80537988
  0x805378d8:  stw      r30, 0x14(r1)
  0x805378dc:  lis      r3, 0
  0x805378e0:  lfd      f2, 0(r3)
  0x805378e4:  li       r6, 0
  0x805378e8:  stw      r5, 0xc(r1)
  0x805378ec:  lfd      f1, 0x10(r1)
  0x805378f0:  lfd      f0, 8(r1)
  0x805378f4:  fsubs    f1, f1, f2
  0x805378f8:  fsubs    f0, f0, f2
  0x805378fc:  fadds    f0, f1, f0
  0x80537900:  fctiwz   f0, f0
  0x80537904:  stfd     f0, 0x20(r1)
  0x80537908:  lwz      r5, 0x24(r1)
  0x8053790c:  clrlwi   r0, r5, 0x10
  0x80537910:  cmplwi   r0, 0x3e7
  0x80537914:  ble      0x80537978
  0x80537918:  clrlwi   r3, r28, 0x18
  0x8053791c:  addi     r4, r5, -0x3e8
  0x80537920:  addi     r3, r3, 1
  0x80537924:  clrlwi   r0, r3, 0x18
  0x80537928:  clrlwi   r5, r4, 0x10
  0x8053792c:  cmplwi   r0, 0x3b
  0x80537930:  ble      0x80537940
  0x80537934:  addi     r0, r3, -0x3c
  0x80537938:  li       r6, 1
  0x8053793c:  clrlwi   r3, r0, 0x18
  0x80537940:  lhz      r0, 8(r29)
  0x80537944:  add      r6, r6, r0
  0x80537948:  clrlwi   r0, r6, 0x10
  0x8053794c:  cmplwi   r0, 0x3e7
  0x80537950:  ble      0x80537960
  0x80537954:  li       r6, 0x3e7
  0x80537958:  li       r3, 0x3b
  0x8053795c:  li       r5, 0x3e7
  0x80537960:  li       r0, 1
  0x80537964:  stb      r0, 0x1a(r29)
  0x80537968:  sth      r6, 0x14(r29)
  0x8053796c:  stb      r3, 0x16(r29)
  0x80537970:  sth      r5, 0x18(r29)
  0x80537974:  b        0x80537988
  0x80537978:  stb      r4, 0x1a(r29)
  0x8053797c:  sth      r31, 0x14(r29)
  0x80537980:  stb      r28, 0x16(r29)
  0x80537984:  sth      r5, 0x18(r29)
  0x80537988:  lbz      r0, 0x40(r29)
  0x8053798c:  cmpwi    r0, 0
  0x80537990:  bne      0x805379a0
  0x80537994:  lwz      r3, 0x48(r29)
  0x80537998:  addi     r0, r3, 1
  0x8053799c:  stw      r0, 0x48(r29)
  0x805379a0:  lwz      r0, 0x44(r1)
  0x805379a4:  lwz      r31, 0x3c(r1)
  0x805379a8:  lwz      r30, 0x38(r1)
  0x805379ac:  lwz      r29, 0x34(r1)
  0x805379b0:  lwz      r28, 0x30(r1)
  0x805379b4:  mtlr     r0
  0x805379b8:  addi     r1, r1, 0x40
  0x805379bc:  blr      
  0x805379c0:  lwz      r5, 0x14(r3)
  0x805379c4:  cmpwi    r5, 0
  0x805379c8:  beq      0x80537a18
  0x805379cc:  lhz      r0, 0x14(r5)
  0x805379d0:  sth      r0, 4(r4)
  0x805379d4:  lbz      r0, 0x16(r5)
  0x805379d8:  stb      r0, 6(r4)
  0x805379dc:  lhz      r0, 0x18(r5)
  0x805379e0:  sth      r0, 8(r4)
  0x805379e4:  lbz      r0, 0x1a(r5)
  0x805379e8:  stb      r0, 0xa(r4)
  0x805379ec:  lwz      r3, 0x14(r3)
  0x805379f0:  lbz      r0, 0x40(r3)
  0x805379f4:  cmpwi    r0, 0
  0x805379f8:  beqlr    
  0x805379fc:  lis      r3, 1
  0x80537a00:  li       r0, 0
  0x80537a04:  addi     r3, r3, -1
  0x80537a08:  sth      r3, 4(r4)
  0x80537a0c:  stb      r0, 6(r4)
  0x80537a10:  sth      r0, 8(r4)
  0x80537a14:  blr      
  0x80537a18:  li       r0, 0
  0x80537a1c:  li       r3, 1
  0x80537a20:  stb      r3, 0xa(r4)
  0x80537a24:  sth      r0, 4(r4)
  0x80537a28:  stb      r0, 6(r4)
  0x80537a2c:  sth      r0, 8(r4)
  0x80537a30:  blr      
  0x80537a34:  lis      r3, 0
  0x80537a38:  lwz      r4, 0(r3)
  0x80537a3c:  lwz      r3, 0x20(r4)
  0x80537a40:  cmpwi    r3, 0
  0x80537a44:  beq      0x80537a50
  0x80537a48:  lhz      r3, 4(r3)
  0x80537a4c:  b        0x80537a54
  0x80537a50:  li       r3, 0
  0x80537a54:  neg      r0, r3
  0x80537a58:  or       r0, r0, r3
  0x80537a5c:  rlwinm.  r0, r0, 1, 0x1f, 0x1f
  0x80537a60:  beq      0x80537a88
  0x80537a64:  lwz      r3, 0x1c(r4)
  0x80537a68:  cmpwi    r3, 0
  0x80537a6c:  beq      0x80537a78
  0x80537a70:  lhz      r3, 4(r3)
  0x80537a74:  b        0x80537a7c
  0x80537a78:  li       r3, 0
  0x80537a7c:  neg      r0, r3
  0x80537a80:  or       r0, r0, r3
  0x80537a84:  srwi     r0, r0, 0x1f
  0x80537a88:  cmpwi    r0, 0
  0x80537a8c:  bne      0x80537a98
  0x80537a90:  li       r3, 0
  0x80537a94:  blr      
  0x80537a98:  lis      r4, 0
  0x80537a9c:  lis      r3, 0
  0x80537aa0:  lwz      r6, 0(r4)
  0x80537aa4:  li       r7, 0
  0x80537aa8:  lwz      r4, 0(r3)
  0x80537aac:  lbz      r5, 0x24(r6)
  0x80537ab0:  addi     r6, r6, 0x28
  0x80537ab4:  b        0x80537af4
  0x80537ab8:  clrlwi   r0, r7, 0x18
  0x80537abc:  mulli    r0, r0, 0xf0
  0x80537ac0:  add      r3, r6, r0
  0x80537ac4:  lwz      r0, 0x10(r3)
  0x80537ac8:  cmpwi    r0, 0
  0x80537acc:  bne      0x80537af0
  0x80537ad0:  lwz      r3, 0xc(r4)
  0x80537ad4:  rlwinm   r0, r7, 2, 0x16, 0x1d
  0x80537ad8:  lwzx     r3, r3, r0
  0x80537adc:  lwz      r0, 0x38(r3)
  0x80537ae0:  rlwinm.  r0, r0, 0, 0x1e, 0x1e
  0x80537ae4:  bne      0x80537af0
  0x80537ae8:  li       r3, 0
  0x80537aec:  blr      
  0x80537af0:  addi     r7, r7, 1
  0x80537af4:  clrlwi   r0, r7, 0x18
  0x80537af8:  cmplw    r0, r5
  0x80537afc:  blt      0x80537ab8
  0x80537b00:  li       r3, 1
  0x80537b04:  blr      
  0x80537b08:  stwu     r1, -0x20(r1)
  0x80537b0c:  mflr     r0
  0x80537b10:  stw      r0, 0x24(r1)
  0x80537b14:  stw      r31, 0x1c(r1)
  0x80537b18:  lis      r31, 0
  0x80537b1c:  stw      r30, 0x18(r1)
  0x80537b20:  lis      r30, 0
  0x80537b24:  stw      r29, 0x14(r1)
  0x80537b28:  li       r29, 0
  0x80537b2c:  stw      r28, 0x10(r1)
  0x80537b30:  mr       r28, r3
  0x80537b34:  b        0x80537b70
  0x80537b38:  lwz      r3, 0(r30)
  0x80537b3c:  rlwinm   r6, r29, 2, 0x16, 0x1d
  0x80537b40:  lwz      r3, 0xc(r3)
  0x80537b44:  lwzx     r3, r3, r6
  0x80537b48:  lwz      r0, 0x38(r3)
  0x80537b4c:  rlwinm.  r0, r0, 0, 0x1e, 0x1e
  0x80537b50:  bne      0x80537b6c
  0x80537b54:  lwz      r3, 4(r28)
  0x80537b58:  li       r4, 2
  0x80537b5c:  li       r5, 1
  0x80537b60:  lwz      r3, 0xc(r3)
  0x80537b64:  lwzx     r3, r3, r6
  0x80537b68:  bl       0x80536008
  0x80537b6c:  addi     r29, r29, 1
  0x80537b70:  lwz      r3, 0(r31)
  0x80537b74:  clrlwi   r4, r29, 0x18
  0x80537b78:  lbz      r0, 0x24(r3)
  0x80537b7c:  cmplw    r4, r0
