/* Function at 0x807A0114, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807A0114(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807A0128
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A0130
    r29 = r3;
    if (==) goto 0x0x807a0198;
    if (==) goto 0x0x807a0188;
    /* lis r5, 0 */ // 0x807A0140
    /* lis r4, 0 */ // 0x807A0144
    r5 = r5 + 0; // 0x807A0148
    *(0 + r3) = r5; // stw @ 0x807A014C
    r31 = *(0 + r4); // lwz @ 0x807A0150
    if (==) goto 0x0x807a017c;
    /* li r0, 0 */ // 0x807A015C
    *(0 + r4) = r0; // stw @ 0x807A0160
    if (==) goto 0x0x807a017c;
    r3 = r31;
    /* li r4, -1 */ // 0x807A016C
    FUN_8079FECC(r3, r4); // bl 0x8079FECC
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A0180
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a0198;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807A0198
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807A01A0
    r29 = *(0x14 + r1); // lwz @ 0x807A01A4
    r0 = *(0x24 + r1); // lwz @ 0x807A01A8
    return;
}