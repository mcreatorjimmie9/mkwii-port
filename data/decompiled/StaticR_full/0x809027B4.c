/* Function at 0x809027B4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_809027B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x809027BC
    *(0x14 + r1) = r0; // stw @ 0x809027C0
    *(0xc + r1) = r31; // stw @ 0x809027C4
    r31 = *(0 + r3); // lwz @ 0x809027C8
    if (==) goto 0x0x80902804;
    if (==) goto 0x0x809027f8;
    /* lis r4, 0 */ // 0x809027D8
    r3 = r31 + 0xb00; // 0x809027DC
    r4 = r4 + 0; // 0x809027E0
    /* li r5, 0x14 */ // 0x809027E4
    /* li r6, 0xff */ // 0x809027E8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r4, r5, r6, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x809027F8
    /* li r0, 0 */ // 0x809027FC
    *(0 + r3) = r0; // stw @ 0x80902800
    r0 = *(0x14 + r1); // lwz @ 0x80902804
    r31 = *(0xc + r1); // lwz @ 0x80902808
}