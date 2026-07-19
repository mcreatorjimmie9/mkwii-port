/* Function at 0x807C3BF4, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_807C3BF4(int r3, int r4, int r5, int r6, int r7)
{
    r5 = r3;
    /* li r6, 0 */ // 0x807C3BF8
    /* b 0x807c3c20 */ // 0x807C3BFC
    r7 = *(0xc + r5); // lwz @ 0x807C3C00
    r0 = *(0x14 + r7); // lwz @ 0x807C3C04
    *(0x18 + r7) = r0; // stw @ 0x807C3C08
    if (>=) goto 0x0x807c3c18;
    *(0x18 + r7) = r4; // stw @ 0x807C3C14
    r5 = r5 + 4; // 0x807C3C18
    r6 = r6 + 1; // 0x807C3C1C
    r0 = *(4 + r3); // lwz @ 0x807C3C20
    if (<) goto 0x0x807c3c00;
    return;
}