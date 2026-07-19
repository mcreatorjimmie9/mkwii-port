/* Function at 0x8073AF54, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8073AF54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073AF64
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x8073AF6C
    if (!=) goto 0x0x8073b068;
    /* lis r4, 0 */ // 0x8073AF78
    r4 = *(0 + r4); // lwz @ 0x8073AF7C
    r0 = *(0x10 + r4); // lbz @ 0x8073AF80
    if (!=) goto 0x0x8073b068;
    r0 = *(0x12b + r3); // lbz @ 0x8073AF8C
    if (==) goto 0x0x8073af9c;
    /* b 0x8073b068 */ // 0x8073AF98
    r3 = *(0x118 + r3); // lwz @ 0x8073AF9C
    FUN_8061E63C(); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8073AFA4
    /* lfs f0, 0(r3) */ // 0x8073AFA8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8073AFAC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8073AFB0
    if (!=) goto 0x0x8073b068;
    r3 = *(0x294 + r30); // lwz @ 0x8073AFB8
    if (==) goto 0x0x8073b068;
    r3 = r3 + 0x74; // 0x8073AFC4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073afdc;
    /* li r3, 0 */ // 0x8073AFD4
    /* b 0x8073afe0 */ // 0x8073AFD8
    r3 = *(0xc + r3); // lwz @ 0x8073AFDC
}