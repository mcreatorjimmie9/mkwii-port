/**
 * Raceinfo_initGamemode
 * @addr 0x80534670
 * @size 768 bytes
 * @frame 0 bytes
 * @calls 9 function(s)
 */
void Raceinfo_initGamemode(void) {
    /* clrlwi r4, r29, 0x18 */
    /* r0 = r3+0x24 */
    /* cmplw r4, r0 */
    /* if (cr0 <) goto 0x805345b0 */
    /* li r3, 0x50 */
    /* 0x80555bf8() */
    /* cmpwi r3, 0 */
    /* r29 = r3 */
    /* if (cr0 ==) goto 0x80534710 */
    /* r5, 0  (load upper immediate) */
    /* r4, 0  (load upper immediate) */
    /* addi r5, r5, 0 */
    /* r3+0x0 = r5 */
    /* addi r4, r4, 0 */
    /* li r0, 0 */
    /* r3+0x4 = r4 */
    /* stb r0, 0xe(r3) */
    /* sth r0, 8(r3) */
    /* stb r0, 0xa(r3) */
    /* sth r0, 0xc(r3) */
    /* r3+0x10 = r4 */
    /* stb r0, 0x1a(r3) */
    /* sth r0, 0x14(r3) */
    /* stb r0, 0x16(r3) */
    /* sth r0, 0x18(r3) */
    /* r3+0x1c = r4 */
    /* stb r0, 0x26(r3) */
    /* sth r0, 0x20(r3) */
    /* stb r0, 0x22(r3) */
    /* sth r0, 0x24(r3) */
    /* addi r3, r3, 0x28 */
    /* 0x80555cac() */
    /* r12 = r29+0x0 */
    /* r3 = r29 */
    /* r12 = r12+0xc */
    /* mtctr r12 */
    /* indirect call via CTR */
    /* r3, 0  (load upper immediate) */
    /* addi r3, r3, 0 */
    /* r29+0x0 = r3 */
    /* r28+0x14 = r29 */
    /* r3 = r29 */
    /* r12 = r29+0x0 */
    /* r12 = r12+0xc */
    /* mtctr r12 */
    /* indirect call via CTR */
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* r0 = r3+0xb90 */
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */
    /* if (cr0 !=) goto 0x805347e8 */
    /* r0 = r3+0xb70 */
    /* cmpwi r0, 4 */
    /* if (cr0 !=) goto 0x805347e8 */
    /* li r0, 0xe */
    /* addi r5, r1, 4 */
    /* addi r4, r3, 0xb98 */
    /* mtctr r0 */
    /* r3 = r4+0x4 */
    /* r0 = r4+0x8 */
    /* r5+0x4 = r3 */
    /* r5+0x8 = r0 */
    /* bdnz 0x80534758 */
    /* r3, -0x7777  (load upper immediate) */
    /* r9 = stack[0x34] */
    /* addi r0, r3, -0x7777 */
    /* r8 = r28+0x14 */
    /* mulhw r0, r0, r9 */
    /* li r4, 0 */
    /* li r3, 1 */
    /* add r0, r0, r9 */
    /* srawi r6, r0, 5 */
    /* srawi r0, r0, 5 */
    /* srwi r5, r0, 0x1f */
    /* srwi r7, r6, 0x1f */
    /* add r0, r0, r5 */
    /* add r5, r6, r7 */
    /* clrlwi r6, r5, 0x18 */
    /* sth r6, 0x20(r8) */
    /* mulli r0, r0, 0x3c */
    /* subf r5, r0, r9 */
    /* stb r5, 0x22(r8) */
    /* mulli r0, r6, 0x3c */
    /* sth r4, 0x24(r8) */
    /* clrlwi r7, r5, 0x18 */
    /* stb r3, 0x26(r8) */
    /* add r0, r7, r0 */
    /* mulli r0, r0, 0x3e8 */
    /* stb r3, 0x42(r8) */
    /* sth r6, 0x14(r8) */
    /* stb r5, 0x16(r8) */
    /* sth r4, 0x18(r8) */
    /* stb r3, 0x1a(r8) */
    /* r8+0x44 = r0 */
    /* r3, 0  (load upper immediate) */
    /* li r4, 0 */
    /* r3 = r3+0x0 */
    /* r3 = r3+0xb70 */
    /* addi r0, r3, -3 */
    /* cmplwi r0, 7 */
    /* if (cr0 >) goto 0x80534818 */
    /* li r3, 1 */
    /* slw r0, r3, r0 */
    /* andi. r0, r0, 0xc1 */
    /* if (cr0 ==) goto 0x80534818 */
    /* r4 = r3 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80534998 */
    /* r3 = r28+0x4 */
    /* li r4, 6 */
    /* 0x80555e14() */
    /* stb r3, 0x24(r28) */
    /* r4, 0  (load upper immediate) */
    /* r3 = r28+0x4 */
    /* r4 = r4+0x0 */
    /* r4 = r4+0x8 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80534850 */
    /* r4 = r4+0x4 */
    /* goto 0x80534854 */
    /* li r4, 0 */
    /* 0x80555e14() */
    /* stb r3, 0x25(r28) */
    /* r5, 0  (load upper immediate) */
    /* r3, 0  (load upper immediate) */
    /* li r4, 0 */
    /* addi r5, r5, 0 */
    /* r3 = r3+0x0 */
    /* addi r5, r5, 0x20 */
    /* li r6, 0 */
    /* 0x80542528() */
    /* r29 = r3 */
    /* li r3, 8 */
    /* 0x80555bf8() */
    /* cmpwi r3, 0 */
    /* r30 = r3 */
    /* if (cr0 ==) goto 0x805348a8 */
    /* r5, 0  (load upper immediate) */
    /* r4 = r29 */
    /* addi r5, r5, 0 */
    /* r3+0x0 = r5 */
    /* 0x8053a03c() */
    /* r28+0x3c = r30 */
    /* r3, 0  (load upper immediate) */
    /* r4 = r3+0x0 */
    /* r0 = r4+0xb78 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x805348f8 */
    /* r29 = r4+0x24 */
    /* r3 = r30 */
    /* r4 = r4+0xb68 */
    /* 0x8053a064() */
    /* extsh r3, r3 */
    /* addi r0, r29, -2 */
    /* mulli r3, r3, 0x16 */
    /* r4 = r30+0x4 */
    /* slwi r0, r0, 1 */
    /* add r3, r4, r3 */
    /* add r3, r3, r0 */
    /* r0 = r3+0x10 */
    /* clrlwi r7, r0, 0x10 */
    /* goto 0x8053492c */
    /* r29 = r4+0x24 */
    /* r3 = r30 */
    /* r4 = r4+0xb68 */
    /* 0x8053a064() */
    /* extsh r3, r3 */
    /* addi r0, r29, -2 */
    /* mulli r3, r3, 0x16 */
    /* r4 = r30+0x4 */
    /* slwi r0, r0, 1 */
    /* add r3, r4, r3 */
    /* add r3, r3, r0 */
    /* r0 = r3+0x1dc */
    /* clrlwi r7, r0, 0x10 */
    /* r3, -0x7777  (load upper immediate) */
    /* r8 = r28+0x14 */
    /* addi r0, r3, -0x7777 */
    /* li r4, 0 */
    /* mulhw r0, r0, r7 */
    /* li r3, 1 */
    /* add r0, r0, r7 */
    /* srawi r0, r0, 5 */
    /* srwi r5, r0, 0x1f */
    /* add r6, r0, r5 */
    /* sth r6, 0x20(r8) */
    /* clrlwi r0, r6, 0x10 */
    /* mulli r0, r0, 0x3c */
    /* subf r5, r0, r7 */
    /* stb r5, 0x22(r8) */
    /* clrlwi r7, r5, 0x18 */
    /* sth r4, 0x24(r8) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80534670: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x80534674: 88 03 00 24              lbz      r0, 0x24(r3) */
/* 0x80534678: 7c 04 00 40              cmplw    r4, r0 */
/* 0x8053467c: 41 80 ff 34              blt      0x805345b0 */
/* 0x80534680: 38 60 00 50              li       r3, 0x50 */
/* 0x80534684: 48 02 15 75              bl       0x80555bf8 */
/* 0x80534688: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8053468c: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80534690: 41 82 00 80              beq      0x80534710 */
/* 0x80534694: 3c a0 00 00              lis      r5, 0 */
/* 0x80534698: 3c 80 00 00              lis      r4, 0 */
/* 0x8053469c: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x805346a0: 90 a3 00 00              stw      r5, 0(r3) */
/* 0x805346a4: 38 84 00 00              addi     r4, r4, 0 */
/* 0x805346a8: 38 00 00 00              li       r0, 0 */
/* 0x805346ac: 90 83 00 04              stw      r4, 4(r3) */
/* 0x805346b0: 98 03 00 0e              stb      r0, 0xe(r3) */
/* 0x805346b4: b0 03 00 08              sth      r0, 8(r3) */
/* 0x805346b8: 98 03 00 0a              stb      r0, 0xa(r3) */
/* 0x805346bc: b0 03 00 0c              sth      r0, 0xc(r3) */
/* 0x805346c0: 90 83 00 10              stw      r4, 0x10(r3) */
/* 0x805346c4: 98 03 00 1a              stb      r0, 0x1a(r3) */
/* 0x805346c8: b0 03 00 14              sth      r0, 0x14(r3) */
/* 0x805346cc: 98 03 00 16              stb      r0, 0x16(r3) */
/* 0x805346d0: b0 03 00 18              sth      r0, 0x18(r3) */
/* 0x805346d4: 90 83 00 1c              stw      r4, 0x1c(r3) */
/* 0x805346d8: 98 03 00 26              stb      r0, 0x26(r3) */
/* 0x805346dc: b0 03 00 20              sth      r0, 0x20(r3) */
/* 0x805346e0: 98 03 00 22              stb      r0, 0x22(r3) */
/* 0x805346e4: b0 03 00 24              sth      r0, 0x24(r3) */
/* 0x805346e8: 38 63 00 28              addi     r3, r3, 0x28 */
/* 0x805346ec: 48 02 15 c1              bl       0x80555cac */
/* 0x805346f0: 81 9d 00 00              lwz      r12, 0(r29) */
/* 0x805346f4: 7f a3 eb 78              mr       r3, r29 */
/* 0x805346f8: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x805346fc: 7d 89 03 a6              mtctr    r12 */
/* 0x80534700: 4e 80 04 21              bctrl     */
/* 0x80534704: 3c 60 00 00              lis      r3, 0 */
/* 0x80534708: 38 63 00 00              addi     r3, r3, 0 */
/* 0x8053470c: 90 7d 00 00              stw      r3, 0(r29) */
/* 0x80534710: 93 bc 00 14              stw      r29, 0x14(r28) */
/* 0x80534714: 7f a3 eb 78              mr       r3, r29 */
/* 0x80534718: 81 9d 00 00              lwz      r12, 0(r29) */
/* 0x8053471c: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x80534720: 7d 89 03 a6              mtctr    r12 */
/* 0x80534724: 4e 80 04 21              bctrl     */
/* 0x80534728: 3c 60 00 00              lis      r3, 0 */
/* 0x8053472c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534730: 80 03 0b 90              lwz      r0, 0xb90(r3) */
/* 0x80534734: 54 00 07 7b              rlwinm.  r0, r0, 0, 0x1d, 0x1d */
/* 0x80534738: 40 82 00 b0              bne      0x805347e8 */
/* 0x8053473c: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x80534740: 2c 00 00 04              cmpwi    r0, 4 */
/* 0x80534744: 40 82 00 a4              bne      0x805347e8 */
/* 0x80534748: 38 00 00 0e              li       r0, 0xe */
/* 0x8053474c: 38 a1 00 04              addi     r5, r1, 4 */
/* 0x80534750: 38 83 0b 98              addi     r4, r3, 0xb98 */
/* 0x80534754: 7c 09 03 a6              mtctr    r0 */
/* 0x80534758: 80 64 00 04              lwz      r3, 4(r4) */
/* 0x8053475c: 84 04 00 08              lwzu     r0, 8(r4) */
/* 0x80534760: 90 65 00 04              stw      r3, 4(r5) */
/* 0x80534764: 94 05 00 08              stwu     r0, 8(r5) */
/* 0x80534768: 42 00 ff f0              bdnz     0x80534758 */
/* 0x8053476c: 3c 60 88 89              lis      r3, -0x7777 */
/* 0x80534770: a1 21 00 34              lhz      r9, 0x34(r1) */
/* 0x80534774: 38 03 88 89              addi     r0, r3, -0x7777 */
/* 0x80534778: 81 1c 00 14              lwz      r8, 0x14(r28) */
/* 0x8053477c: 7c 00 48 96              mulhw    r0, r0, r9 */
/* 0x80534780: 38 80 00 00              li       r4, 0 */
/* 0x80534784: 38 60 00 01              li       r3, 1 */
/* 0x80534788: 7c 00 4a 14              add      r0, r0, r9 */
/* 0x8053478c: 7c 06 2e 70              srawi    r6, r0, 5 */
/* 0x80534790: 7c 00 2e 70              srawi    r0, r0, 5 */
/* 0x80534794: 54 05 0f fe              srwi     r5, r0, 0x1f */
/* 0x80534798: 54 c7 0f fe              srwi     r7, r6, 0x1f */
/* 0x8053479c: 7c 00 2a 14              add      r0, r0, r5 */
/* 0x805347a0: 7c a6 3a 14              add      r5, r6, r7 */
/* 0x805347a4: 54 a6 06 3e              clrlwi   r6, r5, 0x18 */
/* 0x805347a8: b0 c8 00 20              sth      r6, 0x20(r8) */
/* 0x805347ac: 1c 00 00 3c              mulli    r0, r0, 0x3c */
/* 0x805347b0: 7c a0 48 50              subf     r5, r0, r9 */
/* 0x805347b4: 98 a8 00 22              stb      r5, 0x22(r8) */
/* 0x805347b8: 1c 06 00 3c              mulli    r0, r6, 0x3c */
/* 0x805347bc: b0 88 00 24              sth      r4, 0x24(r8) */
/* 0x805347c0: 54 a7 06 3e              clrlwi   r7, r5, 0x18 */
/* 0x805347c4: 98 68 00 26              stb      r3, 0x26(r8) */
/* 0x805347c8: 7c 07 02 14              add      r0, r7, r0 */
/* 0x805347cc: 1c 00 03 e8              mulli    r0, r0, 0x3e8 */
/* 0x805347d0: 98 68 00 42              stb      r3, 0x42(r8) */
/* 0x805347d4: b0 c8 00 14              sth      r6, 0x14(r8) */
/* 0x805347d8: 98 a8 00 16              stb      r5, 0x16(r8) */
/* 0x805347dc: b0 88 00 18              sth      r4, 0x18(r8) */
/* 0x805347e0: 98 68 00 1a              stb      r3, 0x1a(r8) */
/* 0x805347e4: 90 08 00 44              stw      r0, 0x44(r8) */
/* 0x805347e8: 3c 60 00 00              lis      r3, 0 */
/* 0x805347ec: 38 80 00 00              li       r4, 0 */
/* 0x805347f0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x805347f4: 80 63 0b 70              lwz      r3, 0xb70(r3) */
/* 0x805347f8: 38 03 ff fd              addi     r0, r3, -3 */
/* 0x805347fc: 28 00 00 07              cmplwi   r0, 7 */
/* 0x80534800: 41 81 00 18              bgt      0x80534818 */
/* 0x80534804: 38 60 00 01              li       r3, 1 */
/* 0x80534808: 7c 60 00 30              slw      r0, r3, r0 */
/* 0x8053480c: 70 00 00 c1              andi.    r0, r0, 0xc1 */
/* 0x80534810: 41 82 00 08              beq      0x80534818 */
/* 0x80534814: 7c 64 1b 78              mr       r4, r3 */
/* 0x80534818: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8053481c: 41 82 01 7c              beq      0x80534998 */
/* 0x80534820: 80 7c 00 04              lwz      r3, 4(r28) */
/* 0x80534824: 38 80 00 06              li       r4, 6 */
/* 0x80534828: 48 02 15 ed              bl       0x80555e14 */
/* 0x8053482c: 98 7c 00 24              stb      r3, 0x24(r28) */
/* 0x80534830: 3c 80 00 00              lis      r4, 0 */
/* 0x80534834: 80 7c 00 04              lwz      r3, 4(r28) */
/* 0x80534838: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x8053483c: 80 84 00 08              lwz      r4, 8(r4) */
/* 0x80534840: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80534844: 41 82 00 0c              beq      0x80534850 */
/* 0x80534848: a0 84 00 04              lhz      r4, 4(r4) */
/* 0x8053484c: 48 00 00 08              b        0x80534854 */
/* 0x80534850: 38 80 00 00              li       r4, 0 */
/* 0x80534854: 48 02 15 c1              bl       0x80555e14 */
/* 0x80534858: 98 7c 00 25              stb      r3, 0x25(r28) */
/* 0x8053485c: 3c a0 00 00              lis      r5, 0 */
/* 0x80534860: 3c 60 00 00              lis      r3, 0 */
/* 0x80534864: 38 80 00 00              li       r4, 0 */
/* 0x80534868: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x8053486c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80534870: 38 a5 00 20              addi     r5, r5, 0x20 */
/* 0x80534874: 38 c0 00 00              li       r6, 0 */
/* 0x80534878: 48 00 dc b1              bl       0x80542528 */
/* 0x8053487c: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80534880: 38 60 00 08              li       r3, 8 */
/* 0x80534884: 48 02 13 75              bl       0x80555bf8 */
/* 0x80534888: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8053488c: 7c 7e 1b 78              mr       r30, r3 */
/* 0x80534890: 41 82 00 18              beq      0x805348a8 */
/* 0x80534894: 3c a0 00 00              lis      r5, 0 */
/* 0x80534898: 7f a4 eb 78              mr       r4, r29 */
/* 0x8053489c: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x805348a0: 90 a3 00 00              stw      r5, 0(r3) */
/* 0x805348a4: 48 00 57 99              bl       0x8053a03c */
/* 0x805348a8: 93 dc 00 3c              stw      r30, 0x3c(r28) */
/* 0x805348ac: 3c 60 00 00              lis      r3, 0 */
/* 0x805348b0: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x805348b4: 80 04 0b 78              lwz      r0, 0xb78(r4) */
/* 0x805348b8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805348bc: 40 82 00 3c              bne      0x805348f8 */
/* 0x805348c0: 8b a4 00 24              lbz      r29, 0x24(r4) */
/* 0x805348c4: 7f c3 f3 78              mr       r3, r30 */
/* 0x805348c8: 80 84 0b 68              lwz      r4, 0xb68(r4) */
/* 0x805348cc: 48 00 57 99              bl       0x8053a064 */
/* 0x805348d0: 7c 63 07 34              extsh    r3, r3 */
/* 0x805348d4: 38 1d ff fe              addi     r0, r29, -2 */
/* 0x805348d8: 1c 63 00 16              mulli    r3, r3, 0x16 */
/* 0x805348dc: 80 9e 00 04              lwz      r4, 4(r30) */
/* 0x805348e0: 54 00 08 3c              slwi     r0, r0, 1 */
/* 0x805348e4: 7c 64 1a 14              add      r3, r4, r3 */
/* 0x805348e8: 7c 63 02 14              add      r3, r3, r0 */
/* 0x805348ec: a8 03 00 10              lha      r0, 0x10(r3) */
/* 0x805348f0: 54 07 04 3e              clrlwi   r7, r0, 0x10 */
/* 0x805348f4: 48 00 00 38              b        0x8053492c */
/* 0x805348f8: 8b a4 00 24              lbz      r29, 0x24(r4) */
/* 0x805348fc: 7f c3 f3 78              mr       r3, r30 */
/* 0x80534900: 80 84 0b 68              lwz      r4, 0xb68(r4) */
/* 0x80534904: 48 00 57 61              bl       0x8053a064 */
/* 0x80534908: 7c 63 07 34              extsh    r3, r3 */
/* 0x8053490c: 38 1d ff fe              addi     r0, r29, -2 */
/* 0x80534910: 1c 63 00 16              mulli    r3, r3, 0x16 */
/* 0x80534914: 80 9e 00 04              lwz      r4, 4(r30) */
/* 0x80534918: 54 00 08 3c              slwi     r0, r0, 1 */
/* 0x8053491c: 7c 64 1a 14              add      r3, r4, r3 */
/* 0x80534920: 7c 63 02 14              add      r3, r3, r0 */
/* 0x80534924: a8 03 01 dc              lha      r0, 0x1dc(r3) */
/* 0x80534928: 54 07 04 3e              clrlwi   r7, r0, 0x10 */
/* 0x8053492c: 3c 60 88 89              lis      r3, -0x7777 */
/* 0x80534930: 81 1c 00 14              lwz      r8, 0x14(r28) */
/* 0x80534934: 38 03 88 89              addi     r0, r3, -0x7777 */
/* 0x80534938: 38 80 00 00              li       r4, 0 */
/* 0x8053493c: 7c 00 38 96              mulhw    r0, r0, r7 */
/* 0x80534940: 38 60 00 01              li       r3, 1 */
/* 0x80534944: 7c 00 3a 14              add      r0, r0, r7 */
/* 0x80534948: 7c 00 2e 70              srawi    r0, r0, 5 */
/* 0x8053494c: 54 05 0f fe              srwi     r5, r0, 0x1f */
/* 0x80534950: 7c c0 2a 14              add      r6, r0, r5 */
/* 0x80534954: b0 c8 00 20              sth      r6, 0x20(r8) */
/* 0x80534958: 54 c0 04 3e              clrlwi   r0, r6, 0x10 */
/* 0x8053495c: 1c 00 00 3c              mulli    r0, r0, 0x3c */
/* 0x80534960: 7c a0 38 50              subf     r5, r0, r7 */
/* 0x80534964: 98 a8 00 22              stb      r5, 0x22(r8) */
/* 0x80534968: 54 a7 06 3e              clrlwi   r7, r5, 0x18 */
/* 0x8053496c: b0 88 00 24              sth      r4, 0x24(r8) */
#endif


/* === DISASSEMBLY === */

; Function: Raceinfo_initGamemode
; Demangled: Raceinfo_initGamemode
; Address: 0x80534670  (.text+0x21dd4)
; Size: 768 bytes

  0x80534670:  clrlwi   r4, r29, 0x18
  0x80534674:  lbz      r0, 0x24(r3)
  0x80534678:  cmplw    r4, r0
  0x8053467c:  blt      0x805345b0
  0x80534680:  li       r3, 0x50
  0x80534684:  bl       0x80555bf8
  0x80534688:  cmpwi    r3, 0
  0x8053468c:  mr       r29, r3
  0x80534690:  beq      0x80534710
  0x80534694:  lis      r5, 0
  0x80534698:  lis      r4, 0
  0x8053469c:  addi     r5, r5, 0
  0x805346a0:  stw      r5, 0(r3)
  0x805346a4:  addi     r4, r4, 0
  0x805346a8:  li       r0, 0
  0x805346ac:  stw      r4, 4(r3)
  0x805346b0:  stb      r0, 0xe(r3)
  0x805346b4:  sth      r0, 8(r3)
  0x805346b8:  stb      r0, 0xa(r3)
  0x805346bc:  sth      r0, 0xc(r3)
  0x805346c0:  stw      r4, 0x10(r3)
  0x805346c4:  stb      r0, 0x1a(r3)
  0x805346c8:  sth      r0, 0x14(r3)
  0x805346cc:  stb      r0, 0x16(r3)
  0x805346d0:  sth      r0, 0x18(r3)
  0x805346d4:  stw      r4, 0x1c(r3)
  0x805346d8:  stb      r0, 0x26(r3)
  0x805346dc:  sth      r0, 0x20(r3)
  0x805346e0:  stb      r0, 0x22(r3)
  0x805346e4:  sth      r0, 0x24(r3)
  0x805346e8:  addi     r3, r3, 0x28
  0x805346ec:  bl       0x80555cac
  0x805346f0:  lwz      r12, 0(r29)
  0x805346f4:  mr       r3, r29
  0x805346f8:  lwz      r12, 0xc(r12)
  0x805346fc:  mtctr    r12
  0x80534700:  bctrl    
  0x80534704:  lis      r3, 0
  0x80534708:  addi     r3, r3, 0
  0x8053470c:  stw      r3, 0(r29)
  0x80534710:  stw      r29, 0x14(r28)
  0x80534714:  mr       r3, r29
  0x80534718:  lwz      r12, 0(r29)
  0x8053471c:  lwz      r12, 0xc(r12)
  0x80534720:  mtctr    r12
  0x80534724:  bctrl    
  0x80534728:  lis      r3, 0
  0x8053472c:  lwz      r3, 0(r3)
  0x80534730:  lwz      r0, 0xb90(r3)
  0x80534734:  rlwinm.  r0, r0, 0, 0x1d, 0x1d
  0x80534738:  bne      0x805347e8
  0x8053473c:  lwz      r0, 0xb70(r3)
  0x80534740:  cmpwi    r0, 4
  0x80534744:  bne      0x805347e8
  0x80534748:  li       r0, 0xe
  0x8053474c:  addi     r5, r1, 4
  0x80534750:  addi     r4, r3, 0xb98
  0x80534754:  mtctr    r0
  0x80534758:  lwz      r3, 4(r4)
  0x8053475c:  lwzu     r0, 8(r4)
  0x80534760:  stw      r3, 4(r5)
  0x80534764:  stwu     r0, 8(r5)
  0x80534768:  bdnz     0x80534758
  0x8053476c:  lis      r3, -0x7777
  0x80534770:  lhz      r9, 0x34(r1)
  0x80534774:  addi     r0, r3, -0x7777
  0x80534778:  lwz      r8, 0x14(r28)
  0x8053477c:  mulhw    r0, r0, r9
  0x80534780:  li       r4, 0
  0x80534784:  li       r3, 1
  0x80534788:  add      r0, r0, r9
  0x8053478c:  srawi    r6, r0, 5
  0x80534790:  srawi    r0, r0, 5
  0x80534794:  srwi     r5, r0, 0x1f
  0x80534798:  srwi     r7, r6, 0x1f
  0x8053479c:  add      r0, r0, r5
  0x805347a0:  add      r5, r6, r7
  0x805347a4:  clrlwi   r6, r5, 0x18
  0x805347a8:  sth      r6, 0x20(r8)
  0x805347ac:  mulli    r0, r0, 0x3c
  0x805347b0:  subf     r5, r0, r9
  0x805347b4:  stb      r5, 0x22(r8)
  0x805347b8:  mulli    r0, r6, 0x3c
  0x805347bc:  sth      r4, 0x24(r8)
  0x805347c0:  clrlwi   r7, r5, 0x18
  0x805347c4:  stb      r3, 0x26(r8)
  0x805347c8:  add      r0, r7, r0
  0x805347cc:  mulli    r0, r0, 0x3e8
  0x805347d0:  stb      r3, 0x42(r8)
  0x805347d4:  sth      r6, 0x14(r8)
  0x805347d8:  stb      r5, 0x16(r8)
  0x805347dc:  sth      r4, 0x18(r8)
  0x805347e0:  stb      r3, 0x1a(r8)
  0x805347e4:  stw      r0, 0x44(r8)
  0x805347e8:  lis      r3, 0
  0x805347ec:  li       r4, 0
  0x805347f0:  lwz      r3, 0(r3)
  0x805347f4:  lwz      r3, 0xb70(r3)
  0x805347f8:  addi     r0, r3, -3
  0x805347fc:  cmplwi   r0, 7
  0x80534800:  bgt      0x80534818
  0x80534804:  li       r3, 1
  0x80534808:  slw      r0, r3, r0
  0x8053480c:  andi.    r0, r0, 0xc1
  0x80534810:  beq      0x80534818
  0x80534814:  mr       r4, r3
  0x80534818:  cmpwi    r4, 0
  0x8053481c:  beq      0x80534998
  0x80534820:  lwz      r3, 4(r28)
  0x80534824:  li       r4, 6
  0x80534828:  bl       0x80555e14
  0x8053482c:  stb      r3, 0x24(r28)
  0x80534830:  lis      r4, 0
  0x80534834:  lwz      r3, 4(r28)
  0x80534838:  lwz      r4, 0(r4)
  0x8053483c:  lwz      r4, 8(r4)
  0x80534840:  cmpwi    r4, 0
  0x80534844:  beq      0x80534850
  0x80534848:  lhz      r4, 4(r4)
  0x8053484c:  b        0x80534854
  0x80534850:  li       r4, 0
  0x80534854:  bl       0x80555e14
  0x80534858:  stb      r3, 0x25(r28)
  0x8053485c:  lis      r5, 0
  0x80534860:  lis      r3, 0
  0x80534864:  li       r4, 0
  0x80534868:  addi     r5, r5, 0
  0x8053486c:  lwz      r3, 0(r3)
  0x80534870:  addi     r5, r5, 0x20
  0x80534874:  li       r6, 0
  0x80534878:  bl       0x80542528
  0x8053487c:  mr       r29, r3
  0x80534880:  li       r3, 8
  0x80534884:  bl       0x80555bf8
  0x80534888:  cmpwi    r3, 0
  0x8053488c:  mr       r30, r3
  0x80534890:  beq      0x805348a8
  0x80534894:  lis      r5, 0
  0x80534898:  mr       r4, r29
  0x8053489c:  addi     r5, r5, 0
  0x805348a0:  stw      r5, 0(r3)
  0x805348a4:  bl       0x8053a03c
  0x805348a8:  stw      r30, 0x3c(r28)
  0x805348ac:  lis      r3, 0
  0x805348b0:  lwz      r4, 0(r3)
  0x805348b4:  lwz      r0, 0xb78(r4)
  0x805348b8:  cmpwi    r0, 0
  0x805348bc:  bne      0x805348f8
  0x805348c0:  lbz      r29, 0x24(r4)
  0x805348c4:  mr       r3, r30
  0x805348c8:  lwz      r4, 0xb68(r4)
  0x805348cc:  bl       0x8053a064
  0x805348d0:  extsh    r3, r3
  0x805348d4:  addi     r0, r29, -2
  0x805348d8:  mulli    r3, r3, 0x16
  0x805348dc:  lwz      r4, 4(r30)
  0x805348e0:  slwi     r0, r0, 1
  0x805348e4:  add      r3, r4, r3
  0x805348e8:  add      r3, r3, r0
  0x805348ec:  lha      r0, 0x10(r3)
  0x805348f0:  clrlwi   r7, r0, 0x10
  0x805348f4:  b        0x8053492c
  0x805348f8:  lbz      r29, 0x24(r4)
  0x805348fc:  mr       r3, r30
  0x80534900:  lwz      r4, 0xb68(r4)
  0x80534904:  bl       0x8053a064
  0x80534908:  extsh    r3, r3
  0x8053490c:  addi     r0, r29, -2
  0x80534910:  mulli    r3, r3, 0x16
  0x80534914:  lwz      r4, 4(r30)
  0x80534918:  slwi     r0, r0, 1
  0x8053491c:  add      r3, r4, r3
  0x80534920:  add      r3, r3, r0
  0x80534924:  lha      r0, 0x1dc(r3)
  0x80534928:  clrlwi   r7, r0, 0x10
  0x8053492c:  lis      r3, -0x7777
  0x80534930:  lwz      r8, 0x14(r28)
  0x80534934:  addi     r0, r3, -0x7777
  0x80534938:  li       r4, 0
  0x8053493c:  mulhw    r0, r0, r7
  0x80534940:  li       r3, 1
  0x80534944:  add      r0, r0, r7
  0x80534948:  srawi    r0, r0, 5
  0x8053494c:  srwi     r5, r0, 0x1f
  0x80534950:  add      r6, r0, r5
  0x80534954:  sth      r6, 0x20(r8)
  0x80534958:  clrlwi   r0, r6, 0x10
  0x8053495c:  mulli    r0, r0, 0x3c
  0x80534960:  subf     r5, r0, r7
  0x80534964:  stb      r5, 0x22(r8)
  0x80534968:  clrlwi   r7, r5, 0x18
  0x8053496c:  sth      r4, 0x24(r8)
