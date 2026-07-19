/* Function at 0x808B9C00, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808B9C00(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808B9C0C
    r31 = r3;
    r0 = *(0x3ec + r3); // lwz @ 0x808B9C14
    if (!=) goto 0x0x808b9c30;
    r0 = *(0x10 + r3); // lwz @ 0x808B9C20
    if (!=) goto 0x0x808b9c30;
    FUN_80671C3C(); // bl 0x80671C3C
    r3 = r31;
    FUN_808B4B7C(r3); // bl 0x808B4B7C
    r0 = *(0x14 + r1); // lwz @ 0x808B9C38
    r31 = *(0xc + r1); // lwz @ 0x808B9C3C
    return;
}