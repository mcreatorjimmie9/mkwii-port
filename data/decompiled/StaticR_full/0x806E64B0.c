/* Function at 0x806E64B0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E64B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806E64B8
    *(0x14 + r1) = r0; // stw @ 0x806E64BC
    *(0xc + r1) = r31; // stw @ 0x806E64C0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806E64C8
    if (==) goto 0x0x806e64d8;
    FUN_806EF3D0(); // bl 0x806EF3D0
    /* lis r3, 0 */ // 0x806E64D8
    r3 = *(0 + r3); // lwz @ 0x806E64DC
    if (==) goto 0x0x806e64ec;
    FUN_806EA8AC(r3); // bl 0x806EA8AC
    /* li r0, 1 */ // 0x806E64EC
    *(0xec + r31) = r0; // stw @ 0x806E64F0
    r31 = *(0xc + r1); // lwz @ 0x806E64F4
    r0 = *(0x14 + r1); // lwz @ 0x806E64F8
    return;
}