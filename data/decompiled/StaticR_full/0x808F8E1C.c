/* Function at 0x808F8E1C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808F8E1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808F8E38
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F8E40
    r28 = r3;
    FUN_805E34E4(); // bl 0x805E34E4
    /* subf r3, r29, r30 */ // 0x808F8E4C
    /* lis r7, 0 */ // 0x808F8E50
    /* li r5, 0 */ // 0x808F8E54
    /* li r6, -1 */ // 0x808F8E58
    r4 = r3 + 1; // 0x808F8E5C
    r7 = r7 + 0; // 0x808F8E60
    /* li r0, 1 */ // 0x808F8E64
    *(0 + r28) = r7; // stw @ 0x808F8E68
    r3 = r28;
    *(0x18 + r28) = r29; // stw @ 0x808F8E70
    *(0x1c + r28) = r6; // stw @ 0x808F8E74
    *(0x20 + r28) = r5; // stw @ 0x808F8E78
    *(0x24 + r28) = r5; // sth @ 0x808F8E7C
    *(0x26 + r28) = r4; // stb @ 0x808F8E80
    *(0x27 + r28) = r31; // stb @ 0x808F8E84
    *(0x28 + r28) = r0; // stb @ 0x808F8E88
    r31 = *(0x1c + r1); // lwz @ 0x808F8E8C
    r30 = *(0x18 + r1); // lwz @ 0x808F8E90
    r29 = *(0x14 + r1); // lwz @ 0x808F8E94
    r28 = *(0x10 + r1); // lwz @ 0x808F8E98
    r0 = *(0x24 + r1); // lwz @ 0x808F8E9C
    return;
}