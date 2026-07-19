/* Function at 0x8064DB6C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8064DB6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8064DB84
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8064DB8C
    *(8 + r3) = r4; // stw @ 0x8064DB90
    r4 = *(0x64 + r4); // lwz @ 0x8064DB94
    r0 = *(0xc + r4); // lwz @ 0x8064DB98
    *(0xc + r3) = r0; // stw @ 0x8064DB9C
    *(0x10 + r3) = r5; // stw @ 0x8064DBA0
    if (<=) goto 0x0x8064dd10;
    /* slwi r29, r5, 2 */ // 0x8064DBA8
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    *(0 + r30) = r3; // stw @ 0x8064DBB4
    r3 = r29;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* cmpwi cr1, r31, 0 */
    *(4 + r30) = r3; // stw @ 0x8064DBC4
    /* li r4, 0 */ // 0x8064DBC8
    if (<=) goto 0x0x8064dd10;
}