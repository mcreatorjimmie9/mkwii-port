/* Function at 0x80670BD0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80670BD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80670BD8
    *(0xc + r1) = r31; // stw @ 0x80670BE0
    *(8 + r1) = r30; // stw @ 0x80670BE4
    r30 = r3;
    r3 = r3 + 0x98; // 0x80670BEC
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80670BF4
    /* li r4, 0 */ // 0x80670BF8
    /* lfs f1, 0(r31) */ // 0x80670BFC
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80670C04
    /* li r4, 4 */ // 0x80670C08
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80670C10
    /* li r4, 0 */ // 0x80670C14
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30;
    FUN_80670D64(r4, r3); // bl 0x80670D64
    r0 = *(0x14 + r1); // lwz @ 0x80670C24
    r31 = *(0xc + r1); // lwz @ 0x80670C28
    r30 = *(8 + r1); // lwz @ 0x80670C2C
    return;
}