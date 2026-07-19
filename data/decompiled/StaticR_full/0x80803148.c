/* Function at 0x80803148, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80803148(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r8, 0 */ // 0x80803150
    r31 = r7;
    *(0x18 + r1) = r30; // stw @ 0x80803160
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80803168
    r29 = r5;
    r5 = r8 + 0; // 0x80803170
    *(0x10 + r1) = r28; // stw @ 0x80803174
    r28 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80803180
    *(0xb4 + r28) = r31; // stw @ 0x80803184
    r4 = r4 + 0; // 0x80803188
    r3 = r29;
    *(0 + r28) = r4; // stw @ 0x80803190
    *(0xb8 + r28) = r29; // stw @ 0x80803194
    FUN_8061E680(r4, r3); // bl 0x8061E680
    *(0xbc + r28) = r3; // stw @ 0x8080319C
    r3 = r28;
    *(0xc0 + r28) = r30; // stw @ 0x808031A4
    r31 = *(0x1c + r1); // lwz @ 0x808031A8
    r30 = *(0x18 + r1); // lwz @ 0x808031AC
    r29 = *(0x14 + r1); // lwz @ 0x808031B0
    r28 = *(0x10 + r1); // lwz @ 0x808031B4
    r0 = *(0x24 + r1); // lwz @ 0x808031B8
    return;
}