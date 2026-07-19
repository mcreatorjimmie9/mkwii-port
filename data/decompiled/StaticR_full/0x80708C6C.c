/* Function at 0x80708C6C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80708C6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80708C74
    *(0xc + r1) = r31; // stw @ 0x80708C7C
    *(8 + r1) = r30; // stw @ 0x80708C80
    r30 = r3;
    r3 = r3 + 0x98; // 0x80708C88
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708C90
    /* li r4, 0 */ // 0x80708C94
    /* lfs f1, 0(r5) */ // 0x80708C98
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r30 + 0x174; // 0x80708CA0
    /* li r30, 0 */ // 0x80708CA4
    r3 = r31;
    /* li r4, 0 */ // 0x80708CAC
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x80708CB4
    r31 = r31 + 0x254; // 0x80708CB8
    if (<) goto 0x0x80708ca8;
    r0 = *(0x14 + r1); // lwz @ 0x80708CC4
    r31 = *(0xc + r1); // lwz @ 0x80708CC8
    r30 = *(8 + r1); // lwz @ 0x80708CCC
    return;
}