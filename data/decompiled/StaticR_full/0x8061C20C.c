/* Function at 0x8061C20C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8061C20C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x8061C21C
    /* li r30, 0 */ // 0x8061C224
    *(0x14 + r1) = r29; // stw @ 0x8061C228
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8061C230
    r28 = r3;
    /* b 0x8061c258 */ // 0x8061C238
    r3 = *(0x2c + r28); // lwz @ 0x8061C23C
    r4 = r30;
    r5 = r29;
    /* lwzx r3, r3, r31 */ // 0x8061C248
    FUN_8062832C(r4, r5); // bl 0x8062832C
    r31 = r31 + 4; // 0x8061C250
    r30 = r30 + 1; // 0x8061C254
    r3 = *(0x14 + r28); // lwz @ 0x8061C258
    r0 = *(0xe + r3); // lhz @ 0x8061C25C
    if (<) goto 0x0x8061c23c;
    r0 = *(0x24 + r1); // lwz @ 0x8061C268
    r31 = *(0x1c + r1); // lwz @ 0x8061C26C
    r30 = *(0x18 + r1); // lwz @ 0x8061C270
    r29 = *(0x14 + r1); // lwz @ 0x8061C274
    r28 = *(0x10 + r1); // lwz @ 0x8061C278
    return;
}