/* Function at 0x805DA0DC, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805DA0DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x805DA0F4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805DA0FC
    r28 = r3;
    if (==) goto 0x0x805da16c;
    /* lis r4, 0 */ // 0x805DA108
    r31 = r28;
    r4 = r4 + 0; // 0x805DA110
    *(0 + r3) = r4; // stw @ 0x805DA114
    /* li r30, 0 */ // 0x805DA118
    r3 = *(0x44 + r31); // lwz @ 0x805DA11C
    if (==) goto 0x0x805da130;
    if (==) goto 0x0x805da130;
    FUN_805E3430(); // bl 0x805E3430
    r30 = r30 + 1; // 0x805DA130
    r31 = r31 + 4; // 0x805DA134
    if (<) goto 0x0x805da11c;
    if (==) goto 0x0x805da15c;
    /* lis r4, 0 */ // 0x805DA148
    r3 = *(0x14 + r28); // lwz @ 0x805DA14C
    r4 = r4 + 0; // 0x805DA150
    *(0 + r28) = r4; // stw @ 0x805DA154
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805da16c;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x805DA16C
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x805DA174
    r29 = *(0x14 + r1); // lwz @ 0x805DA178
    r28 = *(0x10 + r1); // lwz @ 0x805DA17C
    r0 = *(0x24 + r1); // lwz @ 0x805DA180
    return;
}