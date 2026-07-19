/* Function at 0x807D3754, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D3754(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D3764
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D376C
    r30 = r3;
    if (==) goto 0x0x807d3790;
    /* li r4, 0 */ // 0x807D3778
    FUN_807B6DB4(r4); // bl 0x807B6DB4
    if (<=) goto 0x0x807d3790;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D3794
    r30 = *(8 + r1); // lwz @ 0x807D3798
    r0 = *(0x14 + r1); // lwz @ 0x807D379C
    return;
}