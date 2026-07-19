/* Function at 0x808DD82C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808DD82C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808DD844
    FUN_808A2028(); // bl 0x808A2028
    r0 = *(0x148 + r30); // lwz @ 0x808DD84C
    if (==) goto 0x0x808dd898;
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r29 = *(0x148 + r30); // lwz @ 0x808DD860
    r30 = r30 + 0x58; // 0x808DD864
    /* li r31, 0 */ // 0x808DD868
    r3 = *(0x14 + r29); // lwz @ 0x808DD86C
    r3 = *(0 + r3); // lwz @ 0x808DD870
    if (==) goto 0x0x808dd888;
    r5 = r30;
    /* li r4, 0 */ // 0x808DD880
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808DD888
    r29 = r29 + 4; // 0x808DD88C
    if (<) goto 0x0x808dd86c;
    r0 = *(0x24 + r1); // lwz @ 0x808DD898
    r31 = *(0x1c + r1); // lwz @ 0x808DD89C
    r30 = *(0x18 + r1); // lwz @ 0x808DD8A0
    r29 = *(0x14 + r1); // lwz @ 0x808DD8A4
    return;
}