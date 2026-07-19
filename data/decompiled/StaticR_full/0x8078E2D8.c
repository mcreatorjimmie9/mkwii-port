/* Function at 0x8078E2D8, size=364 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078E2D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8078E2F0
    r29 = r3;
    r0 = *(0xb1 + r3); // lbz @ 0x8078E2F8
    if (==) goto 0x0x8078e30c;
    /* li r3, 0 */ // 0x8078E304
    /* b 0x8078e42c */ // 0x8078E308
    r3 = r3 + 0x94; // 0x8078E30C
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078e324;
    /* li r31, 0 */ // 0x8078E31C
    /* b 0x8078e428 */ // 0x8078E320
    r3 = *(0x80 + r29); // lwz @ 0x8078E324
    if (!=) goto 0x0x8078e338;
    r31 = r29 + 0x80; // 0x8078E330
    /* b 0x8078e404 */ // 0x8078E334
    if (==) goto 0x0x8078e344;
    r0 = *(0x90 + r3); // lwz @ 0x8078E33C
    /* b 0x8078e348 */ // 0x8078E340
    /* li r0, -1 */ // 0x8078E344
    *(8 + r1) = r0; // stw @ 0x8078E348
    r3 = *(0x84 + r29); // lwz @ 0x8078E34C
    if (!=) goto 0x0x8078e360;
    r31 = r29 + 0x84; // 0x8078E358
    /* b 0x8078e404 */ // 0x8078E35C
    if (==) goto 0x0x8078e36c;
    r0 = *(0x90 + r3); // lwz @ 0x8078E364
    /* b 0x8078e370 */ // 0x8078E368
    /* li r0, -1 */ // 0x8078E36C
    *(0xc + r1) = r0; // stw @ 0x8078E370
    r3 = *(0x88 + r29); // lwz @ 0x8078E374
    if (!=) goto 0x0x8078e388;
    r31 = r29 + 0x88; // 0x8078E380
    /* b 0x8078e404 */ // 0x8078E384
    if (==) goto 0x0x8078e394;
    r0 = *(0x90 + r3); // lwz @ 0x8078E38C
    /* b 0x8078e398 */ // 0x8078E390
    /* li r0, -1 */ // 0x8078E394
    *(0x10 + r1) = r0; // stw @ 0x8078E398
    r3 = *(0x8c + r29); // lwz @ 0x8078E39C
    if (!=) goto 0x0x8078e3b0;
    r31 = r29 + 0x8c; // 0x8078E3A8
    /* b 0x8078e404 */ // 0x8078E3AC
    if (==) goto 0x0x8078e3bc;
    r0 = *(0x90 + r3); // lwz @ 0x8078E3B4
    /* b 0x8078e3c0 */ // 0x8078E3B8
    /* li r0, -1 */ // 0x8078E3BC
    *(0x14 + r1) = r0; // stw @ 0x8078E3C0
    r4 = r30;
    r3 = r29 + 0x94; // 0x8078E3C8
    /* li r6, 4 */ // 0x8078E3D0
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x8078e3e8;
    /* li r31, 0 */ // 0x8078E3E0
    /* b 0x8078e404 */ // 0x8078E3E4
    /* slwi r0, r3, 2 */ // 0x8078E3E8
    r31 = r29 + r0; // 0x8078E3EC
    r3 = *(0x80 + r31); // lwzu @ 0x8078E3F0
    if (==) goto 0x0x8078e404;
    /* li r4, 0 */ // 0x8078E3FC
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x8078e424;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078E418
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8078e428 */ // 0x8078E420
    /* li r31, 0 */ // 0x8078E424
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8078E42C
    r31 = *(0x2c + r1); // lwz @ 0x8078E430
    r30 = *(0x28 + r1); // lwz @ 0x8078E434
    r29 = *(0x24 + r1); // lwz @ 0x8078E438
}