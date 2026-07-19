/* Function at 0x80647D88, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80647D88(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647D94
    r31 = r3;
    FUN_806346A4(); // bl 0x806346A4
    r3 = r31;
    FUN_80632DA8(r3); // bl 0x80632DA8
    *(8 + r31) = r3; // stw @ 0x80647DA8
    r3 = r31;
    FUN_80634ECC(r3, r3); // bl 0x80634ECC
    r0 = *(0x14 + r1); // lwz @ 0x80647DB4
    r31 = *(0xc + r1); // lwz @ 0x80647DB8
    return;
}