/* Function at 0x8069E398, size=344 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8069E398(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8069E3A0
    *(0x18 + r1) = r30; // stw @ 0x8069E3AC
    *(0x14 + r1) = r29; // stw @ 0x8069E3B0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8069E3B8
    r3 = *(0 + r3); // lwz @ 0x8069E3BC
    r30 = *(0x164 + r3); // lwz @ 0x8069E3C0
    if (!=) goto 0x0x8069e3d4;
    /* li r30, 0 */ // 0x8069E3CC
    /* b 0x8069e428 */ // 0x8069E3D0
    /* lis r31, 0 */ // 0x8069E3D4
    r31 = r31 + 0; // 0x8069E3D8
    if (==) goto 0x0x8069e424;
    r12 = *(0 + r30); // lwz @ 0x8069E3E0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8069E3E8
    /* mtctr r12 */ // 0x8069E3EC
    /* bctrl  */ // 0x8069E3F0
    /* b 0x8069e40c */ // 0x8069E3F4
    if (!=) goto 0x0x8069e408;
    /* li r0, 1 */ // 0x8069E400
    /* b 0x8069e418 */ // 0x8069E404
    r3 = *(0 + r3); // lwz @ 0x8069E408
    if (!=) goto 0x0x8069e3f8;
    /* li r0, 0 */ // 0x8069E414
    if (==) goto 0x0x8069e424;
    /* b 0x8069e428 */ // 0x8069E420
    /* li r30, 0 */ // 0x8069E424
    r0 = *(0x348 + r30); // lbz @ 0x8069E428
    if (==) goto 0x0x8069e4b4;
    r0 = *(0x34c + r30); // lwz @ 0x8069E434
    if (==) goto 0x0x8069e464;
    if (==) goto 0x0x8069e474;
    if (==) goto 0x0x8069e484;
    if (==) goto 0x0x8069e494;
    if (==) goto 0x0x8069e4a4;
    /* b 0x8069e4c0 */ // 0x8069E460
    /* lis r3, 0 */ // 0x8069E464
    r3 = r3 + 0; // 0x8069E468
    r5 = r3 + 0x96; // 0x8069E46C
    /* b 0x8069e4c0 */ // 0x8069E470
    /* lis r3, 0 */ // 0x8069E474
    r3 = r3 + 0; // 0x8069E478
    r5 = r3 + 0xa2; // 0x8069E47C
    /* b 0x8069e4c0 */ // 0x8069E480
    /* lis r3, 0 */ // 0x8069E484
    r3 = r3 + 0; // 0x8069E488
    r5 = r3 + 0xae; // 0x8069E48C
    /* b 0x8069e4c0 */ // 0x8069E490
    /* lis r3, 0 */ // 0x8069E494
    r3 = r3 + 0; // 0x8069E498
    r5 = r3 + 0xb9; // 0x8069E49C
    /* b 0x8069e4c0 */ // 0x8069E4A0
    /* lis r3, 0 */ // 0x8069E4A4
    r3 = r3 + 0; // 0x8069E4A8
    r5 = r3 + 0xc4; // 0x8069E4AC
    /* b 0x8069e4c0 */ // 0x8069E4B0
    /* lis r3, 0 */ // 0x8069E4B4
    r3 = r3 + 0; // 0x8069E4B8
    r5 = r3 + 0xcf; // 0x8069E4BC
    /* lis r4, 0 */ // 0x8069E4C0
    r3 = r29 + 0x44; // 0x8069E4C4
    r4 = r4 + 0; // 0x8069E4C8
    r4 = r4 + 0xe0; // 0x8069E4CC
    FUN_806A0D70(r5, r4, r3, r4, r4); // bl 0x806A0D70
    r0 = *(0x24 + r1); // lwz @ 0x8069E4D4
    r31 = *(0x1c + r1); // lwz @ 0x8069E4D8
    r30 = *(0x18 + r1); // lwz @ 0x8069E4DC
    r29 = *(0x14 + r1); // lwz @ 0x8069E4E0
    return;
}