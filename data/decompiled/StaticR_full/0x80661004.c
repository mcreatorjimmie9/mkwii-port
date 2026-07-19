/* Function at 0x80661004, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80661004(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x80661018
    r30 = r3;
    FUN_80660C30(); // bl 0x80660C30
    /* neg r0, r31 */ // 0x80661024
    r3 = r30 + 0x98; // 0x80661028
    r0 = r0 | r31; // 0x8066102C
    /* li r4, 1 */ // 0x80661030
    /* srwi r31, r0, 0x1f */ // 0x80661034
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8066103C
    r4 = r31;
    /* lfs f1, 0(r5) */ // 0x80661044
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8066104C
    r31 = *(0xc + r1); // lwz @ 0x80661050
    r30 = *(8 + r1); // lwz @ 0x80661054
    return;
}