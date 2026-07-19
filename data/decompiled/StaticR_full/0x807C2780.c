/* Function at 0x807C2780, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C2780(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C278C
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x807C2794
    if (==) goto 0x0x807c27b4;
    r3 = *(0x14 + r3); // lwz @ 0x807C27A0
    FUN_807DA518(); // bl 0x807DA518
    r3 = *(0x14 + r31); // lwz @ 0x807C27A8
    /* lfs f1, 0x38(r31) */ // 0x807C27AC
    FUN_807DACB4(); // bl 0x807DACB4
    r0 = *(0x14 + r1); // lwz @ 0x807C27B4
    r31 = *(0xc + r1); // lwz @ 0x807C27B8
    return;
}