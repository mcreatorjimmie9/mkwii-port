/* Function at 0x80834D64, size=108 bytes */
/* Stack frame: 32 bytes */

int FUN_80834D64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0 */ // 0x80834D68
    /* lis r3, 0 */ // 0x80834D6C
    r5 = *(0 + r6); // lwzu @ 0x80834D70
    r3 = r3 + 0; // 0x80834D74
    *(8 + r1) = r5; // stw @ 0x80834D78
    r4 = *(4 + r6); // lwz @ 0x80834D7C
    r0 = *(8 + r6); // lwz @ 0x80834D80
    *(0xc + r1) = r4; // stw @ 0x80834D84
    *(0x10 + r1) = r0; // stw @ 0x80834D88
    *(4 + r3) = r5; // stw @ 0x80834D8C
    *(8 + r3) = r4; // stw @ 0x80834D90
    *(0xc + r3) = r0; // stw @ 0x80834D94
    *(0x20 + r3) = r5; // stw @ 0x80834D98
    *(0x24 + r3) = r4; // stw @ 0x80834D9C
    *(0x28 + r3) = r0; // stw @ 0x80834DA0
    *(0x3c + r3) = r5; // stw @ 0x80834DA4
    *(0x40 + r3) = r4; // stw @ 0x80834DA8
    *(0x44 + r3) = r0; // stw @ 0x80834DAC
    *(0x90 + r3) = r5; // stw @ 0x80834DB0
    *(0x94 + r3) = r4; // stw @ 0x80834DB4
    *(0x98 + r3) = r0; // stw @ 0x80834DB8
    *(0xac + r3) = r5; // stw @ 0x80834DBC
    *(0xb0 + r3) = r4; // stw @ 0x80834DC0
    *(0xb4 + r3) = r0; // stw @ 0x80834DC4
    return;
}