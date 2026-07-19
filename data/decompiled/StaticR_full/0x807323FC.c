/* Function at 0x807323FC, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807323FC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0xb */ // 0x8073240C
    *(0x18 + r1) = r30; // stw @ 0x80732410
    *(0x14 + r1) = r29; // stw @ 0x80732414
    r29 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x8073241C
    r30 = r4 + 0x2c; // 0x80732420
    r3 = *(0 + r30); // lwz @ 0x80732424
    if (==) goto 0x0x80732480;
    r3 = r3 + 0x74; // 0x80732430
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80732448;
    /* li r3, 0 */ // 0x80732440
    /* b 0x8073244c */ // 0x80732444
    r3 = *(0xc + r3); // lwz @ 0x80732448
    /* li r0, 0 */ // 0x80732450
    if (==) goto 0x0x80732460;
    if (!=) goto 0x0x80732464;
    /* li r0, 1 */ // 0x80732460
    if (==) goto 0x0x80732480;
    r3 = *(0 + r30); // lwz @ 0x8073246C
    r12 = *(0 + r3); // lwz @ 0x80732470
    r12 = *(0x18 + r12); // lwz @ 0x80732474
    /* mtctr r12 */ // 0x80732478
    /* bctrl  */ // 0x8073247C
    r31 = r31 + 1; // 0x80732480
    r30 = r30 + 4; // 0x80732484
    if (<) goto 0x0x80732424;
    r3 = *(0x530 + r29); // lwz @ 0x80732490
}