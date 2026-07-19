/* Function at 0x8069B4D0, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8069B4D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0x98; // 0x8069B4D8
    *(0x14 + r1) = r0; // stw @ 0x8069B4DC
    *(0xc + r1) = r31; // stw @ 0x8069B4E0
    r31 = r4;
    /* li r4, 4 */ // 0x8069B4E8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x8069b50c;
    /* lis r5, 0 */ // 0x8069B4F8
    /* li r4, 2 */ // 0x8069B4FC
    /* lfs f1, 0(r5) */ // 0x8069B500
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069b51c */ // 0x8069B508
    /* lis r5, 0 */ // 0x8069B50C
    /* li r4, 0 */ // 0x8069B510
    /* lfs f1, 0(r5) */ // 0x8069B514
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8069B51C
    r31 = *(0xc + r1); // lwz @ 0x8069B520
    return;
}