/* Function at 0x807BAADC, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BAADC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x807BAAEC
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x807BAAF4
    r31 = *(0 + r5); // lwz @ 0x807BAAFC
    r5 = r30 + 0x1c; // 0x807BAB00
    FUN_805A4498(r3, r5); // bl 0x805A4498
    r3 = *(0 + r31); // lwz @ 0x807BAB08
    r3 = *(4 + r3); // lwz @ 0x807BAB0C
    r0 = *(4 + r3); // lwz @ 0x807BAB10
    /* rlwinm. r0, r0, 0, 0x19, 0x1a */ // 0x807BAB14
    if (==) goto 0x0x807bab60;
    /* lfs f1, 8(r1) */ // 0x807BAB1C
    /* lfs f0, 0xc(r1) */ // 0x807BAB20
    /* fmuls f1, f1, f1 */ // 0x807BAB24
    /* lfs f2, 0x10(r1) */ // 0x807BAB28
    /* fmuls f0, f0, f0 */ // 0x807BAB2C
    /* fmuls f2, f2, f2 */ // 0x807BAB30
    /* fadds f0, f1, f0 */ // 0x807BAB34
    /* fadds f1, f2, f0 */ // 0x807BAB38
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807BAB40
    /* lfs f0, 0(r3) */ // 0x807BAB44
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807BAB48
    if (>=) goto 0x0x807bab60;
    r3 = *(0x54 + r30); // lwz @ 0x807BAB50
    r0 = r3 + 1; // 0x807BAB54
    *(0x54 + r30) = r0; // stw @ 0x807BAB58
    /* b 0x807bab68 */ // 0x807BAB5C
    /* li r0, 0 */ // 0x807BAB60
    *(0x54 + r30) = r0; // stw @ 0x807BAB64
    r4 = *(0x54 + r30); // lwz @ 0x807BAB68
    r31 = *(0x1c + r1); // lwz @ 0x807BAB6C
    /* xori r0, r4, 0x1e */ // 0x807BAB70
    r30 = *(0x18 + r1); // lwz @ 0x807BAB74
}