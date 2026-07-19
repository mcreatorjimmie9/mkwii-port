/* Function at 0x8066115C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8066115C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 1 */ // 0x80661164
    r3 = r3 + 0x98; // 0x80661168
    *(0x14 + r1) = r0; // stw @ 0x8066116C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80661174
    /* li r4, 5 */ // 0x80661178
    /* lfs f1, 0(r5) */ // 0x8066117C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80661184
    return;
}