/* Function at 0x80667934, size=68 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_80667934(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r21 */
    /* stmw r21, 0x54(r1) */ // 0x80667940
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r21 = *(0 + r3); // lwz @ 0x80667950
    /* b 0x8066799c */ // 0x80667954
    r4 = r27;
    r3 = r21 + 0x28; // 0x8066795C
    /* li r23, 0 */ // 0x80667960
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x80667988;
    r4 = r28;
    r3 = r21 + 0x69; // 0x80667974
}