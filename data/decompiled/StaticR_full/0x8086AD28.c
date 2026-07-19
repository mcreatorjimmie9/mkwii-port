/* Function at 0x8086AD28, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8086AD28(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8086AD30
    *(0x18 + r1) = r30; // stw @ 0x8086AD3C
    /* lis r30, 0 */ // 0x8086AD40
    r30 = r30 + 0; // 0x8086AD44
    *(0x14 + r1) = r29; // stw @ 0x8086AD48
    r29 = r3;
    r0 = *(0x6c + r3); // lbz @ 0x8086AD50
    r4 = *(0 + r4); // lwz @ 0x8086AD54
    /* mulli r0, r0, 0x248 */ // 0x8086AD58
    r4 = *(0x14 + r4); // lwz @ 0x8086AD5C
    r0 = r4 + r0; // 0x8086AD60
    *(0x1a0 + r3) = r0; // stw @ 0x8086AD64
    r3 = r0;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060F264(r3); // bl 0x8060F264
    /* li r31, 0 */ // 0x8086AD74
    /* li r0, 0xc */ // 0x8086AD78
    *(0x1a8 + r29) = r31; // stw @ 0x8086AD7C
    r3 = *(0x1a0 + r29); // lwz @ 0x8086AD80
    *(0x1a4 + r29) = r0; // stb @ 0x8086AD84
    *(0x1c4 + r29) = r31; // stw @ 0x8086AD88
    *(0x1c8 + r29) = r31; // stw @ 0x8086AD8C
    FUN_8061DA88(); // bl 0x8061DA88
}