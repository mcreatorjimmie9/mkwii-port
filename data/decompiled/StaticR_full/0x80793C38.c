/* Function at 0x80793C38, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80793C38(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793C4C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80793C54
    r29 = r3;
    if (>=) goto 0x0x80793c84;
    /* slwi r0, r5, 2 */ // 0x80793C60
    r31 = r3 + r0; // 0x80793C64
    r3 = *(0x80 + r31); // lwzu @ 0x80793C68
    if (==) goto 0x0x80793c88;
    if (==) goto 0x0x80793c88;
    /* li r4, 0 */ // 0x80793C78
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80793c88 */ // 0x80793C80
    /* li r31, 0 */ // 0x80793C84
    if (==) goto 0x0x80793cac;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80793C9C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793cb0 */ // 0x80793CA8
    /* li r3, 0 */ // 0x80793CAC
    r0 = *(0x24 + r1); // lwz @ 0x80793CB0
    r31 = *(0x1c + r1); // lwz @ 0x80793CB4
    r30 = *(0x18 + r1); // lwz @ 0x80793CB8
    r29 = *(0x14 + r1); // lwz @ 0x80793CBC
}