/* Function at 0x808F70AC, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808F70AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* addis r0, r4, 1 */ // 0x808F70B8
    *(0x1c + r1) = r31; // stw @ 0x808F70C0
    /* li r31, 0 */ // 0x808F70C4
    *(0x18 + r1) = r30; // stw @ 0x808F70C8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F70D0
    r29 = r3;
    if (==) goto 0x0x808f7138;
    r3 = *(0x2c + r3); // lwz @ 0x808F70DC
    if (==) goto 0x0x808f70fc;
    r12 = *(0 + r3); // lwz @ 0x808F70E8
    r12 = *(0x124 + r12); // lwz @ 0x808F70EC
    /* mtctr r12 */ // 0x808F70F0
    /* bctrl  */ // 0x808F70F4
    /* b 0x808f711c */ // 0x808F70F8
    /* lis r3, 0 */ // 0x808F70FC
    r4 = r5;
    r3 = *(0 + r3); // lwz @ 0x808F7104
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x808F710C
    r12 = *(0xb0 + r12); // lwz @ 0x808F7110
    /* mtctr r12 */ // 0x808F7114
    /* bctrl  */ // 0x808F7118
    r31 = r3;
    if (==) goto 0x0x808f7138;
    r3 = r29;
    r4 = r30;
    /* li r5, 1 */ // 0x808F7130
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808F713C
    r30 = *(0x18 + r1); // lwz @ 0x808F7140
    r29 = *(0x14 + r1); // lwz @ 0x808F7144
    r0 = *(0x24 + r1); // lwz @ 0x808F7148
    return;
}