/* Function at 0x806A0C48, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806A0C48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x806A0C50
    *(0x14 + r1) = r0; // stw @ 0x806A0C54
    r5 = r5 + 0; // 0x806A0C58
    *(0xc + r1) = r3; // stw @ 0x806A0C60
    *(8 + r1) = r5; // stw @ 0x806A0C64
    r3 = *(0xbc + r3); // lwz @ 0x806A0C68
    FUN_806652A4(r5, r4); // bl 0x806652A4
    r0 = *(0x14 + r1); // lwz @ 0x806A0C70
    return;
}