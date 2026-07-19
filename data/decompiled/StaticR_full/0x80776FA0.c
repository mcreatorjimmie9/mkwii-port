/* Function at 0x80776FA0, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80776FA0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80776FB0
    r5 = r31 + 0; // 0x80776FB4
    *(8 + r1) = r30; // stw @ 0x80776FB8
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80776FC4
    /* li r3, 0x7c */ // 0x80776FC8
    r4 = r4 + 0; // 0x80776FCC
    *(0 + r30) = r4; // stw @ 0x80776FD0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}