/* Function at 0x8081CE8C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8081CE8C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x8081CEA0
    *(0x14 + r1) = r29; // stw @ 0x8081CEA4
    r29 = r3;
    r31 = r29;
    /* b 0x8081cec8 */ // 0x8081CEB0
    r3 = *(0x20 + r31); // lwz @ 0x8081CEB4
    r4 = r29 + 0xb0; // 0x8081CEB8
    FUN_80829E48(r4); // bl 0x80829E48
    r31 = r31 + 4; // 0x8081CEC0
    r30 = r30 + 1; // 0x8081CEC4
    r0 = *(0x50 + r29); // lwz @ 0x8081CEC8
    if (<) goto 0x0x8081ceb4;
    r0 = *(0x24 + r1); // lwz @ 0x8081CED4
    r31 = *(0x1c + r1); // lwz @ 0x8081CED8
    r30 = *(0x18 + r1); // lwz @ 0x8081CEDC
    r29 = *(0x14 + r1); // lwz @ 0x8081CEE0
    return;
}