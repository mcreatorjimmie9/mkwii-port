/* Function at 0x8067B2C8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8067B2C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8067B2D4
    r31 = r3;
    r3 = r3 + 0x174; // 0x8067B2DC
    FUN_8066DB80(r3); // bl 0x8066DB80
    r3 = *(0xc3c + r31); // lwz @ 0x8067B2E4
    r0 = r3 + -1; // 0x8067B2E8
    if (<=) goto 0x0x8067b300;
    if (==) goto 0x0x8067b30c;
    /* b 0x8067b314 */ // 0x8067B2FC
    r3 = r31;
    FUN_8067B448(r3); // bl 0x8067B448
    /* b 0x8067b314 */ // 0x8067B308
    r3 = r31;
    FUN_8067BF30(r3, r3); // bl 0x8067BF30
    r0 = *(0x14 + r1); // lwz @ 0x8067B314
    r31 = *(0xc + r1); // lwz @ 0x8067B318
    return;
}