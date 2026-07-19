/* Function at 0x807E56B8, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807E56B8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r7;
    *(0x18 + r1) = r30; // stw @ 0x807E56D0
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807E56D8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807E56E0
    r28 = r3;
    if (==) goto 0x0x807e56f4;
    if (!=) goto 0x0x807e572c;
    r3 = r29;
    FUN_8061E584(r3); // bl 0x8061E584
    r5 = r3;
    r3 = r28;
    r4 = r31;
    FUN_807E57A4(r3, r5, r3, r4); // bl 0x807E57A4
    r0 = *(0xd5 + r28); // lbz @ 0x807E570C
    if (==) goto 0x0x807e572c;
    r3 = r29;
    /* li r4, 0 */ // 0x807E571C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807E5724
    *(0xd5 + r28) = r0; // stb @ 0x807E5728
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x807E5730
    r30 = *(0x18 + r1); // lwz @ 0x807E5734
    r29 = *(0x14 + r1); // lwz @ 0x807E5738
    r28 = *(0x10 + r1); // lwz @ 0x807E573C
    r0 = *(0x24 + r1); // lwz @ 0x807E5740
    return;
}