/* Function at 0x8069D708, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8069D708(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8069D71C
    r29 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8069D728
    r3 = r29 + 0x44; // 0x8069D72C
    r4 = r4 + 0; // 0x8069D730
    *(0 + r29) = r4; // stw @ 0x8069D734
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r29 + 0x54; // 0x8069D73C
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8069D748
    r30 = r29 + 0x1c8; // 0x8069D74C
    r3 = r3 + 0; // 0x8069D750
    *(0 + r31) = r3; // stw @ 0x8069D754
    r3 = r30;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8069D760
    r3 = r29;
    r4 = r4 + 0; // 0x8069D768
    *(0 + r30) = r4; // stw @ 0x8069D76C
    r31 = *(0x1c + r1); // lwz @ 0x8069D770
    r30 = *(0x18 + r1); // lwz @ 0x8069D774
    r29 = *(0x14 + r1); // lwz @ 0x8069D778
    r0 = *(0x24 + r1); // lwz @ 0x8069D77C
    return;
}