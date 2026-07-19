/* Function at 0x8066D204, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8066D204(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8066D20C
    *(0xc + r1) = r31; // stw @ 0x8066D214
    *(8 + r1) = r30; // stw @ 0x8066D218
    r30 = r3;
    r3 = r3 + 0x98; // 0x8066D220
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8066D228
    /* li r4, 0 */ // 0x8066D22C
    /* lfs f1, 0(r31) */ // 0x8066D230
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8066D238
    /* li r4, 1 */ // 0x8066D23C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8066D244
    /* li r4, 0 */ // 0x8066D248
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8066D250
    r31 = *(0xc + r1); // lwz @ 0x8066D254
    r30 = *(8 + r1); // lwz @ 0x8066D258
    return;
}