/* Function at 0x80813A94, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80813A94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80813A9C
    *(0x18 + r1) = r30; // stw @ 0x80813AA8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80813AB0
    r29 = r3;
    r3 = *(0 + r5); // lwz @ 0x80813AB8
    FUN_8061D97C(); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x80813AC0
    r3 = *(0 + r3); // lwz @ 0x80813AC4
    r31 = *(8 + r3); // lwz @ 0x80813AC8
    r3 = r31;
    FUN_805B7218(r3); // bl 0x805B7218
    if (==) goto 0x0x80813ae0;
    /* li r31, 0x18 */ // 0x80813ADC
    *(0x20 + r29) = r31; // stw @ 0x80813AE0
    /* lis r3, 0 */ // 0x80813AE4
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x80813AEC
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061E2F8(r3, r4); // bl 0x8061E2F8
    *(0x24 + r29) = r3; // stw @ 0x80813AF8
    r31 = *(0x1c + r1); // lwz @ 0x80813AFC
    r30 = *(0x18 + r1); // lwz @ 0x80813B00
    r29 = *(0x14 + r1); // lwz @ 0x80813B04
    r0 = *(0x24 + r1); // lwz @ 0x80813B08
    return;
}