/* Function at 0x806AB99C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806AB99C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AB9AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AB9B4
    r30 = r3;
    if (==) goto 0x0x806aba0c;
    /* li r4, -1 */ // 0x806AB9C0
    r3 = r3 + 0x4a0; // 0x806AB9C4
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30 + 0x32c; // 0x806AB9CC
    /* li r4, -1 */ // 0x806AB9D0
    FUN_8066D2B4(r4, r3, r3, r4); // bl 0x8066D2B4
    r3 = r30 + 0x1b8; // 0x806AB9D8
    /* li r4, -1 */ // 0x806AB9DC
    FUN_8066D018(r3, r4, r3, r4); // bl 0x8066D018
    r3 = r30 + 0x44; // 0x806AB9E4
    /* li r4, -1 */ // 0x806AB9E8
    FUN_8066D42C(r3, r4, r3, r4); // bl 0x8066D42C
    r3 = r30;
    /* li r4, 0 */ // 0x806AB9F4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806aba0c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806ABA10
    r30 = *(8 + r1); // lwz @ 0x806ABA14
    r0 = *(0x14 + r1); // lwz @ 0x806ABA18
    return;
}