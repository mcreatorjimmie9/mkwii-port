/* Function at 0x805ECF5C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805ECF5C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r4, 2 */ // 0x805ECF68
    r4 = r3 + r0; // 0x805ECF6C
    *(0x1c + r1) = r31; // stw @ 0x805ECF70
    *(0x18 + r1) = r30; // stw @ 0x805ECF74
    *(0x14 + r1) = r29; // stw @ 0x805ECF78
    r29 = r3;
    r5 = *(0x28 + r3); // lwz @ 0x805ECF80
    r0 = *(0x14 + r4); // lwz @ 0x805ECF84
    *(0x10 + r3) = r0; // stw @ 0x805ECF8C
    if (==) goto 0x0x805ecff8;
    r4 = *(0x14 + r4); // lwz @ 0x805ECF94
    /* li r0, 1 */ // 0x805ECF98
    r3 = *(4 + r4); // lwz @ 0x805ECF9C
    if (==) goto 0x0x805ecfb4;
    if (==) goto 0x0x805ecfb4;
    /* li r0, 0 */ // 0x805ECFB0
    r3 = r5;
    if (==) goto 0x0x805ecfc8;
    r4 = *(0 + r4); // lwz @ 0x805ECFC0
    /* b 0x805ecfcc */ // 0x805ECFC4
    /* li r4, 0 */ // 0x805ECFC8
    FUN_805E7930(r3, r4); // bl 0x805E7930
    /* li r30, 0 */ // 0x805ECFD0
    /* lis r31, 0 */ // 0x805ECFD4
    /* b 0x805ecfe8 */ // 0x805ECFD8
    r3 = *(0x28 + r29); // lwz @ 0x805ECFDC
    FUN_805E75F8(); // bl 0x805E75F8
    r30 = r30 + 1; // 0x805ECFE4
    r0 = *(0 + r31); // lbz @ 0x805ECFE8
    /* clrlwi r3, r30, 0x18 */ // 0x805ECFEC
    if (<) goto 0x0x805ecfdc;
    r0 = *(0x24 + r1); // lwz @ 0x805ECFF8
    r31 = *(0x1c + r1); // lwz @ 0x805ECFFC
    r30 = *(0x18 + r1); // lwz @ 0x805ED000
    r29 = *(0x14 + r1); // lwz @ 0x805ED004
    return;
}