/* Function at 0x808CE5A4, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_808CE5A4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, 0x258 */ // 0x808CE5B0
    *(0x14 + r1) = r29; // stw @ 0x808CE5BC
    *(0x10 + r1) = r28; // stw @ 0x808CE5C0
    r28 = r3;
    *(0x44 + r3) = r0; // stw @ 0x808CE5C8
    r12 = *(0 + r3); // lwz @ 0x808CE5CC
    r12 = *(0x68 + r12); // lwz @ 0x808CE5D0
    /* mtctr r12 */ // 0x808CE5D4
    /* bctrl  */ // 0x808CE5D8
    /* li r29, 0 */ // 0x808CE5DC
    /* lis r30, 0 */ // 0x808CE5E0
    /* lis r31, 0 */ // 0x808CE5E4
    /* b 0x808ce650 */ // 0x808CE5E8
    r3 = *(0 + r30); // lwz @ 0x808CE5EC
    r4 = r29;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r0 = *(4 + r28); // lwz @ 0x808CE5F8
    if (==) goto 0x0x808ce610;
    if (==) goto 0x0x808ce61c;
    /* b 0x808ce64c */ // 0x808CE60C
    FUN_8061DFE0(); // bl 0x8061DFE0
    FUN_80625C58(); // bl 0x80625C58
    /* b 0x808ce64c */ // 0x808CE618
    r4 = *(0 + r31); // lwz @ 0x808CE61C
    r0 = *(0xb70 + r4); // lwz @ 0x808CE620
    if (==) goto 0x0x808ce638;
    if (==) goto 0x0x808ce644;
    /* b 0x808ce64c */ // 0x808CE634
    FUN_8061DFE0(); // bl 0x8061DFE0
    FUN_80625C70(); // bl 0x80625C70
    /* b 0x808ce64c */ // 0x808CE640
    FUN_8061DFE0(); // bl 0x8061DFE0
    FUN_80625C70(); // bl 0x80625C70
    r29 = r29 + 1; // 0x808CE64C
    r3 = *(0 + r31); // lwz @ 0x808CE650
    r0 = *(0x24 + r3); // lbz @ 0x808CE654
    if (<) goto 0x0x808ce5ec;
    r0 = *(0x24 + r1); // lwz @ 0x808CE660
    r31 = *(0x1c + r1); // lwz @ 0x808CE664
    r30 = *(0x18 + r1); // lwz @ 0x808CE668
    r29 = *(0x14 + r1); // lwz @ 0x808CE66C
    r28 = *(0x10 + r1); // lwz @ 0x808CE670
    return;
}