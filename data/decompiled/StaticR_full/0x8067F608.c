/* Function at 0x8067F608, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8067F608(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8067F618
    *(0x18 + r1) = r30; // stw @ 0x8067F61C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8067F624
    /* li r29, 0 */ // 0x8067F628
    r3 = *(4 + r30); // lwz @ 0x8067F62C
    /* li r4, 1 */ // 0x8067F630
    /* li r5, 0 */ // 0x8067F634
    /* li r6, 0 */ // 0x8067F638
    r0 = r3 rlwinm 0; // rlwinm
    if (==) goto 0x0x8067f6b0;
    if (>=) goto 0x0x8067f67c;
    if (==) goto 0x0x8067f6a8;
    if (>=) goto 0x0x8067f670;
    if (==) goto 0x0x8067f6a0;
    if (>=) goto 0x0x8067f6c0;
    if (==) goto 0x0x8067f6a0;
    /* b 0x8067f6c0 */ // 0x8067F66C
    if (==) goto 0x0x8067f6a8;
    /* b 0x8067f6c0 */ // 0x8067F678
    if (==) goto 0x0x8067f6b8;
    if (>=) goto 0x0x8067f694;
    if (==) goto 0x0x8067f6b0;
    /* b 0x8067f6c0 */ // 0x8067F690
    if (==) goto 0x0x8067f6b8;
    /* b 0x8067f6c0 */ // 0x8067F69C
    /* li r6, 0 */ // 0x8067F6A0
    /* b 0x8067f6c4 */ // 0x8067F6A4
    /* li r6, 1 */ // 0x8067F6A8
    /* b 0x8067f6c4 */ // 0x8067F6AC
    /* li r6, 2 */ // 0x8067F6B0
    /* b 0x8067f6c4 */ // 0x8067F6B4
    /* li r6, 3 */ // 0x8067F6B8
    /* b 0x8067f6c4 */ // 0x8067F6BC
    /* li r4, 0 */ // 0x8067F6C0
    /* clrlwi r0, r3, 0x18 */ // 0x8067F6C4
    if (==) goto 0x0x8067f6ec;
    if (==) goto 0x0x8067f6f4;
    if (==) goto 0x0x8067f6fc;
    if (==) goto 0x0x8067f704;
    /* b 0x8067f70c */ // 0x8067F6E8
    /* li r5, 0 */ // 0x8067F6EC
    /* b 0x8067f710 */ // 0x8067F6F0
    /* li r5, 1 */ // 0x8067F6F4
    /* b 0x8067f710 */ // 0x8067F6F8
    /* li r5, 2 */ // 0x8067F6FC
    /* b 0x8067f710 */ // 0x8067F700
    /* li r5, 3 */ // 0x8067F704
    /* b 0x8067f710 */ // 0x8067F708
    /* li r4, 0 */ // 0x8067F70C
    if (==) goto 0x0x8067f724;
    r3 = *(0 + r31); // lwz @ 0x8067F718
    /* clrlwi r4, r29, 0x18 */ // 0x8067F71C
    FUN_805B4064(r4); // bl 0x805B4064
    r29 = r29 + 1; // 0x8067F724
    r30 = r30 + 0x10; // 0x8067F728
    if (<) goto 0x0x8067f62c;
    r0 = *(0x24 + r1); // lwz @ 0x8067F734
    r31 = *(0x1c + r1); // lwz @ 0x8067F738
    r30 = *(0x18 + r1); // lwz @ 0x8067F73C
    r29 = *(0x14 + r1); // lwz @ 0x8067F740
    return;
}