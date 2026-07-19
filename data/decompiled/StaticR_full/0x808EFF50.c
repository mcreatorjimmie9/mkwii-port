/* Function at 0x808EFF50, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808EFF50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EFF60
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EFF68
    r30 = r3;
    if (==) goto 0x0x808effa4;
    if (==) goto 0x0x808eff94;
    if (==) goto 0x0x808eff94;
    /* li r4, -1 */ // 0x808EFF7C
    r3 = r3 + 0x5c; // 0x808EFF80
    FUN_806688C8(r4, r3); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x808EFF8C
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808effa4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EFFA8
    r30 = *(8 + r1); // lwz @ 0x808EFFAC
    r0 = *(0x14 + r1); // lwz @ 0x808EFFB0
    return;
}