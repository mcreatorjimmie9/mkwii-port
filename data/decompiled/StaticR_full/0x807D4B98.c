/* Function at 0x807D4B98, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807D4B98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807D4BAC
    r29 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807D4BB4
    r31 = *(0 + r4); // lwz @ 0x807D4BB8
    r3 = r31;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    r6 = *(0x128 + r29); // lbz @ 0x807D4BC4
    r3 = r29;
    r4 = r29 + 0x118; // 0x807D4BCC
    r5 = r29 + 0x110; // 0x807D4BD0
    /* li r30, 0 */ // 0x807D4BD4
    FUN_807D4300(r3, r4, r5); // bl 0x807D4300
    if (==) goto 0x0x807d4be8;
    /* li r30, 1 */ // 0x807D4BE4
    r3 = *(0xf4 + r29); // lwz @ 0x807D4BE8
    FUN_8061DA88(); // bl 0x8061DA88
}