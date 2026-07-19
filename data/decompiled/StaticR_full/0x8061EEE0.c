/* Function at 0x8061EEE0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8061EEE0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lfs f3, 0(r4) */ // 0x8061EEE8
    *(0x24 + r1) = r0; // stw @ 0x8061EEEC
    /* lfs f2, 4(r4) */ // 0x8061EEF4
    r7 = *(0 + r3); // lwz @ 0x8061EEF8
    /* lfs f1, 8(r4) */ // 0x8061EEFC
    r6 = *(0 + r7); // lwz @ 0x8061EF04
    r6 = *(0x14 + r6); // lwz @ 0x8061EF08
    r6 = *(4 + r6); // lwz @ 0x8061EF0C
    /* lfs f0, 0x184(r6) */ // 0x8061EF10
    /* fmuls f0, f0, f3 */ // 0x8061EF14
    /* stfs f0, 0x14(r1) */ // 0x8061EF18
    /* lfs f0, 0x188(r6) */ // 0x8061EF1C
    /* fmuls f0, f0, f2 */ // 0x8061EF20
    /* stfs f0, 0x18(r1) */ // 0x8061EF24
    /* lfs f0, 0x18c(r6) */ // 0x8061EF28
    /* fmuls f0, f0, f1 */ // 0x8061EF2C
    /* stfs f0, 0x1c(r1) */ // 0x8061EF30
    r6 = *(0 + r7); // lwz @ 0x8061EF34
    r6 = *(0x14 + r6); // lwz @ 0x8061EF38
    r6 = *(4 + r6); // lwz @ 0x8061EF3C
    /* lfs f0, 0x190(r6) */ // 0x8061EF40
    /* fmuls f0, f0, f3 */ // 0x8061EF44
    /* stfs f0, 8(r1) */ // 0x8061EF48
    /* lfs f0, 0x194(r6) */ // 0x8061EF4C
    /* fmuls f0, f0, f2 */ // 0x8061EF50
    /* stfs f0, 0xc(r1) */ // 0x8061EF54
    /* lfs f0, 0x198(r6) */ // 0x8061EF58
    /* fmuls f0, f0, f1 */ // 0x8061EF5C
    /* stfs f0, 0x10(r1) */ // 0x8061EF60
    r3 = *(0 + r3); // lwz @ 0x8061EF64
    r3 = *(8 + r3); // lwz @ 0x8061EF68
    r3 = *(0x90 + r3); // lwz @ 0x8061EF6C
    r3 = *(4 + r3); // lwz @ 0x8061EF70
    FUN_8063DFFC(); // bl 0x8063DFFC
    r0 = *(0x24 + r1); // lwz @ 0x8061EF78
    return;
}