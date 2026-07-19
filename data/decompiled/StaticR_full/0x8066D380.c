/* Function at 0x8066D380, size=96 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8066D380(int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8066D388
    r5 = r5 + 0; // 0x8066D38C
    *(0x14 + r1) = r0; // stw @ 0x8066D390
    /* lfs f0, 4(r5) */ // 0x8066D394
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066D398
    if (<=) goto 0x0x8066d3ac;
    /* lfs f0, 0(r5) */ // 0x8066D3A0
    /* fsubs f1, f0, f1 */ // 0x8066D3A4
    /* b 0x8066d3b4 */ // 0x8066D3A8
    /* lfs f0, 0(r5) */ // 0x8066D3AC
    /* fadds f1, f0, f1 */ // 0x8066D3B0
    /* lfs f0, 0x44(r5) */ // 0x8066D3B4
    /* fmuls f0, f0, f1 */ // 0x8066D3B8
    /* fctiwz f0, f0 */ // 0x8066D3BC
    /* stfd f0, 8(r1) */ // 0x8066D3C0
    r0 = *(0xc + r1); // lwz @ 0x8066D3C4
    *(0x14 + r4) = r0; // stb @ 0x8066D3C8
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x8066D3D0
    return;
}