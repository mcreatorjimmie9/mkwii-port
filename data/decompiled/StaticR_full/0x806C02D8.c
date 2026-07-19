/* Function at 0x806C02D8, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806C02D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x174; // 0x806C02E8
    *(0x18 + r1) = r30; // stw @ 0x806C02EC
    /* li r30, 0 */ // 0x806C02F0
    *(0x14 + r1) = r29; // stw @ 0x806C02F4
    r29 = r4;
    r3 = r31;
    r4 = r29;
    /* li r5, 0 */ // 0x806C0304
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C030C
    r31 = r31 + 0x254; // 0x806C0310
    if (<) goto 0x0x806c02fc;
    r0 = *(0x24 + r1); // lwz @ 0x806C031C
    r31 = *(0x1c + r1); // lwz @ 0x806C0320
    r30 = *(0x18 + r1); // lwz @ 0x806C0324
    r29 = *(0x14 + r1); // lwz @ 0x806C0328
    return;
}