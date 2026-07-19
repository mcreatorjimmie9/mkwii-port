/* Function at 0x8064FA08, size=448 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8064FA08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x8064FA10
    /* lis r4, 0 */ // 0x8064FA14
    /* li r0, 0 */ // 0x8064FA1C
    *(0x1c + r1) = r31; // stw @ 0x8064FA20
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8064FA28
    *(0x14 + r1) = r29; // stw @ 0x8064FA2C
    r5 = *(0 + r6); // lwz @ 0x8064FA30
    r4 = *(0 + r4); // lwz @ 0x8064FA34
    r5 = *(0x98 + r5); // lwz @ 0x8064FA38
    r4 = *(0x36 + r4); // lha @ 0x8064FA3C
    r4 = r5 + r4; // 0x8064FA40
    r4 = *(0x4c0 + r4); // lbz @ 0x8064FA44
    *(0x2874 + r3) = r4; // stb @ 0x8064FA48
    *(0x287c + r3) = r0; // stw @ 0x8064FA4C
    r3 = *(0 + r6); // lwz @ 0x8064FA50
    r3 = *(0 + r3); // lwz @ 0x8064FA54
    r29 = *(0x2a4 + r3); // lwz @ 0x8064FA58
    if (!=) goto 0x0x8064fa6c;
    /* li r29, 0 */ // 0x8064FA64
    /* b 0x8064fac0 */ // 0x8064FA68
    /* lis r30, 0 */ // 0x8064FA6C
    r30 = r30 + 0; // 0x8064FA70
    if (==) goto 0x0x8064fabc;
    r12 = *(0 + r29); // lwz @ 0x8064FA78
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8064FA80
    /* mtctr r12 */ // 0x8064FA84
    /* bctrl  */ // 0x8064FA88
    /* b 0x8064faa4 */ // 0x8064FA8C
    if (!=) goto 0x0x8064faa0;
    /* li r0, 1 */ // 0x8064FA98
    /* b 0x8064fab0 */ // 0x8064FA9C
    r3 = *(0 + r3); // lwz @ 0x8064FAA0
    if (!=) goto 0x0x8064fa90;
    /* li r0, 0 */ // 0x8064FAAC
    if (==) goto 0x0x8064fabc;
    /* b 0x8064fac0 */ // 0x8064FAB8
    /* li r29, 0 */ // 0x8064FABC
    /* li r0, 0xb4 */ // 0x8064FAC0
    *(0x58 + r31) = r0; // stw @ 0x8064FAC4
    r0 = *(0x94 + r29); // lwz @ 0x8064FAC8
    if (==) goto 0x0x8064fbac;
    /* li r0, 0 */ // 0x8064FAD4
    *(0x54 + r31) = r0; // stw @ 0x8064FAD8
    /* lis r3, 0 */ // 0x8064FADC
    r3 = *(0 + r3); // lwz @ 0x8064FAE0
    r3 = *(0 + r3); // lwz @ 0x8064FAE4
    r29 = *(0x144 + r3); // lwz @ 0x8064FAE8
    if (!=) goto 0x0x8064fafc;
    /* li r29, 0 */ // 0x8064FAF4
    /* b 0x8064fb50 */ // 0x8064FAF8
    /* lis r30, 0 */ // 0x8064FAFC
    r30 = r30 + 0; // 0x8064FB00
    if (==) goto 0x0x8064fb4c;
    r12 = *(0 + r29); // lwz @ 0x8064FB08
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8064FB10
    /* mtctr r12 */ // 0x8064FB14
    /* bctrl  */ // 0x8064FB18
    /* b 0x8064fb34 */ // 0x8064FB1C
    if (!=) goto 0x0x8064fb30;
    /* li r0, 1 */ // 0x8064FB28
    /* b 0x8064fb40 */ // 0x8064FB2C
    r3 = *(0 + r3); // lwz @ 0x8064FB30
    if (!=) goto 0x0x8064fb20;
    /* li r0, 0 */ // 0x8064FB3C
    if (==) goto 0x0x8064fb4c;
    /* b 0x8064fb50 */ // 0x8064FB48
    /* li r29, 0 */ // 0x8064FB4C
    r12 = *(0 + r29); // lwz @ 0x8064FB50
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8064FB58
    /* mtctr r12 */ // 0x8064FB5C
    /* bctrl  */ // 0x8064FB60
    r3 = r29;
    /* li r4, 0x1391 */ // 0x8064FB68
    /* li r5, 0 */ // 0x8064FB6C
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r29); // lwz @ 0x8064FB74
    r3 = r29;
    /* li r4, 0x157c */ // 0x8064FB7C
    /* li r5, 0 */ // 0x8064FB80
    r12 = *(0x68 + r12); // lwz @ 0x8064FB84
    /* mtctr r12 */ // 0x8064FB88
    /* bctrl  */ // 0x8064FB8C
    r12 = *(0 + r31); // lwz @ 0x8064FB90
    r3 = r31;
    /* li r4, 0x4f */ // 0x8064FB98
    /* li r5, 0 */ // 0x8064FB9C
    r12 = *(0x24 + r12); // lwz @ 0x8064FBA0
    /* mtctr r12 */ // 0x8064FBA4
    /* bctrl  */ // 0x8064FBA8
    r0 = *(0x24 + r1); // lwz @ 0x8064FBAC
    r31 = *(0x1c + r1); // lwz @ 0x8064FBB0
    r30 = *(0x18 + r1); // lwz @ 0x8064FBB4
    r29 = *(0x14 + r1); // lwz @ 0x8064FBB8
    return;
}