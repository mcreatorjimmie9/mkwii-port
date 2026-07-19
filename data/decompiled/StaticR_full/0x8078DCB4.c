/* Function at 0x8078DCB4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8078DCB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078DCC4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078DCCC
    r30 = r3;
    if (==) goto 0x0x8078dd0c;
    /* lis r4, 0 */ // 0x8078DCD8
    /* li r5, 4 */ // 0x8078DCDC
    r4 = r4 + 0; // 0x8078DCE0
    /* li r6, 4 */ // 0x8078DCE4
    r3 = r3 + 0x80; // 0x8078DCE8
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8078DCF4
    FUN_805E3430(r6, r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078dd0c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}