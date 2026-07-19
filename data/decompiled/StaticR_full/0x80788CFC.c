/* Function at 0x80788CFC, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80788CFC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80788D10
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80788D18
    r29 = r3;
    if (==) goto 0x0x80788d80;
    if (==) goto 0x0x80788d70;
    /* lis r5, 0 */ // 0x80788D28
    /* lis r4, 0 */ // 0x80788D2C
    r5 = r5 + 0; // 0x80788D30
    *(0 + r3) = r5; // stw @ 0x80788D34
    r31 = *(0 + r4); // lwz @ 0x80788D38
    if (==) goto 0x0x80788d64;
    /* li r0, 0 */ // 0x80788D44
    *(0 + r4) = r0; // stw @ 0x80788D48
    if (==) goto 0x0x80788d64;
    r3 = r31;
    /* li r4, -1 */ // 0x80788D54
    FUN_80788A74(r3, r4); // bl 0x80788A74
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80788D68
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80788d80;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80788D80
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80788D88
    r29 = *(0x14 + r1); // lwz @ 0x80788D8C
    r0 = *(0x24 + r1); // lwz @ 0x80788D90
    return;
}