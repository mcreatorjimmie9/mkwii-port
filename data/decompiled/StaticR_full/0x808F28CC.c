/* Function at 0x808F28CC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808F28CC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808F28DC
    *(8 + r1) = r30; // stw @ 0x808F28E0
    /* li r30, 0 */ // 0x808F28E4
    r3 = r30;
    FUN_805E52A4(r3); // bl 0x805E52A4
    if (!=) goto 0x0x808f28fc;
    r31 = r31 + 1; // 0x808F28F8
    r30 = r30 + 1; // 0x808F28FC
    if (<) goto 0x0x808f28e8;
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808F290C
    r30 = *(8 + r1); // lwz @ 0x808F2910
    r0 = *(0x14 + r1); // lwz @ 0x808F2914
    return;
}