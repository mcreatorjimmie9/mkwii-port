/* Function at 0x806BE708, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806BE708(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806BE710
    *(0x14 + r1) = r0; // stw @ 0x806BE714
    *(0xc + r1) = r31; // stw @ 0x806BE718
    r3 = *(0 + r3); // lwz @ 0x806BE71C
    r3 = *(0 + r3); // lwz @ 0x806BE720
    r31 = *(0x404 + r3); // lwz @ 0x806BE724
    r3 = r31;
    FUN_806598D0(r3); // bl 0x806598D0
    if (==) goto 0x0x806be740;
    r3 = r31;
    FUN_80659914(r3, r3); // bl 0x80659914
    r0 = *(0x14 + r1); // lwz @ 0x806BE740
    r31 = *(0xc + r1); // lwz @ 0x806BE744
    return;
}