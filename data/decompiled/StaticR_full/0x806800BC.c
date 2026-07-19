/* Function at 0x806800BC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806800BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806800CC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806800D4
    r30 = r3;
    if (==) goto 0x0x80680120;
    /* li r4, -1 */ // 0x806800E0
    r3 = r3 + 0x33c; // 0x806800E4
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x1c8; // 0x806800EC
    /* li r4, -1 */ // 0x806800F0
    FUN_80670FE0(r4, r3, r3, r4); // bl 0x80670FE0
    r3 = r30 + 0x44; // 0x806800F8
    /* li r4, -1 */ // 0x806800FC
    FUN_80670AB8(r3, r4, r3, r4); // bl 0x80670AB8
    r3 = r30;
    /* li r4, 0 */ // 0x80680108
    FUN_80672580(r3, r4, r3, r4); // bl 0x80672580
    if (<=) goto 0x0x80680120;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80680124
    r30 = *(8 + r1); // lwz @ 0x80680128
    r0 = *(0x14 + r1); // lwz @ 0x8068012C
    return;
}