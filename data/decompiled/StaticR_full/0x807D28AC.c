/* Function at 0x807D28AC, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_807D28AC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807D28B8
    /* stmw r26, 8(r1) */ // 0x807D28BC
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807d294c;
    /* lis r4, 0 */ // 0x807D28CC
    r29 = r26;
    r4 = r4 + 0; // 0x807D28D4
    *(0 + r3) = r4; // stw @ 0x807D28D8
    /* li r28, 0 */ // 0x807D28DC
    /* li r31, 0 */ // 0x807D28E0
    r30 = *(4 + r29); // lwz @ 0x807D28E4
    if (==) goto 0x0x807d2904;
    r3 = r30;
    /* li r4, 0 */ // 0x807D28F4
    FUN_8091CD70(r3, r4); // bl 0x8091CD70
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r28 = r28 + 1; // 0x807D2904
    *(4 + r29) = r31; // stwu @ 0x807D2908
    if (<) goto 0x0x807d28e4;
    r30 = *(0xc + r26); // lwz @ 0x807D2914
    if (==) goto 0x0x807d2934;
    r3 = r30;
    /* li r4, 0 */ // 0x807D2924
    FUN_8091CD70(r3, r4); // bl 0x8091CD70
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807D2938
    *(0xc + r26) = r0; // stw @ 0x807D293C
    if (<=) goto 0x0x807d294c;
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x807D2954
    return;
}