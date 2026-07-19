/* Function at 0x808A1F00, size=216 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808A1F00(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x84 + r1) = r29; // stw @ 0x808A1F14
    r29 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808A1F1C
    if (==) goto 0x0x808a200c;
    r12 = *(0 + r3); // lwz @ 0x808A1F28
    r12 = *(0xac + r12); // lwz @ 0x808A1F2C
    /* mtctr r12 */ // 0x808A1F30
    /* bctrl  */ // 0x808A1F34
    if (!=) goto 0x0x808a1fb8;
    r30 = *(0x10 + r29); // lwz @ 0x808A1F40
    r3 = *(0x10 + r30); // lwz @ 0x808A1F44
    r3 = *(0 + r3); // lwz @ 0x808A1F48
    if (==) goto 0x0x808a1f64;
    r3 = r3 + 0xc; // 0x808A1F54
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x808a1f6c */ // 0x808A1F60
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x808A1F6C
    /* li r31, 0 */ // 0x808A1F70
    /* stfs f0, 0x24(r1) */ // 0x808A1F74
    /* lfs f0, 0x34(r29) */ // 0x808A1F78
    /* stfs f0, 0x34(r1) */ // 0x808A1F7C
    /* lfs f0, 0x38(r29) */ // 0x808A1F80
    /* stfs f0, 0x44(r1) */ // 0x808A1F84
    r3 = *(0x14 + r30); // lwz @ 0x808A1F88
    r3 = *(0 + r3); // lwz @ 0x808A1F8C
    if (==) goto 0x0x808a1fa4;
    /* li r4, 0 */ // 0x808A1F9C
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808A1FA4
    r30 = r30 + 4; // 0x808A1FA8
    if (<) goto 0x0x808a1f88;
    /* b 0x808a200c */ // 0x808A1FB4
    r4 = r29 + 0x58; // 0x808A1FBC
    /* li r5, 2 */ // 0x808A1FC0
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    r3 = r29 + 0x30; // 0x808A1FC8
    FUN_807451DC(r5, r3, r4, r5); // bl 0x807451DC
}