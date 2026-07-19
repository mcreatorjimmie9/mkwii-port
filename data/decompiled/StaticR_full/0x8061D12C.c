/* Function at 0x8061D12C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8061D12C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8061D13C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061D144
    r30 = r3;
    if (==) goto 0x0x8061d184;
    if (==) goto 0x0x8061d174;
    /* lis r4, 0 */ // 0x8061D154
    r4 = r4 + 0; // 0x8061D158
    *(0xc + r3) = r4; // stw @ 0x8061D15C
    FUN_8061E010(r4, r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8061D164
    r12 = *(0x124 + r12); // lwz @ 0x8061D168
    /* mtctr r12 */ // 0x8061D16C
    /* bctrl  */ // 0x8061D170
    if (<=) goto 0x0x8061d184;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8061D188
    r30 = *(8 + r1); // lwz @ 0x8061D18C
    r0 = *(0x14 + r1); // lwz @ 0x8061D190
    return;
}