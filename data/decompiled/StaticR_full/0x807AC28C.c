/* Function at 0x807AC28C, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807AC28C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807AC29C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807AC2A4
    r30 = r3;
    if (==) goto 0x0x807ac320;
    r0 = *(4 + r3); // lwz @ 0x807AC2B0
    /* lis r4, 0 */ // 0x807AC2B4
    r4 = r4 + 0; // 0x807AC2B8
    *(0 + r3) = r4; // stw @ 0x807AC2BC
    if (==) goto 0x0x807ac2e0;
    r3 = r0;
    /* li r4, 1 */ // 0x807AC2CC
    r12 = *(0 + r3); // lwz @ 0x807AC2D0
    r12 = *(8 + r12); // lwz @ 0x807AC2D4
    /* mtctr r12 */ // 0x807AC2D8
    /* bctrl  */ // 0x807AC2DC
    r3 = *(8 + r30); // lwz @ 0x807AC2E0
    /* li r0, 0 */ // 0x807AC2E4
    *(4 + r30) = r0; // stw @ 0x807AC2E8
    if (==) goto 0x0x807ac308;
    r12 = *(0 + r3); // lwz @ 0x807AC2F4
    /* li r4, 1 */ // 0x807AC2F8
    r12 = *(8 + r12); // lwz @ 0x807AC2FC
    /* mtctr r12 */ // 0x807AC300
    /* bctrl  */ // 0x807AC304
    /* li r0, 0 */ // 0x807AC30C
    *(8 + r30) = r0; // stw @ 0x807AC310
    if (<=) goto 0x0x807ac320;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807AC324
    r30 = *(8 + r1); // lwz @ 0x807AC328
    r0 = *(0x14 + r1); // lwz @ 0x807AC32C
    return;
}