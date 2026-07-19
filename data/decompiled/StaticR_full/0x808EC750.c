/* Function at 0x808EC750, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808EC750(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808EC758
    *(0x14 + r1) = r0; // stw @ 0x808EC75C
    *(0xc + r1) = r31; // stw @ 0x808EC760
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808EC768
    r3 = *(0 + r3); // lwz @ 0x808EC76C
    r3 = *(0 + r3); // lwz @ 0x808EC770
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808ec788;
    r3 = r31;
    FUN_808B4A48(r3); // bl 0x808B4A48
    r0 = *(0x14 + r1); // lwz @ 0x808EC788
    r31 = *(0xc + r1); // lwz @ 0x808EC78C
    return;
}