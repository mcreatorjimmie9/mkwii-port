/* Function at 0x80664BF4, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80664BF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80664BFC
    *(0xc + r1) = r31; // stw @ 0x80664C04
    *(8 + r1) = r30; // stw @ 0x80664C08
    r30 = r3;
    r3 = r3 + 0x98; // 0x80664C10
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80664C18
    /* li r4, 0 */ // 0x80664C1C
    /* lfs f1, 0(r31) */ // 0x80664C20
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80664C28
    /* li r4, 1 */ // 0x80664C2C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80664C34
    /* li r4, 4 */ // 0x80664C38
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80664C40
    r31 = *(0xc + r1); // lwz @ 0x80664C44
    r30 = *(8 + r1); // lwz @ 0x80664C48
    return;
}