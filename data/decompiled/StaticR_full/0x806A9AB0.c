/* Function at 0x806A9AB0, size=424 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806A9AB0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806A9AB8
    *(0xc + r1) = r31; // stw @ 0x806A9AC0
    *(8 + r1) = r30; // stw @ 0x806A9AC4
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x806A9ACC
    r3 = *(0 + r3); // lwz @ 0x806A9AD0
    r3 = *(0x218 + r3); // lwz @ 0x806A9AD4
    if (==) goto 0x0x806a9b14;
    /* lis r31, 0 */ // 0x806A9AE0
    r31 = r31 + 0; // 0x806A9AE4
    if (==) goto 0x0x806a9b14;
    r12 = *(0 + r3); // lwz @ 0x806A9AEC
    r12 = *(0x60 + r12); // lwz @ 0x806A9AF0
    /* mtctr r12 */ // 0x806A9AF4
    /* bctrl  */ // 0x806A9AF8
    /* b 0x806a9b0c */ // 0x806A9AFC
    if (==) goto 0x0x806a9b14;
    r3 = *(0 + r3); // lwz @ 0x806A9B08
    if (!=) goto 0x0x806a9b00;
    /* lis r3, 0 */ // 0x806A9B14
    r3 = *(0 + r3); // lwz @ 0x806A9B18
    r3 = *(0 + r3); // lwz @ 0x806A9B1C
    r0 = *(0 + r3); // lwz @ 0x806A9B20
    if (==) goto 0x0x806a9bd8;
    if (>=) goto 0x0x806a9b70;
    if (>=) goto 0x0x806a9b58;
    if (>=) goto 0x0x806a9b4c;
    if (>=) goto 0x0x806a9ba8;
    /* b 0x806a9bd8 */ // 0x806A9B48
    if (>=) goto 0x0x806a9bb0;
    /* b 0x806a9bd8 */ // 0x806A9B54
    if (==) goto 0x0x806a9bd8;
    if (>=) goto 0x0x806a9bc8;
    if (>=) goto 0x0x806a9bc0;
    /* b 0x806a9bd8 */ // 0x806A9B6C
    if (>=) goto 0x0x806a9b90;
    if (==) goto 0x0x806a9bd0;
    if (>=) goto 0x0x806a9bd8;
    if (>=) goto 0x0x806a9bd8;
    /* b 0x806a9bb8 */ // 0x806A9B8C
    if (==) goto 0x0x806a9bb8;
    if (>=) goto 0x0x806a9bd8;
    if (>=) goto 0x0x806a9bd8;
    /* b 0x806a9bc0 */ // 0x806A9BA4
    /* li r4, 0x7f1 */ // 0x806A9BA8
    /* b 0x806a9bdc */ // 0x806A9BAC
    /* li r4, 0x7f2 */ // 0x806A9BB0
    /* b 0x806a9bdc */ // 0x806A9BB4
    /* li r4, 0x13ba */ // 0x806A9BB8
    /* b 0x806a9bdc */ // 0x806A9BBC
    /* li r4, 0 */ // 0x806A9BC0
    /* b 0x806a9bdc */ // 0x806A9BC4
    /* li r4, 0xfa3 */ // 0x806A9BC8
    /* b 0x806a9bdc */ // 0x806A9BCC
    /* li r4, 0x19cd */ // 0x806A9BD0
    /* b 0x806a9bdc */ // 0x806A9BD4
    /* li r4, 0 */ // 0x806A9BD8
    r3 = r30 + 0x290; // 0x806A9BDC
    /* li r5, 0 */ // 0x806A9BE0
    FUN_806A0A34(r4, r4, r3, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806A9BE8
    /* li r4, 0 */ // 0x806A9BEC
    FUN_80649EEC(r3, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0xa30 + r30); // lwz @ 0x806A9BF4
    if (==) goto 0x0x806a9c0c;
    if (==) goto 0x0x806a9c24;
    /* b 0x806a9c38 */ // 0x806A9C08
    r3 = r30 + 0x7cc; // 0x806A9C0C
    /* li r4, 0 */ // 0x806A9C10
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 1 */ // 0x806A9C18
    *(0x84c + r30) = r0; // stb @ 0x806A9C1C
    /* b 0x806a9c38 */ // 0x806A9C20
    r3 = r30 + 0x7cc; // 0x806A9C24
    /* li r4, 1 */ // 0x806A9C28
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 0 */ // 0x806A9C30
    *(0x84c + r30) = r0; // stb @ 0x806A9C34
    /* li r0, -1 */ // 0x806A9C38
    *(0xa34 + r30) = r0; // stw @ 0x806A9C3C
    r31 = *(0xc + r1); // lwz @ 0x806A9C40
    r30 = *(8 + r1); // lwz @ 0x806A9C44
    r0 = *(0x14 + r1); // lwz @ 0x806A9C48
    return;
}