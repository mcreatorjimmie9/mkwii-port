/* Function at 0x807BFEA4, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807BFEA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807BFEBC
    *(0x10 + r1) = r28; // stw @ 0x807BFEC0
    r0 = *(0x84 + r3); // lwz @ 0x807BFEC4
    if (==) goto 0x0x807bff30;
    r3 = r0;
    r12 = *(0x34 + r3); // lwz @ 0x807BFED4
    r12 = *(0x1c + r12); // lwz @ 0x807BFED8
    /* mtctr r12 */ // 0x807BFEDC
    /* bctrl  */ // 0x807BFEE0
    r3 = *(0x84 + r31); // lwz @ 0x807BFEE4
    FUN_807C5A4C(); // bl 0x807C5A4C
    r29 = r3;
    r28 = r31;
    /* li r30, 0 */ // 0x807BFEF4
    /* b 0x807bff24 */ // 0x807BFEF8
    r3 = *(0x24 + r28); // lwz @ 0x807BFEFC
    r4 = r29;
    r3 = *(0x10 + r3); // lwz @ 0x807BFF04
    r3 = *(0x144 + r3); // lwz @ 0x807BFF08
    r12 = *(0x34 + r3); // lwz @ 0x807BFF0C
    r12 = *(0x50 + r12); // lwz @ 0x807BFF10
    /* mtctr r12 */ // 0x807BFF14
    /* bctrl  */ // 0x807BFF18
    r28 = r28 + 4; // 0x807BFF1C
    r30 = r30 + 1; // 0x807BFF20
    r0 = *(0x14 + r31); // lwz @ 0x807BFF24
    if (<) goto 0x0x807bfefc;
    r3 = *(0x88 + r31); // lwz @ 0x807BFF30
    FUN_807C2E08(); // bl 0x807C2E08
    r3 = *(0x90 + r31); // lwz @ 0x807BFF38
    r12 = *(0 + r3); // lwz @ 0x807BFF3C
    r12 = *(0x10 + r12); // lwz @ 0x807BFF40
    /* mtctr r12 */ // 0x807BFF44
    /* bctrl  */ // 0x807BFF48
    r3 = *(0x94 + r31); // lwz @ 0x807BFF4C
    if (==) goto 0x0x807bff5c;
    FUN_807D1DAC(); // bl 0x807D1DAC
    r4 = *(0x98 + r31); // lwz @ 0x807BFF5C
    /* lis r3, 0x2aab */ // 0x807BFF60
    r0 = r3 + -0x5555; // 0x807BFF64
    r4 = r4 + 1; // 0x807BFF68
    /* mulhw r0, r0, r4 */ // 0x807BFF6C
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x807BFF74
    r0 = r0 + r3; // 0x807BFF78
    /* mulli r0, r0, 0xc */ // 0x807BFF7C
    /* subf r0, r0, r4 */ // 0x807BFF80
    *(0x98 + r31) = r0; // stw @ 0x807BFF84
    r31 = *(0x1c + r1); // lwz @ 0x807BFF88
    r30 = *(0x18 + r1); // lwz @ 0x807BFF8C
    r29 = *(0x14 + r1); // lwz @ 0x807BFF90
    r28 = *(0x10 + r1); // lwz @ 0x807BFF94
    r0 = *(0x24 + r1); // lwz @ 0x807BFF98
    return;
}