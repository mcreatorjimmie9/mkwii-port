/* Function at 0x805A09A8, size=412 bytes */
/* Stack frame: 32 bytes */

int FUN_805A09A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x805A09AC
    r9 = *(0 + r3); // lwz @ 0x805A09B0
    /* lis r6, 0 */ // 0x805A09B4
    /* lfs f1, 8(r4) */ // 0x805A09B8
    r8 = r3;
    /* lfs f2, 0xc(r9) */ // 0x805A09C0
    /* li r10, 0 */ // 0x805A09C4
    /* lfs f3, 8(r9) */ // 0x805A09C8
    /* li r9, 0 */ // 0x805A09CC
    /* fsubs f2, f1, f2 */ // 0x805A09D0
    /* lfs f0, 0(r4) */ // 0x805A09D4
    /* lfs f7, 0(r7) */ // 0x805A09D8
    /* fsubs f1, f0, f3 */ // 0x805A09DC
    /* stfs f2, 0x14(r1) */ // 0x805A09E0
    /* lfs f0, 0(r6) */ // 0x805A09E4
    /* stfs f1, 0x10(r1) */ // 0x805A09E8
    /* b 0x805a0b20 */ // 0x805A09EC
    r6 = *(0x38 + r8); // lwz @ 0x805A09F0
    /* lfs f1, 0x40(r8) */ // 0x805A09F4
    r7 = *(0 + r6); // lwz @ 0x805A09F8
    /* fneg f2, f1 */ // 0x805A09FC
    /* lfs f4, 8(r4) */ // 0x805A0A00
    /* lfs f1, 4(r7) */ // 0x805A0A04
    /* lfs f5, 0(r7) */ // 0x805A0A08
    /* fsubs f4, f4, f1 */ // 0x805A0A0C
    /* lfs f3, 0(r4) */ // 0x805A0A10
    /* lfs f1, 0x3c(r8) */ // 0x805A0A14
    /* fsubs f3, f3, f5 */ // 0x805A0A18
    /* stfs f4, 0xc(r1) */ // 0x805A0A1C
    /* fmuls f1, f1, f4 */ // 0x805A0A20
    /* stfs f3, 8(r1) */ // 0x805A0A24
    /* fmuls f2, f2, f3 */ // 0x805A0A28
    /* fadds f1, f2, f1 */ // 0x805A0A2C
    /* .byte 0xfc, 0x01, 0x38, 0x40 */ // 0x805A0A30
    if (>=) goto 0x0x805a0a40;
    /* li r0, 0 */ // 0x805A0A38
    /* b 0x805a0a70 */ // 0x805A0A3C
    /* lfs f4, 0x48(r8) */ // 0x805A0A40
    /* lfs f3, 0x10(r1) */ // 0x805A0A44
    /* lfs f2, 0x44(r8) */ // 0x805A0A48
    /* lfs f1, 0x14(r1) */ // 0x805A0A4C
    /* fmuls f3, f4, f3 */ // 0x805A0A50
    /* fmuls f1, f2, f1 */ // 0x805A0A54
    /* fsubs f1, f3, f1 */ // 0x805A0A58
    /* .byte 0xfc, 0x01, 0x38, 0x40 */ // 0x805A0A5C
    /* mfcr r0 */ // 0x805A0A60
    /* srwi r0, r0, 0x1f */ // 0x805A0A64
    /* cntlzw r0, r0 */ // 0x805A0A68
    /* srwi r0, r0, 5 */ // 0x805A0A6C
    if (!=) goto 0x0x805a0a80;
    /* li r0, 1 */ // 0x805A0A78
    /* b 0x805a0af8 */ // 0x805A0A7C
    /* lfs f4, 0x10(r6) */ // 0x805A0A80
    /* li r0, 0 */ // 0x805A0A84
    /* lfs f3, 8(r1) */ // 0x805A0A88
    /* lfs f2, 0x14(r6) */ // 0x805A0A8C
    /* lfs f1, 0xc(r1) */ // 0x805A0A90
    /* fmuls f3, f4, f3 */ // 0x805A0A94
    /* lfs f6, 0x10(r3) */ // 0x805A0A98
    /* fmuls f1, f2, f1 */ // 0x805A0A9C
    /* lfs f5, 0x10(r1) */ // 0x805A0AA0
    /* lfs f4, 0x14(r3) */ // 0x805A0AA4
    /* lfs f2, 0x14(r1) */ // 0x805A0AA8
    /* fmuls f5, f6, f5 */ // 0x805A0AAC
    /* fadds f3, f3, f1 */ // 0x805A0AB0
    /* fmuls f1, f4, f2 */ // 0x805A0AB4
    /* fneg f2, f3 */ // 0x805A0AB8
    /* fadds f3, f5, f1 */ // 0x805A0ABC
    /* fadds f1, f3, f2 */ // 0x805A0AC0
    /* fdivs f1, f3, f1 */ // 0x805A0AC4
    /* stfs f1, 0(r5) */ // 0x805A0AC8
    /* .byte 0xfc, 0x01, 0x38, 0x40 */ // 0x805A0ACC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805A0AD0
    if (!=) goto 0x0x805a0ae8;
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A0AD8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x805A0ADC
    if (!=) goto 0x0x805a0ae8;
    /* li r0, 1 */ // 0x805A0AE4
    /* li r0, 2 */ // 0x805A0AEC
    if (==) goto 0x0x805a0af8;
    /* li r0, 0 */ // 0x805A0AF4
    if (==) goto 0x0x805a0b0c;
    if (==) goto 0x0x805a0b14;
    /* b 0x805a0b18 */ // 0x805A0B08
    /* li r3, 0 */ // 0x805A0B0C
    /* b 0x805a0b3c */ // 0x805A0B10
    /* li r9, 1 */ // 0x805A0B14
    r8 = r8 + 0x18; // 0x805A0B18
    r0 = *(4 + r3); // lhz @ 0x805A0B20
    if (<) goto 0x0x805a09f0;
    /* li r3, 1 */ // 0x805A0B30
    if (==) goto 0x0x805a0b3c;
    /* li r3, 2 */ // 0x805A0B38
    return;
}