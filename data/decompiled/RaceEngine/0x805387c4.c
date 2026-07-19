/**
 * Raceinfo_getInitialPosAndRotForPlayer
 * @addr 0x805387c4
 * @size 748 bytes
 * @frame 80 bytes
 * @calls 9 function(s)
 */
void Raceinfo_getInitialPosAndRotForPlayer(void) {
    /* r4 = r29+0x8 */
    /* r5 = r5+0x38 */
    /* r0 = r5+0x8 */
    /* clrlwi r5, r0, 0x10 */
    /* rlwinm r0, r0, 2, 0xe, 0x1d */
    /* add r0, r0, r5 */
    /* add r30, r30, r0 */
    /* 0x80590144() */
    /* r4 = r3+0x0 */
    /* r3, -0x5555  (load upper immediate) */
    /* addi r6, r3, -0x5555 */
    /* r3 = r31+0x0 */
    /* r5 = r4+0x0 */
    /* r4 = r29+0x8 */
    /* r5 = r5+0x34 */
    /* r0 = r5+0x8 */
    /* mulhwu r0, r6, r0 */
    /* srwi r0, r0, 1 */
    /* subf r30, r0, r30 */
    /* 0x80590144() */
    /* r4 = r3+0x0 */
    /* r3 = r31+0x0 */
    /* r5 = r4+0x0 */
    /* r4 = r29+0x8 */
    /* r5 = r5+0x34 */
    /* r0 = r5+0xc */
    /* clrlwi r0, r0, 0x10 */
    /* mulli r0, r0, 0x14 */
    /* subf r30, r0, r30 */
    /* 0x80590144() */
    /* r4 = r3+0x0 */
    /* r3 = r31+0x0 */
    /* r5 = r4+0x0 */
    /* r4 = r29+0x8 */
    /* r5 = r5+0x34 */
    /* r0 = r5+0x10 */
    /* clrlwi r0, r0, 0x10 */
    /* mulli r0, r0, 0x1e */
    /* subf r30, r0, r30 */
    /* 0x80590144() */
    /* r4 = r3+0x0 */
    /* r3, 0  (load upper immediate) */
    /* r0 = r29+0x8 */
    /* r4 = r4+0x0 */
    /* mulli r0, r0, 0xf0 */
    /* r3 = r3+0x0 */
    /* r4 = r4+0x34 */
    /* add r3, r3, r0 */
    /* r4 = r4+0x14 */
    /* r0 = r3+0x2e */
    /* clrlwi r3, r4, 0x10 */
    /* mulli r3, r3, 0x46 */
    /* extsb r31, r0 */
    /* cmpwi r31, -1 */
    /* subf r30, r3, r30 */
    /* if (cr0 ==) goto 0x805388e8 */
    /* clrlwi r0, r31, 0x18 */
    /* r3, 0  (load upper immediate) */
    /* mulli r0, r0, 0xec */
    /* r3 = r3+0x0 */
    /* add r3, r3, r0 */
    /* r3 = r3+0x8 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x805388d8 */
    /* r12 = r3+0x0 */
    /* r12 = r12+0x10 */
    /* mtctr r12 */
    /* indirect call via CTR */
    /* goto 0x805388dc */
    /* li r3, -1 */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x805388e8 */
    /* addi r30, r30, 0xa */
    /* cmpwi r31, -1 */
    /* if (cr0 ==) goto 0x80538928 */
    /* clrlwi r0, r31, 0x18 */
    /* r3, 0  (load upper immediate) */
    /* mulli r0, r0, 0xec */
    /* r3 = r3+0x0 */
    /* add r3, r3, r0 */
    /* r3 = r3+0x8 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80538918 */
    /* r0 = r3+0x51 */
    /* goto 0x8053891c */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x80538928 */
    /* addi r30, r30, 0x19 */
    /* r3, 0  (load upper immediate) */
    /* r4 = r29+0x8 */
    /* r3 = r3+0x0 */
    /* 0x80590144() */
    /* r3 = r3+0x0 */
    /* r3 = r3+0x0 */
    /* r3 = r3+0x34 */
    /* r0 = r3+0x18 */
    /* add r30, r30, r0 */
    /* cmpwi r30, -0x32 */
    /* if (cr0 >=) goto 0x80538958 */
    /* li r30, -0x32 */
    /* cmpwi r30, 0xfa */
    /* if (cr0 <=) goto 0x80538964 */
    /* li r30, 0xfa */
    /* r3 = r29+0x8 */
    /* r4, 0  (load upper immediate) */
    /* r4 = r4+0x0 */
    /* extsh r0, r30 */
    /* mulli r3, r3, 0xf0 */
    /* add r4, r4, r3 */
    /* r3 = r4+0xcf6 */
    /* add r0, r3, r0 */
    /* sth r0, 0xcf6(r4) */
    /* r0 = stack[0x44] */
    /* r31 = stack[0x3c] */
    /* r30 = stack[0x38] */
    /* r29 = stack[0x34] */
    /* mtlr r0 */
    /* addi r1, r1, 0x40 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805387c4: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x805387c8: 80 a5 00 38              lwz      r5, 0x38(r5) */
/* 0x805387cc: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x805387d0: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x805387d4: 54 00 13 ba              rlwinm   r0, r0, 2, 0xe, 0x1d */
/* 0x805387d8: 7c 00 2a 14              add      r0, r0, r5 */
/* 0x805387dc: 7f de 02 14              add      r30, r30, r0 */
/* 0x805387e0: 48 05 79 65              bl       0x80590144 */
/* 0x805387e4: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x805387e8: 3c 60 aa ab              lis      r3, -0x5555 */
/* 0x805387ec: 38 c3 aa ab              addi     r6, r3, -0x5555 */
/* 0x805387f0: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x805387f4: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x805387f8: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x805387fc: 80 a5 00 34              lwz      r5, 0x34(r5) */
/* 0x80538800: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x80538804: 7c 06 00 16              mulhwu   r0, r6, r0 */
/* 0x80538808: 54 00 f8 7e              srwi     r0, r0, 1 */
/* 0x8053880c: 7f c0 f0 50              subf     r30, r0, r30 */
/* 0x80538810: 48 05 79 35              bl       0x80590144 */
/* 0x80538814: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80538818: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x8053881c: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x80538820: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x80538824: 80 a5 00 34              lwz      r5, 0x34(r5) */
/* 0x80538828: 80 05 00 0c              lwz      r0, 0xc(r5) */
/* 0x8053882c: 54 00 04 3e              clrlwi   r0, r0, 0x10 */
/* 0x80538830: 1c 00 00 14              mulli    r0, r0, 0x14 */
/* 0x80538834: 7f c0 f0 50              subf     r30, r0, r30 */
/* 0x80538838: 48 05 79 0d              bl       0x80590144 */
/* 0x8053883c: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80538840: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x80538844: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x80538848: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x8053884c: 80 a5 00 34              lwz      r5, 0x34(r5) */
/* 0x80538850: 80 05 00 10              lwz      r0, 0x10(r5) */
/* 0x80538854: 54 00 04 3e              clrlwi   r0, r0, 0x10 */
/* 0x80538858: 1c 00 00 1e              mulli    r0, r0, 0x1e */
/* 0x8053885c: 7f c0 f0 50              subf     r30, r0, r30 */
/* 0x80538860: 48 05 78 e5              bl       0x80590144 */
/* 0x80538864: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x80538868: 3c 60 00 00              lis      r3, 0 */
/* 0x8053886c: 88 1d 00 08              lbz      r0, 8(r29) */
/* 0x80538870: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x80538874: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x80538878: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8053887c: 80 84 00 34              lwz      r4, 0x34(r4) */
/* 0x80538880: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80538884: 80 84 00 14              lwz      r4, 0x14(r4) */
/* 0x80538888: 88 03 00 2e              lbz      r0, 0x2e(r3) */
/* 0x8053888c: 54 83 04 3e              clrlwi   r3, r4, 0x10 */
/* 0x80538890: 1c 63 00 46              mulli    r3, r3, 0x46 */
/* 0x80538894: 7c 1f 07 74              extsb    r31, r0 */
/* 0x80538898: 2c 1f ff ff              cmpwi    r31, -1 */
/* 0x8053889c: 7f c3 f0 50              subf     r30, r3, r30 */
/* 0x805388a0: 41 82 00 48              beq      0x805388e8 */
/* 0x805388a4: 57 e0 06 3e              clrlwi   r0, r31, 0x18 */
/* 0x805388a8: 3c 60 00 00              lis      r3, 0 */
/* 0x805388ac: 1c 00 00 ec              mulli    r0, r0, 0xec */
/* 0x805388b0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x805388b4: 7c 63 02 14              add      r3, r3, r0 */
/* 0x805388b8: 80 63 00 08              lwz      r3, 8(r3) */
/* 0x805388bc: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805388c0: 41 82 00 18              beq      0x805388d8 */
/* 0x805388c4: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x805388c8: 81 8c 00 10              lwz      r12, 0x10(r12) */
/* 0x805388cc: 7d 89 03 a6              mtctr    r12 */
/* 0x805388d0: 4e 80 04 21              bctrl     */
/* 0x805388d4: 48 00 00 08              b        0x805388dc */
/* 0x805388d8: 38 60 ff ff              li       r3, -1 */
/* 0x805388dc: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805388e0: 40 82 00 08              bne      0x805388e8 */
/* 0x805388e4: 3b de 00 0a              addi     r30, r30, 0xa */
/* 0x805388e8: 2c 1f ff ff              cmpwi    r31, -1 */
/* 0x805388ec: 41 82 00 3c              beq      0x80538928 */
/* 0x805388f0: 57 e0 06 3e              clrlwi   r0, r31, 0x18 */
/* 0x805388f4: 3c 60 00 00              lis      r3, 0 */
/* 0x805388f8: 1c 00 00 ec              mulli    r0, r0, 0xec */
/* 0x805388fc: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538900: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80538904: 80 63 00 08              lwz      r3, 8(r3) */
/* 0x80538908: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8053890c: 41 82 00 0c              beq      0x80538918 */
/* 0x80538910: 88 03 00 51              lbz      r0, 0x51(r3) */
/* 0x80538914: 48 00 00 08              b        0x8053891c */
/* 0x80538918: 38 00 00 00              li       r0, 0 */
/* 0x8053891c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80538920: 41 82 00 08              beq      0x80538928 */
/* 0x80538924: 3b de 00 19              addi     r30, r30, 0x19 */
/* 0x80538928: 3c 60 00 00              lis      r3, 0 */
/* 0x8053892c: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x80538930: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538934: 48 05 78 11              bl       0x80590144 */
/* 0x80538938: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8053893c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538940: 80 63 00 34              lwz      r3, 0x34(r3) */
/* 0x80538944: a0 03 00 18              lhz      r0, 0x18(r3) */
/* 0x80538948: 7f de 02 14              add      r30, r30, r0 */
/* 0x8053894c: 2c 1e ff ce              cmpwi    r30, -0x32 */
/* 0x80538950: 40 80 00 08              bge      0x80538958 */
/* 0x80538954: 3b c0 ff ce              li       r30, -0x32 */
/* 0x80538958: 2c 1e 00 fa              cmpwi    r30, 0xfa */
/* 0x8053895c: 40 81 00 08              ble      0x80538964 */
/* 0x80538960: 3b c0 00 fa              li       r30, 0xfa */
/* 0x80538964: 88 7d 00 08              lbz      r3, 8(r29) */
/* 0x80538968: 3c 80 00 00              lis      r4, 0 */
/* 0x8053896c: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x80538970: 7f c0 07 34              extsh    r0, r30 */
/* 0x80538974: 1c 63 00 f0              mulli    r3, r3, 0xf0 */
/* 0x80538978: 7c 84 1a 14              add      r4, r4, r3 */
/* 0x8053897c: a8 64 0c f6              lha      r3, 0xcf6(r4) */
/* 0x80538980: 7c 03 02 14              add      r0, r3, r0 */
/* 0x80538984: b0 04 0c f6              sth      r0, 0xcf6(r4) */
/* 0x80538988: 80 01 00 44              lwz      r0, 0x44(r1) */
/* 0x8053898c: 83 e1 00 3c              lwz      r31, 0x3c(r1) */
/* 0x80538990: 83 c1 00 38              lwz      r30, 0x38(r1) */
/* 0x80538994: 83 a1 00 34              lwz      r29, 0x34(r1) */
/* 0x80538998: 7c 08 03 a6              mtlr     r0 */
/* 0x8053899c: 38 21 00 40              addi     r1, r1, 0x40 */
/* 0x805389a0: 4e 80 00 20              blr       */
/* 0x805389a4: 94 21 ff b0              stwu     r1, -0x50(r1) */
/* 0x805389a8: 7c 08 02 a6              mflr     r0 */
/* 0x805389ac: 90 01 00 54              stw      r0, 0x54(r1) */
/* 0x805389b0: 39 61 00 50              addi     r11, r1, 0x50 */
/* 0x805389b4: 48 01 d2 45              bl       0x80555bf8 */
/* 0x805389b8: 88 e3 00 08              lbz      r7, 8(r3) */
/* 0x805389bc: 3c c0 43 30              lis      r6, 0x4330 */
/* 0x805389c0: 3c a0 00 00              lis      r5, 0 */
/* 0x805389c4: 7c 7b 1b 78              mr       r27, r3 */
/* 0x805389c8: 1c 07 00 f0              mulli    r0, r7, 0xf0 */
/* 0x805389cc: 80 a5 00 00              lwz      r5, 0(r5) */
/* 0x805389d0: 7c 9c 23 78              mr       r28, r4 */
/* 0x805389d4: 90 c1 00 20              stw      r6, 0x20(r1) */
/* 0x805389d8: 3b a0 00 00              li       r29, 0 */
/* 0x805389dc: 7c 65 02 14              add      r3, r5, r0 */
/* 0x805389e0: 88 83 00 2e              lbz      r4, 0x2e(r3) */
/* 0x805389e4: 90 c1 00 28              stw      r6, 0x28(r1) */
/* 0x805389e8: 7c 80 07 75              extsb.   r0, r4 */
/* 0x805389ec: 41 80 00 18              blt      0x80538a04 */
/* 0x805389f0: 3c 60 00 00              lis      r3, 0 */
/* 0x805389f4: 1c 04 00 ec              mulli    r0, r4, 0xec */
/* 0x805389f8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x805389fc: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80538a00: 3b a3 00 04              addi     r29, r3, 4 */
/* 0x80538a04: 3c 60 00 00              lis      r3, 0 */
/* 0x80538a08: 7c e4 3b 78              mr       r4, r7 */
/* 0x80538a0c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538a10: 48 05 77 35              bl       0x80590144 */
/* 0x80538a14: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538a18: 3f c0 00 00              lis      r30, 0 */
/* 0x80538a1c: 3f e0 00 00              lis      r31, 0 */
/* 0x80538a20: c0 5e 00 00              lfs      f2, 0(r30) */
/* 0x80538a24: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80538a28: c0 1f 00 00              lfs      f0, 0(r31) */
/* 0x80538a2c: 80 c3 00 38              lwz      r6, 0x38(r3) */
/* 0x80538a30: 80 06 00 00              lwz      r0, 0(r6) */
/* 0x80538a34: 90 01 00 08              stw      r0, 8(r1) */
/* 0x80538a38: 80 a6 00 04              lwz      r5, 4(r6) */
/* 0x80538a3c: c0 21 00 08              lfs      f1, 8(r1) */
/* 0x80538a40: 80 86 00 08              lwz      r4, 8(r6) */
/* 0x80538a44: ec 22 00 72              fmuls    f1, f2, f1 */
/* 0x80538a48: 80 66 00 0c              lwz      r3, 0xc(r6) */
/* 0x80538a4c: 80 06 00 10              lwz      r0, 0x10(r6) */
/* 0x80538a50: 90 a1 00 0c              stw      r5, 0xc(r1) */
/* 0x80538a54: ec 20 08 2a              fadds    f1, f0, f1 */
/* 0x80538a58: 90 81 00 10              stw      r4, 0x10(r1) */
/* 0x80538a5c: 90 61 00 14              stw      r3, 0x14(r1) */
/* 0x80538a60: 90 01 00 18              stw      r0, 0x18(r1) */
/* 0x80538a64: 48 01 d1 95              bl       0x80555bf8 */
/* 0x80538a68: c0 5e 00 00              lfs      f2, 0(r30) */
/* 0x80538a6c: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80538a70: c0 21 00 0c              lfs      f1, 0xc(r1) */
/* 0x80538a74: c0 1f 00 00              lfs      f0, 0(r31) */
/* 0x80538a78: ec 22 00 72              fmuls    f1, f2, f1 */
/* 0x80538a7c: ec 20 08 2a              fadds    f1, f0, f1 */
/* 0x80538a80: 48 01 d1 79              bl       0x80555bf8 */
/* 0x80538a84: 3c 80 00 00              lis      r4, 0 */
/* 0x80538a88: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80538a8c: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80538a90: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x80538a94: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80538a98: 41 80 00 0c              blt      0x80538aa4 */
/* 0x80538a9c: 2c 00 00 02              cmpwi    r0, 2 */
/* 0x80538aa0: 40 81 00 30              ble      0x80538ad0 */
/* 0x80538aa4: 2c 00 00 07              cmpwi    r0, 7 */
/* 0x80538aa8: 41 80 00 0c              blt      0x80538ab4 */
/* 0x80538aac: 2c 00 00 08              cmpwi    r0, 8 */
#endif


/* === DISASSEMBLY === */

; Function: Raceinfo_getInitialPosAndRotForPlayer
; Demangled: Raceinfo_getInitialPosAndRotForPlayer
; Address: 0x805387c4  (.text+0x25f28)
; Size: 748 bytes

  0x805387c4:  lbz      r4, 8(r29)
  0x805387c8:  lwz      r5, 0x38(r5)
  0x805387cc:  lwz      r0, 8(r5)
  0x805387d0:  clrlwi   r5, r0, 0x10
  0x805387d4:  rlwinm   r0, r0, 2, 0xe, 0x1d
  0x805387d8:  add      r0, r0, r5
  0x805387dc:  add      r30, r30, r0
  0x805387e0:  bl       0x80590144
  0x805387e4:  lwz      r4, 0(r3)
  0x805387e8:  lis      r3, -0x5555
  0x805387ec:  addi     r6, r3, -0x5555
  0x805387f0:  lwz      r3, 0(r31)
  0x805387f4:  lwz      r5, 0(r4)
  0x805387f8:  lbz      r4, 8(r29)
  0x805387fc:  lwz      r5, 0x34(r5)
  0x80538800:  lwz      r0, 8(r5)
  0x80538804:  mulhwu   r0, r6, r0
  0x80538808:  srwi     r0, r0, 1
  0x8053880c:  subf     r30, r0, r30
  0x80538810:  bl       0x80590144
  0x80538814:  lwz      r4, 0(r3)
  0x80538818:  lwz      r3, 0(r31)
  0x8053881c:  lwz      r5, 0(r4)
  0x80538820:  lbz      r4, 8(r29)
  0x80538824:  lwz      r5, 0x34(r5)
  0x80538828:  lwz      r0, 0xc(r5)
  0x8053882c:  clrlwi   r0, r0, 0x10
  0x80538830:  mulli    r0, r0, 0x14
  0x80538834:  subf     r30, r0, r30
  0x80538838:  bl       0x80590144
  0x8053883c:  lwz      r4, 0(r3)
  0x80538840:  lwz      r3, 0(r31)
  0x80538844:  lwz      r5, 0(r4)
  0x80538848:  lbz      r4, 8(r29)
  0x8053884c:  lwz      r5, 0x34(r5)
  0x80538850:  lwz      r0, 0x10(r5)
  0x80538854:  clrlwi   r0, r0, 0x10
  0x80538858:  mulli    r0, r0, 0x1e
  0x8053885c:  subf     r30, r0, r30
  0x80538860:  bl       0x80590144
  0x80538864:  lwz      r4, 0(r3)
  0x80538868:  lis      r3, 0
  0x8053886c:  lbz      r0, 8(r29)
  0x80538870:  lwz      r4, 0(r4)
  0x80538874:  mulli    r0, r0, 0xf0
  0x80538878:  lwz      r3, 0(r3)
  0x8053887c:  lwz      r4, 0x34(r4)
  0x80538880:  add      r3, r3, r0
  0x80538884:  lwz      r4, 0x14(r4)
  0x80538888:  lbz      r0, 0x2e(r3)
  0x8053888c:  clrlwi   r3, r4, 0x10
  0x80538890:  mulli    r3, r3, 0x46
  0x80538894:  extsb    r31, r0
  0x80538898:  cmpwi    r31, -1
  0x8053889c:  subf     r30, r3, r30
  0x805388a0:  beq      0x805388e8
  0x805388a4:  clrlwi   r0, r31, 0x18
  0x805388a8:  lis      r3, 0
  0x805388ac:  mulli    r0, r0, 0xec
  0x805388b0:  lwz      r3, 0(r3)
  0x805388b4:  add      r3, r3, r0
  0x805388b8:  lwz      r3, 8(r3)
  0x805388bc:  cmpwi    r3, 0
  0x805388c0:  beq      0x805388d8
  0x805388c4:  lwz      r12, 0(r3)
  0x805388c8:  lwz      r12, 0x10(r12)
  0x805388cc:  mtctr    r12
  0x805388d0:  bctrl    
  0x805388d4:  b        0x805388dc
  0x805388d8:  li       r3, -1
  0x805388dc:  cmpwi    r3, 0
  0x805388e0:  bne      0x805388e8
  0x805388e4:  addi     r30, r30, 0xa
  0x805388e8:  cmpwi    r31, -1
  0x805388ec:  beq      0x80538928
  0x805388f0:  clrlwi   r0, r31, 0x18
  0x805388f4:  lis      r3, 0
  0x805388f8:  mulli    r0, r0, 0xec
  0x805388fc:  lwz      r3, 0(r3)
  0x80538900:  add      r3, r3, r0
  0x80538904:  lwz      r3, 8(r3)
  0x80538908:  cmpwi    r3, 0
  0x8053890c:  beq      0x80538918
  0x80538910:  lbz      r0, 0x51(r3)
  0x80538914:  b        0x8053891c
  0x80538918:  li       r0, 0
  0x8053891c:  cmpwi    r0, 0
  0x80538920:  beq      0x80538928
  0x80538924:  addi     r30, r30, 0x19
  0x80538928:  lis      r3, 0
  0x8053892c:  lbz      r4, 8(r29)
  0x80538930:  lwz      r3, 0(r3)
  0x80538934:  bl       0x80590144
  0x80538938:  lwz      r3, 0(r3)
  0x8053893c:  lwz      r3, 0(r3)
  0x80538940:  lwz      r3, 0x34(r3)
  0x80538944:  lhz      r0, 0x18(r3)
  0x80538948:  add      r30, r30, r0
  0x8053894c:  cmpwi    r30, -0x32
  0x80538950:  bge      0x80538958
  0x80538954:  li       r30, -0x32
  0x80538958:  cmpwi    r30, 0xfa
  0x8053895c:  ble      0x80538964
  0x80538960:  li       r30, 0xfa
  0x80538964:  lbz      r3, 8(r29)
  0x80538968:  lis      r4, 0
  0x8053896c:  lwz      r4, 0(r4)
  0x80538970:  extsh    r0, r30
  0x80538974:  mulli    r3, r3, 0xf0
  0x80538978:  add      r4, r4, r3
  0x8053897c:  lha      r3, 0xcf6(r4)
  0x80538980:  add      r0, r3, r0
  0x80538984:  sth      r0, 0xcf6(r4)
  0x80538988:  lwz      r0, 0x44(r1)
  0x8053898c:  lwz      r31, 0x3c(r1)
  0x80538990:  lwz      r30, 0x38(r1)
  0x80538994:  lwz      r29, 0x34(r1)
  0x80538998:  mtlr     r0
  0x8053899c:  addi     r1, r1, 0x40
  0x805389a0:  blr      
  0x805389a4:  stwu     r1, -0x50(r1)
  0x805389a8:  mflr     r0
  0x805389ac:  stw      r0, 0x54(r1)
  0x805389b0:  addi     r11, r1, 0x50
  0x805389b4:  bl       0x80555bf8
  0x805389b8:  lbz      r7, 8(r3)
  0x805389bc:  lis      r6, 0x4330
  0x805389c0:  lis      r5, 0
  0x805389c4:  mr       r27, r3
  0x805389c8:  mulli    r0, r7, 0xf0
  0x805389cc:  lwz      r5, 0(r5)
  0x805389d0:  mr       r28, r4
  0x805389d4:  stw      r6, 0x20(r1)
  0x805389d8:  li       r29, 0
  0x805389dc:  add      r3, r5, r0
  0x805389e0:  lbz      r4, 0x2e(r3)
  0x805389e4:  stw      r6, 0x28(r1)
  0x805389e8:  extsb.   r0, r4
  0x805389ec:  blt      0x80538a04
  0x805389f0:  lis      r3, 0
  0x805389f4:  mulli    r0, r4, 0xec
  0x805389f8:  lwz      r3, 0(r3)
  0x805389fc:  add      r3, r3, r0
  0x80538a00:  addi     r29, r3, 4
  0x80538a04:  lis      r3, 0
  0x80538a08:  mr       r4, r7
  0x80538a0c:  lwz      r3, 0(r3)
  0x80538a10:  bl       0x80590144
  0x80538a14:  lwz      r3, 0(r3)
  0x80538a18:  lis      r30, 0
  0x80538a1c:  lis      r31, 0
  0x80538a20:  lfs      f2, 0(r30)
  0x80538a24:  lwz      r3, 0(r3)
  0x80538a28:  lfs      f0, 0(r31)
  0x80538a2c:  lwz      r6, 0x38(r3)
  0x80538a30:  lwz      r0, 0(r6)
  0x80538a34:  stw      r0, 8(r1)
  0x80538a38:  lwz      r5, 4(r6)
  0x80538a3c:  lfs      f1, 8(r1)
  0x80538a40:  lwz      r4, 8(r6)
  0x80538a44:  fmuls    f1, f2, f1
  0x80538a48:  lwz      r3, 0xc(r6)
  0x80538a4c:  lwz      r0, 0x10(r6)
  0x80538a50:  stw      r5, 0xc(r1)
  0x80538a54:  fadds    f1, f0, f1
  0x80538a58:  stw      r4, 0x10(r1)
  0x80538a5c:  stw      r3, 0x14(r1)
  0x80538a60:  stw      r0, 0x18(r1)
  0x80538a64:  bl       0x80555bf8
  0x80538a68:  lfs      f2, 0(r30)
  0x80538a6c:  mr       r30, r3
  0x80538a70:  lfs      f1, 0xc(r1)
  0x80538a74:  lfs      f0, 0(r31)
  0x80538a78:  fmuls    f1, f2, f1
  0x80538a7c:  fadds    f1, f0, f1
  0x80538a80:  bl       0x80555bf8
  0x80538a84:  lis      r4, 0
  0x80538a88:  mr       r31, r3
  0x80538a8c:  lwz      r3, 0(r4)
  0x80538a90:  lwz      r0, 0xb70(r3)
  0x80538a94:  cmpwi    r0, 0
  0x80538a98:  blt      0x80538aa4
  0x80538a9c:  cmpwi    r0, 2
  0x80538aa0:  ble      0x80538ad0
  0x80538aa4:  cmpwi    r0, 7
  0x80538aa8:  blt      0x80538ab4
  0x80538aac:  cmpwi    r0, 8
