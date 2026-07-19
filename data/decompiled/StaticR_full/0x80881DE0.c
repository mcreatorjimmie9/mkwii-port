/* Function at 0x80881DE0, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_80881DE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 7 */ // 0x80881DE8
    r3 = r3 + 0x98; // 0x80881DEC
    *(0x14 + r1) = r0; // stw @ 0x80881DF0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80881DF8
    /* li r4, 0 */ // 0x80881DFC
    /* lfs f1, 0(r5) */ // 0x80881E00
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80881E08
    return;
}