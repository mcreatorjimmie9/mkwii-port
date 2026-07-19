/* Function at 0x80661064, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80661064(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80661070
    *(0xc + r1) = r31; // stw @ 0x80661074
    /* li r31, 4 */ // 0x80661078
    if (==) goto 0x0x80661084;
    /* li r31, 3 */ // 0x80661080
    /* li r4, 1 */ // 0x80661084
    r3 = r3 + 0x98; // 0x80661088
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80661090
    r4 = r31;
    /* lfs f1, 0(r5) */ // 0x80661098
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806610A0
    r31 = *(0xc + r1); // lwz @ 0x806610A4
    return;
}