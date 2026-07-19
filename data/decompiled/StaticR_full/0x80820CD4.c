/* Function at 0x80820CD4, size=96 bytes */
/* Stack frame: 32 bytes */

int FUN_80820CD4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r8, 0 */ // 0x80820CD8
    r8 = r8 + 0; // 0x80820CDC
    /* lis r3, 0 */ // 0x80820CE0
    r7 = *(0 + r3); // lwzu @ 0x80820CE4
    r5 = r8 + 0; // 0x80820CE8
    r4 = r8 + 0x30; // 0x80820CEC
    *(8 + r1) = r7; // stw @ 0x80820CF0
    r6 = *(4 + r3); // lwz @ 0x80820CF4
    r0 = *(8 + r3); // lwz @ 0x80820CF8
    r3 = r8 + 0x60; // 0x80820CFC
    *(0xc + r1) = r6; // stw @ 0x80820D00
    *(0x10 + r1) = r0; // stw @ 0x80820D04
    *(0 + r8) = r7; // stw @ 0x80820D08
    *(4 + r5) = r6; // stw @ 0x80820D0C
    *(8 + r5) = r0; // stw @ 0x80820D10
    *(0x30 + r8) = r7; // stw @ 0x80820D14
    *(4 + r4) = r6; // stw @ 0x80820D18
    *(8 + r4) = r0; // stw @ 0x80820D1C
    *(0x60 + r8) = r7; // stw @ 0x80820D20
    *(4 + r3) = r6; // stw @ 0x80820D24
    *(8 + r3) = r0; // stw @ 0x80820D28
    return;
}