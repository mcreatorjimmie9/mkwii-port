/* Function at 0x805F402C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F402C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F403C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F4044
    r30 = r3;
    if (==) goto 0x0x805f407c;
    /* lis r4, 0 */ // 0x805F4050
    r4 = r4 + 0; // 0x805F4054
    *(0 + r3) = r4; // stw @ 0x805F4058
    FUN_805F4CDC(r4, r4); // bl 0x805F4CDC
    r3 = r30;
    /* li r4, 0 */ // 0x805F4064
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805f407c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F4080
    r30 = *(8 + r1); // lwz @ 0x805F4084
}