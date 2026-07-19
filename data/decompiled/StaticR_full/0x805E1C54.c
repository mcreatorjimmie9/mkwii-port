/* Function at 0x805E1C54, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805E1C54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805E1C64
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805E1C6C
    r30 = r3;
    if (==) goto 0x0x805e1cb4;
    /* lis r4, 0 */ // 0x805E1C78
    r4 = r4 + 0; // 0x805E1C7C
    *(0 + r3) = r4; // stw @ 0x805E1C80
    r3 = r3 + 0x254c; // 0x805E1C84
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    r3 = r30 + 0x254c; // 0x805E1C8C
    /* li r4, -1 */ // 0x805E1C90
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x805E1C9C
    FUN_805A9FEC(r3, r4, r3, r4); // bl 0x805A9FEC
}