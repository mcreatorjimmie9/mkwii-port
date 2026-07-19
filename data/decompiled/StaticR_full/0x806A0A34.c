/* Function at 0x806A0A34, size=64 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_806A0A34(int r3, int r4, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0 */ // 0x806A0A3C
    *(0x24 + r1) = r0; // stw @ 0x806A0A40
    r6 = r6 + 0; // 0x806A0A44
    *(0x10 + r1) = r4; // stw @ 0x806A0A48
    *(8 + r1) = r6; // stw @ 0x806A0A50
    *(0xc + r1) = r3; // stw @ 0x806A0A54
    *(0x14 + r1) = r5; // stw @ 0x806A0A58
    r3 = *(0xbc + r3); // lwz @ 0x806A0A5C
    FUN_806652A4(r4); // bl 0x806652A4
    r0 = *(0x24 + r1); // lwz @ 0x806A0A64
    return;
}