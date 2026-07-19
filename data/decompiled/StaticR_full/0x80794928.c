/* Function at 0x80794928, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80794928(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80794930
    *(0x18 + r1) = r30; // stw @ 0x8079493C
    /* lis r30, 0 */ // 0x80794940
    r30 = r30 + 0; // 0x80794944
    *(0x14 + r1) = r29; // stw @ 0x80794948
    r29 = r3;
    r5 = *(0 + r4); // lwz @ 0x80794950
    r4 = *(0x5bc + r5); // lwz @ 0x80794954
    r5 = r5 + 0x6bc; // 0x80794958
    FUN_805E3430(r5); // bl 0x805E3430
}