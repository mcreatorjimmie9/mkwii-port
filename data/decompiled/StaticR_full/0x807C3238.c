/* Function at 0x807C3238, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807C3238(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0x64 */ // 0x807C3240
    /* lis r31, 0 */ // 0x807C324C
    *(0x18 + r1) = r30; // stw @ 0x807C3250
    *(0x14 + r1) = r29; // stw @ 0x807C3254
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x807C325C
    FUN_807C03BC(); // bl 0x807C03BC
    r4 = *(0xc + r29); // lwz @ 0x807C3264
    /* clrlwi r30, r3, 0x18 */ // 0x807C3268
    r3 = *(0 + r4); // lwz @ 0x807C326C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3274
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C327C
    r3 = *(0 + r31); // lwz @ 0x807C3280
    r4 = *(0xc + r4); // lwz @ 0x807C3284
    r3 = *(0x8c + r3); // lwz @ 0x807C3288
    /* lwzx r4, r4, r0 */ // 0x807C328C
    r4 = *(0x20 + r4); // lbz @ 0x807C3290
    r4 = r4 + -1; // 0x807C3294
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(0x15 + r29); // lbz @ 0x807C329C
    if (==) goto 0x0x807c32bc;
    r0 = *(3 + r3); // lbz @ 0x807C32A8
    if (>=) goto 0x0x807c32bc;
    /* li r3, 1 */ // 0x807C32B4
    /* b 0x807c32c0 */ // 0x807C32B8
    /* li r3, 0 */ // 0x807C32BC
    r0 = *(0x24 + r1); // lwz @ 0x807C32C0
    r31 = *(0x1c + r1); // lwz @ 0x807C32C4
    r30 = *(0x18 + r1); // lwz @ 0x807C32C8
    r29 = *(0x14 + r1); // lwz @ 0x807C32CC
    return;
}