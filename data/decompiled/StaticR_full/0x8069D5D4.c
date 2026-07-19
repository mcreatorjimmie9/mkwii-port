/* Function at 0x8069D5D4, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8069D5D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8069D5EC
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8069D5F4
    r28 = r3;
    if (==) goto 0x0x8069d6c4;
    if (==) goto 0x0x8069d62c;
    if (==) goto 0x0x8069d63c;
    if (==) goto 0x0x8069d64c;
    if (==) goto 0x0x8069d65c;
    if (==) goto 0x0x8069d66c;
    /* b 0x8069d678 */ // 0x8069D628
    /* lis r3, 0 */ // 0x8069D62C
    r3 = r3 + 0; // 0x8069D630
    r30 = r3 + 0x27; // 0x8069D634
    /* b 0x8069d678 */ // 0x8069D638
    /* lis r3, 0 */ // 0x8069D63C
    r3 = r3 + 0; // 0x8069D640
    r30 = r3 + 0x2e; // 0x8069D644
    /* b 0x8069d678 */ // 0x8069D648
    /* lis r3, 0 */ // 0x8069D64C
    r3 = r3 + 0; // 0x8069D650
    r30 = r3 + 0x35; // 0x8069D654
    /* b 0x8069d678 */ // 0x8069D658
    /* lis r3, 0 */ // 0x8069D65C
    r3 = r3 + 0; // 0x8069D660
    r30 = r3 + 0x3b; // 0x8069D664
    /* b 0x8069d678 */ // 0x8069D668
    /* lis r3, 0 */ // 0x8069D66C
    r3 = r3 + 0; // 0x8069D670
    r30 = r3 + 0x41; // 0x8069D674
    /* lis r31, 0 */ // 0x8069D678
    r3 = *(0 + r31); // lwz @ 0x8069D67C
    r3 = *(0 + r3); // lwz @ 0x8069D680
    if (==) goto 0x0x8069d6d0;
    FUN_8068608C(); // bl 0x8068608C
    if (==) goto 0x0x8069d6d0;
    r3 = *(0 + r31); // lwz @ 0x8069D698
    r3 = *(0 + r3); // lwz @ 0x8069D69C
    FUN_8068608C(); // bl 0x8068608C
    r0 = *(4 + r3); // lwz @ 0x8069D6A4
    if (!=) goto 0x0x8069d6d0;
    /* lis r3, 0 */ // 0x8069D6B0
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x8069D6B8
    FUN_808F7DB0(r3, r4); // bl 0x808F7DB0
    /* b 0x8069d6d0 */ // 0x8069D6C0
    /* lis r3, 0 */ // 0x8069D6C4
    r3 = r3 + 0; // 0x8069D6C8
    r30 = r3 + 0x47; // 0x8069D6CC
    /* lis r4, 0 */ // 0x8069D6D0
    r3 = r28;
    r4 = r4 + 0; // 0x8069D6D8
    r5 = r30;
    r4 = r4 + 0x53; // 0x8069D6E0
    FUN_806A0D70(r4, r3, r4, r5, r4); // bl 0x806A0D70
    r0 = *(0x24 + r1); // lwz @ 0x8069D6E8
    r31 = *(0x1c + r1); // lwz @ 0x8069D6EC
    r30 = *(0x18 + r1); // lwz @ 0x8069D6F0
    r29 = *(0x14 + r1); // lwz @ 0x8069D6F4
    r28 = *(0x10 + r1); // lwz @ 0x8069D6F8
    return;
}