/* Function at 0x8069D59C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8069D59C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x8069D5A4
    r3 = r3 + 0x98; // 0x8069D5A8
    *(0x14 + r1) = r0; // stw @ 0x8069D5AC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069D5B4
    /* li r4, 0 */ // 0x8069D5B8
    /* lfs f1, 0(r5) */ // 0x8069D5BC
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8069D5C4
    return;
}