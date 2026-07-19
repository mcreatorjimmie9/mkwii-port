/* Function at 0x80647B7C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80647B7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647B88
    r31 = r3;
    FUN_806346A4(); // bl 0x806346A4
    r3 = r31;
    FUN_80632DA8(r3); // bl 0x80632DA8
    *(8 + r31) = r3; // stw @ 0x80647B9C
    r3 = r31;
    FUN_80634ECC(r3, r3); // bl 0x80634ECC
    r0 = *(0x14 + r1); // lwz @ 0x80647BA8
    r31 = *(0xc + r1); // lwz @ 0x80647BAC
    return;
}