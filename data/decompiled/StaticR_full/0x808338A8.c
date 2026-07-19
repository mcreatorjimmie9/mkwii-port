/* Function at 0x808338A8, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808338A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808338C0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808338C8
    r28 = r3;
    if (==) goto 0x0x8083391c;
    if (==) goto 0x0x8083390c;
    /* addic. r30, r3, 0x1ec */ // 0x808338D8
    if (==) goto 0x0x8083390c;
    /* lis r31, 0 */ // 0x808338E0
    r3 = r30 + 0x30; // 0x808338E4
    r4 = r31 + 0; // 0x808338E8
    /* li r5, 0xc */ // 0x808338EC
    /* li r6, 4 */ // 0x808338F0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    r4 = r31 + 0; // 0x808338FC
    /* li r5, 0xc */ // 0x80833900
    /* li r6, 4 */ // 0x80833904
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x8083391c;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8083391C
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80833924
    r29 = *(0x14 + r1); // lwz @ 0x80833928
}