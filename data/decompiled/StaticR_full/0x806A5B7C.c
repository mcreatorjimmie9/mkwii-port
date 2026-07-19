/* Function at 0x806A5B7C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806A5B7C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x806A5B84
    *(0x14 + r1) = r0; // stw @ 0x806A5B88
    *(0xc + r1) = r31; // stw @ 0x806A5B8C
    r31 = r3;
    r3 = r3 + 0x98; // 0x806A5B94
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A5B9C
    if (==) goto 0x0x806a5bc4;
    r3 = r31 + 0x98; // 0x806A5BA8
    /* li r4, 1 */ // 0x806A5BAC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A5BB4
    /* li r4, 3 */ // 0x806A5BB8
    /* lfs f1, 0(r5) */ // 0x806A5BBC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A5BC4
    r31 = *(0xc + r1); // lwz @ 0x806A5BC8
    return;
}