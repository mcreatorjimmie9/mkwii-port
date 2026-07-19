/* Function at 0x80776C24, size=380 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80776C24(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80776C2C
    /* li r8, 1 */ // 0x80776C30
    *(0x24 + r1) = r0; // stw @ 0x80776C34
    /* lfs f0, 0(r6) */ // 0x80776C38
    *(0x1c + r1) = r31; // stw @ 0x80776C3C
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80776C44
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80776C4C
    *(0x10 + r1) = r28; // stw @ 0x80776C50
    r28 = r4;
    /* li r4, 0 */ // 0x80776C58
    *(0xb0 + r3) = r8; // stb @ 0x80776C5C
    /* stfs f0, 8(r7) */ // 0x80776C60
    /* stfs f0, 4(r7) */ // 0x80776C64
    /* stfs f0, 0(r7) */ // 0x80776C68
    r0 = *(0xb0 + r3); // lbz @ 0x80776C6C
    if (==) goto 0x0x80776c88;
    r0 = *(0xb1 + r3); // lbz @ 0x80776C78
    if (!=) goto 0x0x80776c88;
    r4 = r8;
    if (==) goto 0x0x80776db8;
    r12 = *(0 + r30); // lwz @ 0x80776C90
    r3 = r30;
    /* li r29, 0 */ // 0x80776C98
    r12 = *(0x30 + r12); // lwz @ 0x80776C9C
    /* mtctr r12 */ // 0x80776CA0
    /* bctrl  */ // 0x80776CA4
    /* lis r4, 0x101 */ // 0x80776CA8
    r0 = *(0x20 + r3); // lwz @ 0x80776CAC
    r3 = r4 + 0x101; // 0x80776CB0
    /* andc. r0, r3, r0 */ // 0x80776CB4
    if (!=) goto 0x0x80776cd4;
    /* lis r3, 0 */ // 0x80776CBC
    r3 = *(0 + r3); // lwz @ 0x80776CC0
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80776cd4;
    /* li r29, 1 */ // 0x80776CD0
    if (!=) goto 0x0x80776d58;
    r3 = r28;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r4 = *(0 + r28); // lwz @ 0x80776CE4
    /* lis r5, 0 */ // 0x80776CE8
    r29 = r3;
    r6 = *(4 + r4); // lwz @ 0x80776CF0
    /* clrlwi r4, r3, 0x18 */ // 0x80776CF4
    r3 = *(0 + r5); // lwz @ 0x80776CF8
    r0 = *(8 + r6); // lwz @ 0x80776CFC
    r28 = r0 rlwinm 0x1c; // rlwinm
    FUN_805C1470(); // bl 0x805C1470
    /* extsb r0, r3 */ // 0x80776D08
    if (==) goto 0x0x80776d58;
    if (==) goto 0x0x80776d3c;
    r3 = *(0xb4 + r30); // lwz @ 0x80776D1C
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x80776D24
    r12 = *(0 + r3); // lwz @ 0x80776D28
    r12 = *(0xc + r12); // lwz @ 0x80776D2C
    /* mtctr r12 */ // 0x80776D30
    /* bctrl  */ // 0x80776D34
    /* b 0x80776d58 */ // 0x80776D38
    r3 = *(0xbc + r30); // lwz @ 0x80776D3C
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x80776D44
    r12 = *(0 + r3); // lwz @ 0x80776D48
    r12 = *(0xc + r12); // lwz @ 0x80776D4C
    /* mtctr r12 */ // 0x80776D50
    /* bctrl  */ // 0x80776D54
    r12 = *(0 + r30); // lwz @ 0x80776D58
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x80776D60
    /* mtctr r12 */ // 0x80776D64
    /* bctrl  */ // 0x80776D68
    /* lis r29, 0 */ // 0x80776D6C
    r29 = r29 + 0; // 0x80776D70
    r4 = r29 + 0x3f; // 0x80776D74
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x80776d9c;
    /* lis r4, 0 */ // 0x80776D84
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80776D8C
    /* li r4, 0x2e4 */ // 0x80776D90
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* b 0x80776db8 */ // 0x80776D98
    r12 = *(0 + r30); // lwz @ 0x80776D9C
}