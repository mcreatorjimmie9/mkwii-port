/* Function at 0x805FD468, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805FD468(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805FD484
    r28 = r3;
    FUN_805FB5E4(); // bl 0x805FB5E4
    /* lis r3, 0 */ // 0x805FD490
    r30 = r28 + 0x238; // 0x805FD494
    r3 = r3 + 0; // 0x805FD498
    *(0xc + r28) = r3; // stw @ 0x805FD49C
    r3 = r30;
    r4 = r29;
    /* li r5, 0 */ // 0x805FD4A8
    FUN_806200C4(r3, r3, r4, r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x805FD4B0
    r31 = r28 + 0x2cc; // 0x805FD4B4
    r3 = r3 + 0; // 0x805FD4B8
    *(0xc + r30) = r3; // stw @ 0x805FD4BC
    r3 = r31;
    r4 = r29;
    /* li r5, 0 */ // 0x805FD4C8
    FUN_806200C4(r3, r3, r4, r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x805FD4D0
    /* lis r4, 0 */ // 0x805FD4D4
    r3 = r3 + 0; // 0x805FD4D8
    *(0xc + r31) = r3; // stw @ 0x805FD4DC
    r4 = r4 + 0; // 0x805FD4E0
    *(0xc + r28) = r4; // stw @ 0x805FD4E4
    r3 = r28;
    r31 = *(0x1c + r1); // lwz @ 0x805FD4EC
    r30 = *(0x18 + r1); // lwz @ 0x805FD4F0
    r29 = *(0x14 + r1); // lwz @ 0x805FD4F4
    r28 = *(0x10 + r1); // lwz @ 0x805FD4F8
    r0 = *(0x24 + r1); // lwz @ 0x805FD4FC
    return;
}