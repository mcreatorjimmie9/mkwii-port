/* Function at 0x808D9388, size=152 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808D9388(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x74 + r1) = r29; // stw @ 0x808D939C
    r29 = r3;
    FUN_808A01F4(); // bl 0x808A01F4
    r0 = *(0x54 + r29); // lbz @ 0x808D93A8
    if (==) goto 0x0x808d93bc;
    r7 = r29 + 0x48; // 0x808D93B4
    /* b 0x808d93ec */ // 0x808D93B8
    /* li r0, 1 */ // 0x808D93BC
    *(0x54 + r29) = r0; // stb @ 0x808D93C0
    r4 = r29 + 0x58; // 0x808D93C8
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x14(r1) */ // 0x808D93D0
    r7 = r29 + 0x48; // 0x808D93D4
    /* stfs f0, 0x48(r29) */ // 0x808D93D8
    /* lfs f0, 0x18(r1) */ // 0x808D93DC
    /* stfs f0, 0x4c(r29) */ // 0x808D93E0
    /* lfs f0, 0x1c(r1) */ // 0x808D93E4
    /* stfs f0, 0x50(r29) */ // 0x808D93E8
    r6 = *(0 + r7); // lwz @ 0x808D93EC
    /* lis r5, 0 */ // 0x808D93F0
    r0 = *(4 + r7); // lwz @ 0x808D93F4
    *(0x30 + r1) = r0; // stw @ 0x808D93FC
    /* lfs f0, 0(r5) */ // 0x808D9404
    r5 = r29 + 0x30; // 0x808D9408
    *(0x2c + r1) = r6; // stw @ 0x808D940C
    r0 = *(8 + r7); // lwz @ 0x808D9410
    *(0x34 + r1) = r0; // stw @ 0x808D9414
    /* stfs f0, 0x2c(r1) */ // 0x808D9418
    FUN_805E3430(r5); // bl 0x805E3430
}