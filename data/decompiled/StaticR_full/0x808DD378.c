/* Function at 0x808DD378, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808DD378(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808DD380
    *(0x1c + r1) = r31; // stw @ 0x808DD388
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808DD390
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    r0 = *(0x54 + r30); // lbz @ 0x808DD39C
    /* lis r3, 0 */ // 0x808DD3A0
    /* lfs f0, 0(r3) */ // 0x808DD3A4
    /* lis r6, 0 */ // 0x808DD3A8
    r4 = *(0x30 + r30); // lwz @ 0x808DD3AC
    r3 = *(0x34 + r30); // lwz @ 0x808DD3B4
    r6 = r6 + 0; // 0x808DD3B8
    r0 = *(0x38 + r30); // lwz @ 0x808DD3BC
    /* li r5, 0 */ // 0x808DD3C0
    *(0 + r30) = r6; // stw @ 0x808DD3C4
    *(0x104 + r30) = r5; // stw @ 0x808DD3C8
    /* stfs f0, 0x108(r30) */ // 0x808DD3CC
    *(0x10c + r30) = r4; // stw @ 0x808DD3D0
    *(0x110 + r30) = r3; // stw @ 0x808DD3D4
    *(0x114 + r30) = r0; // stw @ 0x808DD3D8
    if (==) goto 0x0x808dd3e8;
    r3 = r30 + 0x48; // 0x808DD3E0
    /* b 0x808dd418 */ // 0x808DD3E4
    /* li r0, 1 */ // 0x808DD3E8
    *(0x54 + r30) = r0; // stb @ 0x808DD3EC
    r4 = r30 + 0x58; // 0x808DD3F4
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808DD3FC
    r3 = r30 + 0x48; // 0x808DD400
    /* stfs f0, 0x48(r30) */ // 0x808DD404
    /* lfs f0, 0xc(r1) */ // 0x808DD408
    /* stfs f0, 0x4c(r30) */ // 0x808DD40C
    /* lfs f0, 0x10(r1) */ // 0x808DD410
    /* stfs f0, 0x50(r30) */ // 0x808DD414
    r4 = *(0 + r3); // lwz @ 0x808DD418
    /* li r0, 0 */ // 0x808DD41C
    r7 = *(4 + r3); // lwz @ 0x808DD420
    /* lis r5, 0 */ // 0x808DD424
    r6 = *(8 + r3); // lwz @ 0x808DD428
    r3 = r30 + 0x130; // 0x808DD42C
    *(0x118 + r30) = r4; // stw @ 0x808DD430
    r5 = r5 + 0; // 0x808DD434
    /* li r4, 0x10 */ // 0x808DD438
    *(0x11c + r30) = r7; // stw @ 0x808DD43C
    *(0x120 + r30) = r6; // stw @ 0x808DD440
    *(0x140 + r30) = r0; // stw @ 0x808DD444
    *(0x144 + r30) = r0; // stw @ 0x808DD448
    r6 = *(0 + r31); // lwz @ 0x808DD44C
    r6 = *(0x2a + r6); // lha @ 0x808DD450
    /* crclr cr1eq */ // 0x808DD454
    FUN_805E3430(); // bl 0x805E3430
}